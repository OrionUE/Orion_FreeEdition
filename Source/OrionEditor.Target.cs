/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

using UnrealBuildTool;
using System.Collections.Generic;

public class OrionEditorTarget : TargetRules
{
	public OrionEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		bOverrideBuildEnvironment = true;

		ExtraModuleNames.AddRange(new string[]
		{
			"OrionGame",
			"OrionEditor"
		});

		if (!bBuildAllModules)
		{
			NativePointerMemberBehaviorOverride = PointerMemberBehavior.Disallow;
		}

		OrionGameTarget.ApplySharedGameTargetSettings(this);
	}
}
