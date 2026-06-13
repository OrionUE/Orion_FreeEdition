/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

using UnrealBuildTool;
using System.IO;

public class OrionOnlineSubsystemSteam : ModuleRules
{
	public OrionOnlineSubsystemSteam(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		PrivateDefinitions.Add("ORIONONLINESUBSYSTEMSTEAM_PACKAGE=1");
		PrivatePCHHeaderFile = "Private/OrionOnlineSubsystemSteamPrivatePCH.h";

		PublicDependencyModuleNames.AddRange(new string[] 
		{
			"OnlineSubsystemUtils",
			"OnlineSubsystem",
			"OrionSteamShared",
			"Core",
			"CoreUObject",
			"AudioCapture",
		});

		PublicIncludePaths.AddRange(new string[] 
		{
			Path.Combine(ModuleDirectory, "Public"),
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"NetCore",
			"Engine",
			"Sockets",
			"Voice",
			"AudioMixer",
			"OnlineSubsystem",
			"Json",
			"PacketHandler",
			"Projects",
			"OrionSteamShared",
			"SteamLibrary",
			"Voice",
			"AudioCapture",
			"AudioCaptureCore",
		});

		if (Target.Version.MajorVersion == 5 && Target.Version.MinorVersion >= 1)
		{
			PrivateDependencyModuleNames.Add("OnlineBase");
		}
	}
}
