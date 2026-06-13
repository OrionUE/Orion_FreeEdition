// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PluginToolset : ModuleRules
{
	public PluginToolset(ReadOnlyTargetRules Target) : base(Target)
	{
		ForceIncludeFiles.Add(System.IO.Path.GetFullPath(System.IO.Path.Combine(PluginDirectory, "..", "..", "UE58Compatibility.h")));
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Kismet",
				"PluginUtils",
				"Projects",
				"SourceControl",
				"ToolsetRegistry",
				"UnrealEd",
				// ... add private dependencies that you statically link with here ...	
			}
			);
	}
}
