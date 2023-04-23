// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "GameFramework/PlayerController.h"
#include "CrewComponent.h"
#include "Sound/SoundMix.h"
#include "BaseShipController.generated.h"

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

	virtual void Tick(float DeltaTime) override;
	virtual void SetupInputComponent();

	UFUNCTION(BlueprintImplementableEvent)
		void SetVolume();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		float SetThrusterVolume();

	UPROPERTY(EditAnywhere)
		ABaseShip* playerBaseShip;

private:

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
		void AddCrew(ECrewType type, float pos, float neg, int cost);// TArray<FString> dialog);
	UFUNCTION(BlueprintCallable)
		void RemoveCrew(ECrewType type);

	void Fire();
	void Grapple();
	void ReleaseGrapple();
	void PauseGame();
	void ToggleCrewMenu();

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	UFUNCTION(BlueprintPure)
		float GetCurrentSpeed();
	UFUNCTION(BlueprintPure)
		float GetMaxSpeed();
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
		float GetSheildCooldown();
//********************************************************************************************************
//********************************************************************************************************
//Ship Stats

	UPROPERTY(EditAnywhere)
		TArray<UCrewComponent*> mCrew;

	UPROPERTY(EditAnywhere)
		float mAcceleration = 200.0f;

	UPROPERTY(EditAnywhere)
		float mMaxSpeed = 200000.0f;
	float mThrusterSpeed = 0.0f;

	UPROPERTY(EditAnywhere)
		float mMaxHull = 100.0f;
	float mHull = 100.0f;

	UPROPERTY(EditAnywhere)
		float mMaxShields = 100.0f;
	float mShields = 100.0f;

	UPROPERTY(EditAnywhere)
		float mMaxPower = 10.0f;
	float mPowerUsage = 0.0f;

	UPROPERTY(EditAnywhere)
		float mShipSize = 10.0f;
	UPROPERTY(EditAnywhere)
		float mShipWeight = 10.0f;

	//Speed of the strafe thrusters
	UPROPERTY(EditAnywhere)
		float mStrafeSpeed = 200000.0f;

	UPROPERTY(EditAnywhere)
		float mGrappleForce = 1;
	UPROPERTY(EditAnywhere)
		float mGrappleLength = 100000;

	//CrewMate trackers
	int ElectricianCount = 0;
	int FirstMateCount = 0;
	int FishermanCount = 0;
	int MechanicCount = 0;
	int RocketEngineerCount = 0;
	int WeaponsSpecialistCount = 0;

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
		float mSFXVolume = 1.0f;

	UPROPERTY(EditAnywhere)
		USoundMix* mMixer;
};
