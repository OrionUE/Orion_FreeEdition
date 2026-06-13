/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionArchiveLevelMeta.h"

#include "Handler/ArchiveHandler_LevelMeta.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionArchiveLevelMeta)

TSharedRef<FArchiveHandler_LevelMeta> UOrionArchiveLevelMeta::CreateLevelMeta(const FString& InUserID, const FString& InWorldID)
{
	UOrionArchiveLevelMeta* ArchiveLevelMeta = NewObject<UOrionArchiveLevelMeta>(GetTransientPackage());
	
	TSharedRef<FArchiveHandler_LevelMeta> NewLevelMetaHandler = MakeShared<FArchiveHandler_LevelMeta>(FArchiveHandler_LevelMeta(ArchiveLevelMeta, InUserID, InWorldID));
	return NewLevelMetaHandler;
}

TSharedRef<FArchiveHandler_LevelMeta> UOrionArchiveLevelMeta::LoadLevelMeta(const FString& InUserID, const FString& InWorldID)
{
	TSharedRef<FArchiveHandler_LevelMeta> NewLevelMetaHandler = MakeShared<FArchiveHandler_LevelMeta>(FArchiveHandler_LevelMeta(nullptr, InUserID, InWorldID));
	if (NewLevelMetaHandler->LoadArchive())
	{
		return NewLevelMetaHandler;
	}
	return CreateLevelMeta(InUserID, InWorldID);
}

TSharedRef<FArchiveHandler_LevelMeta> UOrionArchiveLevelMeta::AsyncLoadLevelMeta(const FString& InUserID, const FString& InWorldID, const FOnArchiveLoaded& OnArchiveLoaded)
{
	TSharedRef<FArchiveHandler_LevelMeta> NewLevelMetaHandler = MakeShared<FArchiveHandler_LevelMeta>(FArchiveHandler_LevelMeta(nullptr, InUserID, InWorldID));
	NewLevelMetaHandler->AsyncLoadArchive(OnArchiveLoaded);
	return NewLevelMetaHandler;
}

FDateTime UOrionArchiveLevelMeta::GetLastUpdateTime() const
{
	return LastUpdateTime;
}

void UOrionArchiveLevelMeta::SetLastUpdateTime()
{
	LastUpdateTime = FDateTime::Now();
}

const FString& UOrionArchiveLevelMeta::GetWorldName() const
{
	return WorldName;
}

void UOrionArchiveLevelMeta::SetWorldName(const FString& NewWorldName)
{
	WorldName = NewWorldName;
}

EOrionGameModeType UOrionArchiveLevelMeta::GetGameModeType() const
{
	return GameModeType;
}

void UOrionArchiveLevelMeta::SetGameModeType(EOrionGameModeType InGameModeType)
{
	GameModeType = InGameModeType;
}

const FPrimaryAssetId& UOrionArchiveLevelMeta::GetLevelMetaDefinitionAssetId() const
{
	return LevelMetaDefinitionAssetId;
}

void UOrionArchiveLevelMeta::SetLevelMetaDefinitionAssetId(const FPrimaryAssetId& InLevelMetaDefinitionAssetId)
{
	LevelMetaDefinitionAssetId = InLevelMetaDefinitionAssetId;
}
