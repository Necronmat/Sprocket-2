// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_FlyToPoint.generated.h"

struct FBTFlyToPointMemory {
	FAIRequestID MoveRequestID;
	FVector PreviousGoalLocation;
	FDelegateHandle BBObserverDelegateHandle;
};

/**
 * 
 */
UCLASS()
class SPROCKET_API UBTTask_FlyToPoint : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
	UBTTask_FlyToPoint(const FObjectInitializer& ObjectInitializer);
	virtual uint16 GetInstanceMemorySize() const override;
	EBlackboardNotificationResult OnBlackboardValueChange(const UBlackboardComponent& Blackboard, FBlackboard::FKey ChangedKeyID);

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere)
		float acceptableRadius;
	UPROPERTY()
		FVector desiredLocation = { 0.0f, 0.0f, 0.0f };
	UPROPERTY()
		FVector prevLocation = desiredLocation;
	UPROPERTY()
	FAIRequestID moveRequestId;

};
