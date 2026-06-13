/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionArchiveContext.h"

#include "OrionArchiveLevelMeta.h"
#include "OrionArchiveManagerSubsystem.h"
#include "OrionArchivePlayer.h"
#include "Handler/ArchiveHandler_LevelMeta.h"
#include "Handler/ArchiveHandler_Player.h"
#include "Handler/ArchiveHandler_WorldOption.h"
#include "Player/OrionUserSubsystem.h"
#include "Settings/Game/OrionSettingsWorldOption.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionArchiveContext)

UOrionArchiveContext* UOrionArchiveContext::NewArchive(UOrionArchiveManagerSubsystem* InArchiveManager)
{
	UOrionArchiveContext* NewArchiveContext = NewObject<UOrionArchiveContext>(InArchiveManager);
	NewArchiveContext->CreateNewWorld();
	
	return NewArchiveContext;
}

UOrionArchiveContext* UOrionArchiveContext::GetArchive(UOrionArchiveManagerSubsystem* InArchiveManager, const FString& InWorldID)
{
	UOrionArchiveContext* NewArchiveContext = NewObject<UOrionArchiveContext>(InArchiveManager);
	NewArchiveContext->WorldID = InWorldID;
	NewArchiveContext->OnGetArchive();

	return NewArchiveContext;
}

void UOrionArchiveContext::CreateNewWorld()
{
	WorldID = FGuid::NewGuid().ToString();

	LevelMetaHandler = UOrionArchiveLevelMeta::CreateLevelMeta(GetUserPlayerID(), WorldID);
	WorldOptionHandler = UOrionSettingsWorldOption::CreateWorldOption(GetUserPlayerID(), WorldID);

	bGetArchiveFinished = true;
}

void UOrionArchiveContext::LoadGame()
{
	if (!WorldOptionHandler.IsValid())
	{
		WorldOptionHandler = UOrionSettingsWorldOption::LoadWorldOption(GetUserPlayerID(), WorldID);
	}
}

void UOrionArchiveContext::CreatePlayerArchive(const FOrionPlayerID& InPlayerID, const TSubclassOf<UOrionArchivePlayer>& InPlayerArchiveClass)
{
	TSharedPtr<FArchiveHandler_Player> NewPlayerHandler = UOrionArchivePlayer::CreatePlayer(GetUserPlayerID(), WorldID, InPlayerID, InPlayerArchiveClass);
	PlayerHandlerMap.Add(InPlayerID, NewPlayerHandler);
}

void UOrionArchiveContext::SaveByTypes(const TArray<EOrionArchiveType>& InArchiveTypes)
{
	for (const EOrionArchiveType& ArchiveTypeTmp : InArchiveTypes)
	{
		switch (ArchiveTypeTmp)
		{
		case EOrionArchiveType::WorldOption:
			if (WorldOptionHandler.IsValid())
			{
				WorldOptionHandler->AsyncSaveArchive();
			}
			break;
			
		case EOrionArchiveType::LevelMeta:
			if (LevelMetaHandler.IsValid())
			{
				LevelMetaHandler->AsyncSaveArchive();
			}
			break;
			
		case EOrionArchiveType::Player:
			for (const auto& PlayerHandlerTmp : PlayerHandlerMap)
			{
				if (PlayerHandlerTmp.Value.IsValid())
				{
					PlayerHandlerTmp.Value->AsyncSaveArchive();
				}
			}
			break;
		}
	}
}

void UOrionArchiveContext::DeleteArchive()
{
	if (LevelMetaHandler.IsValid())
		LevelMetaHandler->DeleteArchive();

	// Todo: 删除存档，或者不删除保存备份
}

UOrionArchiveLevelMeta* UOrionArchiveContext::GetLevelMetaArchive()
{
	if (!LevelMetaHandler.IsValid())
	{
		LevelMetaHandler = UOrionArchiveLevelMeta::LoadLevelMeta(GetUserPlayerID(), WorldID);
	}

	return LevelMetaHandler->GetLevelMeta();
}

UOrionSettingsWorldOption* UOrionArchiveContext::GetWorldOptionSettings()
{
	if (!WorldOptionHandler.IsValid())
	{
		WorldOptionHandler = UOrionSettingsWorldOption::LoadWorldOption(GetUserPlayerID(), WorldID);
	}

	return WorldOptionHandler->GetWorldOption();
}

void UOrionArchiveContext::GetOrLoadPlayerArchive(const FOrionPlayerID& InPlayerID, const FOnGetPlayerArchive& OnGetPlayerArchive)
{
	FScopeLock Lock(&PlayerHandlerMapCriticalSection);

	const TSharedPtr<FArchiveHandler_Player>* PlayerHandler = PlayerHandlerMap.Find(InPlayerID);

	// 存档未加载或加载失败
	if (PlayerHandler == nullptr || !PlayerHandler->IsValid())
	{
		TSharedPtr<FArchiveHandler_Player> NewPlayerHandler = UOrionArchivePlayer::AsyncLoadPlayer(GetUserPlayerID(), WorldID, InPlayerID, FOnArchiveLoaded::CreateLambda([this, InPlayerID, OnGetPlayerArchive](bool bSuccess)
		{
			FScopeLock CallbackLock(&PlayerHandlerMapCriticalSection);

			const TSharedPtr<FArchiveHandler_Player>* NewPlayerHandler = PlayerHandlerMap.Find(InPlayerID);
			if (bSuccess && NewPlayerHandler && NewPlayerHandler->IsValid())
			{
				OnGetPlayerArchive.ExecuteIfBound((*NewPlayerHandler)->GetPlayer());
			}
			else
			{
				PlayerHandlerMap.Remove(InPlayerID);
				OnGetPlayerArchive.ExecuteIfBound(nullptr);
			}
		}));

		PlayerHandlerMap.Add(InPlayerID, NewPlayerHandler);
	}
	else
	{
		OnGetPlayerArchive.ExecuteIfBound((*PlayerHandler)->GetPlayer());
	}
}

bool UOrionArchiveContext::IsSavedOptionSettings()
{
	if (WorldOptionHandler.IsValid())
	{
		return WorldOptionHandler->DoesArchiveExist();
	}

	return false;
}

void UOrionArchiveContext::OnGetArchive()
{
	LevelMetaHandler = UOrionArchiveLevelMeta::AsyncLoadLevelMeta(GetUserPlayerID(), WorldID, FOnArchiveLoaded::CreateLambda([this](bool bSuccess)
	{
		if (bSuccess)
		{
			bGetArchiveFinished = true;
		}
		else
		{
			ConditionalBeginDestroy();
		}
	}));
}

FString UOrionArchiveContext::GetUserPlayerID()
{
	FString UserPlayerID = UOrionUserSubsystem::Get(this).GetPlayerID().ToString();
	if (UserPlayerID.IsEmpty())
	{
		UserPlayerID = TEXT("0");
	}

	return UserPlayerID;
}
