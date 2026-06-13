/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

using UnrealBuildTool;

public class OrionSteamSDKAPI : ModuleRules
{
	public OrionSteamSDKAPI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PrivateIncludePaths.Add("OrionSteamSDKAPI/Public/OrionSteamSDKAPI");
		PrivateIncludePaths.Add("OrionSteamSDKAPI/Private/OrionSteamSDKAPI");
		PrivatePCHHeaderFile = "Private/OrionSteamSDKAPI/OrionSteamSDKAPIPluginPrivatePCH.h";
		PrivateDefinitions.Add("ORIONONLINESUBSYSTEMSTEAM_PACKAGE=1");

		PublicDependencyModuleNames.AddRange(new[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"OnlineSubsystem",
			"OnlineSubsystemUtils",
			"Networking",
			"Sockets",
			"Projects",
			"SteamLibrary",
			"OrionSteamShared",
			"AudioExtensions",
		});

		if (Target.Version.MajorVersion > 4)
		{
			PublicDependencyModuleNames.AddRange(new[]
			{
				"CoreOnline"
			});
		}

		PrivateDependencyModuleNames.AddRange(new[]
		{
			"HTTP",
			"OrionOnlineSubsystemSteam",
			"AudioExtensions",
			"AudioCapture"
		});

		if (Target.Version.MajorVersion == 5 && Target.Version.MinorVersion >= 2)
		{
			PrivateDependencyModuleNames.AddRange(new[]
			{
				"AudioExtensions"
			});
		}

		PublicDependencyModuleNames.Add("DeveloperSettings");

		bPrecompile = true;
		bUsePrecompiled = true;
		PrecompileForTargets = PrecompileTargetsType.Any;
	}
}
