/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionGameTemplateGameplayTags.h"

namespace OrionGameTemplateGameplayTags
{
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Ability_Template_Attack, "InputTag.Ability.Template.Attack", "Template demo attack ability input.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Ability_Template_Collect, "InputTag.Ability.Template.Collect", "Template demo collect or interact ability input.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Ability_Template_Build, "InputTag.Ability.Template.Build", "Template demo build ability input.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Ability_Template_Trade, "InputTag.Ability.Template.Trade", "Template demo trade ability input.");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_Template_Attack, "GameplayEvent.Template.Attack", "Template demo attack gameplay event.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_Template_Collect, "GameplayEvent.Template.Collect", "Template demo resource collection gameplay event.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_Template_Build, "GameplayEvent.Template.Build", "Template demo structure building gameplay event.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_Template_Trade, "GameplayEvent.Template.Trade", "Template demo workbench trade gameplay event.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(GameplayEvent_Template_ObjectiveComplete, "GameplayEvent.Template.ObjectiveComplete", "Template demo objective completion gameplay event.");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(UI_Layer_Game, "UI.Layer.Game", "Main gameplay UI layer.");
}
