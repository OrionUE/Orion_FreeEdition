// Copyright (c) Ideality Century, Inc. All Rights Reserved.
// Author: LiuZe

using UnrealBuildTool;
using System.Collections.Generic;

public class OrionGameSteamTarget : OrionGameTarget
{
	public OrionGameSteamTarget(TargetInfo Target) : base(Target)
	{
		bOverrideBuildEnvironment = true;

		CustomConfig = "Steam";
		GlobalDefinitions.Add("WITH_STEAM=1");
	}
}
