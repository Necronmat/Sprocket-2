// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_UpdatePlayerPosition.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"

void UBTService_UpdatePlayerPosition::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	APawn* playerShip = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (playerShip) {
		OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), playerShip->GetActorLocation());
	}
	else {
		OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
	}
}
