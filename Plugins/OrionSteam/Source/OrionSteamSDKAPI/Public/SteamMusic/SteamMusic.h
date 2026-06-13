/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "OrionSteamSDKAPI/OrionSteamSDKAPIModule.h"
#include "SteamMusicTypes.h"
#include "SteamMusic.generated.h"

UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamMusic : public UOrionSteamInterface
{
	GENERATED_BODY()
public:
	UOrionSteamMusic();
	virtual ~UOrionSteamMusic() override;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="OrionSteam")
	static UOrionSteamMusic* GetSteamMusic();

public:
	UPROPERTY(BlueprintAssignable, Category="OrionSteam|Music|Delegates")
	FOnPlaybackStatusHasChanged PlaybackStatusHasChanged;
	UPROPERTY(BlueprintAssignable, Category="OrionSteam|Music|Delegates")
	FOnVolumeHasChanged VolumeHasChanged;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	 * Checks if Steam Music is enabled.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Music")
	bool BIsEnabled();

	/**
	 * Checks if Steam Music is active. This does not necessarily a song is currently playing, it may be paused.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Music")
	bool BIsPlaying();

	/**
	 * Gets the current status of the Steam Music player.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Music")
	ESteamAudioPlaybackStatus GetPlaybackStatus();

	/**
	 * Have the Steam Music player resume playing.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Music")
	void Play();

	/**
	 * Pause the Steam Music player.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Music")
	void Pause();

	/**
	 * Have the Steam Music player play the previous song.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Music")
	void PlayPrevious();

	/**
	 * Have the Steam Music player skip to the next song.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Music")
	void PlayNext();

	/**
	 * Sets the volume of the Steam Music player.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Music")
	void SetVolume(float flVolume);

	/**
	 * Gets the current volume of the Steam Music player.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|Music")
	float GetVolume();

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if WITH_ORIONSTEAM
	STEAM_CALLBACK_MANUAL(UOrionSteamMusic, OnPlaybackStatusHasChanged, PlaybackStatusHasChanged_t, OnPlaybackStatusHasChangedCallback);
	STEAM_CALLBACK_MANUAL(UOrionSteamMusic, OnVolumeHasChanged, VolumeHasChanged_t, OnVolumeHasChangedCallback);
#endif
};
