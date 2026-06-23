/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

using UnrealBuildTool;

public class GameCore : ModuleRules
{
	public GameCore(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(new string[]
		{
			"GameCore"
		});

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			// Game Features
			"GameFeatures",
			"ModularGameplay",
			"ModularGameplayActors",

			// Gameplay
			"CommonGame",
			"CommonUser",
			"CommonLoadingScreen",
			"GameplayMessageRuntime",

			// GAS
			"GameplayAbilities",
			"GameplayTasks",
			"GameplayTags",

			// Input
			"InputCore",
			"EnhancedInput",
			"CommonInput",
			"CommonInputSystem",

			// Settings
			"GameSettings",
			"EngineSettings",
			"DeveloperSettings",

			// UI
			"UMG",
			"CommonUI",
			"UIExtension",

			// Effects
			"CommonGameEffects",

			// Online
			"CoreOnline",
			"NetCore",
			"OnlineSubsystem",
			"OnlineSubsystemUtils",

			// Hotfix
			"Hotfix",
		});

		if (Target.Type == TargetType.Editor)
		{
			PrivateDependencyModuleNames.AddRange(new string[]
			{
				"HTTP",
				"Json",
				"Slate",
				"SlateCore",
			});
		}

		// Generate compile errors if using DrawDebug functions in test/shipping builds.
		PublicDefinitions.Add("SHIPPING_DRAW_DEBUG_ERROR=1");

		SetupIrisSupport(Target);

		bPrecompile = true;
		bUsePrecompiled = true;
		PrecompileForTargets = PrecompileTargetsType.Any;
	}
}
