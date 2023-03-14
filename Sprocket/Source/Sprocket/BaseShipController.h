// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "GameFramework/PlayerController.h"
#include "BaseShipController.generated.h"

class UCrewComponent;
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
	
	UPROPERTY(EditAnywhere)
		ABaseShip* playerBaseShip;

private:

	void Throttle(float AxisAmount);
	void Pitch(float AxisAmount);
	void Yaw(float AxisAmount);
	void Roll(float AxisAmount);
	void StrafeHorizontal(float AxisAmount);
	void StrafeVertical(float AxisAmount);

	void AddRandomGun();
	void RemoveRandomGun();

	void AddRandomCrew();
	void RemoveRandomCrew();

	void Fire();
	void Grapple();
	void ReleaseGrapple();
	void PauseGame();

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

	//********************************************************************************************************
	//********************************************************************************************************
	//Timers

	UPROPERTY()
		FTimerHandle StrafeCooldownTimer;
	float mStrafeCooldownDuration = 2.0f;
	bool mCooldown = false;
	void StrafeCooldownElapsed();

	//********************************************************************************************************
	//********************************************************************************************************
	//Grappling Hook

	bool mGrappling = false;
	bool mGrapplingEnabled = false;
	AActor* mGrapplePoint;

	UPROPERTY()
		AScenario1GameModeBase* GameModeRef;
};
