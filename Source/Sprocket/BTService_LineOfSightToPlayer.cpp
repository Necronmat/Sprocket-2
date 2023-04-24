// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_LineOfSightToPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

void UBTService_LineOfSightToPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
	AAIController* aiController = OwnerComp.GetAIOwner();
	APawn* playerShip = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	if (aiController->LineOfSightTo(playerShip)) 
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(GetSelectedBlackboardKey(), true);
	}
	else {
		aiController->ClearFocus(EAIFocusPriority::Gameplay);
		OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
	}
}
