/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

using UnrealBuildTool;

public class BBL : ModuleRules
{
    public BBL(ReadOnlyTargetRules Target) : base(Target)
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
            "GameCore",
            "OrionGame",
            
            // Game Features
            "ModularGameplay",
            "ModularGameplayActors",
			
            // Gameplay
            "CommonGame",
            "CommonLoadingScreen",
			
            // GAS
            "GameplayAbilities",
            "GameplayTasks",
            "GameplayTags",
			
            // Input
            "EnhancedInput",
            "CommonInputSystem",
            
            // Settings
            "GameSettings",
            
            // UI
            "UMG",
            "CommonUI",
            "GameUI",
            
            // Online
            "OrionSteamSDKAPI",
            
            // Utils
            "ControlFlows",
        });

        // Generate compile errors if using DrawDebug functions in test/shipping builds.
        PublicDefinitions.Add("SHIPPING_DRAW_DEBUG_ERROR=1");

        SetupGameplayDebuggerSupport(Target);
        SetupIrisSupport(Target);
    }
}
