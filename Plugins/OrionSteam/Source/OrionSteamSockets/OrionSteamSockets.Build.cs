/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

using UnrealBuildTool;
using System.IO;

public class OrionSteamSockets : ModuleRules
{
	public OrionSteamSockets(ReadOnlyTargetRules Target) : base(Target)
	{
		PublicDefinitions.Add("ORIONSTEAMSOCKETS_MODULE=1");

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"OrionSteamShared"
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"NetCore",
			"Engine",
			"Sockets",
			"OnlineSubsystem",
			"PacketHandler",
			"SteamLibrary",
			"OrionSteamShared",
			"OrionOnlineSubsystemSteam"
		});

		bPrecompile = true;
		bUsePrecompiled = true;
		PrecompileForTargets = PrecompileTargetsType.Any;
	}
}
