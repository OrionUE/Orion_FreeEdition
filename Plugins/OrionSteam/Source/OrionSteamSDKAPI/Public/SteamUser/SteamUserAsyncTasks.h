/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamSDKAPI/OrionSteamAsync.h"
#include "SteamUserTypes.h"

#if WITH_ORIONSTEAM

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUserRequestEncryptedAppTicket
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUserRequestEncryptedAppTicket : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnRequestEncryptedAppTicket m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUserRequestEncryptedAppTicket(const FOnRequestEncryptedAppTicket Callback, const TArray<uint8> DataToInclude, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_Data(DataToInclude)
	{
	}

	FOnlineAsyncTaskOrionSteamUserRequestEncryptedAppTicket(UOrionSteamAsyncAction* AsyncObject, const TArray<uint8> DataToInclude, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_Data(DataToInclude)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUserRequestEncryptedAppTicket() = delete;

protected:
	EncryptedAppTicketResponse_t m_CallbackResults;
	TArray<uint8> m_Data;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUserRequestEncryptedAppTicket"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamUserRequestStoreAuthURL
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamUserRequestStoreAuthURL : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnStoreAuthURLResponse m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamUserRequestStoreAuthURL(const FOnStoreAuthURLResponse Callback, const FString RedirectURL, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_RedirectURL(RedirectURL)
	{
	}

	FOnlineAsyncTaskOrionSteamUserRequestStoreAuthURL(UOrionSteamAsyncAction* AsyncObject, const FString RedirectURL, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_RedirectURL(RedirectURL)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamUserRequestStoreAuthURL() = delete;

protected:
	StoreAuthURLResponse_t m_CallbackResults;
	FString m_RedirectURL;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamUserRequestStoreAuthURL"));
	}
};
#endif
