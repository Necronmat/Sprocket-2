// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Math/UnrealMathUtility.h"
#include "CrewComponent.generated.h"

enum ECrewType
{
	WeaponsSpecialist,
	Fisherman,
	RocketEngineer,
	Mechanic,
	Electrician,
	FirstMate,
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SPROCKET_API UCrewComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCrewComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	

	ECrewType GetCrew();
	void SetCrew(ECrewType newCrew);

	float GetPositive();
	void SetPositive(float newPos);

	float GetNegative();
	void SetNegative(float newNeg);

	int GetCost();
	void SetCost(int newCost);

	TArray<FString> GetDialog();
	void SetDialog(TArray<FString> newDialog);
	void AddDialog(FString newDialog);
	void ClearDialog();

private:

	ECrewType mCrew = WeaponsSpecialist;

	float mPositive = 0;

	float mNegative = 0;

	int mCost = 1;

	TArray<FString> mDialog;
		
};
