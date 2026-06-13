/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

using UnrealBuildTool;
using System.Collections.Generic;

public class OrionClientTarget : TargetRules
{
	public OrionClientTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Client;

		ExtraModuleNames.AddRange(new string[]
		{
			"GameCore",
			"GameUI",
			"BBL",
			"OrionGame"
		});

		OrionGameTarget.ApplySharedGameTargetSettings(this);
	}
}
