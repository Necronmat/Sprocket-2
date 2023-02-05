// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShipGun.generated.h"

UCLASS()
class SPROCKET_API AShipGun : public AActor
{
	GENERATED_BODY()
	
public:	
	AShipGun();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Sets default values
	void SetGunStats(float range, float damage, float force, float speed);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void FireGun();

	void AttachToShip(USceneComponent* parent, FVector offset, FQuat rotation, FVector scale);

private:

	UPROPERTY(VisibleDefaultsOnly)
		UStaticMeshComponent* mGunMesh;

	UPROPERTY(VisibleDefaultsOnly)
		UMaterialInstance* mGunMaterial;

	//********************************************************************************************************
	//********************************************************************************************************
	//Gun stats

	//Range is the lifespan of the projectiles in seconds
	UPROPERTY(EditAnywhere)
		float mGunRange = 2.0f;

	UPROPERTY(EditAnywhere)
		float mGunDamage = 1.0f;

	UPROPERTY(EditAnywhere)
		float mGunForce = 100.0f;

	UPROPERTY(EditAnywhere)
		float mGunCooldown = 0.5f;

	UPROPERTY(EditAnywhere)
		float mProjectileSpeed = 3000.0f;

	float mGunTimer = 0.0f;

	bool mCanFire = true;

	//********************************************************************************************************
	//********************************************************************************************************
	//Projectile

	UPROPERTY(EditAnywhere)
		FVector mProjectileSpawn;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<class AShipProjectile> mProjectile;

};
