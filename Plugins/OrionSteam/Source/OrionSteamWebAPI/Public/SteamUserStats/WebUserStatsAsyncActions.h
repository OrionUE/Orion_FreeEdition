/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"
#include "WebUserStatsAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Retrieves the global achievement percentages for the specified app.
	 *
	 * @param	GameId		GameID to retrieve the achievement percentages for
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Global Achievement Percentages for App", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|UserStats|Async")
	static UOrionSteamWebAPIAsyncActionGetGlobalAchievementPercentagesForApp* GetGlobalAchievementPercentagesForAppAsync(UObject* WorldContextObject, FString GameId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Retrieves the global stats percentages for the specified app.
	 *
	 * @param	AppId			AppID that we're getting global stats for
	 * @param	Names			Names of stat to get data for
	 * @param	StartDate		Start date for daily totals (unix epoch timestamp)
	 * @param	EndDate			End date for daily totals (unix epoch timestamp)
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Global Stats for Game", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|UserStats|Async")
	static UOrionSteamWebAPIAsyncActionGetGlobalStatsForGame* GetGlobalStatsForGameAsync(UObject* WorldContextObject, int32 AppId, TArray<FString> Names, int32 StartDate, int32 EndDate);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Gets the total number of players currently active in the specified app on Steam.
	 *
	 * Note that this will not return players that are playing while not connected to Steam.
	 *
	 * @param	AppId			AppID that we're getting user count for
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Number of Current Players", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|UserStats|Async")
	static UOrionSteamWebAPIAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(UObject* WorldContextObject, int32 AppId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetPlayerAchievements
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetPlayerAchievements : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Gets the list of achievements the specified user has unlocked in an app.
	 *
	 * @param	Key				Steamworks Web API user authentication Key.
	 * @param	SteamId			SteamId of user
	 * @param	AppId			AppID to get achievements for
	 * @param	language		Language to return strings for
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Player Achievements", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|UserStats|Async")
	static UOrionSteamWebAPIAsyncActionGetPlayerAchievements* GetPlayerAchievementsAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, FString language = "english");
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetSchemaForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetSchemaForGame : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Gets the complete list of stats and achievements for the specified game.
	 *
	 * @param	Key				Steamworks Web API user authentication Key.
	 * @param	AppId			AppID to get achievements for
	 * @param	language		Language to return strings for
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Schema for Game", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|UserStats|Async")
	static UOrionSteamWebAPIAsyncActionGetSchemaForGame* GetSchemaForGameAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, FString language = "english");
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetUserStatsForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetUserStatsForGame : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Gets the list of stats that the specified user has set in an app.
	 *
	 * @param	Key				Steamworks Web API user authentication Key.
	 * @param	SteamId			SteamId of user
	 * @param	AppId			AppID to get achievements for
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get User Stats for Game", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|UserStats|Async")
	static UOrionSteamWebAPIAsyncActionGetUserStatsForGame* GetUserStatsForGameAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionSetUserStatsForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionSetUserStatsForGame : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Sets a stat for the specified user for the game.
	 *
	 * @param	Key				Steamworks Web API user authentication Key.
	 * @param	SteamId			SteamId of user
	 * @param	AppId			AppID to get achievements for
	 * @param	Names			Names of stat or achievement to set
	 * @param	Values			Values to set
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Set User Stats for Game", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|UserStats|Async")
	static UOrionSteamWebAPIAsyncActionSetUserStatsForGame* SetUserStatsForGameAsync(UObject* WorldContextObject, FString Key, FString SteamId, int32 AppId, TArray<FString> Names, TArray<int32> Values);
};
