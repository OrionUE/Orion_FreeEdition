/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

using UnrealBuildTool;

public class GameUI : ModuleRules
{
	public GameUI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(new string[]
		{
			"GameUI"
		});

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

			// Game Features
			"ModularGameplay",

			// Gameplay
			"CommonGame",
			"CommonUser",
			"CommonLoadingScreen",
			"InteractionSystem",

			// GAS
			"GameplayAbilities",
			"GameplayTags",

			// Input
			"InputCore",
			"EnhancedInput",
			"CommonInput",
			"CommonInputSystem",

			// Settings
			"GameSettings",
			"DeveloperSettings",

			// UI
			"UMG",
			"Slate",
			"SlateCore",
			"CommonUI",
			"GameSubtitles",

			// Online
			"OrionSteamSDKAPI",
			"OrionOnlineSubsystemSteam",

			// Utils
			"ControlFlows",
			"ApplicationCore",
		});

		bool bWithOrionBrowser = Target.Type != TargetType.Server
			&& Target.Platform == UnrealTargetPlatform.Win64;

		PublicDefinitions.Add("GAMEUI_WITH_ORION_BROWSER=" + (bWithOrionBrowser ? "1" : "0"));

		if (bWithOrionBrowser)
		{
			PrivateDependencyModuleNames.AddRange(new string[]
			{
				"OrionBrowser",
				"OrionBrowserWidget",
			});
		}
	}
}
