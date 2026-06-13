/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionSettingsWorldOption.h"

#include "SaveGame/Handler/ArchiveHandler_WorldOption.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionSettingsWorldOption)

TSharedRef<FArchiveHandler_WorldOption> UOrionSettingsWorldOption::CreateWorldOption(const FString& InUserID, const FString& InWorldID)
{
	UOrionSettingsWorldOption* SettingsGameWorld = NewObject<UOrionSettingsWorldOption>(GetTransientPackage());
	
	TSharedRef<FArchiveHandler_WorldOption> NewWorldOptionHandler = MakeShared<FArchiveHandler_WorldOption>(FArchiveHandler_WorldOption(SettingsGameWorld, InUserID, InWorldID));
	return NewWorldOptionHandler;
}

TSharedRef<FArchiveHandler_WorldOption> UOrionSettingsWorldOption::LoadWorldOption(const FString& InUserID, const FString& InWorldID)
{
	TSharedRef<FArchiveHandler_WorldOption> NewWorldOptionHandler = MakeShared<FArchiveHandler_WorldOption>(FArchiveHandler_WorldOption(nullptr, InUserID, InWorldID));
	if (NewWorldOptionHandler->LoadArchive())
	{
		return NewWorldOptionHandler;
	}
	return CreateWorldOption(InUserID, InWorldID);
}

void UOrionSettingsWorldOption::InitializeSaveGame()
{
}
