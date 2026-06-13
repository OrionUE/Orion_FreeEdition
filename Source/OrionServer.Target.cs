/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

using UnrealBuildTool;
using System.Collections.Generic;

[SupportedPlatforms(UnrealPlatformClass.Server)]
public class OrionServerTarget : TargetRules
{
	public OrionServerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;

		ExtraModuleNames.AddRange(new string[]
		{
			"GameCore",
			"GameUI",
			"BBL",
			"OrionGame"
		});

		OrionGameTarget.ApplySharedGameTargetSettings(this);

		bUseChecksInShipping = true;
	}
}
