// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "ShipProjectile.generated.h"

UCLASS()
class SPROCKET_API AShipProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShipProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Function that is called when the projectile hits something.
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

	void FireInDirection(const FVector& ShootDirection);

private:

	UPROPERTY(VisibleDefaultsOnly)
		USphereComponent* mCollision;

	UPROPERTY(VisibleAnywhere)
		UProjectileMovementComponent* mMovementComp;

	UPROPERTY(VisibleDefaultsOnly)
		UStaticMeshComponent* mProjectileMesh;

	UPROPERTY(VisibleDefaultsOnly)
		UMaterialInstanceDynamic* mProjectileMaterial; 

};
