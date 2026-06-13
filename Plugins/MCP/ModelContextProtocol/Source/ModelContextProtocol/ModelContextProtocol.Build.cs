// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ModelContextProtocol : ModuleRules
{
	public ModelContextProtocol(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		ForceIncludeFiles.Add(System.IO.Path.GetFullPath(System.IO.Path.Combine(PluginDirectory, "..", "UE58Compatibility.h")));

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"Analytics",
				"AnalyticsET",
				"HTTPServer",
				"JsonUtilities",
				"Json"
			});

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject"
			});
	}
}
