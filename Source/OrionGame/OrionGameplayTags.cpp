/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionGameplayTags.h"

namespace OrionGameplayTags
{
	////////////////////////////////////////////////////////
	// Input
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Move, "InputTag.Move", "Move input.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Look_Mouse, "InputTag.Look.Mouse", "Look (mouse) input.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Look_Stick, "InputTag.Look.Stick", "Look (stick) input using gamepad.");

	////////////////////////////////////////////////////////
	// GameplayEvent
	UE_DEFINE_GAMEPLAY_TAG(GameplayEvent_Online_ListenSessionInvite, "GameplayEvent.Online.ListenSessionInvite");
}
