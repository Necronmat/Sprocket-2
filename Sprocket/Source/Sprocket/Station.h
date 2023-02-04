// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Station.generated.h"

UCLASS()
class SPROCKET_API AStation : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* MainStationMesh;
	UPROPERTY(EditAnywhere)
		float MainStationRotationSpeed = 0.0f;
	UPROPERTY(EditAnywhere)
		FVector3f MainStationRotationDirection = FVector3f(0.0, 0.0, 0.0);
	UPROPERTY(EditAnywhere)
		bool IsMainStationSpinning = true;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* SecondaryStationPartMesh;
	UPROPERTY(EditAnywhere)
		float SecondaryStationPartRotationSpeed = 0.0f;
	UPROPERTY(EditAnywhere)
		FVector3f SecondaryStationPartRotationDirection = FVector3f(0.0, 0.0, 0.0);
	UPROPERTY(EditAnywhere)
		bool IsSecondaryStationPartSpinning = true;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* ThirdStationPartMesh;
	UPROPERTY(EditAnywhere)
		float ThirdStationPartRotationSpeed = 0.0f;
	UPROPERTY(EditAnywhere)
		FVector3f ThirdStationPartRotationDirection = FVector3f(0.0, 0.0, 0.0);
	UPROPERTY(EditAnywhere)
		bool IsThirdStationPartSpinning = true;
};
