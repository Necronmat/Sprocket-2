// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TutorialRing.h"
#include "TutorialGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SPROCKET_API ATutorialGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	UFUNCTION()
		void TriggerTutorialRingEvent(int ringId);

private:
	UPROPERTY()
		int desiredRingId = -1;
	UPROPERTY()
		TArray<ATutorialRing*> stations;
};

//Planned addition but time constraints led to it being cut