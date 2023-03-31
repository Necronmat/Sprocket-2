// Fill out your copyright notice in the Description page of Project Settings.

#include "ShipGun.h"
#include "ShipProjectile.h"

AShipGun::AShipGun()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mGunMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Gun Mesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	mGunMesh->SetStaticMesh(Mesh.Object);
	mGunMesh->SetCollisionProfileName(TEXT("Player"));
	mGunMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	static ConstructorHelpers::FObjectFinder<UMaterialInstance>Material(TEXT("MaterialInstanceConstant'/Game/PlayerShipAssets/M_Gun_Inst.M_Gun_Inst'"));
	mGunMaterial = Material.Object;
	mDynamicGunMat = UMaterialInstanceDynamic::Create(mGunMaterial, nullptr);
	mDynamicGunMat->SetFlags(RF_Transient);
	mGunMesh->SetMaterial(0, mDynamicGunMat);
	mGunMesh->SetupAttachment(RootComponent);

	mProjectile = LoadClass<AShipProjectile>(NULL, TEXT("Class'/Script/Sprocket.ShipProjectile'"), NULL, LOAD_None, NULL);

	mGunMesh->SetCustomPrimitiveDataFloat(0, mGunTimer);
}

// Called when the game starts or when spawned
void AShipGun::BeginPlay()
{
	Super::BeginPlay();	
}

void AShipGun::SetGunStats(float range, float damage, float force, float speed)
{
	mGunRange = range;
	mGunDamage = damage;
	mGunForce = force;
	mProjectileSpeed = speed;
}

// Called every frame
void AShipGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!mCanFire)
	{
		mGunTimer -= 1 * DeltaTime;

		mGunMesh->SetCustomPrimitiveDataFloat(0, mGunTimer);

		if (mGunTimer <= 0.0f)
		{
			mCanFire = true;
		}
	}
}

void AShipGun::FireGun()
{
	if (mCanFire)
	{
		mProjectileSpawn = GetActorLocation() + FTransform(GetActorRotation()).TransformVector(FVector3d(100.0f, 0.0f, 0.0f));

		FRotator projectileRotation = GetActorRotation();
		//projectileRotation.Pitch += 10.0f;

		FActorSpawnParameters spawnParams;
		spawnParams.Owner = this;
		spawnParams.Instigator = GetInstigator();

		AShipProjectile* Projectile = GetWorld()->SpawnActor<AShipProjectile>(mProjectile, mProjectileSpawn, projectileRotation, spawnParams);
		if (Projectile)
		{
			// Set the projectile's initial trajectory.
			FVector LaunchDirection = projectileRotation.Vector();
			Projectile->FireInDirection(LaunchDirection, mProjectileSpeed, mGunForce, mGunDamage, mGunRange);
		}

		mGunTimer = mGunCooldown;
		mCanFire = false;
	}
}

void AShipGun::AttachToShip(USceneComponent* parent, FVector offset, FQuat rotation, FVector scale)
{
	FAttachmentTransformRules rules = FAttachmentTransformRules::SnapToTargetIncludingScale;
	rules.LocationRule = EAttachmentRule::SnapToTarget;
	rules.RotationRule = EAttachmentRule::SnapToTarget;
	rules.ScaleRule = EAttachmentRule::SnapToTarget;
	rules.bWeldSimulatedBodies = true;

	mGunMesh->AttachToComponent(parent, rules);

	mGunMesh->SetRelativeLocation(offset);
	//mGunMesh->SetRelativeRotation(rotation);
	mGunMesh->SetRelativeScale3D(scale);

}

