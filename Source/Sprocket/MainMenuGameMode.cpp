// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameMode.h"
#include "Blueprint/UserWidget.h"

void AMainMenuGameMode::BeginPlay()
{
	Super::BeginPlay();
	MainMenuCount = CreateWidget(GetWorld(), MainMenuClass);
	if (MainMenuCount) MainMenuCount->AddToViewport();
}
