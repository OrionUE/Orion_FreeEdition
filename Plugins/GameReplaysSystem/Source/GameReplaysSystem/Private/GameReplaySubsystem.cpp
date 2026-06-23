/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GameReplaySubsystem.h"

#include "CommonUISettings.h"
#include "ICommonUIModule.h"

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Platform_Trait_ReplaySupport, "Platform.Trait.ReplaySupport");

UGameReplaySubsystem::UGameReplaySubsystem()
{
}

bool UGameReplaySubsystem::DoesPlatformSupportReplays()
{
	if (ICommonUIModule::GetSettings().GetPlatformTraits().HasTag(GetPlatformSupportTraitTag()))
	{
		return true;
	}
	return false;
}

FGameplayTag UGameReplaySubsystem::GetPlatformSupportTraitTag()
{
	return TAG_Platform_Trait_ReplaySupport.GetTag();
}
