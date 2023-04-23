// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_ShootingCone.h"
#include "Kismet/GameplayStatics.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

void UBTService_ShootingCone::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	AAIController * aiController = OwnerComp.GetAIOwner();;
	APawn* playerShip = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	FVector facing = aiController->GetPawn()->GetActorForwardVector();
	FVector dir = playerShip->GetActorLocation() - aiController->GetPawn()->GetActorLocation();

	if (facing.Dot(dir) >= 0)
	{
		float a = sqrt((facing.X * facing.X) + (facing.Y * facing.Y) + (facing.Z * facing.Z));
		float b = sqrt((dir.X * dir.X) + (dir.Y * dir.Y) + (dir.Z * dir.Z));

		if (FMath::Acos(facing.Dot(dir) / (a * b)) < 45.0f * (PI / 180.0f))
		{
			OwnerComp.GetBlackboardComponent()->SetValueAsBool(GetSelectedBlackboardKey(), true);
		}
		else
		{
			OwnerComp.GetBlackboardComponent()->ClearValue(GetSelectedBlackboardKey());
		}
	}	
}
