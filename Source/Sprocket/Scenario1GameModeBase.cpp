// Fill out your copyright notice in the Description page of Project Settings.


#include "Scenario1GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "BaseShipController.h"
#include "Kismet/GameplayStatics.h"

void AScenario1GameModeBase::TogglePaused()
{
	bPaused = !bPaused;
	if (bPaused) {
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

void AScenario1GameModeBase::GameOver(bool pDied)
{
	if (pDied) mGameState = EGameState::GameOverByDeath;
	else mGameState = EGameState::GameOverByMoney;
	TogglePaused();
}

void AScenario1GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	playerControllerRef = Cast<ABaseShipController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	UPROPERTY() TArray<AActor*> temp;
	int i = 0;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AStation::StaticClass(), temp);
	for (AActor* station : temp) {
		AStation* Station = Cast<AStation>(station);
		Station->SetStationId(i);
		i++;
		stations.Emplace(Station);
	}

	//GenerateNewStationDestination();

	UIMenuCount = CreateWidget(GetWorld(), UIMenuClass);
	if (UIMenuCount) UIMenuCount->AddToViewport();
}

void AScenario1GameModeBase::GenerateNewStationDestination()
{
	int prevTracker = designatedStationTracker;
	designatedStationTracker = FMath::RandRange(0, stations.Num() - 1);
	if (designatedStationTracker == prevTracker) {
		if (designatedStationTracker == stations.Num() - 1) designatedStationTracker--;
		else designatedStationTracker++;
	}
	if(stations.Num() > 0)stations[designatedStationTracker]->SetIsTarget(true);
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
			GenerateNewStationDestination();
			mGameState = EGameState::JobDeliveryStage;
			playerControllerRef->SetMissionInfo(EMissionInfoCatagory::JobRequirementDelivery);
			//Run delivery code.
		}
		else if (mGameState == EGameState::JobDeliveryStage) {
			message = TEXT("Delivery Complete");
			stations[designatedStationTracker]->SetIsTarget(false);
			if (playerControllerRef) playerControllerRef->MissionComplete();
			mGameState = EGameState::Jobless;
			playerControllerRef->SetMissionInfo(EMissionInfoCatagory::JobCollectionSuggestion);
		}
	}

	GEngine->AddOnScreenDebugMessage(0, 10, FColor::Green, message);
}
