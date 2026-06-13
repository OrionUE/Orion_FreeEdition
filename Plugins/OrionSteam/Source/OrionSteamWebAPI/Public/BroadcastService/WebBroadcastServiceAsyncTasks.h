/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamWebAPI/OrionSteamWebAPIAsync.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamWebAPIBroadcastPostGameDataFrame
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamWebAPIBroadcastPostGameDataFrame : public FOnlineAsyncTaskOrionSteamWebAPI
{
public:
	FOnlineAsyncTaskOrionSteamWebAPIBroadcastPostGameDataFrame(UOrionSteamWebAPISubsystem* Subsystem, const FOnOrionSteamWebAPICallback& Callback, FString Key, int32 AppID, FString SteamID, FString BroadcastId, FString FrameData)
		: FOnlineAsyncTaskOrionSteamWebAPI(Subsystem, Callback, "IBroadcastService", "PostGameDataFrame", Key, 1, EVerb::POST)
	{
		m_RequestString.AddNumberField("appid", AppID);
		m_RequestString.AddNumberField("steamid", FCString::Atoi64(*SteamID));
		m_RequestString.AddNumberField("broadcast_id", FCString::Atoi64(*BroadcastId));
		m_RequestString.AddStringField("frame_data", FrameData);
	}

private:
	FOnlineAsyncTaskOrionSteamWebAPIBroadcastPostGameDataFrame() = delete;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamWebAPIBroadcastPostGameDataFrame"));
	}
};
