// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_LowShields.h"
#include "Kismet/GameplayStatics.h"
#include "AIShipController.h"
#include "BehaviorTree/BlackboardComponent.h"

void UBTService_LowShields::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
	AAIShipController* ai = Cast<AAIShipController>(OwnerComp.GetAIOwner());

	if (ai->GetCurrentShield() <= 0)
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(GetSelectedBlackboardKey(), true);
	}
	else
	{
		OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
	}
}