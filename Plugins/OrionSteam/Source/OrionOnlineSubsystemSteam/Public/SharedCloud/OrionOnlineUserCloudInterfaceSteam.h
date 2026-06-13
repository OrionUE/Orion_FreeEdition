/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OnlineSubsystemTypes.h"
#include "Interfaces/OnlineUserCloudInterface.h"
#include "TaskManager/OrionOnlineAsyncTaskManagerSteam.h"
#include "OrionOnlineSubsystemSteamPackage.h"

#if WITH_ORIONSTEAM

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineUserCloudSteam : public IOnlineUserCloud
{
	FOrionOnlineUserCloudSteam()
		: m_SteamSubsystem(nullptr)
	{
	}

PACKAGE_SCOPE:
	FOrionOnlineUserCloudSteam(class FOrionOnlineSubsystemSteam* InSubsystem)
		: m_SteamSubsystem(InSubsystem)
	{
	}

public:
	virtual ~FOrionOnlineUserCloudSteam() override;

	// IOnlineUserCloud
	virtual bool GetFileContents(const FUniqueNetId& UserId, const FString& FileName, TArray<uint8>& FileContents) override;
	virtual bool ClearFiles(const FUniqueNetId& UserId) override;
	virtual bool ClearFile(const FUniqueNetId& UserId, const FString& FileName) override;
	virtual void EnumerateUserFiles(const FUniqueNetId& UserId) override;
	virtual void GetUserFileList(const FUniqueNetId& UserId, TArray<FCloudFileHeader>& UserFiles) override;
	virtual bool ReadUserFile(const FUniqueNetId& UserId, const FString& FileName) override;
	virtual bool WriteUserFile(const FUniqueNetId& UserId, const FString& FileName, TArray<uint8>& FileContents, bool bCompressBeforeUpload = false) override;
	virtual void CancelWriteUserFile(const FUniqueNetId& UserId, const FString& FileName) override;
	virtual bool DeleteUserFile(const FUniqueNetId& UserId, const FString& FileName, bool bShouldCloudDelete, bool bShouldLocallyDelete) override;
	virtual bool RequestUsageInfo(const FUniqueNetId& UserId) override;
	virtual void DumpCloudState(const FUniqueNetId& UserId) override;
	virtual void DumpCloudFileState(const FUniqueNetId& UserId, const FString& FileName) override;

private:
	FOrionOnlineSubsystemSteam* m_SteamSubsystem;
};

typedef TSharedPtr<FOrionOnlineUserCloudSteam, ESPMode::ThreadSafe> FOrionOnlineUserCloudSteamPtr;
#endif
