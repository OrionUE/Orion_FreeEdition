/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

using UnrealBuildTool;
using System.IO;

public class OrionSteamShared : ModuleRules
{
	public OrionSteamShared(ReadOnlyTargetRules Target) : base(Target)
	{
		PublicDependencyModuleNames.AddRange(new[] 
		{
			"Core",
			"CoreUObject",
			"Engine",
			"OnlineSubsystem",
			"OnlineSubsystemUtils",
			"SteamLibrary",
			"AudioCapture",
			"AudioCaptureCore",
		});

		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PrivateDefinitions.Add("ORIONSTEAMSHARED_PACKAGE=1");

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"Sockets",
			"SteamLibrary",
			"Projects",
			"AudioCaptureCore",
		});
	}
}
