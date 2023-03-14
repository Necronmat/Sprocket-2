// Fill out your copyright notice in the Description page of Project Settings.


#include "AiShipPawn.h"

// Sets default values
AAiShipPawn::AAiShipPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ShipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ship Mesh"));
	SetRootComponent(ShipMesh);
}

// Called when the game starts or when spawned
void AAiShipPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAiShipPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAiShipPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float AAiShipPawn::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	UE_LOG(LogTemp, Warning, TEXT("Damage dealt is %f"), DamageAmount);

	Shields -= DamageAmount;
	if (Shields < 0.0f) {
		float remainingDamage = 0.0 - Shields;
		Hull -= remainingDamage;
		if (Hull < 0.0f) {
			Destroy();

		}
	}
	return DamageAmount;
}

