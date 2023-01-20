// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Earth.generated.h"

UCLASS()
class SPROCKET_API AEarth : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEarth();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* EarthMesh;
	UPROPERTY(EditAnywhere)
		float EarthRotationSpeed = 5.0f;
	UPROPERTY(EditAnywhere)
		FVector3f EarthRotationDirection = FVector3f(1.0, 0.2, 0.0);
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* CloudMesh;
	UPROPERTY(EditAnywhere)
		float CloudRotationSpeed = 2.0f;
	UPROPERTY(EditAnywhere)
		FVector3f CloudRotationDirection = FVector3f(-1.5, 0.2, 0.4);
};
