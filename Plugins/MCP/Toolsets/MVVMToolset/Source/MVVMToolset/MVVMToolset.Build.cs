// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MVVMToolset : ModuleRules
{
	public MVVMToolset(ReadOnlyTargetRules Target) : base(Target)
	{
		ForceIncludeFiles.Add(System.IO.Path.GetFullPath(System.IO.Path.Combine(PluginDirectory, "..", "..", "UE58Compatibility.h")));
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.Add("Core");

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"AssetRegistry",
			"BlueprintEditorLibrary",
			"BlueprintGraph",
			"CoreUObject",
			"Engine",
			"Json",
			"Kismet",
			"ModelViewViewModel",
			"ModelViewViewModelBlueprint",
			"ModelViewViewModelEditor",
			"ToolsetRegistry",
			"UnrealEd",
			"UMG",
			"UMGEditor",
		});
	}
}
