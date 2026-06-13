/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIReportAbuse
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIReportAbuse : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIReportAbuse(UOrionSteamWebAPISubsystem* subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, FString SteamIdActor, FString SteamIdTarget, int32 AppId, int32 AbuseType, int32 ContentType, FString Description, FString Gid)
		: FOnlineAsyncTaskOrionSteamWebAPI(subsystem, Callback, "ISteamCommunity", "ReportAbuse", Key, 1, EVerb::POST)
	{
		m_RequestString.Add("steamidActor", SteamIdActor);
		m_RequestString.Add("steamidTarget", SteamIdTarget);
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("abuseType", AbuseType);
		m_RequestString.Add("contentType", ContentType);
		m_RequestString.Add("description", Description);
		m_RequestString.Add("gid", Gid);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIReportAbuse() = delete;
};
