// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseShipController.h"
<<<<<<< Updated upstream
=======
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "CableComponent.h"
#include "ShipGun.h"
#include "CrewComponent.h"


void ABaseShipController::BeginPlay()
{
	Super::BeginPlay();
	PrimaryActorTick.bCanEverTick = true;
	playerBaseShip = Cast<ABaseShip>(GetPawn());
}


void ABaseShipController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (playerBaseShip) {
		playerBaseShip->mShipMesh->AddImpulse(playerBaseShip->GetActorForwardVector() * mThrusterSpeed * DeltaTime);
		//UE_LOG(LogTemp, Warning, TEXT("Speed is %f"), mThrusterSpeed);

		if (mGrappling)
		{
			playerBaseShip->mCable->EndLocation = mGrapplePoint->GetActorLocation();
			playerBaseShip->mCable->CableLength = FVector3d::Dist(playerBaseShip->GetActorLocation(), mGrapplePoint->GetActorLocation());
			playerBaseShip->mHook->SetWorldLocation(mGrapplePoint->GetActorLocation());

			playerBaseShip->mShipMesh->AddForce(((mGrapplePoint->GetActorLocation() - playerBaseShip->GetActorLocation()) * mGrappleForce / mShipWeight) * DeltaTime);
		}
	}
}

void ABaseShipController::SetupInputComponent()
{
	Super::SetupInputComponent();
	check(InputComponent);
	InputComponent->BindAxis(TEXT("Throttle"), this, &ABaseShipController::Throttle);
	InputComponent->BindAxis(TEXT("Pitch"), this, &ABaseShipController::Pitch);
	InputComponent->BindAxis(TEXT("Yaw"), this, &ABaseShipController::Yaw);
	InputComponent->BindAxis(TEXT("Roll"), this, &ABaseShipController::Roll);
	InputComponent->BindAxis(TEXT("StrafeHorizontal"), this, &ABaseShipController::StrafeHorizontal);
	InputComponent->BindAxis(TEXT("StrafeVertical"), this, &ABaseShipController::StrafeVertical);
	
	InputComponent->BindAction(TEXT("RandomGun"), IE_Pressed, this, &ABaseShipController::AddRandomGun);
	InputComponent->BindAction(TEXT("DeleteGun"), IE_Pressed, this, &ABaseShipController::RemoveRandomGun);
	
	InputComponent->BindAction(TEXT("PrimaryFire"), IE_Pressed, this, &ABaseShipController::Fire);
	InputComponent->BindAction(TEXT("Grapple"), IE_Pressed, this, &ABaseShipController::Grapple);
	InputComponent->BindAction(TEXT("Grapple"), IE_Released, this, &ABaseShipController::ReleaseGrapple);
	InputComponent->BindAction(TEXT("Pause"), IE_Pressed, this, &ABaseShipController::PauseGame);
	GameModeRef = Cast<AScenario1GameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
}

void ABaseShipController::Throttle(float AxisAmount)
{
	if (playerBaseShip) {
		if (mThrusterSpeed <= 0 && AxisAmount > 0) {
			playerBaseShip->mShipMesh->AddImpulse(playerBaseShip->GetActorForwardVector() * mMaxSpeed);
			mThrusterSpeed = mMaxSpeed / 3;
		}

		mThrusterSpeed += AxisAmount * mAcceleration;

		if (mThrusterSpeed > mMaxSpeed) {
			mThrusterSpeed = mMaxSpeed;
		}
		else if (mThrusterSpeed < 0) {
			mThrusterSpeed = 0.0f;
		}
	}
}
>>>>>>> Stashed changes

void ABaseShipController::Pitch(float AxisAmount)
{
	//AddControllerPitchInput(AxisAmount);
}

void ABaseShipController::Yaw(float AxisAmount)
{
	//GetActor()->AddControllerYawInput(AxisAmount);
}

void ABaseShipController::Roll(float AxisAmount)
{
<<<<<<< Updated upstream
	//AddControllerRollInput(AxisAmount);
=======
	if (playerBaseShip) playerBaseShip->AddActorLocalRotation(FRotator(0, 0, AxisAmount));
}

void ABaseShipController::StrafeHorizontal(float AxisAmount)
{
	if (playerBaseShip) {
		if (!mCooldown && abs(AxisAmount) > 0) {
			playerBaseShip->mShipMesh->AddImpulse(playerBaseShip->GetActorRightVector() * AxisAmount * mStrafeSpeed);
			mCooldown = true;
			GetWorld()->GetTimerManager().SetTimer(StrafeCooldownTimer, this, &ABaseShipController::StrafeCooldownElapsed, mStrafeCooldownDuration, false);
		}
	}
}

void ABaseShipController::StrafeVertical(float AxisAmount)
{
	if (playerBaseShip) {
		if (!mCooldown && abs(AxisAmount) > 0)
		{
			playerBaseShip->mShipMesh->AddImpulse(playerBaseShip->GetActorUpVector() * AxisAmount * mStrafeSpeed);
			mCooldown = true;
			GetWorld()->GetTimerManager().SetTimer(StrafeCooldownTimer, this, &ABaseShipController::StrafeCooldownElapsed, mStrafeCooldownDuration, false);
		}
	}
}

void ABaseShipController::AddRandomGun()
{
	if (playerBaseShip) {
		FActorSpawnParameters spawnParams;
		spawnParams.Owner = this;
		spawnParams.Instigator = GetInstigator();

		AShipGun* tempGun = GetWorld()->SpawnActor<AShipGun>(playerBaseShip->mBaseGun, playerBaseShip->GetActorLocation() + FTransform(playerBaseShip->GetActorRotation()).TransformVector(FVector3d(0.0f, 0.0f, 0.0f)), playerBaseShip->GetActorRotation(), spawnParams);
		tempGun->AttachToShip(playerBaseShip->mShipMesh, FVector(FMath::RandRange(-30.0f, 30.0f), FMath::RandRange(-30.0f, 30.0f), FMath::RandRange(-30.0f, 30.0f)), playerBaseShip->GetActorRotation().Quaternion(), FVector(0.03f, 0.03f, 0.03f));
		tempGun->SetGunStats(FMath::RandRange(0.0f, 100.0f), 1.f, FMath::RandRange(0.0f, 100.0f), FMath::RandRange(0.0f, 6000.0f));
		playerBaseShip->mGuns.Add(tempGun);
	}
}

void ABaseShipController::RemoveRandomGun()
{
	if (playerBaseShip) {
		if (playerBaseShip->mGuns.Num() > 0)
		{
			int index = FMath::RandRange(0, playerBaseShip->mGuns.Num() - 1);
			playerBaseShip->mGuns[index]->Destroy();
			playerBaseShip->mGuns.RemoveAt(index);
		}
	}
}

void ABaseShipController::AddRandomCrew()
{
	if (playerBaseShip) 
	{
		UCrewComponent* temp = CreateDefaultSubobject<UCrewComponent>(TEXT("Crew Comp"));
		AActor::AddComponentByClass(playerBaseShip->mBaseCrew, false, playerBaseShip->GetTransform(), false);
		AActor::FinishAddComponent(temp, false, playerBaseShip->GetTransform());
		
		//Do nothing if the crew made is too expensive to add
		if (temp->GetCost() + mPowerUsage > mMaxPower)
		{
			return;
		}

		if (temp->GetCrew() == WeaponsSpecialist)
		{
			if (temp->GetCost() + (temp->GetCost() * temp->GetNegative()) + mPowerUsage > mMaxPower)
			{
				return;
			}

			int num = std::round(temp->GetPositive());

			for (int i = 0; i < num; ++i)
			{
				AddRandomGun();
			}

			mPowerUsage += temp->GetCost() * temp->GetNegative();

			//Decrease shields
		}
		else if (temp->GetCrew() == Fisherman)
		{
			//Check if a fisherman is already on board
			for (int i = 0; i < mCrew.Num(); ++i)
			{
				if (mCrew[i]->GetCrew() == Fisherman)
				{
					return;
				}
			}

			mGrapplingEnabled = true;

			//Negative is increased event chance
		}
		else if (temp->GetCrew() == RocketEngineer)
		{
			mMaxSpeed *= temp->GetPositive();
			mMaxHull /= temp->GetNegative();

			//Decrease gun damage
		}
		else if (temp->GetCrew() == Mechanic)
		{
			mMaxHull *= temp->GetPositive();
			mMaxSpeed /= temp->GetNegative();
		}
		else if (temp->GetCrew() == Electrician)
		{
			if (temp->GetCost() + (temp->GetCost() * temp->GetNegative()) + mPowerUsage > mMaxPower)
			{
				return;
			}

			mMaxShields *= temp->GetPositive();
			mPowerUsage += temp->GetCost() * temp->GetNegative();

			//Decrease speed
		}
		else if (temp->GetCrew() == FirstMate)
		{
			//Decrease power
			//Comments about their luxurius life
		}

		mPowerUsage += temp->GetCost();

		mCrew.Add(temp);
		playerBaseShip->AddInstanceComponent(temp);
	}
}

void ABaseShipController::RemoveRandomCrew()
{
	int num = FMath::FRandRange(0, mCrew.Num() - 1);

	if (mCrew[num]->GetCrew() == WeaponsSpecialist)
	{
		int gunNum = std::round(mCrew[num]->GetPositive());

		for (int i = 0; i < num; ++i)
		{
			RemoveRandomGun();
		}

		mPowerUsage -= mCrew[num]->GetCost() * mCrew[num]->GetNegative();
	}
	else if (mCrew[num]->GetCrew() == Fisherman)
	{
		mGrapplingEnabled = false;
	}
	else if (mCrew[num]->GetCrew() == RocketEngineer)
	{
		mMaxSpeed /= mCrew[num]->GetPositive();
		mMaxHull *= mCrew[num]->GetNegative();

		if (mThrusterSpeed > mMaxSpeed)
		{
			mThrusterSpeed = mMaxSpeed;
		}
	}
	else if (mCrew[num]->GetCrew() == Mechanic)
	{
		mMaxHull /= mCrew[num]->GetPositive();
		mMaxSpeed *= mCrew[num]->GetNegative();

		if (mHull > mMaxHull)
		{
			mHull = mMaxHull;
		}
	}
	else if (mCrew[num]->GetCrew() == Electrician)
	{
		mMaxShields /= mCrew[num]->GetPositive();
		mPowerUsage -= mCrew[num]->GetCost() * mCrew[num]->GetNegative();

		if (mShields > mMaxShields)
		{
			mShields = mMaxShields;
		}
	}
	else if (mCrew[num]->GetCrew() == FirstMate)
	{

	}

	mPowerUsage -= mCrew[num]->GetCost();

	playerBaseShip->RemoveInstanceComponent(mCrew[num]);
	mCrew.RemoveAt(num);
}

void ABaseShipController::Fire()
{
	if (playerBaseShip) {
		for (AShipGun* gun : playerBaseShip->mGuns)
		{
			gun->FireGun();
		}
	}
}

void ABaseShipController::Grapple()
{
	if (playerBaseShip) {
		if (mGrapplingEnabled)
		{
			//AController* ControllerRef = GetController();
			FVector CameraLocation;
			FRotator CameraRotation;

			GetPlayerViewPoint(CameraLocation, CameraRotation);

			//Gets the end of the raycast
			FVector End = CameraLocation + CameraRotation.Vector() * mGrappleLength;

			/*FVector ShipLocation = GetActorLocation();
			FRotator ShipRotation = GetActorRotation();

			FVector End = ShipLocation + ShipRotation.Vector() * mGrappleLength;*/

			FCollisionQueryParams CollisionParams;
			CollisionParams.AddIgnoredActor(this);
			CollisionParams.AddIgnoredComponent(playerBaseShip->mCable);

			//The hit result of the raycast, uses the custom enemy channel
			FHitResult Hit;
			bool bDidHit = GetWorld()->LineTraceSingleByChannel(Hit, CameraLocation, End, ECC_Visibility, CollisionParams);
			DrawDebugLine(GetWorld(), CameraLocation, End, FColor::Red, false, 1, 0, 5);

			if (Cast<AActor>(Hit.GetActor()))
			{
				mGrappling = true;
				mGrapplePoint = Hit.GetActor();
				playerBaseShip->mCable->SetVisibility(true);
				playerBaseShip->mCable->EndLocation = mGrapplePoint->GetActorLocation();
				playerBaseShip->mHook->SetWorldLocation(mGrapplePoint->GetActorLocation());
			}

			if (Cast<ABaseShip>(Hit.GetActor()))
			{
				UE_LOG(LogTemp, Warning, TEXT("Hit ship"), mThrusterSpeed);
			}
		}		
	}
}

void ABaseShipController::ReleaseGrapple()
{
	if (playerBaseShip) {
		mGrappling = false;
		playerBaseShip->mCable->SetVisibility(false);
	}
}

void ABaseShipController::PauseGame()
{
	if(GameModeRef) GameModeRef->TogglePaused();
}

float ABaseShipController::GetCurrentSpeed()
{
	return mThrusterSpeed;
}

float ABaseShipController::GetMaxSpeed()
{
	return mMaxShields;
}

float ABaseShipController::GetCurrentHull()
{
	return mHull;
}

float ABaseShipController::GetMaxHull()
{
	return mMaxHull;
}

float ABaseShipController::GetCurrentShield()
{
	return mShields;
}

float ABaseShipController::GetMaxShield()
{
	return mMaxShields;
}

void ABaseShipController::StrafeCooldownElapsed()
{
	mCooldown = false;
>>>>>>> Stashed changes
}
