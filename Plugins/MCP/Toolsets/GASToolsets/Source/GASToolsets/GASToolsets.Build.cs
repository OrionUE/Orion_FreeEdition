// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GASToolsets : ModuleRules
{
	public GASToolsets(ReadOnlyTargetRules Target) : base(Target)
	{
		ForceIncludeFiles.Add(System.IO.Path.GetFullPath(System.IO.Path.Combine(PluginDirectory, "..", "..", "UE58Compatibility.h")));
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.Add("Core");

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"AssetRegistry",
			"CoreUObject",
			"Engine",
			"GameplayAbilities",
			"GameplayTags",
			"GameplayTagsEditor",
			"Kismet",
			"KismetCompiler",
			"ToolsetRegistry",
			"UnrealEd",
		});
	}
}
