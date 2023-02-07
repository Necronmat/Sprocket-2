// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "Mine.generated.h"

UCLASS()
class SPROCKET_API AMine : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMine();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UFUNCTION() void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);
	UFUNCTION() void ExplodeMine();

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* MineMesh;
	UPROPERTY(EditAnywhere)
		USphereComponent* MineSphereComponent;
	UPROPERTY()
		FTimerHandle MineTimer;
	UPROPERTY(EditAnywhere)
		float MineCountdown = 2.0f;
	UPROPERTY(EditAnywhere)
		float MineDamage = 75.0f;
	UPROPERTY(EditAnywhere)
		float MineMinDamage = 10.0f;
	UPROPERTY(EditAnywhere)
		float MineInnerRadius = 100.0f;
	UPROPERTY(EditAnywhere)
		float MineOuterRadius = 1000.0f;
	UPROPERTY(EditAnywhere)
		float MineDamageFalloff = 2.0f;
};
