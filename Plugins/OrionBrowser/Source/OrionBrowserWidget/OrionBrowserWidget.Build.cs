/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright (c) 2026 Orion. All Rights Reserved.
// https://orionue.com

using UnrealBuildTool;

public class OrionBrowserWidget : ModuleRules
{
	public OrionBrowserWidget(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"OrionBrowser",
			"UMG",
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"Slate",
			"SlateCore",
		});

		bool bWithOrionBrowser = Target.Platform == UnrealTargetPlatform.Win64
			&& Target.Type != TargetType.Server;

		PublicDefinitions.Add("ORIONBROWSERWIDGET_WITH_BROWSER=" + (bWithOrionBrowser ? "1" : "0"));

	}
}
