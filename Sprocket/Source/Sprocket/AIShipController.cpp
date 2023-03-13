// Fill out your copyright notice in the Description page of Project Settings.


#include "AIShipController.h"

void AAIShipController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (BT_HostileShipAI) RunBehaviorTree(BT_HostileShipAI);
}

void AAIShipController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
