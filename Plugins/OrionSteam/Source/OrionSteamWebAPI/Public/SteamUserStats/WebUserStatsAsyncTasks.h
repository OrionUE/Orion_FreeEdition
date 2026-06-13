/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetGlobalAchievementPercentagesForApp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetGlobalAchievementPercentagesForApp : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetGlobalAchievementPercentagesForApp(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString GameId)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamUserStats", "GetGlobalAchievementPercentagesForApp", "", 2, EVerb::GET, true)
	{
		m_RequestString.Add("gameid", GameId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetGlobalAchievementPercentagesForApp() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetGlobalStatsForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetGlobalStatsForGame : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetGlobalStatsForGame(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, int32 AppId, TArray<FString> Names, int32 StartDate, int32 EndDate)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamUserStats", "GetGlobalStatsForGame", "", 1, EVerb::GET, true)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("count", Names.Num());
		m_RequestString.Add("name", Names);
		m_RequestString.Add("startdate", StartDate);
		m_RequestString.Add("enddate", EndDate);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetGlobalStatsForGame() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetNumberOfCurrentPlayers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetNumberOfCurrentPlayers : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetNumberOfCurrentPlayers(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, int32 AppId)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamUserStats", "GetNumberOfCurrentPlayers", "", 1, EVerb::GET, true)
	{
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetNumberOfCurrentPlayers() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetPlayerAchievements
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetPlayerAchievements : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetPlayerAchievements(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId, FString language)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamUserStats", "GetPlayerAchievements", Key, 1, EVerb::GET, true)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("language", language);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetPlayerAchievements() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetSchemaForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetSchemaForGame : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetSchemaForGame(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId, FString language)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamUserStats", "GetSchemaForGame", Key, 2, EVerb::GET, true)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("l", language);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetSchemaForGame() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetUserStatsForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetUserStatsForGame : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetUserStatsForGame(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamUserStats", "GetUserStatsForGame", Key, 2, EVerb::GET, true)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetUserStatsForGame() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPISetUserStatsForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPISetUserStatsForGame : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPISetUserStatsForGame(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId, TArray<FString> Names, TArray<int32> Values)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamUserStats", "SetUserStatsForGame", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("count", Names.Num());
		m_RequestString.Add("name", Names);
		m_RequestString.Add("value", Values);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPISetUserStatsForGame() = delete;
};
