/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetHistoryCommandDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetHistoryCommandDetails : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetHistoryCommandDetails(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamId, FString Command, FString ContextId, FString Arguments)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IGameInventory", "GetHistoryCommandDetails", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("command", Command);
		m_RequestString.Add("contextid", ContextId);
		m_RequestString.Add("arguments", Arguments);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetHistoryCommandDetails() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIGetHistoryCommandDetails"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetUserHistory
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetUserHistory : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetUserHistory(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamId, FString ContextId, int32 StartTime, int32 EndTime)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IGameInventory", "GetUserHistory", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("contextid", ContextId);
		m_RequestString.Add("starttime", StartTime);
		m_RequestString.Add("endtime", EndTime);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetUserHistory() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIGetUserHistory"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIHistoryExecuteCommands
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIHistoryExecuteCommands : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIHistoryExecuteCommands(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString SteamId, FString ContextId, int32 ActorId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IGameInventory", "HistoryExecuteCommands", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("contextid", ContextId);
		m_RequestString.Add("actorid", ActorId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIHistoryExecuteCommands() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIHistoryExecuteCommands"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPISupportGetAssetHistory
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPISupportGetAssetHistory : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPISupportGetAssetHistory(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, FString AssetId, FString ContextId)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "IGameInventory", "SupportGetAssetHistory", Key, 1, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("assetid", AssetId);
		m_RequestString.Add("contextid", ContextId);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPISupportGetAssetHistory() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPISupportGetAssetHistory"));
	}
};
