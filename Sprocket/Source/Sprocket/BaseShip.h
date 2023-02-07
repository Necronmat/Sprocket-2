// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Scenario1GameModeBase.h"
#include "BaseShip.generated.h"

class UStaticMeshComponent;
class USpringArmComponent;
class UCameraComponent;
class UCableComponent;
class AShipGun;

UCLASS()
class SPROCKET_API ABaseShip : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseShip();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void AddGun(AShipGun Gun);

	void AddGun(float range, float damage, float force, float speed);

private:

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	//********************************************************************************************************
	//********************************************************************************************************
	//BLueprint componenets

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* mShipMesh;

	UPROPERTY(EditAnywhere)
		USpringArmComponent* mSpringArm;

	UPROPERTY(EditAnywhere)
		UCameraComponent* mCamera;

	UPROPERTY(EditAnywhere)
		UCableComponent* mCable;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* mHook;

	//********************************************************************************************************
	//********************************************************************************************************
	//Ship Stats

	UPROPERTY(EditAnywhere)
		float mAcceleration = 200.0f;

	UPROPERTY(EditAnywhere)
		float mMaxSpeed = 200000.0f;

	UPROPERTY(EditAnywhere)
		float mMaxShields = 10.0f;

	UPROPERTY(EditAnywhere)
		float mMaxHull = 10.0f;

	UPROPERTY(EditAnywhere)
		float mShipSize = 10.0f;

	UPROPERTY(EditAnywhere)
		float mShipWeight = 10.0f;

	UPROPERTY(EditAnywhere)
		float mMaxPower = 10.0f;

	//Speed of the strafe thrusters
	UPROPERTY(EditAnywhere)
		float mStrafeSpeed = 200000.0f;

	UPROPERTY(EditAnywhere)
		float mGrappleForce = 1;

	UPROPERTY(EditAnywhere)
		float mGrappleLength = 100000;	

	//********************************************************************************************************
	//********************************************************************************************************
	//Current Ship Speed
	
	float mThrusterSpeed = 0.0f;

	float mHull = 10.0f;

	float mShields = 10.0f;

	float mPowerUsage = 0.0f;

	//********************************************************************************************************
	//********************************************************************************************************
	//Timers

	float mStrafeCooldown = 0.0f;

	bool mCooldown = false;

	//********************************************************************************************************
	//********************************************************************************************************
	//Grappling Hook

	bool mGrappling = false;

	AActor* mGrapplePoint;

	//********************************************************************************************************
	//********************************************************************************************************
	//Shooting

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class AShipGun> mBaseGun;

	UPROPERTY(EditAnywhere)
		TArray<AShipGun*> mGuns;
	
	//********************************************************************************************************
	//********************************************************************************************************
	//Player control funtions

	void Throttle(float AxisAmount);
	void Pitch(float AxisAmount);
	void Yaw(float AxisAmount);
	void Roll(float AxisAmount);
	void StrafeHorizontal(float AxisAmount);
	void StrafeVertical(float AxisAmount);

	void AddRandomGun();
	void RemoveRandomGun();

	void Fire();
	void Grapple();
	void ReleaseGrapple();
	void PauseGame();

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

	UPROPERTY()
		AScenario1GameModeBase* GameModeRef;
};
