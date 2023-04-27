// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "GameFramework/PlayerController.h"
#include "CrewComponent.h"
#include "Sound/SoundMix.h"
#include "SprocketGameInstance.h"
#include "BaseShipController.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;

//Used to simplify ui and function interaction for Ship Upgrades
UENUM()
enum class EShipUpgradeCatagory : uint8
{
	Hull UMETA(DisplayName = "Hull"),
	Shield UMETA(DisplayName = "Shield"),
	Speed UMETA(DisplayName = "Speed"),
	Power UMETA(DisplayName = "Power"),
};

//Governs Mission Info Text on Player UI
UENUM(BlueprintType)
enum class EMissionInfoCatagory : uint8
{
	JobCollectionSuggestion UMETA(DisplayName = "Job Collection Suggestion"),
	JobRequirementPickup UMETA(DisplayName = "Job Requirement Pickup"),
	JobRequirementDelivery UMETA(DisplayName = "Job Requirement Delivery"),
	DefendFromEnemies UMETA(DisplayName = "Defend from Enemies"),
};

//Governs Notification Info Text on Player UI
UENUM(BlueprintType)
enum class ENotificationInfoCatagory : uint8
{
	Dorment UMETA(DisplayName = "Dorment"),
	ShipDefeated UMETA(DisplayName = "Ship Defeated"),
	MissionCompleted UMETA(DisplayName = "Mission Completed"),
	MaintainenceOccurred UMETA(DisplayName = "Maintainence Occurred"),
	EnemiesInbound UMETA(DisplayName = "Enemies Inbound"),
};


/**
 * 
 */
UCLASS()
class SPROCKET_API ABaseShipController : public APlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	//--------------------------------------------------
	// Base Controller relevant Stuff
	//--------------------------------------------------
	virtual void Tick(float DeltaTime) override;
	virtual void SetupInputComponent();

	UPROPERTY(EditAnywhere)
		ABaseShip* playerBaseShip;

	//--------------------------------------------------
	// SFX Related
	//--------------------------------------------------
	UFUNCTION(BlueprintImplementableEvent)
		void SetVolume();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		float SetThrusterVolume();


	//--------------------------------------------------
	// UI Info Related
	//--------------------------------------------------
	UFUNCTION()
		void SetNotificationInfo(ENotificationInfoCatagory value);
	UFUNCTION()
		void SetMissionInfo(EMissionInfoCatagory value);

	//--------------------------------------------------
	// Money Reward Related
	//--------------------------------------------------
	UFUNCTION()
		void EnemyDefeated();
	UFUNCTION()
		void MissionComplete();

	//--------------------------------------------------
	// Booster Rings Funcitonality
	//--------------------------------------------------
	void SetCurrentSpeed(float newSpeed);

	UFUNCTION(BlueprintPure)
		float GetMaxSpeed();

private:
	//--------------------------------------------------
	// Input Functions
	//--------------------------------------------------
	void Throttle(float AxisAmount);
	void Pitch(float AxisAmount);
	void Yaw(float AxisAmount);
	void Roll(float AxisAmount);
	void StrafeHorizontal(float AxisAmount);
	void StrafeVertical(float AxisAmount);

	void Nitro();
	void AddRandomGun();
	void RemoveRandomGun();

	void AddRandomCrew();
	void RemoveRandomCrew();
	UFUNCTION(BlueprintCallable)
		void AddCrew(ECrewType type, float pos, float neg, int cost);
	UFUNCTION(BlueprintCallable)
		void RemoveCrew(ECrewType type);

	void Fire();
	void Grapple();
	void ReleaseGrapple();
	UFUNCTION(BlueprintCallable)
	void PauseGame();
	void ToggleCrewMenu();

	//--------------------------------------------------
	// Standard Controller Functionality
	//--------------------------------------------------
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	//--------------------------------------------------
	// UI Functionality
	//--------------------------------------------------
	UFUNCTION(BlueprintPure)
		float GetCurrentSpeed();
	UFUNCTION(BlueprintPure)
		float GetCurrentHull();
	UFUNCTION(BlueprintPure)
		float GetMaxHull();
	UFUNCTION(BlueprintPure)
		float GetCurrentShield();
	UFUNCTION(BlueprintPure)
		float GetMaxShield();
	UFUNCTION(BlueprintPure)
		float GetMaxPower();
	UFUNCTION(BlueprintPure)
		float GetPowerUsage();
	UFUNCTION(BlueprintPure)
		float GetStrafeMaxCooldown();
	UFUNCTION(BlueprintPure)
		float GetStrafeCooldown();

	UFUNCTION(BlueprintPure)
		float GetCurrentMoneyAmount();
	UFUNCTION(BlueprintPure)
		float GetCurrentDrainAmount();

	//--------------------------------------------------
	// Money Management Functionality
	//--------------------------------------------------
	UFUNCTION()
		void IncreaseMoneyAmount(float amount);
	UFUNCTION()
		void DecreaseMoneyAmount(float amount);

//********************************************************************************************************
//********************************************************************************************************
//Ship Stats

	UPROPERTY(EditAnywhere)
		TArray<UCrewComponent*> mCrew;

	UPROPERTY(EditAnywhere)
		float mAcceleration = 200.0f;
	UPROPERTY(EditAnywhere)
		float mBoostDeselerationScale = 750.0f;

	UPROPERTY(EditAnywhere)
		float mMaxSpeed = 200000.0f;
	UPROPERTY(EditAnywhere)
		float mSpeedUpgradeAmount = 10000.0f;
	float mThrusterSpeed = 0.0f;

	UPROPERTY(EditAnywhere)
		float mMaxHull = 100.0f;
	UPROPERTY(EditAnywhere)
		float mHullUpgradeAmount = 25.0; 
	float mHull = 100.0f;

	UPROPERTY(EditAnywhere)
		float mMaxShields = 100.0f;
	UPROPERTY(EditAnywhere)
		float mShieldsUpgradeAmount = 25.0f; 
	float mShields = 100.0f;

	UPROPERTY(EditAnywhere)
		float mMaxPower = 10.0f;
	UPROPERTY(EditAnywhere)
		float mPowerUpgradeAmount = 2.0f; 
	float mPowerUsage = 0.0f;

	//--------------------------------------------------
	// Shield Recharge Functionality
	//--------------------------------------------------
	UPROPERTY(EditAnywhere)
		bool bShieldRecharging = false;
	UPROPERTY(EditAnywhere)
		float mShieldRechargeRate = 50.0f;
	UPROPERTY()
		FTimerHandle mShieldRechargeDelayTimer;
	UPROPERTY(EditAnywhere)
		float mShieldRechargeDelay = 30.0f;
	UFUNCTION()
		void ShieldRechargeDelayElapsed();


	UFUNCTION(BlueprintCallable)
		void HealShip();
	UFUNCTION(BlueprintCallable)
		void UpgradeShip(EShipUpgradeCatagory upgradeType);

	UPROPERTY(EditAnywhere)
		float mShipSize = 10.0f;
	UPROPERTY(EditAnywhere)
		float mShipWeight = 10.0f;

	//--------------------------------------------------
	// Money Related
	//--------------------------------------------------
	UPROPERTY(EditAnywhere)
		float mMoneyStartingAmount = 100.0f;
	UPROPERTY(EditAnywhere)
		float mMoneyBaseDrainAmount = 15.0f;
	UPROPERTY(EditAnywhere)
		float mMoneyCrewDrainAmount = 5.0f;
	UPROPERTY(EditAnywhere)
		float mMoneyCrewmateCostAmount = 5.0f;
	UPROPERTY(EditAnywhere)
		float mMoneyPermUpgradeCostAmount = 200.0f;
	UPROPERTY(EditAnywhere)
		float mMoneyHullHealCostAmount = 20.0f;
	UPROPERTY(EditAnywhere)
		float mMoneyJobComplete = 100.0f;
	UPROPERTY(EditAnywhere)
		float mMoneyEnemyDefeated = 25.0f;
	UPROPERTY()
		FTimerHandle mMoneyTimer;
	UPROPERTY(EditAnywhere)
		float mMoneyBaseDrainDelay = 60.0f;
	float mMoney = 0.0f;
	UFUNCTION()
		void mMoneyTimerElapsed();

	UFUNCTION(BlueprintPure)
		float GetShipPermUpgradeCost();
	UFUNCTION(BlueprintPure)
		float GetCrewmatePurchaseCost();
	UFUNCTION(BlueprintPure)
		float GetHullHealCost();


	//Speed of the strafe thrusters
	UPROPERTY(EditAnywhere)
		float mStrafeSpeed = 200000.0f;

	UPROPERTY(EditAnywhere)
		float mGrappleForce = 1;
	UPROPERTY(EditAnywhere)
		float mGrappleLength = 100000;

	//--------------------------------------------------
	// UI relevant
	//--------------------------------------------------
	//CrewMate trackers
	int ElectricianCount = 0;
	int FirstMateCount = 0;
	int FishermanCount = 0;
	int MechanicCount = 0;
	int RocketEngineerCount = 0;
	int WeaponsSpecialistCount = 0;
	int TotalCrewMatesCount = 0;

	UFUNCTION(BlueprintPure)
		float GetElectricianCount();
	UFUNCTION(BlueprintPure)
		float GetFirstMateCount();
	UFUNCTION(BlueprintPure)
		float GetFishermanCount();
	UFUNCTION(BlueprintPure)
		float GetMechanicCount();
	UFUNCTION(BlueprintPure)
		float GetRocketEngineerCount();
	UFUNCTION(BlueprintPure)
		float GetWeaponsSpecialistCount();
	UFUNCTION(BlueprintPure)
		EMissionInfoCatagory GetMissionInfo();
	UFUNCTION(BlueprintPure)
		ENotificationInfoCatagory GetNotificationInfo();
	void NotificationElapsed();

	UPROPERTY(EditAnywhere)
		EMissionInfoCatagory MissionInfo = EMissionInfoCatagory::JobCollectionSuggestion;
	UPROPERTY(EditAnywhere)
		ENotificationInfoCatagory NotificationInfo = ENotificationInfoCatagory::Dorment;
	UPROPERTY()
		FTimerHandle NotificationTimer;
	UPROPERTY(EditAnywhere)
		float NotificationDuration = 3.0f;

	
	//********************************************************************************************************
	//********************************************************************************************************
	//Timers

	UPROPERTY()
		FTimerHandle StrafeCooldownTimer;
	UPROPERTY()
		FTimerHandle ShieldCooldownTimer;
	float mStrafeCooldownDuration = 2.0f;
	float mShieldCooldownDuration = 5.0f;
	bool mStrafeCooldown = false;
	bool mShieldCooldown = false;
	void StrafeCooldownElapsed();
	void ShieldCooldownElapsed();

	//********************************************************************************************************
	//********************************************************************************************************
	//Grappling Hook

	bool mGrappling = false;
	bool mGrapplingEnabled = false;
	AActor* mGrapplePoint;

	bool menuDisplayed = false;

	UPROPERTY()
		AScenario1GameModeBase* GameModeRef;

	UPROPERTY()
		USprocketGameInstance* mGameInstancedRef;

	//********************************************************************************************************
	//********************************************************************************************************
	//Sounds

	UPROPERTY(EditAnywhere)
		USoundBase* mGrappleSound;

	UPROPERTY(EditAnywhere)
		TArray<USoundBase*> mHullSound;

	UPROPERTY(EditAnywhere)
		USoundBase* mLaserSound;

	UPROPERTY(EditAnywhere)
		TArray<USoundBase*> mShieldSound;

	UPROPERTY(EditAnywhere)
		USoundBase* mThrusterUpSound;

	UPROPERTY(EditAnywhere)
		USoundBase* mThrusterDownSound;

	UPROPERTY(EditAnywhere)
		USoundBase* mThrusterLoopSound;

	UPROPERTY(EditAnywhere)
		USoundBase* mThrusterBoostSound;

	UPROPERTY(EditAnywhere)
		USoundBase* mWarningSound;

	UPROPERTY(EditAnywhere)
		USoundMix* mMixer;

	//********************************************************************************************************
	//********************************************************************************************************
	//Particles

	TArray<UNiagaraComponent*> mThrusterEffectSystem;

	UPROPERTY(EditAnywhere)
		UNiagaraSystem* mThrusterEffect;

	UNiagaraComponent* mShieldEffectSystem;

	UPROPERTY(EditAnywhere)
		UNiagaraSystem* mShieldEffect;

	UNiagaraComponent* mHullEffectSystem;

	UPROPERTY(EditAnywhere)
		UNiagaraSystem* mHullEffect;

	UNiagaraComponent* mExplosionEffectSystem;

	UPROPERTY(EditAnywhere)
		UNiagaraSystem* mExplosionEffect;

	UPROPERTY()
		FTimerHandle DeathTimer;
	void Die();
};
