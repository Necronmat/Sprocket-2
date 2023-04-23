// Fill out your copyright notice in the Description page of Project Settings.


#include "AIShipController.h"
#include "BrainComponent.h"
#include "ShipGun.h"

void AAIShipController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (BT_HostileShipAI) RunBehaviorTree(BT_HostileShipAI);
	PrimaryActorTick.bCanEverTick = true;
	aiShip = Cast<AAiShipPawn>(GetPawn());
	AddRandomGun();
}

void AAIShipController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!mShieldCooldown && shields < maxShields)
	{
		shields += 5 * DeltaTime;
	}

	if(bMoving) UpdateMovement(DeltaTime);
}

float AAIShipController::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	UE_LOG(LogTemp, Warning, TEXT("Damage dealt is %f"), DamageAmount);

	shields -= DamageAmount;
	GetWorld()->GetTimerManager().SetTimer(ShieldCooldownTimer, this, &AAIShipController::ShieldCooldownElapsed, mShieldCooldownDuration, false);
	mShieldCooldown = true;
	if (shields <= 0.0f) {
		float remainingDamage = 0.0 - shields;
		shields = 0.0f;
		hull -= remainingDamage;
		if (hull < 0.0f) {

			while (aiShip->mGuns.Num() > 0)
			{
				aiShip->mGuns[0]->Destroy();
				aiShip->mGuns.RemoveAt(0);
			}

			aiShip->Destroy();

		}
	}
	return DamageAmount;
}

void AAIShipController::UpdateMovement(float DeltaTime)
{
	float distRemaining = FVector::Dist(aiShip->GetActorLocation(), targetPoint);
	if (distRemaining <= distanceAllowance) {
		bMoving = false;
		FAIMessage msg(UBrainComponent::AIMessage_MoveFinished, this, moveRequestId, FAIMessage::Success);
		FAIMessage::Send(this, msg);
		moveRequestId = FAIRequestID::InvalidRequest;
	}
	
	FVector dir = targetPoint - aiShip->GetActorLocation();
	dir.Normalize();

	FRotator facingRotator = dir.Rotation();

	//Ai turning
	FVector x = aiShip->GetActorRightVector();
	x.Normalize();
	FVector y = aiShip->GetActorUpVector();
	y.Normalize();
	FVector z = aiShip->GetActorForwardVector();
	z.Normalize();

	if (dir.Dot(x) >= 0)
	{		
		aiShip->AddActorLocalRotation(FRotator(0, turningRadius, 0) * DeltaTime);		
	}
	else
	{
		aiShip->AddActorLocalRotation(FRotator(0, -turningRadius, 0) * DeltaTime);
	}

	if (dir.Dot(y) >= 0)
	{
		aiShip->AddActorLocalRotation(FRotator(turningRadius, 0, 0) * DeltaTime);
	}
	else
	{
		aiShip->AddActorLocalRotation(FRotator(-turningRadius, 0, 0) * DeltaTime);
	}

	if (FVector(0,1,0).Dot(y) >= 0)
	{
		aiShip->AddActorLocalRotation(FRotator(0, 0, turningRadius) * DeltaTime);
	}
	else
	{
		aiShip->AddActorLocalRotation(FRotator(0, 0, -turningRadius) * DeltaTime);
	}


	//Alter Speed
	if (distRemaining < 200)
	{
		speed -= acceleration;
	}
	else if (speed < maxSpeed)
	{
		speed += acceleration;
	}

	if (speed > maxSpeed)
	{
		speed = maxSpeed;
	}
	else if(speed < 0)
	{
		speed = 0;
	}

	aiShip->ShipMesh->AddImpulse(aiShip->GetActorForwardVector() * speed * DeltaTime);
	
}

float AAIShipController::GetCurrentHull()
{
	return hull;
}

float AAIShipController::GetMaxHull()
{
	return maxHull;
}

float AAIShipController::GetCurrentShield()
{
	return shields;
}

float AAIShipController::GetMaxShield()
{
	return maxShields;
}

void AAIShipController::SetMovementTarget(FVector point, float range)
{
	if (bMoving) {
		FAIMessage msg(UBrainComponent::AIMessage_MoveFinished, this, moveRequestId, FAIMessage::Failure);
		FAIMessage::Send(this, msg);
	}

	targetPoint = point;
	distanceAllowance = range;
	bMoving = true;


	StoreMoveRequestId();
}

bool AAIShipController::GetMoving()
{
	return bMoving;
}

void AAIShipController::AddRandomGun()
{
		FActorSpawnParameters spawnParams;
		spawnParams.Owner = this;
		spawnParams.Instigator = GetInstigator();

		AShipGun* tempGun = GetWorld()->SpawnActor<AShipGun>(aiShip->mBaseGun, aiShip->GetActorLocation() + FTransform(aiShip->GetActorRotation()).TransformVector(FVector3d(0.0f, 0.0f, 0.0f)), aiShip->GetActorRotation(), spawnParams);
		tempGun->AttachToShip(aiShip->ShipMesh, FVector(FMath::RandRange(-30.0f, 30.0f), FMath::RandRange(-30.0f, 30.0f), FMath::RandRange(-30.0f, 30.0f)), aiShip->GetActorRotation().Quaternion(), FVector(0.03f, 0.03f, 0.03f));
		tempGun->SetGunStats(FMath::RandRange(0.0f, 3.0f), 100.f, FMath::RandRange(0.0f, 100.0f), FMath::RandRange(100.0f, 6000.0f));
		aiShip->mGuns.Add(tempGun);
}

void AAIShipController::RemoveRandomGun()
{
		if (aiShip->mGuns.Num() > 0)
		{
			int index = FMath::RandRange(0, aiShip->mGuns.Num() - 1);
			aiShip->mGuns[index]->Destroy();
			aiShip->mGuns.RemoveAt(index);
		}
}

void AAIShipController::ShootGuns()
{
	for (int i = 0; i < aiShip->mGuns.Num(); ++i)
	{
		aiShip->mGuns[i]->FireGun();
	}
}

void AAIShipController::StoreMoveRequestId()
{
	moveRequestId = nextRequestId++;
}

void AAIShipController::ShieldCooldownElapsed()
{
	mShieldCooldown = false;
}

const FAIRequestID AAIShipController::GetMoveRequestId()
{
	return moveRequestId;
}
