// Copyright (c) Ideality Century, Inc. All Rights Reserved.
// Author: LiuZe

using UnrealBuildTool;

public class CommonGameEffects : ModuleRules
{
	public CommonGameEffects(ReadOnlyTargetRules Target) : base(Target)
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
			"GameplayTags",
			"PhysicsCore",
		});
	}
}
