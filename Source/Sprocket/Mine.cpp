// Fill out your copyright notice in the Description page of Project Settings.


#include "Mine.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"

// Sets default values
AMine::AMine()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MineMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mine Mesh"));
	SetRootComponent(MineMesh);

	MineSphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Mine Collision Sphere"));
	MineSphereComponent->SetupAttachment(RootComponent);
	MineSphereComponent->SetCollisionProfileName(TEXT("Trigger"));
}

// Called when the game starts or when spawned
void AMine::BeginPlay()
{
	Super::BeginPlay();
	MineSphereComponent->OnComponentBeginOverlap.AddDynamic(this, &AMine::OnOverlapBegin);
}

// Called every frame
void AMine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMine::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{
	if (!GetWorld()->GetTimerManager().IsTimerActive(MineTimer)) GetWorld()->GetTimerManager().SetTimer(MineTimer, this, &AMine::ExplodeMine, MineCountdown, false);
}

void AMine::ExplodeMine()
{
	TArray<AActor*> ignoredActors;
	UGameplayStatics::ApplyRadialDamageWithFalloff(this, MineDamage, MineMinDamage, this->GetActorLocation(), MineInnerRadius, MineOuterRadius, MineDamageFalloff, UDamageType::StaticClass(), ignoredActors, this, UGameplayStatics::GetPlayerController(GetWorld(), 0), ECC_WorldDynamic);
	UGameplayStatics::PlaySoundAtLocation(this, mExplosionSound, GetActorLocation(), 1.0f, 0.3f);
	mExplosionEffectSystem = UNiagaraFunctionLibrary::SpawnSystemAttached(mExplosionEffect, MineMesh, NAME_None, FVector(0.0f, 0.0f, 0.0f), FRotator(0.f), EAttachLocation::Type::KeepRelativeOffset, true);
	GetWorld()->GetTimerManager().SetTimer(DeathTimer, this, &AMine::Die, 1.0f, false);	
}

void AMine::Die()
{
	Destroy();
}

