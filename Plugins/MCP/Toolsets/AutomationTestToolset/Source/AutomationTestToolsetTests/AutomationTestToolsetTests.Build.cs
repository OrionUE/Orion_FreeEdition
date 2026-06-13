// Copyright Epic Games, Inc. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class AutomationTestToolsetTests : ModuleRules
	{
		public AutomationTestToolsetTests(ReadOnlyTargetRules Target) : base(Target)
		{
		ForceIncludeFiles.Add(System.IO.Path.GetFullPath(System.IO.Path.Combine(PluginDirectory, "..", "..", "UE58Compatibility.h")));
			PrivateDependencyModuleNames.AddRange(new string[]
			{
				"AutomationController",
				"AutomationTestToolset",
				"Core",
				"CoreUObject",
				"CQTest",
				"Engine",
				"UnrealEd",
			});
		}
	}
}
