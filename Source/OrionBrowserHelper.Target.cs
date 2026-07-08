/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

[SupportedPlatforms("Win64")]
[SupportedConfigurations(UnrealTargetConfiguration.Debug, UnrealTargetConfiguration.Development, UnrealTargetConfiguration.Shipping)]
public class OrionBrowserHelperTarget : TargetRules
{
	public OrionBrowserHelperTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Program;
		LinkType = TargetLinkType.Monolithic;
		BuildEnvironment = TargetBuildEnvironment.Shared;
		LaunchModuleName = "OrionBrowserHelper";

		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		UndecoratedConfiguration = UnrealTargetConfiguration.Shipping;

		bBuildDeveloperTools = false;
		bCompileAgainstEngine = false;
		bCompileAgainstCoreUObject = false;
		bBuildWithEditorOnlyData = true;
		bIsBuildingConsoleApplication = false;

		GlobalDefinitions.Add("ALLOW_LOG_FILE=0");

		string OutputName = Target.Configuration == UnrealTargetConfiguration.Shipping
			? "OrionBrowserHelper.exe"
			: $"OrionBrowserHelper-{Target.Platform}-{Target.Configuration}.exe";

		PostBuildSteps.Add($"if not exist \"$(ProjectDir)\\Plugins\\OrionBrowser\\Binaries\\{Target.Platform}\" mkdir \"$(ProjectDir)\\Plugins\\OrionBrowser\\Binaries\\{Target.Platform}\"");
		PostBuildSteps.Add($"copy /Y \"$(ProjectDir)\\Binaries\\{Target.Platform}\\{OutputName}\" \"$(ProjectDir)\\Plugins\\OrionBrowser\\Binaries\\{Target.Platform}\\OrionBrowserHelper.exe\"");
	}
}
