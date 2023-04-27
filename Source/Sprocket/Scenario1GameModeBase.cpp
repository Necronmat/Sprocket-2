// Fill out your copyright notice in the Description page of Project Settings.


#include "Scenario1GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "BaseShipController.h"
#include "Kismet/GameplayStatics.h"

void AScenario1GameModeBase::TogglePaused()
{
	bPaused = !bPaused;

	if (bPaused) {
		//Detects what UI to revoke and whether to pause the game
		if (!bCrewMateMenu) {
			UGameplayStatics::SetGamePaused(GetWorld(), true);
			if (UIMenuCount) UIMenuCount->RemoveFromViewport();
		}
		else {
			if (CrewMenuCount) CrewMenuCount->RemoveFromViewport();
		}

		PauseMenuCount = CreateWidget(GetWorld(), PauseMenuClass);
		if (PauseMenuCount) PauseMenuCount->AddToViewport();
	}
	else {
		if (PauseMenuCount) PauseMenuCount->RemoveFromViewport();

		//Detects what UI to restore and whether to unpause the game
		if (!bCrewMateMenu) {
			UIMenuCount = CreateWidget(GetWorld(), UIMenuClass);
			if (UIMenuCount) UIMenuCount->AddToViewport();
			UGameplayStatics::SetGamePaused(GetWorld(), false);
		}
		else {
			CrewMenuCount = CreateWidget(GetWorld(), CrewMenuClass);
			if (CrewMenuCount) CrewMenuCount->AddToViewport();
		}
	}
}

void AScenario1GameModeBase::ToggleCrewMatesMenu()
{
	bCrewMateMenu = !bCrewMateMenu;
	if (!bPaused) {
		if (bCrewMateMenu) {
			if (UIMenuCount) UIMenuCount->RemoveFromViewport();
			CrewMenuCount = CreateWidget(GetWorld(), CrewMenuClass);
			if (CrewMenuCount) CrewMenuCount->AddToViewport();
			UGameplayStatics::SetGamePaused(GetWorld(), true);
		}
		else {
			if (CrewMenuCount) CrewMenuCount->RemoveFromViewport();
			UIMenuCount = CreateWidget(GetWorld(), UIMenuClass);
			if (UIMenuCount) UIMenuCount->AddToViewport();
			UGameplayStatics::SetGamePaused(GetWorld(), false);
		}
	}
}

bool AScenario1GameModeBase::IsGamePaused()
{
	return bPaused;
}

bool AScenario1GameModeBase::IsCrewMateMenu()
{
	return bCrewMateMenu;
}

bool AScenario1GameModeBase::IsPlayerInsideInnerRing()
{
	return bStationInnerRing;
}

EGameState AScenario1GameModeBase::GetCurrentState()
{
	return mGameState;
}

void AScenario1GameModeBase::StationSphereOverlap(bool bStart, int stationNo, int sphereNo)
{
	if (bStart) {
		switch (sphereNo) {
		case 0:
			TriggerFarStationEvent(stationNo);
			break;
		case 1:
			TriggerApproachStationEvent(stationNo);
			bStationInnerRing = true;
			break;
		case 2:
			TriggerLandingStationEvent(stationNo);
			break;
		}
	}
	else if (sphereNo == 2) bStationInnerRing = false;
}

void AScenario1GameModeBase::RequestJob()
{
	if (mGameState != EGameState::Jobless) return;

	mGameState = EGameState::JobPickupStage;
	GenerateNewStationDestination();
}

void AScenario1GameModeBase::EnemyDefeated()
{
	EnemiesAlive--;
	if (EnemiesAlive <= 0) 
	{
		if (playerControllerRef) playerControllerRef->SetMissionInfo(EMissionInfoCatagory::JobRequirementDelivery);
		mInCombat = false;
		SetVolume();
	}
}

void AScenario1GameModeBase::GameOver(bool pDied)
{
	if (pDied) mGameState = EGameState::GameOverByDeath;
	else mGameState = EGameState::GameOverByMoney;
	TogglePaused();
}

bool AScenario1GameModeBase::SetMusicVolume_Implementation()
{
	return mInCombat;
}

void AScenario1GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	playerControllerRef = Cast<ABaseShipController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	//Gathers all Stations to use in task distribution
	UPROPERTY() TArray<AActor*> temp;
	int i = 0;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AStation::StaticClass(), temp);
	for (AActor* station : temp) {
		AStation* Station = Cast<AStation>(station);
		Station->SetStationId(i);
		i++;
		stations.Emplace(Station);
	}

	//Adds player UI
	UIMenuCount = CreateWidget(GetWorld(), UIMenuClass);
	if (UIMenuCount) UIMenuCount->AddToViewport();
}

void AScenario1GameModeBase::GenerateNewStationDestination()
{
	//Generates random station that isn't the current station
	int prevTracker = designatedStationTracker;
	designatedStationTracker = FMath::RandRange(0, stations.Num() - 1);

	if (designatedStationTracker == prevTracker) {
		if (designatedStationTracker == stations.Num() - 1) designatedStationTracker--;
		else designatedStationTracker++;
	}

	if(stations.Num() > 0) stations[designatedStationTracker]->SetIsTarget(true);
	playerControllerRef->SetMissionInfo(EMissionInfoCatagory::JobRequirementPickup);
}

void AScenario1GameModeBase::TriggerFarStationEvent(int stationId)
{
	FString message = TEXT("Now Approaching : Station ") + FString::FromInt(stationId);
	
	GEngine->AddOnScreenDebugMessage(0, 10, FColor::Green, message);
}

void AScenario1GameModeBase::TriggerApproachStationEvent(int stationId)
{
	FString message = TEXT("Press Tab to open the Station Menu");

	GEngine->AddOnScreenDebugMessage(0, 10, FColor::Green, message);
}

void AScenario1GameModeBase::TriggerLandingStationEvent(int stationId)
{
	FString message = TEXT("Until authorised please leave the landing area.");

	if (stationId == designatedStationTracker) {
		if (mGameState == EGameState::JobPickupStage) {
			message = TEXT("Delivery Picked Up");
			stations[designatedStationTracker]->SetIsTarget(false);

			//Game Loop Logic
			GenerateNewStationDestination();
			mGameState = EGameState::JobDeliveryStage;
			playerControllerRef->SetMissionInfo(EMissionInfoCatagory::JobRequirementDelivery);

			//Triggering Combat Spawning Logic
			float timerDelay = FMath::RandRange(mCombatSpawnMinDelay, mCombatSpawnMaxDelay);
			GetWorld()->GetTimerManager().SetTimer(mCombatSpawnTimer, this, &AScenario1GameModeBase::mCombatSpawnDelayElapsed, timerDelay, false);
		}
		else if (mGameState == EGameState::JobDeliveryStage) {
			message = TEXT("Delivery Complete");
			stations[designatedStationTracker]->SetIsTarget(false);

			//Stops combat occuring if not already started
			if (GetWorld()->GetTimerManager().IsTimerActive(mCombatSpawnTimer)) GetWorld()->GetTimerManager().ClearTimer(mCombatSpawnTimer);
			
			//Game Loop Logic
			if (playerControllerRef) playerControllerRef->MissionComplete();
			mGameState = EGameState::Jobless;
			playerControllerRef->SetMissionInfo(EMissionInfoCatagory::JobCollectionSuggestion);
		}
	}

	GEngine->AddOnScreenDebugMessage(0, 10, FColor::Green, message);
}

void AScenario1GameModeBase::mCombatSpawnDelayElapsed()
{
	if (AiShipPawnClass && playerControllerRef) {
		mInCombat = true;
		SetVolume();

		//Spawns AI Ships in set ring around ship
		for (int i = 0; i < EnemyWaveSpawnCount; i++) {
			FVector SpawnLocation = { playerControllerRef->playerBaseShip->GetActorLocation().X + FMath::FRandRange(-EnemySpawnDistance, EnemySpawnDistance), playerControllerRef->playerBaseShip->GetActorLocation().Y + FMath::FRandRange(-EnemySpawnDistance, EnemySpawnDistance), EnemySpawnHeight };
			AAiShipPawn* tempShip = GetWorld()->SpawnActor<AAiShipPawn>(AiShipPawnClass, SpawnLocation, { 0.0f, 0.0f, 0.0f });
			EnemiesAlive++;
		}
		if (playerControllerRef) {
			playerControllerRef->SetNotificationInfo(ENotificationInfoCatagory::EnemiesInbound);
			playerControllerRef->SetMissionInfo(EMissionInfoCatagory::DefendFromEnemies);
		}
	}
}
