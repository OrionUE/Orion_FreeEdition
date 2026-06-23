/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

using UnrealBuildTool;

public class CommonInputSystem : ModuleRules
{
	public CommonInputSystem(ReadOnlyTargetRules Target) : base(Target)
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
			"GameplayAbilities",
			"GameplayTags",
			"Slate",
			"InputCore",
			"EnhancedInput",
			"CommonUI",
			"CommonInput",
		});
	}
}
