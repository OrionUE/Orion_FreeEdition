/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionArchiveManagerSubsystem.h"

#include "ArchiveEntry.h"
#include "OrionArchiveContext.h"
#include "OrionArchiveLevelMeta.h"
#include "GameModes/OrionExperienceLevelMetaDefinition.h"
#include "Handler/OrionArchiveType.h"
#include "Player/OrionUserSubsystem.h"
#include "Session/OrionGameSessionComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionArchiveManagerSubsystem)

void UOrionArchiveManagerSubsystem::RefreshArchive()
{
	TArray<FString> WorldIDArray;
	GetAllArchiveWorldID(WorldIDArray);

	TArray<UOrionArchiveContext*> ArchiveItemsCache = ArchiveItems;
	ArchiveItems.Reset();

	for (const FString& WorldIDTmp : WorldIDArray)
	{
		UOrionArchiveContext** ArchiveContextTmp = ArchiveItemsCache.FindByPredicate([WorldIDTmp](const UOrionArchiveContext* InArchiveContext)
		{
			if (InArchiveContext)
				return InArchiveContext->GetWorldID().Equals(WorldIDTmp);
			return false;
		});
		if (ArchiveContextTmp)
		{
			ArchiveItems.Add(*ArchiveContextTmp);
		}
		else
		{
			ArchiveItems.Add(UOrionArchiveContext::GetArchive(this, WorldIDTmp));
		}
	}

	CurrentOperationArchive = nullptr;
}

void UOrionArchiveManagerSubsystem::NewGame(const UOrionExperienceLevelMetaDefinition* InLevelMetaDefinition)
{
	CurrentOperationArchive = UOrionArchiveContext::NewArchive(this);

	if (InLevelMetaDefinition)
	{
		GetCurrentLevelMeta()->SetLevelMetaDefinitionAssetId(InLevelMetaDefinition->GetPrimaryAssetId());
		GetCurrentLevelMeta()->SetGameModeType(InLevelMetaDefinition->GetGameModeType());
	}
}

void UOrionArchiveManagerSubsystem::LoadGame()
{
	if (CurrentOperationArchive)
		CurrentOperationArchive->LoadGame();
}

void UOrionArchiveManagerSubsystem::InitArchive()
{
	ArchiveItems.AddUnique(CurrentOperationArchive);
}

void UOrionArchiveManagerSubsystem::QuitWorld()
{
	CurrentOperationArchive = nullptr;
}

void UOrionArchiveManagerSubsystem::DeleteCurrentArchive()
{
	CurrentOperationArchive->DeleteArchive();
}

void UOrionArchiveManagerSubsystem::CreatePlayerArchive(const FOrionPlayerID& InPlayerID, const TSubclassOf<UOrionArchivePlayer>& InPlayerArchiveClass)
{
	CurrentOperationArchive->CreatePlayerArchive(InPlayerID, InPlayerArchiveClass);
}

void UOrionArchiveManagerSubsystem::SaveCurrentArchiveByTypes(const TArray<EOrionArchiveType>& InArchiveTypes)
{
	CurrentOperationArchive->SaveByTypes(InArchiveTypes);
}

UOrionArchiveLevelMeta* UOrionArchiveManagerSubsystem::GetCurrentLevelMeta() const
{
	return CurrentOperationArchive->GetLevelMetaArchive();
}

UOrionSettingsWorldOption* UOrionArchiveManagerSubsystem::GetCurrentWorldOptionSettings() const
{
	return CurrentOperationArchive->GetWorldOptionSettings();
}

void UOrionArchiveManagerSubsystem::GetOrLoadPlayerArchive(const FOrionPlayerID& InPlayerID, const FOnGetPlayerArchive& OnGetPlayerArchive) const
{
	if (CurrentOperationArchive)
	{
		CurrentOperationArchive->GetOrLoadPlayerArchive(InPlayerID, OnGetPlayerArchive);
	}
}

void UOrionArchiveManagerSubsystem::GetArchiveEntries(TArray<UArchiveEntry*>& InOutArchiveEntries)
{
	TArray<UArchiveEntry*> ArchiveEntriesCache = InOutArchiveEntries;
	InOutArchiveEntries.Reset();

	for (UOrionArchiveContext* ArchiveContextTmp : ArchiveItems)
	{
		UArchiveEntry** ArchiveEntryTmp = ArchiveEntriesCache.FindByPredicate([ArchiveContextTmp](const UArchiveEntry* InArchiveEntryTmp)
		{
			if (const UArchiveEntry_Item* ArchiveEntryTmp_Item = Cast<UArchiveEntry_Item>(InArchiveEntryTmp))
			{
				if (ArchiveEntryTmp_Item->Equals(ArchiveContextTmp))
				{
					return true;
				}
			}

			return false;
		});

		if (ArchiveEntryTmp)
		{
			InOutArchiveEntries.Add(*ArchiveEntryTmp);
		}
		else
		{
			UArchiveEntry_Item* NewArchiveEntry_Item = NewObject<UArchiveEntry_Item>(this);
			NewArchiveEntry_Item->Initialize(ArchiveContextTmp, FOnOperationArchiveChanged::CreateLambda([this](UOrionArchiveContext* CurrentSelectArchive)
			{
				CurrentOperationArchive = CurrentSelectArchive;
			}));
			InOutArchiveEntries.Add(NewArchiveEntry_Item);
		}
	}

	InOutArchiveEntries.Sort([](const UArchiveEntry& A, const UArchiveEntry& B)
	{
		const UArchiveEntry_Item* ItemA = Cast<UArchiveEntry_Item>(&A);
		if (!ItemA)
			return false;
		
		const UArchiveEntry_Item* ItemB = Cast<UArchiveEntry_Item>(&B);
		if (!ItemB)
			return false;

		return ItemA->GetLastUpdateTime() > ItemB->GetLastUpdateTime();
	});
}

void UOrionArchiveManagerSubsystem::ClearUnusedArchives()
{
	ArchiveItems.Reset();
	ArchiveItems.Shrink();
	ArchiveItems.Add(CurrentOperationArchive);
}

bool UOrionArchiveManagerSubsystem::IsFinishedRefresh() const
{
	for (const UOrionArchiveContext* ArchiveContextTmp : ArchiveItems)
	{
		if (ArchiveContextTmp && !ArchiveContextTmp->IsFinishedGetArchive())
			return false;
	}

	return true;
}

void UOrionArchiveManagerSubsystem::GetAllArchiveWorldID(TArray<FString>& OutWorldIDArray)
{
	FString UserPlayerID = UOrionUserSubsystem::Get().GetPlayerID().ToString();
	const FString SavesFolder = FPaths::ProjectSavedDir() + TEXT("SaveGames/") + UserPlayerID;

	if (!SavesFolder.IsEmpty())
	{
		FFindAllWorldIDVisitor Visitor;
		FPlatformFileManager::Get().GetPlatformFile().IterateDirectory(*SavesFolder, Visitor);
		OutWorldIDArray = Visitor.GetWorldIDArray();
	}
}
