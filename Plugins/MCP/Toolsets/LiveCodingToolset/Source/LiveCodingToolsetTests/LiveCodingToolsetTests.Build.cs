// Copyright Epic Games, Inc. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class LiveCodingToolsetTests : ModuleRules
	{
		public LiveCodingToolsetTests(ReadOnlyTargetRules Target) : base(Target)
		{
		ForceIncludeFiles.Add(System.IO.Path.GetFullPath(System.IO.Path.Combine(PluginDirectory, "..", "..", "UE58Compatibility.h")));
			PrivateDependencyModuleNames.AddRange(new string[]
			{
				"Core",
				"CoreUObject",
				"CQTest",
				"Engine",
				"LiveCodingToolset",
				"ToolsetRegistry",
				"UnrealEd",
			});
		}
	}
}
