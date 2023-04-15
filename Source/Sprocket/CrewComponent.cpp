// Fill out your copyright notice in the Description page of Project Settings.


#include "CrewComponent.h"

// Sets default values for this component's properties
UCrewComponent::UCrewComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...

	mCrew = ECrewType(FMath::RandRange(0, 5));

	mPositive = FMath::FRandRange(1.0f, 1.12f);
	mNegative = FMath::FRandRange(1.0f, 1.05f);

	//Increase cost if the positive is much bigger than the negative
	if (mPositive - mNegative > mPositive * 0.7f)
	{
		mCost = 2.0f;
	}
	//Decrease cost if the positive is much smaller than the negative
	else if (mPositive - mNegative < mPositive * 0.3f)
	{
		mCost = 0.5f;
	}

	//Add Defualt Crew Dialog
	mDialog.Add(FString("OH!... That's what that button does. Errrrrrr. Nothing to report captain."));
}


// Called when the game starts
void UCrewComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

ECrewType UCrewComponent::GetCrew()
{
	return mCrew;
}

void UCrewComponent::SetCrew(ECrewType newCrew)
{
	mCrew = newCrew;
}

float UCrewComponent::GetPositive()
{
	return mPositive;
}

void UCrewComponent::SetPositive(float newPos)
{
	mPositive = newPos;
}

float UCrewComponent::GetNegative()
{
	return mNegative;
}

void UCrewComponent::SetNegative(float newNeg)
{
	mNegative = newNeg;
}

int UCrewComponent::GetCost()
{
	return mCost;
}

void UCrewComponent::SetCost(int newCost)
{
	mCost = newCost;
}

TArray<FString> UCrewComponent::GetDialog()
{
	return mDialog;
}

void UCrewComponent::SetDialog(TArray<FString> newDialog)
{
	mDialog = newDialog;
}

void UCrewComponent::AddDialog(FString newDialog)
{
	mDialog.Add(newDialog);
}

void UCrewComponent::ClearDialog()
{
	mDialog.Empty();
}

