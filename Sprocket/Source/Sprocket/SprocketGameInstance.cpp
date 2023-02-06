// Fill out your copyright notice in the Description page of Project Settings.


#include "SprocketGameInstance.h"

bool USprocketGameInstance::GetPaused()
{
	return bPaused;
}

void USprocketGameInstance::SetPaused(bool setPaused)
{
	bPaused = setPaused;
}

float USprocketGameInstance::GetMusicVolume()
{
	return MusicVolume;
}

float USprocketGameInstance::GetSoundVolume()
{
	return SoundVolume;
}

void USprocketGameInstance::SetMusicVolume(float volume)
{
	MusicVolume = volume;
}

void USprocketGameInstance::SetSoundVolume(float volume)
{
	SoundVolume = volume;
}
