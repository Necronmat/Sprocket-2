// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_ShootShip.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIShipController.h"

void UBTService_ShootShip::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
	AAIShipController* ai = Cast<AAIShipController>(OwnerComp.GetAIOwner());
	if (ai)
	{
		ai->ShootGuns();
	}
}
