// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Station.h"
#include "AiShipPawn.h"
#include "Scenario1GameModeBase.generated.h"


class ABaseShipController;

//Used to control and track current stage of game.
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

	//--------------------------------------------------
	// UI Related
	//--------------------------------------------------
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


	//--------------------------------------------------
	// Gameplay functionality related
	//--------------------------------------------------
	UFUNCTION()
		void StationSphereOverlap(bool bStart, int stationNo, int sphereNo);
	UFUNCTION(BlueprintCallable)
		void RequestJob();
	UFUNCTION()
		void EnemyDefeated();
	UFUNCTION()
		void GameOver(bool pDied);


	//--------------------------------------------------
	// SFX Related
	//--------------------------------------------------
	UFUNCTION(BlueprintImplementableEvent)
		void SetVolume();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		bool SetMusicVolume();

protected:
	virtual void BeginPlay() override;

private:

	//--------------------------------------------------
	// Scenario Progress Related
	//--------------------------------------------------
	void GenerateNewStationDestination();

	UFUNCTION()
		void TriggerFarStationEvent(int stationId);
	UFUNCTION()
		void TriggerApproachStationEvent(int stationId);
	UFUNCTION()
		void TriggerLandingStationEvent(int stationId);

	UPROPERTY()
		TArray<AStation*> stations;

	UPROPERTY() bool bPaused = false;
	UPROPERTY() bool bCrewMateMenu = false;
	UPROPERTY() bool bStationInnerRing = false;
	UPROPERTY() EGameState mGameState = EGameState::Jobless;


	//--------------------------------------------------
	// UI Related
	//--------------------------------------------------
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

	UPROPERTY() ABaseShipController* playerControllerRef;

	//--------------------------------------------------
	// Old Scenario Remnants
	//--------------------------------------------------

	UPROPERTY(EditAnywhere) TSubclassOf<AStation> StationClass;
	UPROPERTY() AStation* station1;
	UPROPERTY() AStation* station2;
	UPROPERTY() AStation* station3;

	//--------------------------------------------------
	// Enemy Spawning Related
	//--------------------------------------------------
	
	//Spawn delay functionality
	UPROPERTY()
		FTimerHandle mCombatSpawnTimer;
	UPROPERTY(EditAnywhere)
		float mCombatSpawnMinDelay = 15.0f;
	UPROPERTY(EditAnywhere)
		float mCombatSpawnMaxDelay = 45.0f;
	UFUNCTION()
		void mCombatSpawnDelayElapsed();

	//Template of enemy to spawn
	UPROPERTY(EditAnywhere) TSubclassOf<AAiShipPawn> AiShipPawnClass;

	//Spawn Configs
	UPROPERTY(EditAnywhere) 
		int EnemyWaveSpawnCount = 4;
	UPROPERTY(EditAnywhere) 
		float EnemySpawnDistance = 10000.0f;
	UPROPERTY(EditAnywhere) 
		float EnemySpawnHeight = 2000.0f;

	//Combat Tracking
	UPROPERTY() int EnemiesAlive = 0;
	bool mInCombat = false;
};
