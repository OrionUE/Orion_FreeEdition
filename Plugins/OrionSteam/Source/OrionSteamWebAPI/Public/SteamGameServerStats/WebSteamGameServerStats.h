/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPI.h"
#include "WebSteamGameServerStats.generated.h"

UCLASS()
class ORIONSTEAMWEBAPI_API UWebSteamGameServerStats : public UOrionSteamWebAPISubsystem
{
	GENERATED_BODY()
public:
	UWebSteamGameServerStats()
	{
		SubsystemType = ESubsystemWeb::GameServerStats;
	}

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	 * Get Game Server Player Stats For Game
	 *
	 * @param	Key				Steamworks Web API publisher authentication key.
	 * @param	GameId			game id to get stats for, if not a mod, it's safe to use appid here
	 * @param	AppId			appID of the game
	 * @param	RangeStart		range start date/time (Format: YYYY-MM-DD HH:MM:SS, Seattle local time)
	 * @param	RangeEnd		range end date/time (Format: YYYY-MM-DD HH:MM:SS, Seattle local time)
	 * @param	MaxResults		Max number of results to return (up to 1000)
	 */
	UFUNCTION(BlueprintCallable, Category="OrionSteamWebAPI|SteamGameServerStats")
	void GetGameServerPlayerStatsForGame(const FOnOrionSteamWebAPICallback& Callback, FString Key, FString GameId, int32 AppId, FString RangeStart, FString RangeEnd, int32 MaxResults = 1000);
};
