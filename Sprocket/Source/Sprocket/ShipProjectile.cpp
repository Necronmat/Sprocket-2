// Fill out your copyright notice in the Description page of Project Settings.


#include "ShipProjectile.h"

// Sets default values
AShipProjectile::AShipProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Use a sphere as a simple collision representation.
	mCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Collision"));
	// Set the sphere's collision radius.
	mCollision->InitSphereRadius(15.0f);
	// Set the sphere's collision profile name to "Projectile".
	mCollision->BodyInstance.SetCollisionProfileName(TEXT("Projectile"));
	// Event called when component hits something.
	mCollision->OnComponentHit.AddDynamic(this, &AShipProjectile::OnHit);
	// Set the root component to be the collision component.
	RootComponent = mCollision;

	mProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile Mesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	mProjectileMesh->SetStaticMesh(Mesh.Object);

	// Use this component to drive this projectile's movement.
	mMovementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Movement Component"));
	mMovementComp->SetUpdatedComponent(mCollision);
	mMovementComp->InitialSpeed = 3000.0f;
	mMovementComp->MaxSpeed = 3000.0f;
	mMovementComp->bRotationFollowsVelocity = true;
	mMovementComp->bShouldBounce = false;
	mMovementComp->Bounciness = 0.3f;
	mMovementComp->ProjectileGravityScale = 0.0f;

	static ConstructorHelpers::FObjectFinder<UMaterial>Material(TEXT("Material'/Game/PlayerShipAssets/M_Projectile.M_Projectile'"));
	mProjectileMaterial = UMaterialInstanceDynamic::Create(Material.Object, mProjectileMesh);
	mProjectileMesh->SetMaterial(0, mProjectileMaterial);
	mProjectileMesh->SetRelativeScale3D(FVector(0.09f, 0.09f, 0.09f));
	mProjectileMesh->SetupAttachment(RootComponent);
		
	InitialLifeSpan = 3.0f;
}

// Called when the game starts or when spawned
void AShipProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShipProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AShipProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != this && OtherComponent->IsSimulatingPhysics())
	{
		OtherComponent->AddImpulseAtLocation(mMovementComp->Velocity * 100.0f, Hit.ImpactPoint);
	}

	Destroy();
}

void AShipProjectile::FireInDirection(const FVector& ShootDirection)
{
	mMovementComp->Velocity = ShootDirection * mMovementComp->InitialSpeed;
}

