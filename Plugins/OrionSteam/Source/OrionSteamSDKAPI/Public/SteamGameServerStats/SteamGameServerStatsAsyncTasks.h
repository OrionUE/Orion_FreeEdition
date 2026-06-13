/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamSDKAPI/OrionSteamAsync.h"
#include "SteamGameServerStatsTypes.h"

#if WITH_ORIONSTEAM
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamGameServerStatsUserStatsGS
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamGameServerStatsUserStatsGS : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnServerRequestUserStats m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamGameServerStatsUserStatsGS(const FOnServerRequestUserStats Callback, const FSteamID SteamIDUser, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_SteamIDUser(SteamIDUser)
	{
	}

private:
	FOnlineAsyncTaskOrionSteamGameServerStatsUserStatsGS() = delete;

protected:
	GSStatsReceived_t m_CallbackResults;
	FSteamID m_SteamIDUser;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamGameServerStatsUserStatsGS"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamGameServerStatsStoreUserStats
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamGameServerStatsStoreUserStats : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnServerStoreUserStats m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamGameServerStatsStoreUserStats(const FOnServerStoreUserStats Callback, const FSteamID SteamIDUser, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_SteamIDUser(SteamIDUser)
	{
	}

private:
	FOnlineAsyncTaskOrionSteamGameServerStatsStoreUserStats() = delete;

protected:
	GSStatsStored_t m_CallbackResults;
	FSteamID m_SteamIDUser;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamGameServerStatsStoreUserStats"));
	}
};

#endif
