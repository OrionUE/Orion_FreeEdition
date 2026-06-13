// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EditorToolset : ModuleRules
{
	public EditorToolset(ReadOnlyTargetRules Target) : base(Target)
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
				"AssetRegistry",
				"ContentBrowser",
				"ContentBrowserData",
				"CoreUObject",
				"EditorFramework",
				"EditorScriptingUtilities",
				"EditorSubsystem",
				"Engine",
				"Json",
				"JsonUtilities",
				"Kismet",
				"LevelEditor",
				"RenderCore",
				"RHI",
				"Slate",
				"SlateCore",
				"StatusBar",
				"ToolsetRegistry",
				"UnrealEd",
			}
			);
	}
}
