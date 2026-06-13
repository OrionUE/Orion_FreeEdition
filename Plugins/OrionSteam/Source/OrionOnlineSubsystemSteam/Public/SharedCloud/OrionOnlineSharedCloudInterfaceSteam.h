/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OnlineSubsystemTypes.h"
#include "TaskManager/OrionOnlineAsyncTaskManagerSteam.h"
#include "Interfaces/OnlineSharedCloudInterface.h"
#include "OrionOnlineSubsystemSteamPackage.h"

struct FCloudFileSteam;

#if WITH_ORIONSTEAM

class ORIONONLINESUBSYSTEMSTEAM_API FOrionOnlineSharedCloudSteam : public IOnlineSharedCloud
{
	FOrionOnlineSharedCloudSteam()
		: m_SteamSubsystem(nullptr)
	{
	}

PACKAGE_SCOPE:
	FOrionOnlineSharedCloudSteam(class FOrionOnlineSubsystemSteam* InSubsystem)
		: m_SteamSubsystem(InSubsystem)
	{
	}

	FCloudFileSteam* GetSharedCloudFile(const FSharedContentHandle& SharedHandle);

public:
	virtual ~FOrionOnlineSharedCloudSteam() override
	{
		ClearSharedFiles();
	}

	// IOnlineSharedCloud
	virtual bool GetSharedFileContents(const FSharedContentHandle& SharedHandle, TArray<uint8>& FileContents) override;
	virtual bool ClearSharedFiles() override final;
	virtual bool ClearSharedFile(const FSharedContentHandle& SharedHandle) override;
	virtual bool ReadSharedFile(const FSharedContentHandle& SharedHandle) override;
	virtual bool WriteSharedFile(const FUniqueNetId& UserId, const FString& Filename, TArray<uint8>& FileContents) override;
	virtual void GetDummySharedHandlesForTest(TArray<TSharedRef<FSharedContentHandle>>& OutHandles) override;

protected:
	FOrionOnlineSubsystemSteam* m_SteamSubsystem;
	TArray<FCloudFileSteam*> m_SharedFileCache;
};

typedef TSharedPtr<FOrionOnlineSharedCloudSteam, ESPMode::ThreadSafe> FOrionOnlineSharedCloudSteamPtr;
#endif
