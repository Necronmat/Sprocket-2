// Fill out your copyright notice in the Description page of Project Settings.


#include "Scenario1GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

void AScenario1GameModeBase::TogglePaused()
{
	bPaused = !bPaused;
	if (bPaused) {
		if (UIMenuCount) UIMenuCount->RemoveFromViewport();
		PauseMenuCount = CreateWidget(GetWorld(), PauseMenuClass);
		if (PauseMenuCount) PauseMenuCount->AddToViewport();
	}
	else {
		if (PauseMenuCount) PauseMenuCount->RemoveFromViewport();
		UIMenuCount = CreateWidget(GetWorld(), UIMenuClass);
		if (UIMenuCount) UIMenuCount->AddToViewport();
	}
}

bool AScenario1GameModeBase::IsGamePaused()
{
	return bPaused;
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
			break;
		case 2:
			TriggerLandingStationEvent(stationNo);
			break;
		}
	}
}

void AScenario1GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	if (StationClass) {
		UPROPERTY() TArray<AActor*> Stations;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AStation::StaticClass(), Stations);
		for (AActor* station : Stations) {
			AStation* Station = Cast<AStation>(station);
			if (Station->GetStationId() == 1) station1 = Station;
			else if (Station->GetStationId() == 2) station2 = Station;
			else if (Station->GetStationId() == 3) station3 = Station;
		}
		station2->SetIsTarget(true);
	}
	UIMenuCount = CreateWidget(GetWorld(), UIMenuClass);
	if (UIMenuCount) UIMenuCount->AddToViewport();
}

void AScenario1GameModeBase::TriggerFarStationEvent(int stationId)
{
	FString message = TEXT("Now Approaching : Station ") + FString::FromInt(stationId);
	
	GEngine->AddOnScreenDebugMessage(0, 10, FColor::Green, message);
}

void AScenario1GameModeBase::TriggerApproachStationEvent(int stationId)
{
	FString message = TEXT("Landing Approved, please head to the marked dock");

	GEngine->AddOnScreenDebugMessage(0, 10, FColor::Green, message);
}

void AScenario1GameModeBase::TriggerLandingStationEvent(int stationId)
{
	FString message = TEXT("Error Message");
	switch (ScenarioProgressTracker) {
	case 1:
		if (stationId == 2) {
			message = TEXT("Drop off these goods at Station 3.");
			ScenarioProgressTracker++;
			station2->SetIsTarget(false);
			station3->SetIsTarget(true);

		}
		break;
	case 2:
		if (stationId == 3) {
			message = TEXT("Scenario Over.");
			ScenarioProgressTracker++;
			station3->SetIsTarget(false);
			station1->SetIsTarget(true);
		}
		break;
	default:
		break;
	}
	GEngine->AddOnScreenDebugMessage(0, 10, FColor::Green, message);
}
