// Fill out your copyright notice in the Description page of Project Settings.


#include "TutorialRing.h"
#include "TutorialGameMode.h"
#include "Kismet/GamePlayStatics.h"

// Sets default values
ATutorialRing::ATutorialRing()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ring Mesh"));
	SetRootComponent(RingMesh);
	RingCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Ring Collision Sphere"));
	RingCollisionSphere->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ATutorialRing::BeginPlay()
{
	Super::BeginPlay();
	RingCollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &ATutorialRing::OnOverlapBegin);
	GameModeRef = Cast<ATutorialGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
}

// Called every frame
void ATutorialRing::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bRotating) {
		rotationDirection.Normalize();
		AddActorLocalRotation(FRotator(rotationDirection.X * rotationSpeed, rotationDirection.Y * rotationSpeed, rotationDirection.Z * rotationSpeed));
	}
}

void ATutorialRing::OnOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{
	GameModeRef->TriggerTutorialRingEvent(ringId);
}

