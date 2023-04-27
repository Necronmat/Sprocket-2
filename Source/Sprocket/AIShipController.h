// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AiShipPawn.h"
#include "BaseShipController.h"
#include "SprocketGameInstance.h"
#include "AIShipController.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;

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
	//--------------------------------------------------
	// AI Movement Related Functions
	//--------------------------------------------------

	void SetMovementTarget(FVector point, float range); //Stores message id and movement information relevant to FlyToPoint task.
	bool GetMoving();									
	const FAIRequestID GetMoveRequestId();				//Iterates message id to ensure constantly moving and informing about latest point.

	//--------------------------------------------------
	// AI Combat Related Functions
	//--------------------------------------------------

	void AddRandomGun();
	void RemoveRandomGun();
	void ShootGuns();

	void SpawnMine();

	//--------------------------------------------------
	// SFX Related Functions
	//--------------------------------------------------

	UFUNCTION(BlueprintImplementableEvent)
		void SetVolume();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		float SetThrusterVolume();

	//--------------------------------------------------
	// UI Related Functions
	//--------------------------------------------------

	//Used to calculate percent of health and shield bars above ship
	UFUNCTION(BlueprintPure)							
		float GetCurrentHull();
	UFUNCTION(BlueprintPure)
		float GetMaxHull();
	UFUNCTION(BlueprintPure)
		float GetCurrentShield();
	UFUNCTION(BlueprintPure)
		float GetMaxShield();

private:
	//--------------------------------------------------
	// Standard AI Pawn Inclusions
	//--------------------------------------------------
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
	
	UPROPERTY()
		AAiShipPawn* aiShip;
	UPROPERTY(EditAnywhere)
		UBehaviorTree* BT_HostileShipAI;				//Wanted Behaviour of Ship

	UPROPERTY() 
		ABaseShipController* playerControllerRef;		//Used to inform about ships being defeated
	UPROPERTY()
		USprocketGameInstance* mGameInstancedRef;		//Used to grab SFX volume

	//--------------------------------------------------
	// AI Movement Related
	//--------------------------------------------------
	void UpdateMovement(float DeltaTime);				//Checks and updates bt on if reached destination, then rotates and moves desired amount
	
	bool bMoving = false;								//Allows movement code to occur each tick
	FVector targetPoint = { 0.0f, 0.0f, 0.0f };
	float distanceAllowance = 0.0f;

	UPROPERTY(EditAnywhere)
		float turningRadius = 80.0f;

	void StoreMoveRequestId();							//Stores message id to send messages to BT

	uint32 nextRequestId;
	FAIRequestID moveRequestId;

	//--------------------------------------------------
	// AI Ship Stats 
	//--------------------------------------------------
	
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
