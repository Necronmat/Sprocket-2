// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AiShipPawn.generated.h"


class AShipGun;

UCLASS()
class SPROCKET_API AAiShipPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAiShipPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	//--------------------------------------------------
	// Base Actor Setup
	//--------------------------------------------------
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* ShipMesh;

	//--------------------------------------------------
	// Spawn Templates
	//--------------------------------------------------
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class AShipGun> mBaseGun;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class AMine> mMine;

	//--------------------------------------------------
	// Ship Gun Storage
	//--------------------------------------------------
	UPROPERTY(EditAnywhere)
		TArray<AShipGun*> mGuns;

private:
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
	
	//--------------------------------------------------
	// Ship Stats
	//--------------------------------------------------
	UPROPERTY(EditAnywhere)
	float BaseHull = 100.0f;
	float Hull = BaseHull;
	float BaseShields = 50.0f;
	float Shields = BaseShields;
};
