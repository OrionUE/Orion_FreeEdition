/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

using UnrealBuildTool;

public class OrionGame : ModuleRules
{
	public OrionGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(new string[]
		{
			"OrionGame"
		});

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core", 
			"CoreUObject", 
			"Engine",
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			// Game Core
			"GameCore",
			
			// Game Features
			"GameFeatures",
			"ModularGameplay",
			"ModularGameplayActors",
			
			// Gameplay
			"CommonGame",
			"CommonUser",
			"CommonLoadingScreen",
			"GameplayMessageRuntime",
			"GameReplaysSystem",
			"AIModule",
			
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
			
			// Render
			"RHI",
			"RenderCore",
			"ApplicationCore",
			"DLSSBlueprint",
			"NISBlueprint",
			"StreamlineBlueprint",
			"StreamlineDLSSGBlueprint",
			"StreamlineReflexBlueprint",
			
			// UI
			"UMG",
			"Slate",
			"SlateCore",
			"CommonUI",
			"GameSubtitles",
			
			// Audio
			"AudioMixer",
			"AudioModulation",
			"Voice",
			"OrionVoiceChat",
			
			// Effects
			"CommonGameEffects",
			
			// Online
			"CoreOnline",
			"NetCore",
			"OnlineSubsystem",
			"OnlineSubsystemUtils",
			"OrionSteamSDKAPI",
			"OrionSteamShared",
			
			// Utils
			"ControlFlows",
		});

		if (Target.Type == TargetType.Editor)
		{
			PublicDefinitions.Add("ORION_WITH_PLATFORM_DLC=0");
		}
		else
		{
			PrivateDependencyModuleNames.Add("PlatformDLC");
			PublicDefinitions.Add("ORION_WITH_PLATFORM_DLC=1");
		}

		// Generate compile errors if using DrawDebug functions in test/shipping builds.
		PublicDefinitions.Add("SHIPPING_DRAW_DEBUG_ERROR=1");

		SetupGameplayDebuggerSupport(Target);
		SetupIrisSupport(Target);
	}
}
