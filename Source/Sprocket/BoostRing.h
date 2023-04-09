// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "BoostRing.generated.h"

UCLASS()
class SPROCKET_API ABoostRing : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoostRing();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* RingMesh;
	UPROPERTY(EditAnywhere)
		USphereComponent* RingCollisionSphere;

	UPROPERTY(EditAnywhere)
		bool bRotating = false;
	UPROPERTY(EditAnywhere)
		float rotationSpeed = 0.0f;
	UPROPERTY(EditAnywhere)
		FVector3f rotationDirection = FVector3f(0.0f, 0.0f, 0.0f);

	UPROPERTY(EditAnywhere)
		float boostAmount = 100.0f;
};