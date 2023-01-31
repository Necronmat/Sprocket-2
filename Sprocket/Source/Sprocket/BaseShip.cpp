// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseShip.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"
#include "CableComponent.h"
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
	mSpringArm->SetupAttachment(mShipMesh);

	//Setting up the camera
	mCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPerson Camera"));
	mCamera->SetupAttachment(mSpringArm);

	//Setting up Grappling hook
	mCable = CreateDefaultSubobject<UCableComponent>(TEXT("Grappling Hook"));
	//SetRootComponent(mCable);
	mCable->SetupAttachment(mShipMesh);
	mCable->CableLength = mGrappleLength;

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
	//UE_LOG(LogTemp, Warning, TEXT("Speed is %f"), mThrusterSpeed);

	if (mCooldown)
	{
		mStrafeCooldown -= 1 * DeltaTime;

		if (mStrafeCooldown <= 0.0f)
		{
			mCooldown = false;
		}
	}

	if (mGrappling)
	{
		mGrapplePoint = mCable->EndLocation;
		mCable->SetWorldLocation(GetActorLocation());
		mCable->CableLength = FVector3d::Dist(GetActorLocation(), mGrapplePoint);

		mShipMesh->AddForce((mGrapplePoint - GetActorLocation()) * mGrappleForce / mShipWeight * FVector3d::Dist(GetActorLocation() * DeltaTime, mGrapplePoint));
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

	PlayerInputComponent->BindAction(TEXT("PrimaryFire"), IE_Pressed, this, &ABaseShip::Fire);
	PlayerInputComponent->BindAction(TEXT("Grapple"), IE_Pressed, this, &ABaseShip::Grapple);
	PlayerInputComponent->BindAction(TEXT("Grapple"), IE_Released, this, &ABaseShip::Grapple);

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
	AddActorLocalRotation(FRotator(-AxisAmount, 0, 0));
}

void ABaseShip::Yaw(float AxisAmount)
{
	AddActorLocalRotation(FRotator(0, AxisAmount, 0));
}

void ABaseShip::Roll(float AxisAmount)
{
	AddActorLocalRotation(FRotator(0, 0, AxisAmount));
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

void ABaseShip::Fire()
{
}

void ABaseShip::Grapple()
{
	if (mGrappling)
	{
		mGrappling = false;
		mCable->SetVisibility(false);
	}
	else
	{
		AController* ControllerRef = GetController();
		FVector CameraLocation;
		FRotator CameraRotation;

		ControllerRef->GetPlayerViewPoint(CameraLocation, CameraRotation);

		//Gets the end of the raycast
		FVector End = CameraLocation + CameraRotation.Vector() * mGrappleLength;

		/*FVector ShipLocation = GetActorLocation();
		FRotator ShipRotation = GetActorRotation();

		FVector End = ShipLocation + ShipRotation.Vector() * mGrappleLength;*/

		FCollisionQueryParams CollisionParams;
		CollisionParams.AddIgnoredActor(this);

		//The hit result of the raycast, uses the custom enemy channel
		FHitResult Hit;
		bool bDidHit = GetWorld()->LineTraceSingleByChannel(Hit, CameraLocation, End, ECC_Visibility, CollisionParams);
		DrawDebugLine(GetWorld(), CameraLocation, End, FColor::Red, false, 1, 0, 5);

		if (Cast<AActor>(Hit.GetActor()))
		{
			mGrappling = true;
			mGrapplePoint = Hit.ImpactPoint;
			mCable->SetVisibility(true);
			//mCable->SetWorldLocation(GetActorLocation());
			mCable->EndLocation = mGrapplePoint;
			mCable->SetAttachEndTo(Hit.GetActor(), Hit.GetActor()->GetRootComponent()->GetDefaultSceneRootVariableName());
		}

		if (Cast<ABaseShip>(Hit.GetActor()))
		{
			UE_LOG(LogTemp, Warning, TEXT("Hit ship"), mThrusterSpeed);
		}
	}	
}

