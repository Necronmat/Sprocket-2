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
	//mShipMesh->SetupAttachment(RootComponent);
	SetRootComponent(mShipMesh);

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

	mShipMesh->AddImpulse(GetActorForwardVector() * mThrusterSpeed * DeltaTime);
	UE_LOG(LogTemp, Warning, TEXT("Speed is %f"), mThrusterSpeed);

	FRotator DeltaRotation = GetActorRotation();
	SetActorRotation(FRotator((DeltaRotation.Pitch > 180) ? DeltaRotation.Pitch - 360 : DeltaRotation.Pitch,
					(DeltaRotation.Yaw > 180) ? DeltaRotation.Yaw - 360 : DeltaRotation.Yaw,
					(DeltaRotation.Roll > 180) ? DeltaRotation.Roll - 360 : DeltaRotation.Roll));

	if (mCooldown)
	{
		mStrafeCooldown -= 1 * DeltaTime;

		if (mStrafeCooldown <= 0.0f)
		{
			mCooldown = false;
		}
	}
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
	if (mThrusterSpeed <= 0 && AxisAmount > 0)
	{
		mShipMesh->AddImpulse(GetActorForwardVector() * mMaxSpeed);
		mThrusterSpeed = mMaxSpeed / 3;
	}

	mThrusterSpeed += AxisAmount * mAcceleration;

	if (mThrusterSpeed > mMaxSpeed)
	{
		mThrusterSpeed = mMaxSpeed;
	}
	else if (mThrusterSpeed < 0)
	{
		mThrusterSpeed = 0.0f;
	}
}

void ABaseShip::Pitch(float AxisAmount)
{
	FRotator DeltaRotation = GetActorRotation();

	if (DeltaRotation.Roll > 45 && DeltaRotation.Roll < 135)
	{
		AddControllerYawInput(-AxisAmount);
	}
	else if (DeltaRotation.Roll < -45 && DeltaRotation.Roll > -135)
	{
		AddControllerYawInput(AxisAmount);
	}
	else if (DeltaRotation.Roll >= 135 || DeltaRotation.Roll <= -135)
	{
		AddControllerPitchInput(AxisAmount);
	}
	else
	{
		AddControllerPitchInput(AxisAmount);
	}

	//UE_LOG(LogTemp, Warning, TEXT("Roll is %f"), float(DeltaRotation.Roll));
}

void ABaseShip::Yaw(float AxisAmount)
{
	FRotator DeltaRotation = GetActorRotation();

	if (DeltaRotation.Roll > 45 && DeltaRotation.Roll < 135)
	{
		AddControllerPitchInput(AxisAmount);
	}
	else if (DeltaRotation.Roll < -45 && DeltaRotation.Roll > -135)
	{
		AddControllerPitchInput(AxisAmount);
	}
	else if (DeltaRotation.Roll >= 135 || DeltaRotation.Roll <= -135)
	{
		AddControllerYawInput(-AxisAmount);
	}
	else
	{
		AddControllerYawInput(AxisAmount);
	}

	//UE_LOG(LogTemp, Warning, TEXT("Roll is %f"), float(DeltaRotation.Roll));
}

void ABaseShip::Roll(float AxisAmount)
{
	AddControllerRollInput(AxisAmount);
}

void ABaseShip::StrafeHorizontal(float AxisAmount)
{
	if (mStrafeCooldown <= 0.0f && abs(AxisAmount) > 0)
	{
		mShipMesh->AddImpulse(GetActorRightVector() * AxisAmount * mStrafeSpeed);
		mStrafeCooldown = 2.0f;
		mCooldown = true;
	}	
}

void ABaseShip::StrafeVertical(float AxisAmount)
{
	if (mStrafeCooldown <= 0.0f && abs(AxisAmount) > 0)
	{
		mShipMesh->AddImpulse(GetActorUpVector() * AxisAmount * mStrafeSpeed);
		mStrafeCooldown = 2.0f;
		mCooldown = true;
	}

}

