// Fill out your copyright notice in the Description page of Project Settings.


#include "Earth.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AEarth::AEarth()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	EarthMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Earth Mesh"));
	SetRootComponent(EarthMesh);

	CloudMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cloud Mesh"));
	CloudMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AEarth::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEarth::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//Allows earth and clouds to spin at different rates and directions
	if(IsEarthSpinning) AddActorLocalRotation(FRotator(EarthRotationDirection.X * EarthRotationSpeed, EarthRotationDirection.Y * EarthRotationSpeed, EarthRotationDirection.Z * EarthRotationSpeed));
	if(IsCloudSpinning) CloudMesh->AddLocalRotation(FRotator(CloudRotationDirection.X * CloudRotationSpeed, CloudRotationDirection.Y * CloudRotationSpeed, CloudRotationDirection.Z * CloudRotationSpeed));
}

