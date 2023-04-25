// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AiShipPawn.h"
#include "BaseShipController.h"
#include "AIShipController.generated.h"

/**
 * 
 */
UCLASS()
class SPROCKET_API AAIShipController : public AAIController
{
	GENERATED_BODY()
	
protected:
	virtual void OnPossess(APawn* InPawn) override;
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintImplementableEvent)
		void SetVolume();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		float SetThrusterVolume();

	void SetMovementTarget(FVector point, float range);
	bool GetMoving();

	void AddRandomGun();
	void RemoveRandomGun();
	void ShootGuns();
	
	const FAIRequestID GetMoveRequestId();

	UFUNCTION(BlueprintPure)
		float GetCurrentHull();
	UFUNCTION(BlueprintPure)
		float GetMaxHull();
	UFUNCTION(BlueprintPure)
		float GetCurrentShield();
	UFUNCTION(BlueprintPure)
		float GetMaxShield();

private:

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	void UpdateMovement(float DeltaTime);	

	bool bMoving = false;
	FVector targetPoint = { 0.0f, 0.0f, 0.0f };
	float distanceAllowance = 0.0f;

	UPROPERTY(EditAnywhere)
		float turningRadius = 80.0f;

	UPROPERTY(EditAnywhere)
		float acceleration = 200.0f;
	float speed = 0.0f;

	UPROPERTY(EditAnywhere)
		float maxSpeed = 200000.0f;

	UPROPERTY(EditAnywhere)
		float maxHull = 100.0f;
	float hull = maxHull;

	UPROPERTY(EditAnywhere)
		float maxShields = 100.0f;
	float shields = maxShields;

	void StoreMoveRequestId();

	uint32 nextRequestId;
	FAIRequestID moveRequestId;

	UPROPERTY() AAiShipPawn* aiShip;
	UPROPERTY(EditAnywhere) UBehaviorTree* BT_HostileShipAI;

	UPROPERTY() ABaseShipController* playerControllerRef;

	UPROPERTY()
		FTimerHandle ShieldCooldownTimer;
	float mShieldCooldownDuration = 5.0f;
	bool mShieldCooldown = false;
	void ShieldCooldownElapsed();

	//********************************************************************************************************
	//********************************************************************************************************
	//Sounds

	UPROPERTY(EditAnywhere)
		TArray<USoundBase*> mHullSound;

	UPROPERTY(EditAnywhere)
		USoundBase* mLaserSound;

	UPROPERTY(EditAnywhere)
		TArray<USoundBase*> mShieldSound;

	UPROPERTY(EditAnywhere)
		USoundBase* mThrusterLoopSound;

	UPROPERTY(EditAnywhere)
		float mSFXVolume = 1.0f;

	UPROPERTY(EditAnywhere)
		USoundMix* mMixer;
};
