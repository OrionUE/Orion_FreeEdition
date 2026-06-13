/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIDeleteLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIDeleteLeaderboard : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIDeleteLeaderboard(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString Name)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "ISteamLeaderboards", "DeleteLeaderboard", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("name", Name);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIDeleteLeaderboard() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIDeleteLeaderboard"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIFindOrCreateLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIFindOrCreateLeaderboard : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIFindOrCreateLeaderboard(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString Name, FString sortMethod, FString displayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "ISteamLeaderboards", "FindOrCreateLeaderboard", Key, 2, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("name", Name);
		m_RequestString.Add("sortmethod", sortMethod);
		m_RequestString.Add("displaytype", displayType);
		m_RequestString.Add("createifnotfound", bCreateIfNotFound);
		m_RequestString.Add("onlytrustedwrites", bOnlyTrustedWrites);
		m_RequestString.Add("onlyfriendsreads", bOnlyFriendsReads);
		m_RequestString.Add("name", Name);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIFindOrCreateLeaderboard() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIFindOrCreateLeaderboard"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetLeaderboardEntries
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetLeaderboardEntries : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetLeaderboardEntries(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, int32 RangeStart, int32 RangeEnd, int32 LeaderboardId, int32 DataRequest, FString SteamId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "ISteamLeaderboards", "GetLeaderboardEntries", Key)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("rangestart", RangeStart);
		m_RequestString.Add("rangeend", RangeEnd);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("leaderboardid", LeaderboardId);
		m_RequestString.Add("datarequest", DataRequest);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetLeaderboardEntries() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIGetLeaderboardEntries"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetLeaderboardsForGame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetLeaderboardsForGame : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetLeaderboardsForGame(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "ISteamLeaderboards", "GetLeaderboardsForGame", Key, 2, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetLeaderboardsForGame() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIGetLeaderboardsForGame"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIResetLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIResetLeaderboard : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIResetLeaderboard(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, int32 LeaderboardId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "ISteamLeaderboards", "ResetLeaderboard", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("leaderboardid", LeaderboardId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIResetLeaderboard() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIResetLeaderboard"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPISetLeaderboardScore
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPISetLeaderboardScore : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPISetLeaderboardScore(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, int32 LeaderboardId, FString SteamId, int32 Score, FString ScoreMethod, TArray<uint8> Details)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "ISteamLeaderboards", "SetLeaderboardScore", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("leaderboardid", LeaderboardId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("score", Score);
		m_RequestString.Add("scoremethod", ScoreMethod);
		m_RequestString.Add("details", Details);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPISetLeaderboardScore() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPISetLeaderboardScore"));
	}
};
