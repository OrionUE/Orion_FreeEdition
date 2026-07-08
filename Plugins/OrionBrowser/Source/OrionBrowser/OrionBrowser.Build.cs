/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class OrionBrowser : ModuleRules
{
	public OrionBrowser(ReadOnlyTargetRules Target) : base(Target)
	{
		bRequiresPlatformSDK = true;
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"Slate",
			"SlateCore",
		});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"ApplicationCore",
			"CoreUObject",
			"HTTP",
			"InputCore",
			"Projects",
			"RHI",
			"Serialization",
		});

		if (Target.bCompileAgainstEngine)
		{
			PrivateDependencyModuleNames.Add("Engine");
		}

		const string CEFVersion = "149.0.6+g0d0eeb6+chromium-149.0.7827.201";
		string PluginRoot = Path.GetFullPath(Path.Combine(ModuleDirectory, "..", ".."));
		string CEFPlatformPath = Path.Combine(PluginRoot, "ThirdParty", "OrionCEF3", "cef_binary_" + CEFVersion + "_windows64");
		string CEFRuntimePath = Path.Combine(PluginRoot, "ThirdParty", "OrionCEF3", "Runtime", "Win64", CEFVersion);

		bool bWithCEF3 = Target.Platform == UnrealTargetPlatform.Win64
			&& Target.Type != TargetType.Server
			&& Target.bCompileCEF3
			&& Directory.Exists(CEFPlatformPath)
			&& File.Exists(Path.Combine(CEFRuntimePath, "libcef.dll"));

		PublicDefinitions.Add("ORION_WITH_CEF3=" + (bWithCEF3 ? "1" : "0"));
		PrivateDefinitions.Add("PLATFORM_SPECIFIC_WEB_BROWSER=0");

		if (bWithCEF3)
		{
			PrivateDependencyModuleNames.AddRange(new string[]
			{
				"OrionCEF3",
				"OrionCEF3Utils",
				"RenderCore",
			});

			PrivateIncludePathModuleNames.AddRange(new string[]
			{
				"D3D11RHI",
				"D3D12RHI",
			});

			AddEngineThirdPartyPrivateStaticDependencies(Target, "DX11");

			RuntimeDependencies.Add("$(PluginDir)/Binaries/Win64/OrionBrowserHelper.exe");
		}
	}
}
