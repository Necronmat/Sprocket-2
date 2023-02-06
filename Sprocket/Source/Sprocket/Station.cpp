// Fill out your copyright notice in the Description page of Project Settings.


#include "Station.h"
#include "Kismet/GamePlayStatics.h"

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
	
	FarSensorCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Far Collision Sphere"));
	ApproachSensorCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Approach Collision Sphere"));
	LandingSensorCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Landing Collision Sphere"));
	
	FarSensorCollisionSphere->SetupAttachment(RootComponent);
	ApproachSensorCollisionSphere->SetupAttachment(RootComponent);
	if(LandingSensorPartAttachment == 0) LandingSensorCollisionSphere->SetupAttachment(RootComponent);
	else if(LandingSensorPartAttachment == 1) LandingSensorCollisionSphere->SetupAttachment(SecondaryStationPartMesh);
	else if(LandingSensorPartAttachment == 2) LandingSensorCollisionSphere->SetupAttachment(ThirdStationPartMesh);

	FarSensorCollisionSphere->SetCollisionProfileName(TEXT("Trigger"));
	ApproachSensorCollisionSphere->SetCollisionProfileName(TEXT("Trigger"));
	LandingSensorCollisionSphere->SetCollisionProfileName(TEXT("Trigger"));
}

// Called when the game starts or when spawned
void AStation::BeginPlay()
{
	Super::BeginPlay();
	FarSensorCollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AStation::OnFarOverlapBegin);
	ApproachSensorCollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AStation::OnApproachOverlapBegin);
	LandingSensorCollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &AStation::OnLandingOverlapBegin); 
	FarSensorCollisionSphere->OnComponentEndOverlap.AddDynamic(this, &AStation::OnFarOverlapEnd);
	ApproachSensorCollisionSphere->OnComponentEndOverlap.AddDynamic(this, &AStation::OnApproachOverlapEnd);
	LandingSensorCollisionSphere->OnComponentEndOverlap.AddDynamic(this, &AStation::OnLandingOverlapEnd);
	GameModeRef = Cast<AScenario1GameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	UE_LOG(LogTemp, Warning, TEXT("Test"));
}

// Called every frame
void AStation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (IsMainStationSpinning) AddActorLocalRotation(FRotator(MainStationRotationDirection.X * MainStationRotationSpeed, MainStationRotationDirection.Y * MainStationRotationSpeed, MainStationRotationDirection.Z * MainStationRotationSpeed));
	if (IsSecondaryStationPartSpinning) SecondaryStationPartMesh->AddLocalRotation(FRotator(SecondaryStationPartRotationDirection.X * SecondaryStationPartRotationSpeed, SecondaryStationPartRotationDirection.Y * SecondaryStationPartRotationSpeed, SecondaryStationPartRotationDirection.Z * SecondaryStationPartRotationSpeed));
	if (IsThirdStationPartSpinning) ThirdStationPartMesh->AddLocalRotation(FRotator(ThirdStationPartRotationDirection.X * ThirdStationPartRotationSpeed, ThirdStationPartRotationDirection.Y * ThirdStationPartRotationSpeed, ThirdStationPartRotationDirection.Z * ThirdStationPartRotationSpeed));
}

void AStation::OnFarOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Far Overlap Begun"));
	GameModeRef->StationSphereOverlap(true, StationId, 0);
}

void AStation::OnApproachOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Approach Overlap Begun"));
	GameModeRef->StationSphereOverlap(true, StationId, 1);
}

void AStation::OnLandingOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Landing Overlap Begun"));
	GameModeRef->StationSphereOverlap(true, StationId, 2);
}

void AStation::OnFarOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("Far Overlap End"));
	GameModeRef->StationSphereOverlap(false, StationId, 0);
}

void AStation::OnApproachOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("Approach Overlap End"));
	GameModeRef->StationSphereOverlap(false, StationId, 1);
}

void AStation::OnLandingOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("Landing Overlap End"));
	GameModeRef->StationSphereOverlap(false, StationId, 2);
}

