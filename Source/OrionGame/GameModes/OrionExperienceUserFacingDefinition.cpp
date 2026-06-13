/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionExperienceUserFacingDefinition.h"

#include "CommonSessionSubsystem.h"
#include "GameReplaySubsystem.h"
#include "SaveGame/OrionArchiveLevelMeta.h"
#include "SaveGame/OrionArchiveManagerSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionExperienceUserFacingDefinition)

UCommonSession_HostSessionRequest* UOrionExperienceUserFacingDefinition::CreateHostingRequest(const UObject* WorldContextObject) const
{
	UCommonSession_HostSessionRequest* Result = Super::CreateHostingRequest(WorldContextObject);
	
	Result->MaxPlayerCount = MaxPlayerCount;

	if (UGameReplaySubsystem::DoesPlatformSupportReplays())
	{
		if (bRecordReplay)
		{
			Result->ExtraArgs.Add(TEXT("DemoRec"), FString());
		}
	}

	if (const UWorld* World = WorldContextObject->GetWorld())
	{
		if (UOrionArchiveManagerSubsystem* ArchiveManager = World->GetGameInstance()->GetSubsystem<UOrionArchiveManagerSubsystem>())
		{
			if (UOrionArchiveLevelMeta* LevelMeta = ArchiveManager->GetCurrentLevelMeta())
			{
				Result->SessionName = LevelMeta->GetWorldName();
			}
		}
	}

	return Result;
}
