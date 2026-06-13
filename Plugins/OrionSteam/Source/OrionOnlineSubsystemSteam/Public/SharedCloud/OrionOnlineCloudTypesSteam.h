/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "OnlineSubsystemTypes.h"
#include "OrionOnlineSubsystemSteamTypes.h"

#if WITH_ORIONSTEAM
struct ORIONONLINESUBSYSTEMSTEAM_API FCloudFileSteam : public FCloudFile
{
	const FSharedContentHandleSteam m_SharedHandle;

	FCloudFileSteam()
		: m_SharedHandle(k_UGCHandleInvalid)
	{
	}

	FCloudFileSteam(const FSharedContentHandleSteam& InSharedHandle)
		: m_SharedHandle(InSharedHandle)
	{
	}

	virtual ~FCloudFileSteam() override
	{
	}
};
#endif

#if WITH_ORIONSTEAM
struct ORIONONLINESUBSYSTEMSTEAM_API FSteamUserCloudData
{
	TArray<FCloudFileHeader> m_CloudMetadata;
	TArray<FCloudFile> m_CloudFileData;

public:
	const FUniqueNetIdSteamRef UserId;

	FSteamUserCloudData(const FUniqueNetIdSteam& InUserId)
		: UserId(InUserId.AsShared())
	{
	}

	virtual ~FSteamUserCloudData()
	{
		ClearMetadata();
		ClearFiles();
	}

	bool ClearFiles()
	{
		for (int32 FileIdx = 0; FileIdx < m_CloudFileData.Num(); FileIdx++)
		{
			m_CloudFileData[FileIdx].Data.Empty();
		}

		m_CloudFileData.Empty();
		return true;
	}

	bool ClearFileData(const FString& FileName)
	{
		int32 FoundIndex = INDEX_NONE;
		for (int32 FileIdx = 0; FileIdx < m_CloudFileData.Num(); FileIdx++)
		{
			FCloudFile* UserFileData = &m_CloudFileData[FileIdx];
			if (UserFileData->FileName == FileName)
			{
				if (UserFileData->AsyncState == EOnlineAsyncTaskState::InProgress)
				{
					return false;
				}

				UserFileData->Data.Empty();
				FoundIndex = FileIdx;
				break;
			}
		}

		if (FoundIndex != INDEX_NONE)
		{
			m_CloudFileData.RemoveAtSwap(FoundIndex);
		}
		return true;
	}

	void ClearMetadata()
	{
		m_CloudMetadata.Empty();
	}

	void ClearMetadata(const FString& FileName)
	{
		int32 FoundIndex = INDEX_NONE;
		for (int32 FileIdx = 0; FileIdx < m_CloudMetadata.Num(); FileIdx++)
		{
			const FCloudFileHeader* UserFileData = &m_CloudMetadata[FileIdx];
			if (UserFileData &&
				UserFileData->FileName == FileName)
			{
				FoundIndex = FileIdx;
				break;
			}
		}

		if (FoundIndex != INDEX_NONE)
		{
			m_CloudMetadata.RemoveAtSwap(FoundIndex);
		}
	}

	FCloudFileHeader* GetFileMetadata(const FString& FileName, bool bCreateIfMissing = false)
	{
		if (FileName.Len() > 0)
		{
			for (int32 FileIdx = 0; FileIdx < m_CloudMetadata.Num(); FileIdx++)
			{
				FCloudFileHeader* UserFileData = &m_CloudMetadata[FileIdx];
				if (UserFileData &&
					UserFileData->FileName == FileName)
				{
					return UserFileData;
				}
			}

			if (bCreateIfMissing)
			{
				return new (m_CloudMetadata) FCloudFileHeader(FileName, FileName, 0);
			}
		}

		return nullptr;
	}

	FCloudFile* GetFileData(const FString& FileName, bool bCreateIfMissing = false)
	{
		if (FileName.Len() > 0)
		{
			for (int32 FileIdx = 0; FileIdx < m_CloudFileData.Num(); FileIdx++)
			{
				FCloudFile* UserFileData = &m_CloudFileData[FileIdx];
				if (UserFileData &&
					UserFileData->FileName == FileName)
				{
					return UserFileData;
				}
			}

			if (bCreateIfMissing)
			{
				return new (m_CloudFileData) FCloudFile(FileName);
			}
		}

		return nullptr;
	}
};
#endif
