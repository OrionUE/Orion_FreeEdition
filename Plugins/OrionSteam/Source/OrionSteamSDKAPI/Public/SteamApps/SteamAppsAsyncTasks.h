/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "SteamAppsTypes.h"
#include "OrionSteamSDKAPI/OrionSteamAsync.h"

#if WITH_ORIONSTEAM
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamAppsGetFileDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamAppsGetFileDetails : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnFileDetailsResult m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamAppsGetFileDetails(FOnFileDetailsResult Callback, const FString FileName, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_FileName(FileName)
	{
	}

	FOnlineAsyncTaskOrionSteamAppsGetFileDetails(UOrionSteamAsyncAction* AsyncObject, const FString FileName, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, AsyncObject, Timeout), m_CallbackResults(), m_FileName(FileName)
	{
		m_OnSteamCallback.BindUFunction(AsyncObject, "HandleCallback");
	}

private:
	FOnlineAsyncTaskOrionSteamAppsGetFileDetails() = delete;

protected:
	FileDetailsResult_t m_CallbackResults;
	FString m_FileName;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamAppsGetFileDetails"));
	}
};
#endif
