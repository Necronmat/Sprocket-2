// Fill out your copyright notice in the Description page of Project Settings.


#include "Scenario1GameModeBase.h"
#include "Blueprint/UserWidget.h"

void AScenario1GameModeBase::TogglePaused()
{
	bPaused = !bPaused;
	if (bPaused) {
		PauseMenuCount = CreateWidget(GetWorld(), PauseMenuClass);
		if (PauseMenuCount) PauseMenuCount->AddToViewport();
	}
	else {
		if (PauseMenuCount) PauseMenuCount->RemoveFromViewport();
	}
}

bool AScenario1GameModeBase::IsGamePaused()
{
	return bPaused;
}

void AScenario1GameModeBase::StationSphereOverlap(bool bStart, int stationNo, int sphereNo)
{
}

void AScenario1GameModeBase::BeginPlay()
{
	Super::BeginPlay();
}
