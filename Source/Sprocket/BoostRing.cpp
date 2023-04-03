// Fill out your copyright notice in the Description page of Project Settings.


#include "BoostRing.h"

// Sets default values
ABoostRing::ABoostRing()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ring Mesh"));
	SetRootComponent(RingMesh);
	RingCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Ring Collision Sphere"));
	RingCollisionSphere->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABoostRing::BeginPlay()
{
	Super::BeginPlay();
	RingCollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &ABoostRing::OnOverlapBegin);
	//RingCollisionSphere->OnComponentEndOverlap.AddDynamic(this, &ABoostRing::OnOverlapEnd);
}

// Called every frame
void ABoostRing::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bRotating) {
		rotationDirection.Normalize();
		AddActorLocalRotation(FRotator(rotationDirection.X * rotationSpeed, rotationDirection.Y * rotationSpeed, rotationDirection.Z * rotationSpeed));
	}
}

void ABoostRing::OnOverlapBegin(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{
	UPrimitiveComponent* RootComp = Cast<UPrimitiveComponent>(otherActor->GetRootComponent());

	RootComp->AddImpulse(otherActor->GetActorForwardVector() * boostAmount * RootComp->GetMass());
}


