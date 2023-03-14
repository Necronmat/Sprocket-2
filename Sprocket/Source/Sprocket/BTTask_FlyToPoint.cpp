// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FlyToPoint.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "AIShipController.h"

UBTTask_FlyToPoint::UBTTask_FlyToPoint (const FObjectInitializer& ObjectInitializer) {
	BlackboardKey.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(UBTTask_FlyToPoint, BlackboardKey), AActor::StaticClass());
	BlackboardKey.AddVectorFilter(this, GET_MEMBER_NAME_CHECKED(UBTTask_FlyToPoint, BlackboardKey));
}

uint16 UBTTask_FlyToPoint::GetInstanceMemorySize() const
{
	return sizeof(FBTFlyToPointMemory);
}

EBlackboardNotificationResult UBTTask_FlyToPoint::OnBlackboardValueChange(const UBlackboardComponent& Blackboard, FBlackboard::FKey ChangedKeyID)
{
	UBehaviorTreeComponent* BehaviorComp = Cast<UBehaviorTreeComponent>(Blackboard.GetBrainComponent());
	if (BehaviorComp == nullptr)
	{
		return EBlackboardNotificationResult::RemoveObserver;
	}

	AAIShipController* AIController = Cast<AAIShipController>(BehaviorComp->GetAIOwner());
	uint8* NodeMemory = BehaviorComp->GetNodeMemory(this, BehaviorComp->FindInstanceContainingNode(this));
	FBTFlyToPointMemory* MyMemory = CastInstanceNodeMemory<FBTFlyToPointMemory>(NodeMemory);

	const EBTTaskStatus::Type TaskStatus = BehaviorComp->GetTaskStatus(this);
	if (TaskStatus != EBTTaskStatus::Active)
	{
		MyMemory->BBObserverDelegateHandle.Reset(); //-V595

		return EBlackboardNotificationResult::RemoveObserver;
	}

	// this means the move has already started. 
	if (MyMemory != nullptr && BehaviorComp->GetAIOwner() != nullptr)
	{
		bool updateMove = false;
		// check if new goal is almost identical to previous one
		if (BlackboardKey.SelectedKeyType == UBlackboardKeyType_Vector::StaticClass())
		{
			const FVector TargetLocation = Blackboard.GetValue<UBlackboardKeyType_Vector>(BlackboardKey.GetSelectedKeyID());

			updateMove = (FVector::DistSquared(TargetLocation, MyMemory->PreviousGoalLocation) > FMath::Square(acceptableRadius));
		}

		if (updateMove)
		{
			// don't abort move if using AI tasks - it will mess things up
			if (MyMemory->MoveRequestID.IsValid())
			{
				StopWaitingForMessages(*BehaviorComp);
				const FVector TargetLocation = Blackboard.GetValue<UBlackboardKeyType_Vector>(BlackboardKey.GetSelectedKeyID());
				AIController->SetMovementTarget(TargetLocation, acceptableRadius);
				MyMemory->PreviousGoalLocation = TargetLocation;

			}

			const EBTNodeResult::Type NodeResult = ExecuteTask(*BehaviorComp, NodeMemory);
			if (NodeResult != EBTNodeResult::InProgress)
			{
				FinishLatentTask(*BehaviorComp, NodeResult);
			}
		}
	}

	return EBlackboardNotificationResult::ContinueObserving;
}

EBTNodeResult::Type UBTTask_FlyToPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	EBTNodeResult::Type nodeResult = EBTNodeResult::InProgress;

	FBTFlyToPointMemory* myMemory = CastInstanceNodeMemory<FBTFlyToPointMemory>(NodeMemory);
	if (OwnerComp.GetAIOwner() == nullptr) return EBTNodeResult::Failed;
	const UBlackboardComponent* blackboard = OwnerComp.GetBlackboardComponent();
	AAIShipController* AIController = Cast<AAIShipController>(OwnerComp.GetAIOwner());

	if (BlackboardKey.SelectedKeyType == UBlackboardKeyType_Object::StaticClass())
	{
		UObject* KeyValue = blackboard->GetValue<UBlackboardKeyType_Object>(BlackboardKey.GetSelectedKeyID());
		AActor* TargetActor = Cast<AActor>(KeyValue);
		if (TargetActor){
			AIController->SetMovementTarget(TargetActor->GetActorLocation(), acceptableRadius); 
			myMemory->PreviousGoalLocation = TargetActor->GetActorLocation();
		}
	}
	else if (BlackboardKey.SelectedKeyType == UBlackboardKeyType_Vector::StaticClass())
	{
		const FVector TargetLocation = blackboard->GetValue<UBlackboardKeyType_Vector>(BlackboardKey.GetSelectedKeyID());
		AIController->SetMovementTarget(TargetLocation, acceptableRadius);

		myMemory->PreviousGoalLocation = TargetLocation;
	}

	moveRequestId = AIController->GetMoveRequestId();
	myMemory->MoveRequestID = moveRequestId;
    WaitForMessage(OwnerComp, UBrainComponent::AIMessage_MoveFinished, moveRequestId);


	if (nodeResult == EBTNodeResult::InProgress)
	{
		UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
		if (ensure(BlackboardComp))
		{
			if (myMemory->BBObserverDelegateHandle.IsValid())
			{
				BlackboardComp->UnregisterObserver(BlackboardKey.GetSelectedKeyID(), myMemory->BBObserverDelegateHandle);
			}
			myMemory->BBObserverDelegateHandle = BlackboardComp->RegisterObserver(BlackboardKey.GetSelectedKeyID(), this, FOnBlackboardChangeNotification::CreateUObject(this, &UBTTask_FlyToPoint::OnBlackboardValueChange));
		}
	}
    return nodeResult;
}