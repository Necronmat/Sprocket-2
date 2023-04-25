// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Station.h"
#include "Scenario1GameModeBase.generated.h"


class ABaseShipController;

UENUM(BlueprintType)
enum class EGameState : uint8
{
	Jobless UMETA(DisplayName = "Jobless"),
	JobPickupStage UMETA(DisplayName = "Job Pickup Stage"),
	JobDeliveryStage UMETA(DisplayName = "Job Delivery Stage"),
	GameOverByDeath UMETA(DisplayName = "Game Over By Death"),
	GameOverByMoney UMETA(DisplayName = "Game Over By Money"),
};

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
	UFUNCTION()
		void ToggleCrewMatesMenu();

	UFUNCTION(BlueprintCallable)
		bool IsGamePaused();
	UFUNCTION(BlueprintCallable)
		bool IsCrewMateMenu();
	UFUNCTION(BlueprintCallable)
		bool IsPlayerInsideInnerRing();
	UFUNCTION(BlueprintCallable)
		EGameState GetCurrentState();
	UFUNCTION()
		void StationSphereOverlap(bool bStart, int stationNo, int sphereNo);

	UFUNCTION(BlueprintCallable)
		void RequestJob();

	UFUNCTION()
		void GameOver(bool pDied);

protected:
	virtual void BeginPlay() override;

private:

	void GenerateNewStationDestination();

	UFUNCTION()
		void TriggerFarStationEvent(int stationId);
	UFUNCTION()
		void TriggerApproachStationEvent(int stationId);
	UFUNCTION()
		void TriggerLandingStationEvent(int stationId);

	UPROPERTY() bool bPaused = false;
	UPROPERTY() bool bCrewMateMenu = false;
	UPROPERTY() bool bStationInnerRing = false;
	UPROPERTY() EGameState mGameState = EGameState::Jobless;
	UPROPERTY() int ScenarioProgressTracker = 1;
	UPROPERTY() int designatedStationTracker = -1;

	UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget>PauseMenuClass;
	UPROPERTY()
		UUserWidget* PauseMenuCount;
	UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget>UIMenuClass;
	UPROPERTY()
		UUserWidget* UIMenuCount;
	UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget>CrewMenuClass;
	UPROPERTY()
		UUserWidget* CrewMenuCount;

	UPROPERTY()
		TArray<AStation*> stations;
	UPROPERTY() AStation* station1;
	UPROPERTY() AStation* station2;
	UPROPERTY() AStation* station3;
	UPROPERTY(EditAnywhere) TSubclassOf<AStation> StationClass;

	UPROPERTY() ABaseShipController* playerControllerRef;
};
