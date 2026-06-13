/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

using UnrealBuildTool;

public class OrionSteamWebAPI : ModuleRules
{
	public OrionSteamWebAPI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		// PrivatePCHHeaderFile = "Private/OrionSteamWebAPI/OrionSteamWebAPIPluginPrivatePCH.h";

		PrivateDependencyModuleNames.AddRange(new[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"Projects",
			"OnlineSubsystem",
			"HTTP",
			"Json",
			"JsonUtilities",
		});

		if (Target.Version.MinorVersion >= 26 || Target.Version.MajorVersion == 5)
			PrivateDependencyModuleNames.Add("DeveloperSettings");

		bPrecompile = true;
		bUsePrecompiled = true;
		PrecompileForTargets = PrecompileTargetsType.Any;
	}
}
