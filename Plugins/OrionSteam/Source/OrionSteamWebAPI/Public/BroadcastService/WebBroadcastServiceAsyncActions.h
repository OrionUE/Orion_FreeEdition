/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"
#include "WebBroadcastServiceAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamAppsAsyncActionPostGameDataFrame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionPostGameDataFrame : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Provides access to Steam broadcasts.
	 *
	 * @param	Key				Steamworks Web API publisher authentication key.
	 * @param	AppID
	 * @param	SteamID
	 * @param	BroadcastId
	 * @param	FrameData
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Post Game Data Frame", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|Broadcast|Async")
	static UOrionSteamWebAPIAsyncActionPostGameDataFrame* PostGameDataFrameAsync(UObject* WorldContextObject, FString Key, int32 AppID, FString SteamID, FString BroadcastId, FString FrameData);
};
