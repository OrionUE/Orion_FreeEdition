/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"
#include "WebLeaderboardsAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionDeleteLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionDeleteLeaderboard : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Delete Leaderboard
	 *
	 * @param	Key			Steamworks Web API publisher authentication Key.
	 * @param	AppId		appid of game
	 * @param	Name		Name of the leaderboard to delete
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Delete Leaderboard", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|Leaderboards|Async")
	static UOrionSteamWebAPIAsyncActionDeleteLeaderboard* DeleteLeaderboardAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString Name);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Find Or Create Leaderboard
	 *
	 * @param	Key						Steamworks Web API publisher authentication Key.
	 * @param	AppId					appid of game
	 * @param	Name					Name of the leaderboard to delete
	 * @param	SortMethod				sort method to use for this leaderboard (defaults to Ascending)
	 * @param	DisplayType				display type for this leaderboard (defaults to Numeric)
	 * @param	bCreateIfNotFound		if this is true the leaderboard will be created if it doesn't exist. Defaults to true.
	 * @param	bOnlyTrustedWrites		if this is true the leaderboard scores cannot be set by clients, and can only be set by publisher via SetLeaderboardScore WebAPI. Defaults to false.
	 * @param	bOnlyFriendsReads		if this is true the leaderboard scores can only be read for friends by clients, scores can always be read by publisher. Defaults to false.
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Find or Create Leaderboard", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|Leaderboards|Async")
	static UOrionSteamWebAPIAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(UObject* WorldContextObject, FString Key, int32 AppId, FString Name, FString SortMethod = "Ascending", FString DisplayType = "Numeric", bool bCreateIfNotFound = false, bool bOnlyTrustedWrites = false, bool bOnlyFriendsReads = false);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetLeaderboardEntries
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetLeaderboardEntries : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Get Leaderboard Entries
	 *
	 * @param	Key					Steamworks Web API publisher authentication Key.
	 * @param	AppId				appid of game
	 * @param	RangeStart			range start or 0
	 * @param	RangeEnd			range end or max LB entries
	 * @param	LeaderboardId		ID of the leaderboard to view
	 * @param	DataRequest			type of request: RequestGlobal, RequestAroundUser, RequestFriends
	 * @param	SteamId				SteamID used for friend & around user requests
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Leaderboard Entries", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|Leaderboards|Async")
	static UOrionSteamWebAPIAsyncActionGetLeaderboardEntries* GetLeaderboardEntriesAsync(UObject* WorldContextObject, FString Key, int32 AppId, int32 RangeStart, int32 RangeEnd, int32 LeaderboardId, int32 DataRequest, FString SteamId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Get Leaderboards for Game
	 *
	 * @param	Key					Steamworks Web API publisher authentication Key.
	 * @param	AppId				appid of game
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Get Leaderboards for Game", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|Leaderboards|Async")
	static UOrionSteamWebAPIAsyncActionGetLeaderboardsForGame* GetLeaderboardsForGameAsync(UObject* WorldContextObject, FString Key, int32 AppId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionResetLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionResetLeaderboard : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Reset Leaderboard
	 *
	 * @param	Key					Steamworks Web API publisher authentication Key.
	 * @param	AppId				appid of game
	 * @param	LeaderboardId		numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Reset Leaderboard", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|Leaderboards|Async")
	static UOrionSteamWebAPIAsyncActionResetLeaderboard* ResetLeaderboardAsync(UObject* WorldContextObject, FString Key, int32 AppId, int32 LeaderboardId);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UOrionSteamWebAPIAsyncActionSetLeaderboardScore
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class ORIONSTEAMWEBAPI_API UOrionSteamWebAPIAsyncActionSetLeaderboardScore : public UOrionSteamWebAPIAsyncAction
{
	GENERATED_BODY()
public:
	/**
	 * Set Leaderboard Score
	 *
	 * @param	Key					Steamworks Web API publisher authentication Key.
	 * @param	AppId				appid of game
	 * @param	LeaderboardId		numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame
	 * @param	SteamId				SteamId to set the score for
	 * @param	Score				the score to set for this user
	 * @param	Details				game-specific details for how the score was earned. Up to 256 bytes.
	 * @param	ScoreMethod			update method to use. Can be "KeepBest" or "ForceUpdate"
	 */
	UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject", DisplayName="Set Leaderboard Score", AutoCreateRefTerm="details", BlueprintInternalUseOnly="true"), Category="OrionSteamWebAPI|Leaderboards|Async")
	static UOrionSteamWebAPIAsyncActionSetLeaderboardScore* SetLeaderboardScoreAsync(UObject* WorldContextObject, FString Key, int32 AppId, int32 LeaderboardId, FString SteamId, int32 Score, TArray<uint8> Details, FString ScoreMethod = "KeepBest");
};
