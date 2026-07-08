/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright (c) 2026 Orion. All Rights Reserved.
// https://orionue.com

using UnrealBuildTool;
using System.Collections.Generic;
using System.IO;

public class OrionCEF3 : ModuleRules
{
	public OrionCEF3(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;
		IWYUSupport = IWYUSupport.None;

		const string CEFVersion = "149.0.6+g0d0eeb6+chromium-149.0.7827.201";
		const string CEFPlatform = "windows64";

		string PluginRoot = Path.GetFullPath(Path.Combine(ModuleDirectory, "..", "..", ".."));
		string ThirdPartyRoot = Path.Combine(PluginRoot, "ThirdParty", "OrionCEF3");
		string PlatformPath = Path.Combine(ThirdPartyRoot, "cef_binary_" + CEFVersion + "_" + CEFPlatform);
		string LibraryPath = Path.Combine(PlatformPath, "Release");
		string RuntimePath = Path.Combine(ThirdPartyRoot, "Runtime", "Win64", CEFVersion);
		string WrapperLibraryFilePath = null;

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			string VSVersionFolderName = "VS" + Target.WindowsPlatform.GetVisualStudioCompilerVersionName();
			if (Target.WindowsPlatform.Compiler.IsClang())
			{
				VSVersionFolderName += "_ClangCL";
			}

			string WrapperConfiguration = Target.Configuration == UnrealTargetConfiguration.Debug && Target.bDebugBuildsActuallyUseDebugCRT ? "Debug" : "Release";
			List<string> WrapperLibraryCandidates = new List<string>
			{
				Path.Combine(PlatformPath, VSVersionFolderName, "libcef_dll_wrapper", WrapperConfiguration, "libcef_dll_wrapper.lib"),
				Path.Combine(PlatformPath, "VS2022", "libcef_dll_wrapper", WrapperConfiguration, "libcef_dll_wrapper.lib"),
				Path.Combine(PlatformPath, "VS2015", "libcef_dll_wrapper", WrapperConfiguration, "libcef_dll_wrapper.lib"),
			};

			foreach (string WrapperLibraryCandidate in WrapperLibraryCandidates)
			{
				if (File.Exists(WrapperLibraryCandidate))
				{
					WrapperLibraryFilePath = WrapperLibraryCandidate;
					break;
				}
			}
		}

		bool bArtifactsAvailable = Directory.Exists(PlatformPath)
			&& Directory.Exists(RuntimePath)
			&& File.Exists(Path.Combine(LibraryPath, "libcef.lib"))
			&& File.Exists(Path.Combine(RuntimePath, "libcef.dll"))
			&& !string.IsNullOrEmpty(WrapperLibraryFilePath);

		bool bWithCEF3 = Target.Platform == UnrealTargetPlatform.Win64
			&& Target.Type != TargetType.Server
			&& Target.bCompileCEF3
			&& bArtifactsAvailable;

		PublicDefinitions.Add("ORION_WITH_CEF3=" + (bWithCEF3 ? "1" : "0"));
		PublicDefinitions.Add("CEF3_USE_EXPERIMENTAL_VERSION=1");

		if (!bWithCEF3)
		{
			if (Target.Platform == UnrealTargetPlatform.Win64 && Target.Type != TargetType.Server && Target.bCompileCEF3)
			{
				System.Console.WriteLine("OrionCEF3 artifacts are missing. Run Plugins/OrionBrowser/Scripts/Import-OrionCEF.ps1 with a CEF 149 Win64 codec-enabled distribution before browser runtime validation.");
			}

			return;
		}

		PublicSystemIncludePaths.Add(PlatformPath);
		PublicAdditionalLibraries.Add(Path.Combine(LibraryPath, "libcef.lib"));

		PublicAdditionalLibraries.Add(WrapperLibraryFilePath);

		List<string> Dlls = new List<string>
		{
			"chrome_elf.dll",
			"d3dcompiler_47.dll",
			"dxcompiler.dll",
			"dxil.dll",
			"libcef.dll",
			"libEGL.dll",
			"libGLESv2.dll",
			"vk_swiftshader.dll",
			"vulkan-1.dll",
		};

		PublicDelayLoadDLLs.AddRange(Dlls);

		foreach (string RuntimeFilePath in Directory.EnumerateFiles(RuntimePath, "*", SearchOption.AllDirectories))
		{
			RuntimeDependencies.Add(RuntimeFilePath);
		}
	}
}
