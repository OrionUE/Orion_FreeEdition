/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPI.h"
#include "WebPlayerService.generated.h"

UCLASS()
class ORIONSTEAMWEBAPI_API UWebPlayerService : public UOrionSteamWebAPISubsystem
{
	GENERATED_BODY()
public:
	UWebPlayerService()
	{
		SubsystemType = ESubsystemWeb::PlayerService;
	}

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	 * Gets information about a player's recently played games
	 *
	 * @param	Key			Steamworks Web API publisher authentication Key.
	 * @param	SteamId		The player we're asking about
	 * @param	Count		The number of games to return (0/unset: all)
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|PlayerService")
	void GetRecentlyPlayedGames(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 Count);

	/**
	 * Return a list of games owned by the player
	 *
	 * @param	Key							Steamworks Web API publisher authentication Key.
	 * @param	SteamId						The player we're asking about
	 * @param	bIncludeAppInfo				true if we want additional details (name, icon) about each game
	 * @param	bIncludePlayedFreeGames		Free games are excluded by default. If this is set, free games the user has played will be returned.
	 * @param	Filter						if set, restricts result set to the passed in apps
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|PlayerService")
	void GetOwnedGames(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32> Filter);

	/**
	 * Returns the Steam Level of a user
	 *
	 * @param	Key							Steamworks Web API publisher authentication Key.
	 * @param	SteamId						The player we're asking about
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|PlayerService")
	void GetSteamLevel(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId);

	/**
	 * Gets badges that are owned by a specific user
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	SteamId			The player we're asking about
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|PlayerService")
	void GetBadges(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId);

	/**
	 * Gets all the quests needed to get the specified badge, and which are completed
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	SteamId			The player we're asking about
	 * @param	BadgeId			The badge we're asking about
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|PlayerService")
	void GetCommunityBadgeProgress(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 BadgeId);

	/**
	 * Returns valid lender SteamID if game currently played is borrowed
	 *
	 * @param	Key				Steamworks Web API publisher authentication Key.
	 * @param	SteamId			The player we're asking about
	 * @param	AppIdPlaying	The game player is currently playing
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|PlayerService")
	void IsPlayingSharedGame(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppIdPlaying);
};
