// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "SprocketGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class SPROCKET_API USprocketGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
		bool GetPaused();
	UFUNCTION(BlueprintCallable)
		void SetPaused(bool setPaused);
	UFUNCTION(BlueprintPure)
		float GetMusicVolume();
	UFUNCTION(BlueprintPure)
		float GetSoundVolume();
	UFUNCTION(BlueprintCallable)
		void SetMusicVolume(float volume);
	UFUNCTION(BlueprintCallable)
		void SetSoundVolume(float volume);

private:
	UPROPERTY()
		bool bPaused = false;
	UPROPERTY()
		float MusicVolume = 1.0f;
	UPROPERTY()
		float SoundVolume = 1.0f;
};

