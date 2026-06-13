/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPI.h"
#include "WebBroadcastService.generated.h"

UCLASS()
class ORIONSTEAMWEBAPI_API UWebBroadcastService : public UOrionSteamWebAPISubsystem
{
	GENERATED_BODY()
public:
	UWebBroadcastService()
	{
		SubsystemType = ESubsystemWeb::Broadcast;
	}

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	 * Gets all of the beta branches for the specified application.
	 *
	 * NOTE: This call requires the publisher API key that owns the specified App ID to use this method. As such this API MUST be called from a secure server, and can never be used directly by clients!
	 *
	 * @param	Key			Steamworks Web API publisher authentication key.
	 * @param	AppID		The App ID to get the betas of.
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|Apps")
	void PostGameDataFrame(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppID, FString SteamID, FString BroadcastId, FString FrameData);
};
