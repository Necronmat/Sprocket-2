// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseShip.generated.h"

class UStaticMeshComponent;
class USpringArmComponent;
class UCameraComponent;
class UPawnMovementComponent;

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

private:

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* mShipMesh;

	UPROPERTY(EditAnywhere)
		USpringArmComponent* mSpringArm;

	UPROPERTY(EditAnywhere)
		UCameraComponent* mCamera;

	//UPROPERTY(EditAnywhere)
		//UPawnMovementComponent* mMovement;

	//The current speed of the thrusters
	float mThrusterSpeed = 0.0f;

	//Speed of the strafe thrusters
	UPROPERTY(EditAnywhere)
		float mStrafeSpeed = 10.0f;

	//Player control funtions
	void Throttle(float AxisAmount);
	void Pitch(float AxisAmount);
	void Yaw(float AxisAmount);
	void Roll(float AxisAmount);
	void StrafeHorizontal(float AxisAmount);
	void StrafeVertical(float AxisAmount);
};
