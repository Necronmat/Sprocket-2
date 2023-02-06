// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Scenario1GameModeBase.h"
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
	UFUNCTION() void OnFarOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
	UFUNCTION() void OnApproachOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
	UFUNCTION() void OnLandingOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
	UFUNCTION() void OnFarOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	UFUNCTION() void OnApproachOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	UFUNCTION() void OnLandingOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
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

	UPROPERTY(EditAnywhere)
		USphereComponent* FarSensorCollisionSphere;
	UPROPERTY(EditAnywhere)
		USphereComponent* ApproachSensorCollisionSphere;
	UPROPERTY(EditAnywhere)
		USphereComponent* LandingSensorCollisionSphere;
	UPROPERTY(EditAnywhere)
		int LandingSensorPartAttachment = 0;

	UPROPERTY(EditAnywhere)
		int StationId = -1;

	UPROPERTY()
		AScenario1GameModeBase* GameModeRef;
};