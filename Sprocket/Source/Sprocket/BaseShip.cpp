// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseShip.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PawnMovementComponent.h"

// Sets default values
ABaseShip::ABaseShip()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mShipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ship Mesh"));
	SetRootComponent(mShipMesh);

	//mMovement = CreateDefaultSubobject<UPawnMovementComponent>(TEXT("MovementComponent"));
	//mMovement->UpdatedComponent = RootComponent;

	//Setiting up the spring arm
	mSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraAttachmentArm"));
	mSpringArm->SetupAttachment(mShipMesh);

	//Setting up the camera
	mCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPerson Camera"));
	mCamera->SetupAttachment(mSpringArm);

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

	SetActorLocation(GetActorLocation() + (GetActorForwardVector().Normalize() * mThrusterSpeed * DeltaTime));
}

// Called to bind functionality to input
void ABaseShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Throttle"), this, &ABaseShip::Throttle);
	PlayerInputComponent->BindAxis(TEXT("Pitch"), this, &ABaseShip::Pitch);
	PlayerInputComponent->BindAxis(TEXT("Yaw"), this, &ABaseShip::Yaw);
	PlayerInputComponent->BindAxis(TEXT("Roll"), this, &ABaseShip::Roll);
	PlayerInputComponent->BindAxis(TEXT("StrafeHorizontal"), this, &ABaseShip::StrafeHorizontal);
	PlayerInputComponent->BindAxis(TEXT("StrafeVertical"), this, &ABaseShip::StrafeVertical);

}

void ABaseShip::Throttle(float AxisAmount)
{
	mThrusterSpeed += AxisAmount;
}

void ABaseShip::Pitch(float AxisAmount)
{
	AddControllerPitchInput(AxisAmount);
}

void ABaseShip::Yaw(float AxisAmount)
{
	AddControllerYawInput(AxisAmount);
}

void ABaseShip::Roll(float AxisAmount)
{
	AddControllerRollInput(AxisAmount);
}

void ABaseShip::StrafeHorizontal(float AxisAmount)
{
	SetActorLocation(GetActorLocation() + (GetActorRightVector().Normalize() * AxisAmount * mStrafeSpeed));

}

void ABaseShip::StrafeVertical(float AxisAmount)
{
	SetActorLocation(GetActorLocation() + (GetActorUpVector().Normalize() * AxisAmount * mStrafeSpeed));

}

