// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DataflowAgent : ModuleRules
{
	public DataflowAgent(ReadOnlyTargetRules Target) : base(Target)
	{
		ForceIncludeFiles.Add(System.IO.Path.GetFullPath(System.IO.Path.Combine(PluginDirectory, "..", "..", "UE58Compatibility.h")));
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		bTreatAsEngineModule = true;

		PrivateIncludePaths.AddRange(
			new string[]
			{
				System.IO.Path.Combine(EngineDirectory, "Plugins/Experimental/Dataflow/Source/DataflowEditor/Private"),
			}
		);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"ToolsetRegistry",
				"DataflowCore",
				"DataflowEngine",
				"Projects",
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"UnrealEd",
				"DataflowEditor",
				"AssetTools",
				"AssetRegistry",
				"Json",
				"JsonUtilities",
				"EditorSubsystem",
				"GraphEditor",
				"Kismet",
			}
		);
	}
}
