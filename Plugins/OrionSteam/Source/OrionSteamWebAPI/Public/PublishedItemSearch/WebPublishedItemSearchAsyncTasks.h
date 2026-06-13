/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIRankedByPublicationOrder
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIRankedByPublicationOrder : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIRankedByPublicationOrder(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> Usertag)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamPublishedItemSearch", "RankedByPublicationOrder", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("startidx", StartId);
		m_RequestString.Add("count", Count);
		m_RequestString.Add("tagcount", Tag.Num());
		m_RequestString.Add("usertagcount", Usertag.Num());
		m_RequestString.Add("hasappadminaccess", bHasAppAdminAccess);
		m_RequestString.Add("fileType", FileType);
		m_RequestString.Add("tag", Tag);
		m_RequestString.Add("usertag", Usertag);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIRankedByPublicationOrder() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIRankedByTrend
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIRankedByTrend : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIRankedByTrend(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, int32 days, TArray<FString> Tag, TArray<FString> Usertag)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamPublishedItemSearch", "RankedByTrend", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("startidx", StartId);
		m_RequestString.Add("count", Count);
		m_RequestString.Add("tagcount", Tag.Num());
		m_RequestString.Add("usertagcount", Usertag.Num());
		m_RequestString.Add("hasappadminaccess", bHasAppAdminAccess);
		m_RequestString.Add("fileType", FileType);
		m_RequestString.Add("days", days);
		m_RequestString.Add("tag", Tag);
		m_RequestString.Add("usertag", Usertag);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIRankedByTrend() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIRankedByVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIRankedByVote : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIRankedByVote(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId, int32 StartId, int32 Count, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> Usertag)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamPublishedItemSearch", "RankedByVote", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("startidx", StartId);
		m_RequestString.Add("count", Count);
		m_RequestString.Add("tagcount", Tag.Num());
		m_RequestString.Add("usertagcount", Usertag.Num());
		m_RequestString.Add("hasappadminaccess", bHasAppAdminAccess);
		m_RequestString.Add("fileType", FileType);
		m_RequestString.Add("tag", Tag);
		m_RequestString.Add("usertag", Usertag);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIRankedByVote() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIResultSetSummary
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIResultSetSummary : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIResultSetSummary(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamId, int32 AppId, int32 StartId, bool bHasAppAdminAccess, int32 FileType, TArray<FString> Tag, TArray<FString> Usertag)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamPublishedItemSearch", "ResultSetSummary", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamid", SteamId);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("startidx", StartId);
		m_RequestString.Add("tagcount", Tag.Num());
		m_RequestString.Add("usertagcount", Usertag.Num());
		m_RequestString.Add("hasappadminaccess", bHasAppAdminAccess);
		m_RequestString.Add("fileType", FileType);
		m_RequestString.Add("tag", Tag);
		m_RequestString.Add("usertag", Usertag);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIResultSetSummary() = delete;
};
