// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuControllerController.h"

void AMainMenuControllerController::BeginPlay()
{
	Super::BeginPlay();

	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;
}
