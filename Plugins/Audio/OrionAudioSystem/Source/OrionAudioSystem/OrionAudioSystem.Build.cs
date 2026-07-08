/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

using UnrealBuildTool;

public class OrionAudioSystem : ModuleRules
{
	public OrionAudioSystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
		});
	}
}
