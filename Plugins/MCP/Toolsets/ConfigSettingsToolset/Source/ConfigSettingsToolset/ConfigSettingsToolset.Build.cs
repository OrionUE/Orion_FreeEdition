// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ConfigSettingsToolset : ModuleRules
{
	public ConfigSettingsToolset(ReadOnlyTargetRules Target) : base(Target)
	{
		ForceIncludeFiles.Add(System.IO.Path.GetFullPath(System.IO.Path.Combine(PluginDirectory, "..", "..", "UE58Compatibility.h")));
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
			}
			);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Kismet",
				"Settings",
				"SourceControl",
				"ToolsetRegistry",
			}
			);
	}
}
