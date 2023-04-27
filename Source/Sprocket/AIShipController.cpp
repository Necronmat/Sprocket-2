// Fill out your copyright notice in the Description page of Project Settings.


#include "AIShipController.h"
#include "BrainComponent.h"
#include "Kismet/GameplayStatics.h"
#include "ShipGun.h"
#include "Mine.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"

void AAIShipController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	if (BT_HostileShipAI) RunBehaviorTree(BT_HostileShipAI);
	PrimaryActorTick.bCanEverTick = true;
	aiShip = Cast<AAiShipPawn>(GetPawn());
	AddRandomGun();
	UGameplayStatics::PlaySoundAtLocation(this, mThrusterLoopSound, aiShip->GetActorLocation(), mSFXVolume);
	playerControllerRef = Cast<ABaseShipController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	mThrusterEffectSystem.Add(UNiagaraFunctionLibrary::SpawnSystemAttached(mThrusterEffect, aiShip->ShipMesh, NAME_None, FVector(-35.0f, -5.0f, 0.0f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true));
	mThrusterEffectSystem.Add(UNiagaraFunctionLibrary::SpawnSystemAttached(mThrusterEffect, aiShip->ShipMesh, NAME_None, FVector(-35.0f, 5.0f, 0.0f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true));

	mThrusterEffectSystem.Add(UNiagaraFunctionLibrary::SpawnSystemAttached(mThrusterEffect, aiShip->ShipMesh, NAME_None, FVector(-20.0f, -20.0f, 0.0f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true));
	mThrusterEffectSystem.Add(UNiagaraFunctionLibrary::SpawnSystemAttached(mThrusterEffect, aiShip->ShipMesh, NAME_None, FVector(-20.0f, -15.0f, 0.0f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true));

	mThrusterEffectSystem.Add(UNiagaraFunctionLibrary::SpawnSystemAttached(mThrusterEffect, aiShip->ShipMesh, NAME_None, FVector(-20.0f, 15.0f, 0.0f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true));
	mThrusterEffectSystem.Add(UNiagaraFunctionLibrary::SpawnSystemAttached(mThrusterEffect, aiShip->ShipMesh, NAME_None, FVector(-20.0f, 20.0f, 0.0f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true));

	for (int i = 0; i < mThrusterEffectSystem.Num(); ++i)
	{
		mThrusterEffectSystem[i]->SetNiagaraVariableVec3(FString("TrailLength"), { 0.0f, 0.0f, 0.0f });
		mThrusterEffectSystem[i]->SetNiagaraVariableLinearColor(FString("TrailColour"), { 0.0f, 0.0f, 0.0f });
	}
}

void AAIShipController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!mShieldCooldown && shields < maxShields)
	{
		shields += 5 * DeltaTime;
	}

	SetVolume();

	for (int i = 0; i < mThrusterEffectSystem.Num(); ++i)
	{
		mThrusterEffectSystem[i]->SetNiagaraVariableVec3(FString("TrailLength"), { (speed / maxSpeed) * -100.0f , 0.0f, 0.0f });
		mThrusterEffectSystem[i]->SetNiagaraVariableLinearColor(FString("TrailColour"), { FMath::Lerp(0.0f, 1.0f, (speed / maxSpeed)), FMath::Lerp(0.0f, 0.0f, (speed / maxSpeed)), FMath::Lerp(1.0f, 0.0f, (speed / maxSpeed)) });
	}

	if(bMoving) UpdateMovement(DeltaTime);
}

float AAIShipController::SetThrusterVolume_Implementation()
{
	return  speed / maxSpeed;
};

float AAIShipController::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	UE_LOG(LogTemp, Warning, TEXT("Damage dealt is %f"), DamageAmount);

	shields -= DamageAmount;
	GetWorld()->GetTimerManager().SetTimer(ShieldCooldownTimer, this, &AAIShipController::ShieldCooldownElapsed, mShieldCooldownDuration, false);
	mShieldCooldown = true;
	int index;
	if (shields <= 0.0f) {
		mHullEffectSystem = UNiagaraFunctionLibrary::SpawnSystemAttached(mHullEffect, aiShip->ShipMesh, NAME_None, FVector(0.0f, 0.0f, 0.0f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true);
		index = FMath::RandRange(0, mHullSound.Num() - 1);
		UGameplayStatics::PlaySoundAtLocation(this, mHullSound[index], aiShip->GetActorLocation(), mSFXVolume);
		float remainingDamage = 0.0 - shields;
		shields = 0.0f;
		hull -= remainingDamage;
		if (hull <= 0.0f) {

			mExplosionEffectSystem = UNiagaraFunctionLibrary::SpawnSystemAttached(mExplosionEffect, aiShip->ShipMesh, NAME_None, FVector(0.0f, 0.0f, 0.0f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true);
			this->BrainComponent->StopLogic("Ship Died");
			speed = 0;
			GetWorld()->GetTimerManager().SetTimer(DeathTimer, this, &AAIShipController::Die, 3.0f, false);
		}
	}
	else
	{
		mShieldEffectSystem = UNiagaraFunctionLibrary::SpawnSystemAttached(mShieldEffect, aiShip->ShipMesh, NAME_None, FVector(0.0f, 0.0f, 0.0f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true);
		index = FMath::RandRange(0, mShieldSound.Num() - 1);
		UGameplayStatics::PlaySoundAtLocation(this, mShieldSound[index], aiShip->GetActorLocation(), mSFXVolume);
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

	float rand = FMath::RandRange(0.001f, 20.0f);
	tempGun->SetGunStats(5000.0f, (1 / rand) * 240.f, rand * 0.1f, rand * 450.0f);

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
		if (aiShip->mGuns[i]->FireGun())
		{
			UGameplayStatics::PlaySoundAtLocation(this, mLaserSound, aiShip->GetActorLocation(), mSFXVolume / aiShip->mGuns.Num());
		}		
	}
}

void AAIShipController::SpawnMine()
{
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = GetInstigator();

	if (aiShip)
	{
		AMine* tempMine = GetWorld()->SpawnActor<AMine>(aiShip->mMine, aiShip->GetActorLocation() + FTransform(aiShip->GetActorRotation()).TransformVector(FVector3d(-100.0f, 0.0f, 0.0f)), aiShip->GetActorRotation(), spawnParams);
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

void AAIShipController::Die()
{
	while (aiShip->mGuns.Num() > 0)
	{
		aiShip->mGuns[0]->Destroy();
		aiShip->mGuns.RemoveAt(0);
	}
	playerControllerRef = Cast<ABaseShipController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	if (playerControllerRef) playerControllerRef->EnemyDefeated();

	this->BrainComponent->StartLogic();
	aiShip->Destroy();
}

const FAIRequestID AAIShipController::GetMoveRequestId()
{
	return moveRequestId;
}
