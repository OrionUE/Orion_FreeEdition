// Copyright (c) Ideality Century, Inc. All Rights Reserved.
// Author: LiuZe

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
			"EnhancedInput",
			"CommonUI",
			"CommonInput",
		});
	}
}
