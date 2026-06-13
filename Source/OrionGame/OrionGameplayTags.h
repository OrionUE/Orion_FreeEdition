/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "NativeGameplayTags.h"

/**
 * 硬编码的GameplayTags
 */
namespace OrionGameplayTags
{
	////////////////////////////////////////////////////////
	// Input
	ORIONGAME_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Move);
	ORIONGAME_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look_Mouse);
	ORIONGAME_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look_Stick);

	////////////////////////////////////////////////////////
	// GameplayEvent
	ORIONGAME_API	UE_DECLARE_GAMEPLAY_TAG_EXTERN(GameplayEvent_Online_ListenSessionInvite);
}
