// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SlateInspectorToolsetTests : ModuleRules
{
	public SlateInspectorToolsetTests(ReadOnlyTargetRules Target) : base(Target)
	{
		ForceIncludeFiles.Add(System.IO.Path.GetFullPath(System.IO.Path.Combine(PluginDirectory, "..", "..", "UE58Compatibility.h")));
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"CQTest",
			"Engine",
			"InputCore",
			"Slate",
			"SlateCore",
			"SlateInspectorToolset",
		});
	}
}
