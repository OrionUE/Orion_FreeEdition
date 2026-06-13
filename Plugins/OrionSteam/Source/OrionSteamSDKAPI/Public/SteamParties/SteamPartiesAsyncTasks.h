/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamSDKAPI/OrionSteamAsync.h"
#include "SteamPartiesTypes.h"

#if WITH_ORIONSTEAM
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamPartiesJoinParty
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamPartiesJoinParty : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnJoinParty m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamPartiesJoinParty(const FOnJoinParty Callback, const FPartyBeaconID BeaconId, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_BeaconID(BeaconId)
	{
	}

	FOnlineAsyncTaskOrionSteamPartiesJoinParty(UOrionSteamAsyncAction* AsyncObject, const FPartyBeaconID BeaconId, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_BeaconID(BeaconId)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamPartiesJoinParty() = delete;

protected:
	JoinPartyCallback_t m_CallbackResults;
	FPartyBeaconID m_BeaconID;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamPartiesJoinParty"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamPartiesCreateBeacon
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamPartiesCreateBeacon : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnCreateBeacon m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamPartiesCreateBeacon(const FOnCreateBeacon Callback, const int32 OpenSlots, const FSteamPartyBeaconLocation BeaconLocation, const FString ConnectString, const FString Metadata, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_OpenSlots(OpenSlots), m_BeaconLocation(BeaconLocation), m_ConnectString(ConnectString), m_Metadata(Metadata)
	{
	}

	FOnlineAsyncTaskOrionSteamPartiesCreateBeacon(UOrionSteamAsyncAction* AsyncObject, const int32 OpenSlots, const FSteamPartyBeaconLocation BeaconLocation, const FString ConnectString, const FString Metadata, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_OpenSlots(OpenSlots), m_BeaconLocation(BeaconLocation), m_ConnectString(ConnectString), m_Metadata(Metadata)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamPartiesCreateBeacon() = delete;

protected:
	CreateBeaconCallback_t m_CallbackResults;
	int32 m_OpenSlots;
	FSteamPartyBeaconLocation m_BeaconLocation;
	FString m_ConnectString;
	FString m_Metadata;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamPartiesCreateBeacon"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamPartiesChangeNumOpenSlots
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamPartiesChangeNumOpenSlots : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnChangeNumOpenSlots m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamPartiesChangeNumOpenSlots(const FOnChangeNumOpenSlots Callback, const FPartyBeaconID Beacon, const int32 OpenSlots, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_Beacon(Beacon), m_OpenSlots(OpenSlots)
	{
	}

	FOnlineAsyncTaskOrionSteamPartiesChangeNumOpenSlots(UOrionSteamAsyncAction* AsyncObject, const FPartyBeaconID Beacon, const int32 OpenSlots, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_Beacon(Beacon), m_OpenSlots(OpenSlots)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamPartiesChangeNumOpenSlots() = delete;

protected:
	ChangeNumOpenSlotsCallback_t m_CallbackResults;
	FPartyBeaconID m_Beacon;
	int32 m_OpenSlots;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamPartiesChangeNumOpenSlots"));
	}
};
#endif
