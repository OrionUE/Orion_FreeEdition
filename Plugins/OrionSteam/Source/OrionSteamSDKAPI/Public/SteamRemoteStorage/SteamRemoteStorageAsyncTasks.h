/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OrionSteamSDKAPI/OrionSteamAsync.h"
#include "SteamRemoteStorageTypes.h"

#if WITH_ORIONSTEAM
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamRemoteStorageFileWriteAsync
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamRemoteStorageFileWriteAsync : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnFileWriteAsync m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamRemoteStorageFileWriteAsync(const FOnFileWriteAsync Callback, const FString File, const TArray<uint8> Data, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_File(File), m_Data(Data)
	{
	}

private:
	FOnlineAsyncTaskOrionSteamRemoteStorageFileWriteAsync() = delete;

protected:
	RemoteStorageFileWriteAsyncComplete_t m_CallbackResults;
	FString m_File;
	TArray<uint8> m_Data;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamRemoteStorageFileWriteAsync"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamRemoteStorageFileReadAsync
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamRemoteStorageFileReadAsync : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnFileReadAsync m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamRemoteStorageFileReadAsync(const FOnFileReadAsync Callback, const FString File, const int32 Offset, const int32 BytesToRead, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_File(File), m_Offset(Offset), m_BytesToRead(BytesToRead)
	{
	}

private:
	FOnlineAsyncTaskOrionSteamRemoteStorageFileReadAsync() = delete;

protected:
	RemoteStorageFileReadAsyncComplete_t m_CallbackResults;
	FString m_File;
	int32 m_Offset;
	int32 m_BytesToRead;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamRemoteStorageFileReadAsync"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamRemoteStorageFileShare
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamRemoteStorageFileShare : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnFileShareAsync m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamRemoteStorageFileShare(const FOnFileShareAsync Callback, const FString File, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_File(File)
	{
	}

private:
	FOnlineAsyncTaskOrionSteamRemoteStorageFileShare() = delete;

protected:
	RemoteStorageFileShareResult_t m_CallbackResults;
	FString m_File;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamRemoteStorageFileShare"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamRemoteStorageUGCDownload
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamRemoteStorageUGCDownload : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnUGCDownloadAsync m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamRemoteStorageUGCDownload(const FOnUGCDownloadAsync Callback, const FSteamUGCHandle Content, const int32 Priority, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_Content(Content), m_Priority(Priority)
	{
	}

private:
	FOnlineAsyncTaskOrionSteamRemoteStorageUGCDownload() = delete;

protected:
	RemoteStorageDownloadUGCResult_t m_CallbackResults;
	FSteamUGCHandle m_Content;
	int32 m_Priority;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamRemoteStorageUGCDownload"));
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskOrionSteamRemoteStorageUGCDownloadToLocation
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class ORIONSTEAMSDKAPI_API FOnlineAsyncTaskOrionSteamRemoteStorageUGCDownloadToLocation : public FOrionOnlineAsyncTaskSteam
{
public:
	FOnUGCDownloadToLocationAsync m_OnSteamCallback;

public:
	FOnlineAsyncTaskOrionSteamRemoteStorageUGCDownloadToLocation(const FOnUGCDownloadToLocationAsync Callback, const FSteamUGCHandle Content, const FString Location, const int32 Priority, float Timeout = 10.f)
		: FOrionOnlineAsyncTaskSteam(k_uAPICallInvalid, Timeout), m_OnSteamCallback(Callback), m_CallbackResults(), m_Content(Content), m_Location(Location), m_Priority(Priority)
	{
	}

private:
	FOnlineAsyncTaskOrionSteamRemoteStorageUGCDownloadToLocation() = delete;

protected:
	RemoteStorageDownloadUGCResult_t m_CallbackResults;
	FSteamUGCHandle m_Content;
	FString m_Location;
	int32 m_Priority;

private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskOrionSteamRemoteStorageUGCDownloadToLocation"));
	}
};
#endif
