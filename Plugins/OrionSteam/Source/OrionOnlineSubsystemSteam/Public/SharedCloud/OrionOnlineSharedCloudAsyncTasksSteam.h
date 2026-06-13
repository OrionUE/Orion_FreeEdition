/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "TaskManager/OrionOnlineAsyncTaskManagerSteam.h"
#include "OrionOnlineSubsystemSteamTypes.h"

#if WITH_ORIONSTEAM

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamReadSharedFile : public FOrionOnlineAsyncTaskSteam
{
	FOrionOnlineAsyncTaskSteamReadSharedFile()
		: m_CallbackResults(),
		  m_SharedHandle(k_UGCHandleInvalid), m_bInit(false)
	{
	}

PACKAGE_SCOPE:
	RemoteStorageDownloadUGCResult_t m_CallbackResults;

public:
	FOrionOnlineAsyncTaskSteamReadSharedFile(class FOrionOnlineSubsystemSteam* InSubsystem, const FSharedContentHandleSteam& InSharedHandle)
		: FOrionOnlineAsyncTaskSteam(InSubsystem, k_uAPICallInvalid),
		  m_CallbackResults(),
		  m_SharedHandle(InSharedHandle), m_bInit(false)
	{
	}

	virtual FString ToString() const override;
	virtual void Tick() override;
	virtual void Finalize() override;
	virtual void TriggerDelegates() override;

private:
	FSharedContentHandleSteam m_SharedHandle;
	bool m_bInit;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamEnumerateUserFiles : public FOrionOnlineAsyncTaskSteam
{
	FOrionOnlineAsyncTaskSteamEnumerateUserFiles() = delete;

public:
	FOrionOnlineAsyncTaskSteamEnumerateUserFiles(class FOrionOnlineSubsystemSteam* InSubsystem, const FUniqueNetIdSteam& InUserId)
		: FOrionOnlineAsyncTaskSteam(InSubsystem, k_uAPICallInvalid),
		  m_UserId(InUserId.AsShared())
	{
	}

	virtual FString ToString() const override;
	virtual void Tick() override;
	virtual void TriggerDelegates() override;

private:
	FUniqueNetIdSteamRef m_UserId;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamReadUserFile : public FOrionOnlineAsyncTaskSteam
{
	FOrionOnlineAsyncTaskSteamReadUserFile() = delete;

public:
	FOrionOnlineAsyncTaskSteamReadUserFile(class FOrionOnlineSubsystemSteam* InSubsystem, const FUniqueNetIdSteam& InUserId, const FString& InFileName)
		: FOrionOnlineAsyncTaskSteam(InSubsystem, k_uAPICallInvalid),
		  m_UserId(InUserId.AsShared()),
		  m_FileName(InFileName)
	{
	}

	virtual FString ToString() const override;
	virtual void Tick() override;
	virtual void TriggerDelegates() override;

	PACKAGE_SCOPE : FUniqueNetIdSteamRef m_UserId;
	FString m_FileName;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamWriteUserFile : public FOrionOnlineAsyncTaskSteam
{
	FOrionOnlineAsyncTaskSteamWriteUserFile() = delete;

	PACKAGE_SCOPE : bool WriteUserFile(const FUniqueNetId& UserId, const FString& FileToWrite, const TArray<uint8>& Contents);

public:
	FOrionOnlineAsyncTaskSteamWriteUserFile(class FOrionOnlineSubsystemSteam* InSubsystem, const FUniqueNetIdSteam& InUserId, const FString& InFileName, const TArray<uint8>& InContents)
		: FOrionOnlineAsyncTaskSteam(InSubsystem, k_uAPICallInvalid),
		  m_Contents(InContents),
		  m_UserId(InUserId.AsShared()),
		  m_FileName(InFileName)
	{
	}

	virtual FString ToString() const override;
	virtual void Tick() override;
	virtual void TriggerDelegates() override;

	PACKAGE_SCOPE : TArray<uint8> m_Contents;
	FUniqueNetIdSteamRef m_UserId;
	FString m_FileName;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamDeleteUserFile : public FOrionOnlineAsyncTaskSteam
{
	FOrionOnlineAsyncTaskSteamDeleteUserFile() = delete;

public:
	FOrionOnlineAsyncTaskSteamDeleteUserFile(class FOrionOnlineSubsystemSteam* InSubsystem, const FUniqueNetIdSteam& InUserId, const FString& InFileName, bool bInShouldCloudDelete, bool bInShouldLocallyDelete)
		: FOrionOnlineAsyncTaskSteam(InSubsystem, k_uAPICallInvalid),
		  m_bShouldCloudDelete(bInShouldCloudDelete),
		  m_bShouldLocallyDelete(bInShouldLocallyDelete),
		  m_UserId(InUserId.AsShared()),
		  m_FileName(InFileName)
	{
	}

	virtual FString ToString() const override;
	virtual void Tick() override;
	virtual void TriggerDelegates() override;

private:
	bool m_bShouldCloudDelete;
	bool m_bShouldLocallyDelete;
	FUniqueNetIdSteamRef m_UserId;
	FString m_FileName;
};

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineAsyncTaskSteamWriteSharedFile : public FOrionOnlineAsyncTaskSteamWriteUserFile
{
	FOrionOnlineAsyncTaskSteamWriteSharedFile() = delete;

	PACKAGE_SCOPE : RemoteStorageFileShareResult_t m_CallbackResults;

public:
	FOrionOnlineAsyncTaskSteamWriteSharedFile(class FOrionOnlineSubsystemSteam* InSubsystem, const FUniqueNetIdSteam& InUserId, const FString& InFileName, const TArray<uint8>& InContents)
		: FOrionOnlineAsyncTaskSteamWriteUserFile(InSubsystem, InUserId, InFileName, InContents),
		  m_CallbackResults(), m_bInit(false)
	{
	}

	virtual FString ToString() const override;
	virtual void Tick() override;
	virtual void Finalize() override;
	virtual void TriggerDelegates() override;

private:
	bool m_bInit;
};
#endif
