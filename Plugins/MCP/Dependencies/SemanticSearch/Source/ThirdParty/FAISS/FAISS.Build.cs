// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class FAISS : ModuleRules
{
	public FAISS(ReadOnlyTargetRules Target) : base(Target)
	{
		ForceIncludeFiles.Add(System.IO.Path.GetFullPath(System.IO.Path.Combine(PluginDirectory, "..", "..", "UE58Compatibility.h")));
		Type = ModuleType.External;

		bool bDebug = (Target.Configuration == UnrealTargetConfiguration.Debug && Target.bDebugBuildsActuallyUseDebugCRT);

		string DeploymentDirectory = Path.Combine(ModuleDirectory, "Deploy", "faiss-1.13.2");

		PublicSystemIncludePaths.Add(Path.Combine(DeploymentDirectory, "include"));

		// FAISS headers include <omp.h> unconditionally. Provide a stub that
		// implements OpenMP functions as single-threaded no-ops so FAISS
		// compiles without an actual OpenMP runtime.
		PublicSystemIncludePaths.Add(Path.Combine(ModuleDirectory, "omp_stub"));

		string LibPostfix = bDebug ? "_d" : "";

		if (Target.IsInPlatformGroup(UnrealPlatformGroup.Windows))
		{
			string LibDirectory = Path.Combine(
				DeploymentDirectory,
				"VS" + Target.WindowsPlatform.GetVisualStudioCompilerVersionName(),
				Target.Architecture.WindowsLibDir,
				"lib");

			PublicAdditionalLibraries.Add(Path.Combine(LibDirectory, "faiss" + LibPostfix + ".lib"));

			// BLAS via OpenBLAS on Windows
			AddEngineThirdPartyPrivateStaticDependencies(Target, "OpenBLAS");
		}
		else if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			string LibDirectory = Path.Combine(
				DeploymentDirectory,
				"Mac",
				"lib");

			PublicAdditionalLibraries.Add(Path.Combine(LibDirectory, "libfaiss" + LibPostfix + ".a"));

			// BLAS via Apple Accelerate framework on Mac
			PublicFrameworks.Add("Accelerate");
		}
		else if (Target.IsInPlatformGroup(UnrealPlatformGroup.Unix))
		{
			string LibDirectory = Path.Combine(
				DeploymentDirectory,
				"Unix",
				Target.Architecture.LinuxName,
				"lib");

			PublicAdditionalLibraries.Add(Path.Combine(LibDirectory, "libfaiss" + LibPostfix + ".a"));

			// BLAS via OpenBLAS on Linux
			AddEngineThirdPartyPrivateStaticDependencies(Target, "OpenBLAS");
		}
	}
}
