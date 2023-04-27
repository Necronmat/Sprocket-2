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
	//--------------------------------------------------
	// Initial Config and Referance grabbing
	//--------------------------------------------------

	Super::OnPossess(InPawn);

	if (BT_HostileShipAI) RunBehaviorTree(BT_HostileShipAI);
	PrimaryActorTick.bCanEverTick = true;
	aiShip = Cast<AAiShipPawn>(GetPawn());
	playerControllerRef = Cast<ABaseShipController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	mGameInstancedRef = Cast<USprocketGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	
	AddRandomGun();	
	
	UGameplayStatics::PlaySoundAtLocation(this, mThrusterLoopSound, aiShip->GetActorLocation(), mGameInstancedRef->GetSoundVolume());
	
	//--------------------------------------------------
	// VFX Setup
	//--------------------------------------------------

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
	
	//Shield Recharge check and logic
	if (!mShieldCooldown && shields < maxShields)
	{
		shields += 5 * DeltaTime;
	}

	SetVolume();
	
	//VFX logic
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

	//Shield damage and recharge logic
	shields -= DamageAmount;
	GetWorld()->GetTimerManager().SetTimer(ShieldCooldownTimer, this, &AAIShipController::ShieldCooldownElapsed, mShieldCooldownDuration, false);
	mShieldCooldown = true;
	
	int index;
	if (shields <= 0.0f) {
		//SFX & VFX logic
		mHullEffectSystem = UNiagaraFunctionLibrary::SpawnSystemAttached(mHullEffect, aiShip->ShipMesh, NAME_None, FVector(0.0f, 0.0f, 0.0f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true);
		index = FMath::RandRange(0, mHullSound.Num() - 1);
		UGameplayStatics::PlaySoundAtLocation(this, mHullSound[index], aiShip->GetActorLocation(), mGameInstancedRef->GetSoundVolume());
		
		//Finds out hull damage by calculating overdamage to shields
		float remainingDamage = 0.0 - shields;
		shields = 0.0f;
		hull -= remainingDamage;
		
		if (hull <= 0.0f) {

			//Death vfx
			mExplosionEffectSystem = UNiagaraFunctionLibrary::SpawnSystemAttached(mExplosionEffect, aiShip->ShipMesh, NAME_None, FVector(0.0f, 0.0f, 0.0f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true);
			
			//Cues ship removal after short time
			this->BrainComponent->StopLogic("Ship Died");
			speed = 0;
			GetWorld()->GetTimerManager().SetTimer(DeathTimer, this, &AAIShipController::Die, 3.0f, false);
		}
	}
	else
	{
		//Plays relevant vfx and sfx
		mShieldEffectSystem = UNiagaraFunctionLibrary::SpawnSystemAttached(mShieldEffect, aiShip->ShipMesh, NAME_None, FVector(0.0f, 0.0f, 0.0f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true);
		index = FMath::RandRange(0, mShieldSound.Num() - 1);
		UGameplayStatics::PlaySoundAtLocation(this, mShieldSound[index], aiShip->GetActorLocation(), mGameInstancedRef->GetSoundVolume());
	}

	return DamageAmount;
}

void AAIShipController::UpdateMovement(float DeltaTime)
{
	//--------------------------------------------------
	// Fly To Point Completion Check
	//--------------------------------------------------

	float distRemaining = FVector::Dist(aiShip->GetActorLocation(), targetPoint);
	if (distRemaining <= distanceAllowance) {
		bMoving = false;
		FAIMessage msg(UBrainComponent::AIMessage_MoveFinished, this, moveRequestId, FAIMessage::Success);
		FAIMessage::Send(this, msg);
		moveRequestId = FAIRequestID::InvalidRequest;
	}

	//--------------------------------------------------
	// AI Turning
	//--------------------------------------------------

	//Gather relevant information
	
	FVector dir = targetPoint - aiShip->GetActorLocation();
	dir.Normalize();

	FRotator facingRotator = dir.Rotation();
	FVector x = aiShip->GetActorRightVector();
	x.Normalize();
	FVector y = aiShip->GetActorUpVector();
	y.Normalize();
	FVector z = aiShip->GetActorForwardVector();
	z.Normalize();

	//Calculate rotation amounts and turn
	if (dir.Dot(x) >= 0){		
		aiShip->AddActorLocalRotation(FRotator(0, turningRadius, 0) * DeltaTime);		
	}
	else{
		aiShip->AddActorLocalRotation(FRotator(0, -turningRadius, 0) * DeltaTime);
	}


	if (dir.Dot(y) >= 0){
		aiShip->AddActorLocalRotation(FRotator(turningRadius, 0, 0) * DeltaTime);
	}
	else{
		aiShip->AddActorLocalRotation(FRotator(-turningRadius, 0, 0) * DeltaTime);
	}


	if (FVector(0,1,0).Dot(y) >= 0){
		aiShip->AddActorLocalRotation(FRotator(0, 0, turningRadius) * DeltaTime);
	}
	else{
		aiShip->AddActorLocalRotation(FRotator(0, 0, -turningRadius) * DeltaTime);
	}


	//Alter Speed to allow for finer turns
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

	//--------------------------------------------------
	// AI Moving
	//--------------------------------------------------

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
	//Tells Behaviour tree that the previous move to task was incomplete and therefore has failed.
	if (bMoving) {
		FAIMessage msg(UBrainComponent::AIMessage_MoveFinished, this, moveRequestId, FAIMessage::Failure);
		FAIMessage::Send(this, msg);
	}

	//Stores new fly to point relevant data and starts the tick function movement
	targetPoint = point;
	distanceAllowance = range;
	bMoving = true;

	//Iterates message id
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

	//Attaches weapon in random position around ship
	AShipGun* tempGun = GetWorld()->SpawnActor<AShipGun>(aiShip->mBaseGun, aiShip->GetActorLocation() + FTransform(aiShip->GetActorRotation()).TransformVector(FVector3d(0.0f, 0.0f, 0.0f)), aiShip->GetActorRotation(), spawnParams);
	tempGun->AttachToShip(aiShip->ShipMesh, FVector(FMath::RandRange(-30.0f, 30.0f), FMath::RandRange(-30.0f, 30.0f), FMath::RandRange(-30.0f, 30.0f)), aiShip->GetActorRotation().Quaternion(), FVector(0.03f, 0.03f, 0.03f));

	//Makes weapon stats relevant to projectile size
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
			UGameplayStatics::PlaySoundAtLocation(this, mLaserSound, aiShip->GetActorLocation(), mGameInstancedRef->GetSoundVolume() / aiShip->mGuns.Num());
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
	//Removes weapons to avoid glitched remains
	while (aiShip->mGuns.Num() > 0)
	{
		aiShip->mGuns[0]->Destroy();
		aiShip->mGuns.RemoveAt(0);
	}

	//Informs player of ship death to allow reward
	playerControllerRef = Cast<ABaseShipController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	if (playerControllerRef) playerControllerRef->EnemyDefeated();

	//Removes ship from existence
	this->BrainComponent->StartLogic();
	aiShip->Destroy();
}

const FAIRequestID AAIShipController::GetMoveRequestId()
{
	return moveRequestId;
}
