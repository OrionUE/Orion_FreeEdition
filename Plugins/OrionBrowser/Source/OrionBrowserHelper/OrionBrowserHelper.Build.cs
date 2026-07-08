/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class OrionBrowserHelper : ModuleRules
{
	public OrionBrowserHelper(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePathModuleNames.Add("Launch");

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"ApplicationCore",
			"Projects",
		});

		const string CEFVersion = "149.0.6+g0d0eeb6+chromium-149.0.7827.201";
		string PluginRoot = Path.GetFullPath(Path.Combine(ModuleDirectory, "..", ".."));
		string CEFPlatformPath = Path.Combine(PluginRoot, "ThirdParty", "OrionCEF3", "cef_binary_" + CEFVersion + "_windows64");
		string CEFRuntimePath = Path.Combine(PluginRoot, "ThirdParty", "OrionCEF3", "Runtime", "Win64", CEFVersion);

		bool bWithCEF3 = Target.Platform == UnrealTargetPlatform.Win64
			&& Target.Type != TargetType.Server
			&& Target.bCompileCEF3
			&& Directory.Exists(CEFPlatformPath)
			&& File.Exists(Path.Combine(CEFRuntimePath, "libcef.dll"));

		PrivateDefinitions.Add("ORION_WITH_CEF3=" + (bWithCEF3 ? "1" : "0"));

		if (bWithCEF3)
		{
			PrivateDependencyModuleNames.AddRange(new string[]
			{
				"OrionCEF3",
				"OrionCEF3Utils",
			});
		}
	}
}
