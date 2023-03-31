// Fill out your copyright notice in the Description page of Project Settings.


#include "Scenario1GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

void AScenario1GameModeBase::TogglePaused()
{
	bPaused = !bPaused;
	if (bPaused) {
		if (!bCrewMateMenu) {
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
		}
		else {
			if (CrewMenuCount) CrewMenuCount->RemoveFromViewport();
			UIMenuCount = CreateWidget(GetWorld(), UIMenuClass);
			if (UIMenuCount) UIMenuCount->AddToViewport();
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
	UPROPERTY() TArray<AActor*> temp;
	int i = 0;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AStation::StaticClass(), temp);
	for (AActor* station : temp) {
		AStation* Station = Cast<AStation>(station);
		Station->SetStationId(i);
		i++;
		stations.Emplace(Station);
		//if (Station->GetStationId() == 1) station1 = Station;
		//else if (Station->GetStationId() == 2) station2 = Station;
		//else if (Station->GetStationId() == 3) station3 = Station;
	}

	GenerateNewStationDestination();

	//if(station2) station2->SetIsTarget(true);
	UIMenuCount = CreateWidget(GetWorld(), UIMenuClass);
	if (UIMenuCount) UIMenuCount->AddToViewport();
}

void AScenario1GameModeBase::GenerateNewStationDestination()
{
	//stations[designatedStationTracker]->SetIsTarget(false);
	int prevTracker = designatedStationTracker;
	designatedStationTracker = FMath::RandRange(0, stations.Num() - 1);
	if (designatedStationTracker == prevTracker) {
		if (designatedStationTracker == stations.Num() - 1) designatedStationTracker--;
		else designatedStationTracker++;
	}
	if(stations.Num() > 0)stations[designatedStationTracker]->SetIsTarget(true);
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

	if (stationId == designatedStationTracker) {
		message = TEXT("Delivery Made");
		stations[designatedStationTracker]->SetIsTarget(false);

		//Run delivery code.

		GenerateNewStationDestination();
	}

	/*switch (ScenarioProgressTracker) {
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
	}*/
	GEngine->AddOnScreenDebugMessage(0, 10, FColor::Green, message);
}
