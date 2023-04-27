// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseShipController.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"
#include "CableComponent.h"
#include "ShipGun.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"

void ABaseShipController::BeginPlay()
{
	Super::BeginPlay();
	PrimaryActorTick.bCanEverTick = true;
	playerBaseShip = Cast<ABaseShip>(GetPawn());
	mHull = mMaxHull;
	mShields = mMaxShields;
	MechanicCount = 0;
	WeaponsSpecialistCount = 0;
	FishermanCount = 0;
	RocketEngineerCount = 0;
	ElectricianCount = 0;
	FirstMateCount = 0;
	TotalCrewMatesCount = 0;
	mMoney = mMoneyStartingAmount;
	mGameInstancedRef = Cast<USprocketGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

	UGameplayStatics::PlaySound2D(this, mThrusterLoopSound, mGameInstancedRef->GetSoundVolume());
	GetWorld()->GetTimerManager().SetTimer(mMoneyTimer, this, &ABaseShipController::mMoneyTimerElapsed, mMoneyBaseDrainDelay, false);

	mThrusterEffectSystem.Add(UNiagaraFunctionLibrary::SpawnSystemAttached(mThrusterEffect, playerBaseShip->mShipMesh, NAME_None, FVector(-25.0f, 0.0f, 0.0f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true));
	mThrusterEffectSystem.Add(UNiagaraFunctionLibrary::SpawnSystemAttached(mThrusterEffect, playerBaseShip->mShipMesh, NAME_None, FVector(-10.0f, 25.0f, 0.0f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true));
	mThrusterEffectSystem.Add(UNiagaraFunctionLibrary::SpawnSystemAttached(mThrusterEffect, playerBaseShip->mShipMesh, NAME_None, FVector(-10.0f, -25.0f, 0.0f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true));

	for (int i = 0; i < mThrusterEffectSystem.Num(); ++i)
	{
		mThrusterEffectSystem[i]->SetNiagaraVariableVec3(FString("TrailLength"), {0.0f, 0.0f, 0.0f});
		mThrusterEffectSystem[i]->SetNiagaraVariableLinearColor(FString("TrailColour"), {0.0f, 0.0f, 0.0f});
	}
}


void ABaseShipController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (mThrusterSpeed > mMaxSpeed)
	{
		mThrusterSpeed -= mBoostDeselerationScale * mAcceleration * DeltaTime;
	}

	if (playerBaseShip && !menuDisplayed) {
		playerBaseShip->mShipMesh->AddImpulse(playerBaseShip->GetActorForwardVector() * mThrusterSpeed * DeltaTime);
		//UE_LOG(LogTemp, Warning, TEXT("Volume is %f"), mThrusterSpeed / mMaxSpeed);
		if (bShieldRecharging) {
			mShields += mShieldRechargeRate * DeltaTime;
			if (mShields >= mMaxShields) {
				mShields = mMaxShields;
				bShieldRecharging = false;
			}
		}

		if (mMoney < 0.0f && GameModeRef) {
			GameModeRef->GameOver(false);
			menuDisplayed = true;
			bShowMouseCursor = true;
			bEnableClickEvents = true;
			bEnableMouseOverEvents = true;
			bCinematicMode = true;
		}

		SetVolume();
		for (int i = 0; i < mThrusterEffectSystem.Num(); ++i)
		{
			mThrusterEffectSystem[i]->SetNiagaraVariableVec3(FString("TrailLength"), { (mThrusterSpeed / mMaxSpeed) * -100.0f , 0.0f, 0.0f });
			mThrusterEffectSystem[i]->SetNiagaraVariableLinearColor(FString("TrailColour"), { FMath::Lerp(0.3f, 0.0f, (mThrusterSpeed / mMaxSpeed)), FMath::Lerp(0.1f, 0.2f, (mThrusterSpeed / mMaxSpeed)), FMath::Lerp(0.0f, 0.3f, (mThrusterSpeed / mMaxSpeed))});
		}

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
	
	InputComponent->BindAction(TEXT("Nitro"), IE_DoubleClick, this, &ABaseShipController::Nitro);
	InputComponent->BindAction(TEXT("RandomGun"), IE_Pressed, this, &ABaseShipController::AddRandomGun);
	InputComponent->BindAction(TEXT("DeleteGun"), IE_Pressed, this, &ABaseShipController::RemoveRandomGun);

	InputComponent->BindAction(TEXT("RandomCrew"), IE_Pressed, this, &ABaseShipController::AddRandomCrew);
	InputComponent->BindAction(TEXT("DeleteCrew"), IE_Pressed, this, &ABaseShipController::RemoveRandomCrew);
	
	InputComponent->BindAction(TEXT("PrimaryFire"), IE_Pressed, this, &ABaseShipController::Fire);
	InputComponent->BindAction(TEXT("Grapple"), IE_Pressed, this, &ABaseShipController::Grapple);
	InputComponent->BindAction(TEXT("Grapple"), IE_Released, this, &ABaseShipController::ReleaseGrapple);
	InputComponent->BindAction(TEXT("Pause"), IE_Pressed, this, &ABaseShipController::PauseGame).bExecuteWhenPaused = true;
	InputComponent->BindAction(TEXT("ToggleCrewMenu"), IE_Pressed, this, &ABaseShipController::ToggleCrewMenu).bExecuteWhenPaused = true;
	GameModeRef = Cast<AScenario1GameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
}

float ABaseShipController::SetThrusterVolume_Implementation()
{
	if (mThrusterSpeed > mMaxSpeed)
	{
		return mThrusterSpeed / (mThrusterSpeed - mMaxSpeed);
	}
	else
	{
		return mThrusterSpeed / mMaxSpeed;
	}
	
};

void ABaseShipController::SetNotificationInfo(ENotificationInfoCatagory value)
{
	NotificationInfo = value;
	GetWorld()->GetTimerManager().SetTimer(NotificationTimer, this, &ABaseShipController::NotificationElapsed, NotificationDuration, false);
}

void ABaseShipController::SetMissionInfo(EMissionInfoCatagory value)
{
	MissionInfo = value;
}

void ABaseShipController::EnemyDefeated()
{
	IncreaseMoneyAmount(mMoneyEnemyDefeated);
	SetNotificationInfo(ENotificationInfoCatagory::ShipDefeated);
	if (GameModeRef) GameModeRef->EnemyDefeated();
}

void ABaseShipController::MissionComplete()
{
	IncreaseMoneyAmount(mMoneyJobComplete);
	SetNotificationInfo(ENotificationInfoCatagory::MissionCompleted);
}

void ABaseShipController::Throttle(float AxisAmount)
{
	if (playerBaseShip && !menuDisplayed) {
		//if (mThrusterSpeed <= 0 && AxisAmount > 0) {
		//	playerBaseShip->mShipMesh->AddImpulse(playerBaseShip->GetActorForwardVector() * mMaxSpeed);
		//	mThrusterSpeed = mMaxSpeed / 3;
		//}

		mThrusterSpeed += AxisAmount * mAcceleration;

		if (mThrusterSpeed < 0) {
			mThrusterSpeed = 0.0f;
		}
	}
}

void ABaseShipController::Pitch(float AxisAmount)
{
	if (playerBaseShip && !menuDisplayed) playerBaseShip->AddActorLocalRotation(FRotator(-AxisAmount, 0, 0));
}

void ABaseShipController::Yaw(float AxisAmount)
{
	if (playerBaseShip && !menuDisplayed) playerBaseShip->AddActorLocalRotation(FRotator(0, AxisAmount, 0));
}

void ABaseShipController::Roll(float AxisAmount)
{
	if (playerBaseShip && !menuDisplayed) playerBaseShip->AddActorLocalRotation(FRotator(0, 0, AxisAmount));
}

void ABaseShipController::StrafeHorizontal(float AxisAmount)
{
	if (playerBaseShip && !menuDisplayed) {
		if (!mStrafeCooldown && abs(AxisAmount) > 0) {
			playerBaseShip->mShipMesh->AddImpulse(playerBaseShip->GetActorRightVector() * AxisAmount * mStrafeSpeed);
			mStrafeCooldown = true;
			GetWorld()->GetTimerManager().SetTimer(StrafeCooldownTimer, this, &ABaseShipController::StrafeCooldownElapsed, mStrafeCooldownDuration, false);
			UGameplayStatics::PlaySound2D(this, mThrusterBoostSound, mGameInstancedRef->GetSoundVolume());
		}
	}
}

void ABaseShipController::StrafeVertical(float AxisAmount)
{
	if (playerBaseShip && !menuDisplayed) {
		if (!mStrafeCooldown && abs(AxisAmount) > 0)
		{
			playerBaseShip->mShipMesh->AddImpulse(playerBaseShip->GetActorUpVector() * AxisAmount * mStrafeSpeed);
			mStrafeCooldown = true;
			GetWorld()->GetTimerManager().SetTimer(StrafeCooldownTimer, this, &ABaseShipController::StrafeCooldownElapsed, mStrafeCooldownDuration, false);
			UGameplayStatics::PlaySound2D(this, mThrusterBoostSound, mGameInstancedRef->GetSoundVolume());
		}
	}
}

void ABaseShipController::Nitro()
{
	if (mThrusterSpeed <= mMaxSpeed / 3) {
		playerBaseShip->mShipMesh->AddImpulse(playerBaseShip->GetActorForwardVector() * mMaxSpeed);
		mThrusterSpeed = mMaxSpeed / 3;
		UGameplayStatics::PlaySound2D(this, mThrusterBoostSound, mGameInstancedRef->GetSoundVolume());
	}
}

void ABaseShipController::AddRandomGun()
{
	if (playerBaseShip) {
		FActorSpawnParameters spawnParams;
		spawnParams.Owner = this;
		spawnParams.Instigator = GetInstigator();

		AShipGun* tempGun = GetWorld()->SpawnActor<AShipGun>(playerBaseShip->mBaseGun, playerBaseShip->GetActorLocation() + FTransform(playerBaseShip->GetActorRotation()).TransformVector(FVector3d(0.0f, 0.0f, 0.0f)), playerBaseShip->GetActorRotation(), spawnParams);
		tempGun->SetIfEnemy(false);
		tempGun->AttachToShip(playerBaseShip->mShipMesh, FVector(FMath::RandRange(-30.0f, 30.0f), FMath::RandRange(-30.0f, 30.0f), FMath::RandRange(-30.0f, 30.0f)), playerBaseShip->GetActorRotation().Quaternion(), FVector(0.03f, 0.03f, 0.03f));

		float rand = FMath::RandRange(0.001f, 20.0f);
		tempGun->SetGunStats(5000.0f, (1/rand) * 240.f, rand * 0.1f, rand * 450.0f);

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
	if (playerBaseShip && !menuDisplayed)
	{
		UCrewComponent* temp = NewObject<UCrewComponent>(UCrewComponent::StaticClass());
		AActor::AddComponentByClass(playerBaseShip->mBaseCrew, false, playerBaseShip->GetTransform(), false);
		AActor::FinishAddComponent(temp, false, playerBaseShip->GetTransform());

		//Do nothing if the crew made is too expensive to add
		if (temp->GetCost() + mPowerUsage > mMaxPower)
		{
			return;
		}

		if (temp->GetCrew() == ECrewType::WeaponsSpecialist)
		{
			int num = std::round(temp->GetPositive());

			for (int i = 0; i < num; ++i)
			{
				AddRandomGun();
			}

			mMaxShields /= temp->GetNegative();

			if (mShields > mMaxShields)
			{
				mShields = mMaxShields;
			}
		}
		else if (temp->GetCrew() == ECrewType::Fisherman)
		{
			//Check if a fisherman is already on board
			for (int i = 0; i < mCrew.Num(); ++i)
			{
				if (mCrew[i]->GetCrew() == ECrewType::Fisherman)
				{
					return;
				}
			}

			mGrapplingEnabled = true;

			//Negative is increased event chance
		}
		else if (temp->GetCrew() == ECrewType::RocketEngineer)
		{
			mMaxSpeed *= temp->GetPositive();
			mMaxHull /= temp->GetNegative();

			if (mHull > mMaxHull)
			{
				mHull = mMaxHull;
			}

			//Decrease gun damage
		}
		else if (temp->GetCrew() == ECrewType::Mechanic)
		{
			mMaxHull *= temp->GetPositive();
			mMaxSpeed /= temp->GetNegative();

			if (mThrusterSpeed > mMaxSpeed)
			{
				mThrusterSpeed = mMaxSpeed;
			}
		}
		else if (temp->GetCrew() == ECrewType::Electrician)
		{
			mMaxShields *= temp->GetPositive();
			mMaxSpeed /= temp->GetNegative();

			if (mThrusterSpeed > mMaxSpeed)
			{
				mThrusterSpeed = mMaxSpeed;
			}
		}
		else if (temp->GetCrew() == ECrewType::FirstMate)
		{
			//Decrease power
			//Comments about their luxurius life
		}

		mPowerUsage += temp->GetCost();

		UE_LOG(LogTemp, Warning, TEXT("Crew is %f"), float(temp->GetCrew()));

		mCrew.Add(temp);
		playerBaseShip->AddInstanceComponent(temp);
	}
}

void ABaseShipController::RemoveRandomCrew()
{
	if (mCrew.Num() == 0)
	{
		return;
	}
	int num = FMath::RandRange(0, mCrew.Num() - 1);

	if (mCrew[num]->GetCrew() == ECrewType::WeaponsSpecialist)
	{
		int gunNum = std::round(mCrew[num]->GetPositive());

		for (int i = 0; i < num; ++i)
		{
			RemoveRandomGun();
		}

		mMaxShields *= mCrew[num]->GetNegative();
	}
	else if (mCrew[num]->GetCrew() == ECrewType::Fisherman)
	{
		mGrapplingEnabled = false;
	}
	else if (mCrew[num]->GetCrew() == ECrewType::RocketEngineer)
	{
		mMaxSpeed /= mCrew[num]->GetPositive();
		mMaxHull *= mCrew[num]->GetNegative();

		if (mThrusterSpeed > mMaxSpeed)
		{
			mThrusterSpeed = mMaxSpeed;
		}
	}
	else if (mCrew[num]->GetCrew() == ECrewType::Mechanic)
	{
		mMaxHull /= mCrew[num]->GetPositive();
		mMaxSpeed *= mCrew[num]->GetNegative();

		if (mHull > mMaxHull)
		{
			mHull = mMaxHull;
		}
	}
	else if (mCrew[num]->GetCrew() == ECrewType::Electrician)
	{
		mMaxShields /= mCrew[num]->GetPositive();
		mMaxSpeed *= mCrew[num]->GetNegative();


		if (mShields > mMaxShields)
		{
			mShields = mMaxShields;
		}
	}
	else if (mCrew[num]->GetCrew() == ECrewType::FirstMate)
	{

	}

	mPowerUsage -= mCrew[num]->GetCost();

	UE_LOG(LogTemp, Warning, TEXT("Crew is %f"), float(mCrew[num]->GetCrew()));

	playerBaseShip->RemoveInstanceComponent(mCrew[num]);
	mCrew.RemoveAt(num);
}

void ABaseShipController::AddCrew(ECrewType type, float pos, float neg, int cost)//, TArray<FString> dialog)
{
	if (playerBaseShip)
	{
		UCrewComponent* temp = NewObject<UCrewComponent>(this, UCrewComponent::StaticClass(), NAME_None, RF_Transient);
		temp->RegisterComponent();
		//AActor::AddComponentByClass(playerBaseShip->mBaseCrew, false, playerBaseShip->GetTransform(), false);
		//AActor::FinishAddComponent(temp, false, playerBaseShip->GetTransform());

		//Set crew stats to the given ones
		temp->SetCrew(type);
		temp->SetPositive(pos);
		temp->SetNegative(neg);
		temp->SetCost(cost);
		//temp->SetDialog(dialog);


		//Do nothing if the crew made is too expensive to add
		if (cost + mPowerUsage > mMaxPower)
		{
			return;
		}
		if (mMoney < mMoneyCrewmateCostAmount) return;

		if (type == ECrewType::WeaponsSpecialist)
		{
			WeaponsSpecialistCount++;
			TotalCrewMatesCount++;
			int num = std::round(pos);

			for (int i = 0; i < num; ++i)
			{
				AddRandomGun();
			}

			mMaxShields /= neg;

			if (mShields > mMaxShields)
			{
				mShields = mMaxShields;
			}
		}
		else if (type == ECrewType::Fisherman)
		{
			if (FishermanCount > 0) return;
			//Check if a fisherman is already on board

			TotalCrewMatesCount++;
			FishermanCount++;
			mGrapplingEnabled = true;

			//Negative is increased event chance
		}
		else if (type == ECrewType::RocketEngineer)
		{
			TotalCrewMatesCount++;
			RocketEngineerCount++;
			mMaxSpeed *= pos;

			mMaxShields /= neg;

			if (mShields > mMaxShields)
			{
				mShields = mMaxShields;
			}
			//Decrease gun damage
		}
		else if (type == ECrewType::Mechanic)
		{
			TotalCrewMatesCount++;
			MechanicCount++;
			mMaxHull *= pos;
			mHull = mMaxHull;
			mMaxSpeed /= neg;

			if (mThrusterSpeed > mMaxSpeed)
			{
				mThrusterSpeed = mMaxSpeed;
			}
		}
		else if (type == ECrewType::Electrician)
		{
			TotalCrewMatesCount++;
			ElectricianCount++;
			mMaxShields *= pos;
			mShields = mMaxShields;
			mMaxSpeed /= neg;

			if (mThrusterSpeed > mMaxSpeed)
			{
				mThrusterSpeed = mMaxSpeed;
			}
		}
		else if (type == ECrewType::FirstMate)
		{
			if(FirstMateCount > 0) return;

			TotalCrewMatesCount++;
			FirstMateCount++;
			mPowerUsage /= 2.0f;
			//Decrease power
			//Comments about their luxurius life
		}

		if (FirstMateCount > 0) mPowerUsage += cost / 2;
		else mPowerUsage += cost;
		DecreaseMoneyAmount(mMoneyCrewmateCostAmount);
		UE_LOG(LogTemp, Warning, TEXT("Crew is %f"), float(temp->GetCrew()));

		mCrew.Add(temp);
		playerBaseShip->AddInstanceComponent(temp);
	}
}

void ABaseShipController::RemoveCrew(ECrewType type)
{
	int num = -1;

	for (int i = 0; i < mCrew.Num(); ++i)
	{
		if (mCrew[i]->GetCrew() == type)
		{
			num = i;
			break;
		}
	}

	if (num == -1)
	{
		UE_LOG(LogTemp, Warning, TEXT("No crew of that type to remove"));
		return;
	}

	if (mCrew[num]->GetCrew() == ECrewType::WeaponsSpecialist)
	{
		WeaponsSpecialistCount--;
		int gunNum = std::round(mCrew[num]->GetPositive());

		for (int i = 0; i < num; ++i)
		{
			RemoveRandomGun();
		}

		mMaxShields *= mCrew[num]->GetNegative();
	}
	else if (mCrew[num]->GetCrew() == ECrewType::Fisherman)
	{
		FishermanCount--;
		mGrapplingEnabled = false;
	}
	else if (mCrew[num]->GetCrew() == ECrewType::RocketEngineer)
	{
		RocketEngineerCount--;
		mMaxSpeed /= mCrew[num]->GetPositive();
		mMaxHull *= mCrew[num]->GetNegative();

		if (mThrusterSpeed > mMaxSpeed)
		{
			mThrusterSpeed = mMaxSpeed;
		}
	}
	else if (mCrew[num]->GetCrew() == ECrewType::Mechanic)
	{
		MechanicCount--;
		mMaxHull /= mCrew[num]->GetPositive();
		mMaxSpeed *= mCrew[num]->GetNegative();

		if (mHull > mMaxHull)
		{
			mHull = mMaxHull;
		}
	}
	else if (mCrew[num]->GetCrew() == ECrewType::Electrician)
	{
		ElectricianCount--;
		mMaxShields /= mCrew[num]->GetPositive();
		mMaxSpeed *= mCrew[num]->GetNegative();


		if (mShields > mMaxShields)
		{
			mShields = mMaxShields;
		}
	}
	else if (mCrew[num]->GetCrew() == ECrewType::FirstMate)
	{
		FirstMateCount--;
	}

	if (FirstMateCount > 0) mPowerUsage -= mCrew[num]->GetCost() / 2;
	else mPowerUsage -= mCrew[num]->GetCost();
	mPowerUsage -= mCrew[num]->GetCost();

	UE_LOG(LogTemp, Warning, TEXT("Crew is %f"), float(mCrew[num]->GetCrew()));
	IncreaseMoneyAmount(mMoneyCrewmateCostAmount);

	playerBaseShip->RemoveInstanceComponent(mCrew[num]);
	mCrew.RemoveAt(num);
}

void ABaseShipController::Fire()
{
	if (playerBaseShip && !menuDisplayed) {
		for (AShipGun* gun : playerBaseShip->mGuns)
		{
			if (gun->FireGun())
			{
				UGameplayStatics::PlaySound2D(this, mLaserSound, mGameInstancedRef->GetSoundVolume() / playerBaseShip->mGuns.Num());
			}			
		}
	}
}

void ABaseShipController::Grapple()
{
	if (playerBaseShip && !menuDisplayed) {
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
				UGameplayStatics::PlaySound2D(this, mGrappleSound, mGameInstancedRef->GetSoundVolume());
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
	if (playerBaseShip && !menuDisplayed) {
		mGrappling = false;
		playerBaseShip->mCable->SetVisibility(false);
	}
}

void ABaseShipController::PauseGame()
{
	if (GameModeRef) {
		GameModeRef->TogglePaused();
		if (GameModeRef->IsGamePaused()) {
			menuDisplayed = true;
			bShowMouseCursor = true;
			bEnableClickEvents = true;
			bEnableMouseOverEvents = true;
			bCinematicMode = true;
		}
		else if(!GameModeRef->IsCrewMateMenu()){
			bShowMouseCursor = false;
			bEnableClickEvents = false;
			bEnableMouseOverEvents = false;
			bCinematicMode = false;
			menuDisplayed = false;
		}
	}
}

void ABaseShipController::ToggleCrewMenu()
{
	if (GameModeRef) {
		if (GameModeRef->IsPlayerInsideInnerRing()) {
			GameModeRef->ToggleCrewMatesMenu();
			if (GameModeRef->IsCrewMateMenu()) {
				menuDisplayed = true;
				bShowMouseCursor = true;
				bEnableClickEvents = true;
				bEnableMouseOverEvents = true;
				bCinematicMode = true;
			}
			else if (!GameModeRef->IsGamePaused()) {
				bShowMouseCursor = false;
				bEnableClickEvents = false;
				bEnableMouseOverEvents = false;
				bCinematicMode = false;
				menuDisplayed = false;

			}
		}
	}
}

float ABaseShipController::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	UE_LOG(LogTemp, Warning, TEXT("Damage dealt is %f"), DamageAmount);
	if (!menuDisplayed) {

		if (bShieldRecharging) bShieldRecharging = false;
		if (GetWorld()->GetTimerManager().TimerExists(mShieldRechargeDelayTimer)) {
			GetWorld()->GetTimerManager().ClearTimer(mShieldRechargeDelayTimer);
			GetWorld()->GetTimerManager().SetTimer(mShieldRechargeDelayTimer, this, &ABaseShipController::ShieldRechargeDelayElapsed, mShieldRechargeDelay, false);
		}
		else GetWorld()->GetTimerManager().SetTimer(mShieldRechargeDelayTimer, this, &ABaseShipController::ShieldRechargeDelayElapsed, mShieldRechargeDelay, false);

		mShields -= DamageAmount;
		int index;
		if (mShields <= 0.0f) {
			mHullEffectSystem = UNiagaraFunctionLibrary::SpawnSystemAttached(mHullEffect, playerBaseShip->mShipMesh, NAME_None, FVector(0.0f, 0.0f, 0.0f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true);
			index = FMath::RandRange(0, mHullSound.Num() - 1);
			UGameplayStatics::PlaySound2D(this, mHullSound[index], mGameInstancedRef->GetSoundVolume());
			float remainingDamage = 0.0 - mShields;
			mShields = 0.0f;
			mHull -= remainingDamage;
			if (mHull <= 0.0f) {
				mExplosionEffectSystem = UNiagaraFunctionLibrary::SpawnSystemAttached(mExplosionEffect, playerBaseShip->mShipMesh, NAME_None, FVector(0.0f, 0.0f, 0.0f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true);
				DisableInput(this);

				if (!GetWorld()->GetTimerManager().IsTimerActive(DeathTimer))
				{
					GetWorld()->GetTimerManager().SetTimer(DeathTimer, this, &ABaseShipController::Die, 1.0f, false);
				}				
			}
		}
		else
		{
			mShieldEffectSystem = UNiagaraFunctionLibrary::SpawnSystemAttached(mShieldEffect, playerBaseShip->mShipMesh, NAME_None, FVector(0.0f, 0.0f, 0.0f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true);
			index = FMath::RandRange(0, mShieldSound.Num() - 1);
			UGameplayStatics::PlaySound2D(this, mShieldSound[index], mGameInstancedRef->GetSoundVolume());
		}
	}
	return DamageAmount;
}

float ABaseShipController::GetCurrentSpeed()
{
	return mThrusterSpeed;
}

void ABaseShipController::SetCurrentSpeed(float newSpeed)
{
	mThrusterSpeed = newSpeed;
}

float ABaseShipController::GetMaxSpeed()
{
	return mMaxSpeed;
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

float ABaseShipController::GetMaxPower()
{
	return mMaxPower;
}

float ABaseShipController::GetPowerUsage()
{
	return mPowerUsage;
}

float ABaseShipController::GetStrafeMaxCooldown()
{
	return mStrafeCooldownDuration;
}

float ABaseShipController::GetStrafeCooldown()
{
	if (!GetWorld()->GetTimerManager().TimerExists(StrafeCooldownTimer)) return 0.0f;
	else return GetWorld()->GetTimerManager().GetTimerRemaining(StrafeCooldownTimer);
}

float ABaseShipController::GetCurrentMoneyAmount()
{
	return mMoney;
}

float ABaseShipController::GetCurrentDrainAmount()
{
	return mMoneyBaseDrainAmount + mMoneyCrewDrainAmount * TotalCrewMatesCount;
}

void ABaseShipController::IncreaseMoneyAmount(float amount)
{
	mMoney += amount;
}

void ABaseShipController::DecreaseMoneyAmount(float amount)
{
	mMoney -= amount;
}

void ABaseShipController::ShieldRechargeDelayElapsed()
{
	bShieldRecharging = true;
}

void ABaseShipController::HealShip()
{
	if (mMoney < mMoneyHullHealCostAmount) return;

	DecreaseMoneyAmount(mMoneyHullHealCostAmount);
	mHull = mMaxHull;
}

void ABaseShipController::UpgradeShip(EShipUpgradeCatagory upgradeType)
{
	if (mMoney < mMoneyPermUpgradeCostAmount) return;
	DecreaseMoneyAmount(mMoneyPermUpgradeCostAmount);

	switch (upgradeType) {
	case EShipUpgradeCatagory::Hull:
		mMaxHull += mHullUpgradeAmount;
		mHull = mMaxHull;
		break;

	case EShipUpgradeCatagory::Shield:
		mMaxShields += mShieldsUpgradeAmount;
		mShields = mMaxShields;
		break;

	case EShipUpgradeCatagory::Speed:
		mMaxSpeed += mSpeedUpgradeAmount;
		break;

	case EShipUpgradeCatagory::Power:
		mMaxPower += mPowerUpgradeAmount;
		break;
	}
}

void ABaseShipController::mMoneyTimerElapsed()
{
	int moneyDrain = mMoneyBaseDrainAmount + mMoneyCrewDrainAmount * TotalCrewMatesCount;
	DecreaseMoneyAmount(moneyDrain);
	SetNotificationInfo(ENotificationInfoCatagory::MaintainenceOccurred);
	GetWorld()->GetTimerManager().SetTimer(mMoneyTimer, this, &ABaseShipController::mMoneyTimerElapsed, mMoneyBaseDrainDelay, false);
}

float ABaseShipController::GetShipPermUpgradeCost()
{
	return mMoneyPermUpgradeCostAmount;
}

float ABaseShipController::GetCrewmatePurchaseCost()
{
	return mMoneyCrewmateCostAmount;
}

float ABaseShipController::GetHullHealCost()
{
	return mMoneyHullHealCostAmount;

}

float ABaseShipController::GetElectricianCount()
{
	return ElectricianCount;
}

float ABaseShipController::GetFirstMateCount()
{
	return FirstMateCount;
}

float ABaseShipController::GetFishermanCount()
{
	return FishermanCount;
}

float ABaseShipController::GetMechanicCount()
{
	return MechanicCount;
}

float ABaseShipController::GetRocketEngineerCount()
{
	return RocketEngineerCount;
}

float ABaseShipController::GetWeaponsSpecialistCount()
{
	return WeaponsSpecialistCount;
}

EMissionInfoCatagory ABaseShipController::GetMissionInfo()
{
	return MissionInfo;
}

ENotificationInfoCatagory ABaseShipController::GetNotificationInfo()
{
	return NotificationInfo;
}

void ABaseShipController::NotificationElapsed()
{
	NotificationInfo = ENotificationInfoCatagory::Dorment;
}

void ABaseShipController::StrafeCooldownElapsed()
{
	mStrafeCooldown = false;
}

void ABaseShipController::ShieldCooldownElapsed()
{
	mShieldCooldown = false;
}

void ABaseShipController::Die()
{
	FString message = TEXT("Player has Died, Please Restart");

	while (playerBaseShip->mGuns.Num() > 0)
	{
		playerBaseShip->mGuns[0]->Destroy();
		playerBaseShip->mGuns.RemoveAt(0);
	}

	if (GameModeRef) GameModeRef->GameOver(true);
	menuDisplayed = true;
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
	bCinematicMode = true;

	GEngine->AddOnScreenDebugMessage(0, 10, FColor::Yellow, message);
	playerBaseShip->Destroy();
}
