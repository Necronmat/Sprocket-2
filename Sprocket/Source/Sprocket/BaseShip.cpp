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
	//Super::Tick(DeltaTime);

	//mShipMesh->AddImpulse(GetActorForwardVector() * mThrusterSpeed * DeltaTime);
	////UE_LOG(LogTemp, Warning, TEXT("Speed is %f"), mThrusterSpeed);

	//if (mCooldown)
	//{
	//	mStrafeCooldown -= 1 * DeltaTime;

	//	if (mStrafeCooldown <= 0.0f)
	//	{
	//		mCooldown = false;
	//	}
	//}

	//if (mGrappling)
	//{
	//	mCable->EndLocation = mGrapplePoint->GetActorLocation();
	//	mCable->CableLength = FVector3d::Dist(GetActorLocation(), mGrapplePoint->GetActorLocation());
	//	mHook->SetWorldLocation(mGrapplePoint->GetActorLocation());

	//	mShipMesh->AddForce((mGrapplePoint->GetActorLocation() - GetActorLocation()) * mGrappleForce / mShipWeight * FVector3d::Dist(GetActorLocation() * DeltaTime, mGrapplePoint->GetActorLocation()));
	//}
}

// Called to bind functionality to input
void ABaseShip::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	/*Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("Throttle"), this, &ABaseShip::Throttle);
	PlayerInputComponent->BindAxis(TEXT("Pitch"), this, &ABaseShip::Pitch);
	PlayerInputComponent->BindAxis(TEXT("Yaw"), this, &ABaseShip::Yaw);
	PlayerInputComponent->BindAxis(TEXT("Roll"), this, &ABaseShip::Roll);
	PlayerInputComponent->BindAxis(TEXT("StrafeHorizontal"), this, &ABaseShip::StrafeHorizontal);
	PlayerInputComponent->BindAxis(TEXT("StrafeVertical"), this, &ABaseShip::StrafeVertical);

	PlayerInputComponent->BindAction(TEXT("RandomGun"), IE_Pressed, this, &ABaseShip::AddRandomGun);
	PlayerInputComponent->BindAction(TEXT("DeleteGun"), IE_Pressed, this, &ABaseShip::RemoveRandomGun);

	PlayerInputComponent->BindAction(TEXT("PrimaryFire"), IE_Pressed, this, &ABaseShip::Fire);
	PlayerInputComponent->BindAction(TEXT("Grapple"), IE_Pressed, this, &ABaseShip::Grapple);
	PlayerInputComponent->BindAction(TEXT("Grapple"), IE_Released, this, &ABaseShip::ReleaseGrapple);
	PlayerInputComponent->BindAction(TEXT("Pause"),IE_Pressed, this, &ABaseShip::PauseGame);
	GameModeRef = Cast<AScenario1GameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));*/
}

void ABaseShip::AddGun(AShipGun Gun)
{
}

void ABaseShip::AddGun(float range, float damage, float force, float speed)
{
	
}

float ABaseShip::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	mShields -= DamageAmount;
	if (mShields < 0.0f) {
		float remainingDamage = 0.0 - mShields;
		mHull -= remainingDamage;
		if (mHull < 0.0f) {
			FString message = TEXT("Player has Died, Please Restart");

			GEngine->AddOnScreenDebugMessage(0, 10, FColor::Yellow, message);
			Destroy();
		}
	}
	return DamageAmount;
}

void ABaseShip::Throttle(float AxisAmount)
{
	/*if (mThrusterSpeed <= 0 && AxisAmount > 0)
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
	}*/
}

void ABaseShip::Pitch(float AxisAmount)
{
	//AddActorLocalRotation(FRotator(-AxisAmount, 0, 0));
}

void ABaseShip::Yaw(float AxisAmount)
{
	//AddActorLocalRotation(FRotator(0, AxisAmount, 0));
}

void ABaseShip::Roll(float AxisAmount)
{
	//AddActorLocalRotation(FRotator(0, 0, AxisAmount));
}

void ABaseShip::StrafeHorizontal(float AxisAmount)
{
	//if (mStrafeCooldown <= 0.0f && abs(AxisAmount) > 0)
	//{
	//	mShipMesh->AddImpulse(GetActorRightVector() * AxisAmount * mStrafeSpeed);
	//	mStrafeCooldown = 2.0f;
	//	mCooldown = true;
	//}	
}

void ABaseShip::StrafeVertical(float AxisAmount)
{
	/*if (mStrafeCooldown <= 0.0f && abs(AxisAmount) > 0)
	{
		mShipMesh->AddImpulse(GetActorUpVector() * AxisAmount * mStrafeSpeed);
		mStrafeCooldown = 2.0f;
		mCooldown = true;
	}*/

}

void ABaseShip::Fire()
{
	/*for (AShipGun* gun : mGuns)
	{
		gun->FireGun();
	}*/
}

void ABaseShip::Grapple()
{
	//AController* ControllerRef = GetController();
	//FVector CameraLocation;
	//FRotator CameraRotation;

	//ControllerRef->GetPlayerViewPoint(CameraLocation, CameraRotation);

	////Gets the end of the raycast
	//FVector End = CameraLocation + CameraRotation.Vector() * mGrappleLength;

	///*FVector ShipLocation = GetActorLocation();
	//FRotator ShipRotation = GetActorRotation();

	//FVector End = ShipLocation + ShipRotation.Vector() * mGrappleLength;*/

	//FCollisionQueryParams CollisionParams;
	//CollisionParams.AddIgnoredActor(this);
	//CollisionParams.AddIgnoredComponent(mCable);

	////The hit result of the raycast, uses the custom enemy channel
	//FHitResult Hit;
	//bool bDidHit = GetWorld()->LineTraceSingleByChannel(Hit, CameraLocation, End, ECC_Visibility, CollisionParams);
	//DrawDebugLine(GetWorld(), CameraLocation, End, FColor::Red, false, 1, 0, 5);

	//if (Cast<AActor>(Hit.GetActor()))
	//{
	//	mGrappling = true;
	//	mGrapplePoint = Hit.GetActor();
	//	mCable->SetVisibility(true);
	//	mCable->EndLocation = mGrapplePoint->GetActorLocation();
	//	mHook->SetWorldLocation(mGrapplePoint->GetActorLocation());
	//}

	//if (Cast<ABaseShip>(Hit.GetActor()))
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Hit ship"), mThrusterSpeed);
	//}
}

void ABaseShip::ReleaseGrapple()
{
	/*mGrappling = false;
	mCable->SetVisibility(false);*/
}

void ABaseShip::AddRandomGun()
{
	/*FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = GetInstigator();

	AShipGun* tempGun = GetWorld()->SpawnActor<AShipGun>(mBaseGun, GetActorLocation() + FTransform(GetActorRotation()).TransformVector(FVector3d(0.0f, 0.0f, 0.0f)), GetActorRotation(), spawnParams);
	tempGun->AttachToShip(mShipMesh, FVector(FMath::RandRange(-30.0f, 30.0f), FMath::RandRange(-30.0f, 30.0f), FMath::RandRange(-30.0f, 30.0f)), GetActorRotation().Quaternion(), FVector(0.03f, 0.03f, 0.03f));
	tempGun->SetGunStats(FMath::RandRange( 0.0f, 100.0f), 1.f, FMath::RandRange(0.0f, 100.0f), FMath::RandRange(0.0f, 6000.0f));
	mGuns.Add(tempGun);*/
}

void ABaseShip::RemoveRandomGun()
{
	/*if (mGuns.Num() > 0)
	{
		int index = FMath::RandRange(0, mGuns.Num() - 1);
		mGuns[index]->Destroy();
		mGuns.RemoveAt(index);
	}*/
}	

void ABaseShip::PauseGame()
{
	//GameModeRef->TogglePaused();
}

//float ABaseShip::GetCurrentSpeed()
//{
//	//return mThrusterSpeed;
//}
//
//float ABaseShip::GetMaxSpeed()
//{
//	//return mMaxSpeed;
//}
//
//float ABaseShip::GetCurrentHull()
//{
//	//return mHull;
//}
//
//float ABaseShip::GetMaxHull()
//{
//	//return mMaxHull;
//}
//
//float ABaseShip::GetCurrentShield()
//{
//	//return mShields;
//}
//
//float ABaseShip::GetMaxShield()
//{
//	//return mMaxShields;
//}

