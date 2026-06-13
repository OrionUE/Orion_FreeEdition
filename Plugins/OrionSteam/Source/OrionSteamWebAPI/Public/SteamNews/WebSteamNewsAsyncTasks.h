/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetNewsForApp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetNewsForApp : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetNewsForApp(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, int32 AppId, int32 MaxLength, int32 EndDate, TArray<FString> Feeds, int32 Count)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamNews", "GetNewsForApp", "", 2, EVerb::GET, true)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("maxlength", MaxLength);
		m_RequestString.Add("enddate", EndDate);
		m_RequestString.Add("count", Count);

		FString m_Feeds = "";

		for (int32 i = 0; i < Feeds.Num(); i++)
		{
			m_Feeds.Append(FString::Printf(TEXT(",%s"), *Feeds[i]));
		}

		m_RequestString.Add("feeds", m_Feeds);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetNewsForApp() = delete;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIGetNewsForAppAuthed
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIGetNewsForAppAuthed : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIGetNewsForAppAuthed(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppId, int32 MaxLength, int32 EndDate, TArray<FString> Feeds, int32 Count)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "ISteamNews", "GetNewsForAppAuthed", Key, 2, EVerb::GET)
	{
		m_RequestString.Add("appid", AppId);
		m_RequestString.Add("maxlength", MaxLength);
		m_RequestString.Add("enddate", EndDate);
		m_RequestString.Add("count", Count);

		FString m_Feeds = "";

		for (int32 i = 0; i < Feeds.Num(); i++)
		{
			m_Feeds.Append(FString::Printf(TEXT(",%s"), *Feeds[i]));
		}

		m_RequestString.Add("feeds", m_Feeds);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIGetNewsForAppAuthed() = delete;
};
