// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ModelContextProtocolEditor : ModuleRules
{
	public ModelContextProtocolEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		ForceIncludeFiles.Add(System.IO.Path.GetFullPath(System.IO.Path.Combine(PluginDirectory, "..", "UE58Compatibility.h")));

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"AssetDefinition",
				"EngineAssetDefinitions",
				"ModelContextProtocol",
				"ModelContextProtocolEngine",
				"Blutility"
			});

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Projects",
				"InputCore",
				"EditorFramework",
				"UnrealEd",
				"ToolMenus",
				"CoreUObject",
				"Engine",
				"Json",
				"JsonUtilities",
				"Slate",
				"SlateCore",
				"BlueprintGraph",
				"DeveloperSettings",
				"JsonUtilitiesEditor",
				"KismetCompiler",
				"ToolsetRegistry"
			});
	}
}
