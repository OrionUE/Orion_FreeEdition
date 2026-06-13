// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ModelContextProtocolTests : ModuleRules
{
	public ModelContextProtocolTests(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		ForceIncludeFiles.Add(System.IO.Path.GetFullPath(System.IO.Path.Combine(PluginDirectory, "..", "UE58Compatibility.h")));

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core"
			});

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Analytics",
				"AnalyticsET",
				"Json",
				"JsonUtilities",
				"HTTPServer",
				"HTTP",
				"ModelContextProtocol",
				"ModelContextProtocolEngine"
			});

		PrivateIncludePaths.Add(System.IO.Path.Combine(ModuleDirectory, "..", "ModelContextProtocol", "Private", "Tests"));
	}
}
