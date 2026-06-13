// Copyright Epic Games, Inc. All Rights Reserved.

namespace UnrealBuildTool.Rules
{
	public class AutomationTestToolset : ModuleRules
	{
		public AutomationTestToolset(ReadOnlyTargetRules Target) : base(Target)
		{
		ForceIncludeFiles.Add(System.IO.Path.GetFullPath(System.IO.Path.Combine(PluginDirectory, "..", "..", "UE58Compatibility.h")));
			PublicDependencyModuleNames.AddRange(
				new string[] {
					"ToolsetRegistry",
				}
			);

			PrivateDependencyModuleNames.AddRange(
				new string[] {
					"AutomationController",
					"AutomationTest",
					"Core",
					"CoreUObject",
					"EditorSubsystem",
					"Engine",
					"Json",
					"SessionServices",
					"UnrealEd",
				}
			);
		}
	}
}
