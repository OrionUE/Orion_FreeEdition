// Copyright (c) Ideality Century, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CommonEditor : ModuleRules
{
    public CommonEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "UnrealEd",
            "ToolMenus",
            "Slate",
            "SlateCore",
            "SourceControl",
            "DataValidation",
            "StudioTelemetry",
            "DeveloperToolSettings",
            "DeveloperSettings",
            "GameplayAbilities",
            "GameplayAbilitiesEditor",
        });
        
        // Generate compile errors if using DrawDebug functions in test/shipping builds.
        PublicDefinitions.Add("SHIPPING_DRAW_DEBUG_ERROR=1");
    }
}