/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "OrionSteamSDKAPI/OrionSteamSDKAPIModule.h"
#include "SteamRemotePlayTypes.h"
#include "SteamRemotePlay.generated.h"

UCLASS()
class ORIONSTEAMSDKAPI_API UOrionSteamRemotePlay : public UOrionSteamInterface
{
	GENERATED_BODY()
public:
	UOrionSteamRemotePlay();
	virtual ~UOrionSteamRemotePlay() override;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="OrionSteam")
	static UOrionSteamRemotePlay* GetSteamRemotePlay();

public:
	UPROPERTY(BlueprintAssignable, Category="OrionSteam|RemotePlay|Delegates")
	FOnSteamRemotePlaySessionConnected SteamRemotePlaySessionConnected;
	UPROPERTY(BlueprintAssignable, Category="OrionSteam|RemotePlay|Delegates")
	FOnSteamRemotePlaySessionDisconnected SteamRemotePlaySessionDisconnected;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	 * Get the number of currently connected Steam Remote Play sessions
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|RemotePlay")
	int32 GetSessionCount();

	/**
	 * Get the currently connected Steam Remote Play session ID at the specified index
	 *
	 * @param	SessionIndex	The index of the specified session
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|RemotePlay")
	int32 GetSessionID(int32 SessionIndex);

	/**
	 * Get the SteamID of the connected user
	 *
	 * @param	SessionID	The session ID to get information about
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|RemotePlay")
	FSteamID GetSessionSteamID(int32 SessionID);

	/**
	 * Get the name of the session client device
	 *
	 * @param	SessionID	The session ID to get information about
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|RemotePlay")
	FString GetSessionClientName(int32 SessionID);

	/**
	 * Get the form factor of the session client device
	 *
	 * @param	SessionID	The session ID to get information about
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|RemotePlay")
	EOrionSteamDeviceFormFactor GetSessionClientFormFactor(int32 SessionID);

	/**
	 * Get the resolution, in pixels, of the session client device. This is set to 0x0 if the resolution is not available.
	 *
	 * @param	SessionID		The session ID to get information about
	 * @param	ResolutionX		A pointer to a variable to fill with the device resolution width
	 * @param	ResolutionY		A pointer to a variable to fill with the device resolution height
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|RemotePlay")
	bool BGetSessionClientResolution(int32 SessionID, int32& ResolutionX, int32& ResolutionY);

	/*
	 * Show the Remote Play Together UI in the game overlay
	 * This returns false if your game is not configured for Remote Play Together
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|RemotePlay")
	bool ShowRemotePlayTogetherUI();

	/**
	 * Invite a friend to join the game using Remote Play Together
	 *
	 * @param	SteamIDFriend		The Steam ID of the friend you'd like to invite
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|RemotePlay")
	bool BSendRemotePlayTogetherInvite(FSteamID SteamIDFriend);

	/**
	 * Make mouse and keyboard input for Remote Play Together sessions available via GetInput() instead of being merged with local input
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|RemotePlay")
	bool BEnableRemotePlayTogetherDirectInput();

	/**
	 * Merge Remote Play Together mouse and keyboard input with local input
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|RemotePlay")
	void DisableRemotePlayTogetherDirectInput();

	/**
	 * Get input events from Remote Play Together sessions
	 *
	 * This is available after calling BEnableRemotePlayTogetherDirectInput()
	 * Input is an array of input events that will be filled in by this function, up to unMaxEvents.
	 *
	 * @param	Input		The Steam ID of the friend you'd like to invite
	 * @param	MaxEvents		The Steam ID of the friend you'd like to invite
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|RemotePlay")
	int32 GetInput(FRemotePlayInput Input, int32 MaxEvents);

	/**
	 * Set the mouse cursor visibility for a remote player
	 *
	 * This is available after calling BEnableRemotePlayTogetherDirectInput()
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|RemotePlay")
	void SetMouseVisibility(FRemotePlaySessionID SessionID, bool bVisible);

	/**
	 * Set the mouse cursor position for a remote player
	 *
	 * This is available after calling BEnableRemotePlayTogetherDirectInput()
	 *
	 * This is used to warp the cursor to a specific location and isn't needed during normal event processing.
	 * The position is normalized relative to the window, where 0,0 is the upper left, and 1,1 is the lower right.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|RemotePlay")
	void SetMousePosition(FRemotePlaySessionID SessionID, float NormalizedX, float NormalizedY);

	/**
	 * Create a cursor that can be used with SetMouseCursor()
	 *
	 * This is available after calling BEnableRemotePlayTogetherDirectInput()
	 *
	 * Parameters:
	 * Width - The width of the cursor, in pixels
	 * Height - The height of the cursor, in pixels
	 * HotX - The X coordinate of the cursor hot spot in pixels, offset from the left of the cursor
	 * HotY - The Y coordinate of the cursor hot spot in pixels, offset from the top of the cursor
	 * BGRA - A pointer to the cursor pixels, with the color channels in red, green, blue, alpha order
	 * Pitch - The distance between pixel rows in bytes, defaults to nWidth * 4
	 *
	 * Not supported by blueprints
	 * Not supported by blueprints
	 * Not supported by blueprints
	 * Not supported by blueprints
	 */
	// UFUNCTION(BlueprintCallable, Category="OrionSteam|RemotePlay")
	// FRemotePlayCursorID CreateMouseCursor( int Width, int Height, int HotX, int HotY, const void *pBGRA, int nPitch);

	/**
	 * Set the mouse cursor for a remote player
	 *
	 * This is available after calling BEnableRemotePlayTogetherDirectInput()
	 * The cursor ID is a value returned by CreateMouseCursor()
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteam|RemotePlay")
	void SetMouseCursor(FRemotePlaySessionID SessionID, FRemotePlayCursorID CursorID);

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if WITH_ORIONSTEAM
	STEAM_CALLBACK_MANUAL(UOrionSteamRemotePlay, OnSteamRemotePlaySessionConnected, SteamRemotePlaySessionConnected_t, OnSteamRemotePlaySessionConnectedCallback);
	STEAM_CALLBACK_MANUAL(UOrionSteamRemotePlay, OnSteamRemotePlaySessionDisconnected, SteamRemotePlaySessionDisconnected_t, OnSteamRemotePlaySessionDisconnectedCallback);
#endif
};
