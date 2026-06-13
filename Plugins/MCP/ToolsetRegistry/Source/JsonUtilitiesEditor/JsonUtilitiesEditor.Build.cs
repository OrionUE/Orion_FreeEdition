// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class JsonUtilitiesEditor : ModuleRules
{
    public JsonUtilitiesEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        ForceIncludeFiles.Add(System.IO.Path.GetFullPath(System.IO.Path.Combine(PluginDirectory, "..", "UE58Compatibility.h")));

        PublicDependencyModuleNames.AddRange(
	        new string[]
	        {
		        "Core",
		        "CoreUObject",
		        "Json",
		        "JsonUtilities",
	        }
        );

        PrivateDependencyModuleNames.AddRange(
	        new string[]
	        {
		        "Engine",
		        "UnrealEd",
		        "Slate",
		        "SlateCore",
		        "BlueprintGraph",
		        "AssetTools",
	        }
        );
       
        PrivateIncludePaths.Add(
	        System.IO.Path.Combine(GetModuleDirectory("JsonUtilities"), "Private")
	    );
    }
}
