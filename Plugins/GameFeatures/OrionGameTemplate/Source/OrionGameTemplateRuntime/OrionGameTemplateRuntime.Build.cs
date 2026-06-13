/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

using UnrealBuildTool;

public class OrionGameTemplateRuntime : ModuleRules
{
	public OrionGameTemplateRuntime(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"GameCore",
			"OrionGame",
			"GameUI",
			"ModularGameplay",
			"ModularGameplayActors",
			"GameplayAbilities",
			"GameplayTags",
			"GameplayTasks",
			"EnhancedInput",
			"InputCore",
			"CommonInputSystem",
			"CommonGame",
			"CommonLoadingScreen",
			"CommonUI",
			"UMG",
			"UIExtension",
			"NetCore",
			"OrionSteamSDKAPI",
		});
	}
}
