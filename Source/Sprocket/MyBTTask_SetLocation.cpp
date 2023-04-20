// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBTTask_SetLocation.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UMyBTTask_SetLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (OwnerComp.GetAIOwner() == nullptr) return EBTNodeResult::Failed;

	AActor* AIActor = OwnerComp.GetAIOwner()->GetPawn();

	FVector Location = FVector(0, 0, 0);

	OwnerComp.GetBlackboardComponent()->SetValueAsVector(TEXT("TestLocation"), Location);

	return EBTNodeResult::Succeeded;
}

