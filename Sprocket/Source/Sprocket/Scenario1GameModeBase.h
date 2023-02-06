// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Scenario1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SPROCKET_API AScenario1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	UFUNCTION()
		void TogglePaused();
	UFUNCTION(BlueprintCallable)
		bool IsGamePaused();
	UFUNCTION()
		void StationSphereOverlap(bool bStart, int stationNo, int sphereNo);
protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY() bool bPaused = false;

	UPROPERTY() int ScenarioProgressTracker = 0;

	UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget>PauseMenuClass;
	UPROPERTY()
		UUserWidget* PauseMenuCount;
};