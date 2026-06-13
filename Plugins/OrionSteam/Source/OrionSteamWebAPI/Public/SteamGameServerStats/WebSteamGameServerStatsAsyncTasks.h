/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetGameServerPlayerStatsForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetGameServerPlayerStatsForGame : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetGameServerPlayerStatsForGame(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString GameId, int32 AppId, FString RangeStart, FString RangeEnd, int32 MaxResults)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamGameServerStats", "GetGameServerPlayerStatsForGame", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("gameid", GameId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("rangestart", RangeStart);
		m_RequestString.Add("rangeend", RangeEnd);
		m_RequestString.Add("MaxResults", MaxResults);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetGameServerPlayerStatsForGame() = delete;
};
