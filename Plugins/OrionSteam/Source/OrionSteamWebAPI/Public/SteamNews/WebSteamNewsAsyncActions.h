/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"
#include "WebSteamNewsAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetNewsForApp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetNewsForApp : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Get the news for the specified app.
	 *
	 * @param	Key				Steamworks Web API publisher authentication key.
	 * @param	AppId			AppID to retrieve news for
	 * @param	MaxLength		Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.
	 * @param	EndDate			Retrieve posts earlier than this date (unix epoch timestamp)
	 * @param	Feeds			# of posts to retrieve (default 20)
	 * @param	Count			List of feed names to return news for
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get News for App", AutoCreateRefTerm="feeds", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|PlayerService|Async")
	static UOrionSteamWebAPIAsyncActionGetNewsForApp* GetNewsForAppAsync(UObject* WorldContextObject, int32 AppId, int32 MaxLength, TArray<FString> Feeds, int32 EndDate = 1549795233, int32 Count = 20);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Get the news for the specified app. Publisher only version that can return info for unreleased games.
	 *
	 * @param	Key				Steamworks Web API publisher authentication key.
	 * @param	AppId			AppID to retrieve news for
	 * @param	MaxLength		Maximum length for the content to return, if this is 0 the full content is returned, if it's less then a blurb is generated to fit.
	 * @param	EndDate			Retrieve posts earlier than this date (unix epoch timestamp)
	 * @param	Feeds			# of posts to retrieve (default 20)
	 * @param	Count			List of feed names to return news for
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get News for App Authed", AutoCreateRefTerm="feeds", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|PlayerService|Async")
	static UOrionSteamWebAPIAsyncActionGetNewsForAppAuthed* GetNewsForAppAuthedAsync(UObject* WorldContextObject, FString Key, int32 AppId, int32 MaxLength, TArray<FString> Feeds, int32 EndDate = 1549795233, int32 Count = 20);
};
