// Fill out your copyright notice in the Description page of Project Settings.


#include "Station.h"

// Sets default values
AStation::AStation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MainStationMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Primary Station Mesh"));
	SetRootComponent(MainStationMesh);
	SecondaryStationPartMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Secondary Station Part Mesh"));
	SecondaryStationPartMesh->SetupAttachment(RootComponent);
	ThirdStationPartMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Third Station Part Mesh"));
	ThirdStationPartMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AStation::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (IsMainStationSpinning) AddActorLocalRotation(FRotator(MainStationRotationDirection.X * MainStationRotationSpeed, MainStationRotationDirection.Y * MainStationRotationSpeed, MainStationRotationDirection.Z * MainStationRotationSpeed));
	if (IsSecondaryStationPartSpinning) SecondaryStationPartMesh->AddLocalRotation(FRotator(SecondaryStationPartRotationDirection.X * SecondaryStationPartRotationSpeed, SecondaryStationPartRotationDirection.Y * SecondaryStationPartRotationSpeed, SecondaryStationPartRotationDirection.Z * SecondaryStationPartRotationSpeed));
	if (IsThirdStationPartSpinning) ThirdStationPartMesh->AddLocalRotation(FRotator(ThirdStationPartRotationDirection.X * ThirdStationPartRotationSpeed, ThirdStationPartRotationDirection.Y * ThirdStationPartRotationSpeed, ThirdStationPartRotationDirection.Z * ThirdStationPartRotationSpeed));
}

