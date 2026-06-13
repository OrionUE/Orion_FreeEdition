/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPI.h"
#include "WebLeaderboards.generated.h"

UCLASS()
class ORIONSTEAMWEBAPI_API UWebLeaderboards : public UOrionSteamWebAPISubsystem
{
	GENERATED_BODY()
public:
	UWebLeaderboards()
	{
		SubsystemType = ESubsystemWeb::Leaderboards;
	}

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	 * Delete Leaderboard
	 *
	 * @param	Key			Steamworks Web API publisher authentication Key.
	 * @param	AppId		appid of game
	 * @param	Name		Name of the leaderboard to delete
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|Apps")
	void DeleteLeaderboard(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString Name);

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
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|Apps")
	void FindOrCreateLeaderboard(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString Name, FString SortMethod = "Ascending", FString DisplayType = "Numeric", bool bCreateIfNotFound = false, bool bOnlyTrustedWrites = false, bool bOnlyFriendsReads = false);

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
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|Apps")
	void GetLeaderboardEntries(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, int32 RangeStart, int32 RangeEnd, int32 LeaderboardId, int32 DataRequest, FString SteamId);

	/**
	 * Get Leaderboards for Game
	 *
	 * @param	Key					Steamworks Web API publisher authentication Key.
	 * @param	AppId				appid of game
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|Apps")
	void GetLeaderboardsForGame(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId);

	/**
	 * Reset Leaderboard
	 *
	 * @param	Key					Steamworks Web API publisher authentication Key.
	 * @param	AppId				appid of game
	 * @param	LeaderboardId		numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|Apps")
	void ResetLeaderboard(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, int32 LeaderboardId);

	/**
	 * Set Leaderboard Score
	 *
	 * @param	Key					Steamworks Web API publisher authentication Key.
	 * @param	AppId				appid of game
	 * @param	LeaderbordId		numeric ID of the target leaderboard. Can be retrieved from GetLeaderboardsForGame
	 * @param	SteamId				SteamId to set the score for
	 * @param	Score				the score to set for this user
	 * @param	Details				game-specific details for how the score was earned. Up to 256 bytes.
	 * @param	ScoreMethod			update method to use. Can be "KeepBest" or "ForceUpdate"
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|Apps", meta=(AutoCreateRefTerm="details"))
	void SetLeaderboardScore(const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, int32 LeaderbordId, FString SteamId, int32 Score, TArray<uint8> Details, FString ScoreMethod = "KeepBest");
};
