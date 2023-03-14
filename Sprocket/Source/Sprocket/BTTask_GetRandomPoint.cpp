// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_GetRandomPoint.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTTask_GetRandomPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (OwnerComp.GetAIOwner() == nullptr) return EBTNodeResult::Failed;

	AActor* AIActor = OwnerComp.GetAIOwner()->GetPawn();

	FVector2D randResult = FMath::RandPointInCircle(randomRadius);
	FVector Location = FVector(randResult, FMath::RandRange(-200.0f, 200.0f));

	OwnerComp.GetBlackboardComponent()->SetValueAsVector(TEXT("RandPosition"), Location);

	return EBTNodeResult::Succeeded;
}
