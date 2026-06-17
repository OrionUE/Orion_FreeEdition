/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

using UnrealBuildTool;

public class OrionProjectToolsets : ModuleRules
{
	public OrionProjectToolsets(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		IWYUSupport = IWYUSupport.Full;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"ToolsetRegistry",
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"AssetRegistry",
			"AssetTools",
			"CommonUI",
			"CommonInputSystem",
			"EditorSubsystem",
			"EnhancedInput",
			"GameCore",
			"GameFeatures",
			"GameplayAbilities",
			"GameplayTags",
			"InputCore",
			"Kismet",
			"ModularGameplay",
			"OrionGame",
			"Slate",
			"SlateCore",
			"UMG",
			"UMGEditor",
			"UnrealEd",
		});
	}
}
