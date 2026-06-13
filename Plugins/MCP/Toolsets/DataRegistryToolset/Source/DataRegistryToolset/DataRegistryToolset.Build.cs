// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DataRegistryToolset : ModuleRules
{
	public DataRegistryToolset(ReadOnlyTargetRules Target) : base(Target)
	{
		ForceIncludeFiles.Add(System.IO.Path.GetFullPath(System.IO.Path.Combine(PluginDirectory, "..", "..", "UE58Compatibility.h")));
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.Add("Core");

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"CoreUObject",
			"DataRegistry",
			"Engine",
			"GameplayTags",
			"Json",
			"ToolsetRegistry",
		});
	}
}
