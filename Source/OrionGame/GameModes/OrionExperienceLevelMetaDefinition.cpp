/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionExperienceLevelMetaDefinition.h"

#include "SaveGame/OrionArchiveManagerSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionExperienceLevelMetaDefinition)

void UOrionExperienceLevelMetaDefinition::CreateNewGame(const UObject* WorldContextObject) const
{
	const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull);
	UGameInstance* GameInstance = World ? World->GetGameInstance() : nullptr;
	check(GameInstance)

	if (UOrionArchiveManagerSubsystem* ArchiveManager = GameInstance->GetSubsystem<UOrionArchiveManagerSubsystem>())
	{
		ArchiveManager->NewGame(this);
	}
}
