// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Station.h"
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
	UFUNCTION()
		void TriggerFarStationEvent(int stationId);
	UFUNCTION()
		void TriggerApproachStationEvent(int stationId);
	UFUNCTION()
		void TriggerLandingStationEvent(int stationId);

	UPROPERTY() bool bPaused = false;

	UPROPERTY() int ScenarioProgressTracker = 1;

	UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget>PauseMenuClass;
	UPROPERTY()
		UUserWidget* PauseMenuCount;

	UPROPERTY() AStation* station1;
	UPROPERTY() AStation* station2;
	UPROPERTY() AStation* station3;
	UPROPERTY(EditAnywhere) TSubclassOf<AStation> StationClass;
};
