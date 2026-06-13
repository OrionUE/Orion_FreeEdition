// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FileSandboxUI : ModuleRules
{
    public FileSandboxUI(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        ForceIncludeFiles.Add(System.IO.Path.GetFullPath(System.IO.Path.Combine(PluginDirectory, "..", "UE58Compatibility.h")));

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "Slate", 
                "FileSandboxCore",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "SlateCore",
                "ToolWidgets"
            }
        );
    }
}
