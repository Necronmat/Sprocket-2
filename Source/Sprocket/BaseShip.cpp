// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseShip.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "CableComponent.h"
#include "ShipGun.h"
#include "GameFramework/PawnMovementComponent.h"

// Sets default values
ABaseShip::ABaseShip()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;	

	mShipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ship Mesh"));
	//mShipMesh->SetupAttachment(mCable);
	SetRootComponent(mShipMesh);

	//Setiting up the spring arm
	mSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Attachment Arm"));
	mSpringArm->SetupAttachment(RootComponent);

	//Setting up the camera
	mCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPerson Camera"));
	mCamera->SetupAttachment(mSpringArm);

	//Setting up Grappling hook
	mCable = CreateDefaultSubobject<UCableComponent>(TEXT("Grappling Hook"));
	FAttachmentTransformRules rules = FAttachmentTransformRules::SnapToTargetIncludingScale;
	rules.LocationRule = EAttachmentRule::KeepWorld;
	rules.RotationRule = EAttachmentRule::KeepWorld;
	rules.ScaleRule = EAttachmentRule::KeepWorld;
	rules.bWeldSimulatedBodies = true;
	//SetRootComponent(mCable);
	mCable->SetupAttachment(RootComponent);
	//mCable->AttachToComponent(mShipMesh, rules);
	mCable->CableLength = mGrappleLength;

	mHook = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hook"));
	mHook->SetupAttachment(RootComponent);
	//mHook->AttachToComponent(mCable, rules);

	//Have the player automatically possess this character
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void ABaseShip::BeginPlay()
{
	Super::BeginPlay();	
	
}

// Called every frame
void ABaseShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

float ABaseShip::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	GetController()->TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	return DamageAmount;
}
