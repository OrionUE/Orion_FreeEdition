/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamSDKAPI/OrionSteamAsync.h"
#include "SteamGameServerTypes.h"

#if WITH_ORIONSTEAM

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamGameServerAssociateWithClan
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamGameServerAssociateWithClan : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnAssociateWithClan m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamGameServerAssociateWithClan(const FOnAssociateWithClan Callback, const FSteamID SteamIDClan, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_SteamIDClan(SteamIDClan)
	{
	}

private:
	FOnlineAsyncTaskOrionSteamGameServerAssociateWithClan() = delete;

protected:
	AssociateWithClanResult_t m_CallbackResults;
	FSteamID m_SteamIDClan;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamGameServerAssociateWithClan"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamGameServerComputeNewPlayerCompatibility
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskOrionSteamGameServerComputeNewPlayerCompatibility : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnComputeNewPlayerCompatibility m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamGameServerComputeNewPlayerCompatibility(const FOnComputeNewPlayerCompatibility Callback, const FSteamID SteamIDNewPlayer, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_SteamIDNewPlayer(SteamIDNewPlayer)
	{
	}

private:
	FOnlineAsyncTaskOrionSteamGameServerComputeNewPlayerCompatibility() = delete;

protected:
	ComputeNewPlayerCompatibilityResult_t m_CallbackResults;
	FSteamID m_SteamIDNewPlayer;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamGameServerComputeNewPlayerCompatibility"));
	}
};
#endif
