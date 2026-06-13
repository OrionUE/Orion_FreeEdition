/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionGameSessionComponent.h"

#include "SaveGame/OrionArchiveManagerSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionGameSessionComponent)

void UOrionGameSessionComponent::QuitSession_Implementation()
{
	if (UOrionArchiveManagerSubsystem* ArchiveManager = GetGameInstance<UGameInstance>()->GetSubsystem<UOrionArchiveManagerSubsystem>())
	{
		ArchiveManager->QuitWorld();
	}
}

void UOrionGameSessionComponent::JoinInvitedSession_Implementation(UCommonSession_SearchResult* InSessionSearchResult)
{
	// 加入新Session之前先退出当前Session
	if (UOrionArchiveManagerSubsystem* ArchiveManager = GetGameInstance<UGameInstance>()->GetSubsystem<UOrionArchiveManagerSubsystem>())
	{
		ArchiveManager->QuitWorld();
	}
}
