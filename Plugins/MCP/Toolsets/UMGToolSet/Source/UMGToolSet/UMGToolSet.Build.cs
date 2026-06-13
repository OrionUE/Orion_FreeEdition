// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UMGToolSet : ModuleRules
{
	public UMGToolSet(ReadOnlyTargetRules Target) : base(Target)
	{
		ForceIncludeFiles.Add(System.IO.Path.GetFullPath(System.IO.Path.Combine(PluginDirectory, "..", "..", "UE58Compatibility.h")));
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"ToolsetRegistry",
				"UMG",
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"UnrealEd",
				"Slate",
				"SlateCore",
				"UMGEditor",
				"Kismet",
				"AssetRegistry",
				"MessageLog",
				"BlueprintGraph",
				"MovieScene",
				"MovieSceneTracks",
			}
		);
	}
}
