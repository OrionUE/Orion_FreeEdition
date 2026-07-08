/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionLocalizationToolset.h"

#include "HAL/FileManager.h"
#include "HAL/PlatformProcess.h"
#include "HAL/PlatformTime.h"
#include "ILocalizationDashboardModule.h"
#include "Internationalization/Internationalization.h"
#include "LocalizationCommandletExecution.h"
#include "LocalizationConfigurationScript.h"
#include "LocalizationDelegates.h"
#include "LocalizationSettings.h"
#include "LocalizationTargetTypes.h"
#include "Misc/Paths.h"
#include "Modules/ModuleManager.h"
#include "OrionProjectToolsetUtils.h"
#include "TextLocalizationResourceGenerator.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionLocalizationToolset)

namespace UE::OrionProjectToolsets::Localization
{
	static constexpr int32 MaxLogTailCharacters = 32000;

	static FString NormalizeToken(const FString& Value)
	{
		FString Normalized = Value;
		Normalized.TrimStartAndEndInline();
		Normalized.ToLowerInline();
		Normalized.ReplaceInline(TEXT(" "), TEXT(""));
		Normalized.ReplaceInline(TEXT("_"), TEXT(""));
		Normalized.ReplaceInline(TEXT("-"), TEXT(""));
		return Normalized;
	}

	static FString CanonicalOperationName(const FString& Operation)
	{
		const FString Normalized = NormalizeToken(Operation);

		if (Normalized == TEXT("gather") || Normalized == TEXT("gathertext") || Normalized == TEXT("collect") || Normalized == TEXT("collecttext"))
		{
			return TEXT("GatherText");
		}
		if (Normalized == TEXT("import") || Normalized == TEXT("importtext") || Normalized == TEXT("importtranslations"))
		{
			return TEXT("ImportText");
		}
		if (Normalized == TEXT("export") || Normalized == TEXT("exporttext") || Normalized == TEXT("exporttranslations"))
		{
			return TEXT("ExportText");
		}
		if (Normalized == TEXT("importdialoguescript") || Normalized == TEXT("importscript"))
		{
			return TEXT("ImportDialogueScript");
		}
		if (Normalized == TEXT("exportdialoguescript") || Normalized == TEXT("exportscript"))
		{
			return TEXT("ExportDialogueScript");
		}
		if (Normalized == TEXT("importdialogue") || Normalized == TEXT("importaudio") || Normalized == TEXT("importlocalizeddialogue"))
		{
			return TEXT("ImportDialogue");
		}
		if (Normalized == TEXT("report") || Normalized == TEXT("reports") || Normalized == TEXT("generatereports") || Normalized == TEXT("wordcount") || Normalized == TEXT("generatewordcountreports"))
		{
			return TEXT("GenerateReports");
		}
		if (Normalized == TEXT("compile") || Normalized == TEXT("compiletext") || Normalized == TEXT("compiletranslations"))
		{
			return TEXT("CompileText");
		}
		if (Normalized == TEXT("preview") || Normalized == TEXT("previewtranslations") || Normalized == TEXT("regenerate") || Normalized == TEXT("regenerateresources"))
		{
			return TEXT("PreviewTranslations");
		}
		if (Normalized == TEXT("generateconfig") || Normalized == TEXT("generateconfigs") || Normalized == TEXT("generateconfigfiles"))
		{
			return TEXT("GenerateConfigFiles");
		}

		return FString();
	}

	static bool OperationSupportsCulture(const FString& Operation)
	{
		return Operation == TEXT("ImportText") ||
		Operation == TEXT("ExportText") ||
		Operation == TEXT("ImportDialogueScript") ||
		Operation == TEXT("ExportDialogueScript") ||
		Operation == TEXT("ImportDialogue") ||
		Operation == TEXT("CompileText");
	}

	static bool ShouldIncludeTargetSet(bool bIsEngineTarget, const FString& TargetSet)
	{
		const FString Normalized = NormalizeToken(TargetSet);
		if (Normalized.IsEmpty() || Normalized == TEXT("game") || Normalized == TEXT("project"))
		{
			return !bIsEngineTarget;
		}
		if (Normalized == TEXT("engine"))
		{
			return bIsEngineTarget;
		}
		if (Normalized == TEXT("all") || Normalized == TEXT("both") || Normalized == TEXT("gameandengine") || Normalized == TEXT("projectandengine"))
		{
			return true;
		}
		return false;
	}

	static FString ConflictStatusToString(ELocalizationTargetConflictStatus ConflictStatus)
	{
		switch (ConflictStatus)
		{
			case ELocalizationTargetConflictStatus::ConflictsPresent:
			return TEXT("ConflictsPresent");

			case ELocalizationTargetConflictStatus::Clear:
			return TEXT("Clear");

			case ELocalizationTargetConflictStatus::Unknown:
			default:
			return TEXT("Unknown");
		}
	}

	static void AppendTargetSet(ULocalizationTargetSet* TargetSet, bool bIsEngineTarget, const FString& TargetSetFilter, TArray<ULocalizationTarget*>& OutTargets)
	{
		if (!TargetSet || !ShouldIncludeTargetSet(bIsEngineTarget, TargetSetFilter))
		{
			return;
		}

		for (const TObjectPtr<ULocalizationTarget>& Target : TargetSet->TargetObjects)
		{
			if (Target)
			{
				OutTargets.Add(Target.Get());
			}
		}
	}

	static TArray<ULocalizationTarget*> GetTargetsForSet(const FString& TargetSetFilter)
	{
		TArray<ULocalizationTarget*> Targets;
		AppendTargetSet(ULocalizationSettings::GetGameTargetSet(), false, TargetSetFilter, Targets);
		AppendTargetSet(ULocalizationSettings::GetEngineTargetSet(), true, TargetSetFilter, Targets);
		return Targets;
	}

	static FString GetNativeCultureName(const ULocalizationTarget* Target)
	{
		if (!Target || !Target->Settings.SupportedCulturesStatistics.IsValidIndex(Target->Settings.NativeCultureIndex))
		{
			return FString();
		}

		return Target->Settings.SupportedCulturesStatistics[Target->Settings.NativeCultureIndex].CultureName;
	}

	static bool IsSupportedCulture(const ULocalizationTarget* Target, const FString& CultureName)
	{
		if (!Target || CultureName.IsEmpty())
		{
			return true;
		}

		return Target->Settings.SupportedCulturesStatistics.ContainsByPredicate([&CultureName](const FCultureStatistics& Culture)
		{
			return Culture.CultureName.Equals(CultureName, ESearchCase::IgnoreCase);
		});
	}

	static FString ResolveConfiguredCultureName(const ULocalizationTarget* Target, const FString& CultureName)
	{
		if (!Target || CultureName.IsEmpty())
		{
			return CultureName;
		}

		for (const FCultureStatistics& Culture : Target->Settings.SupportedCulturesStatistics)
		{
			if (Culture.CultureName.Equals(CultureName, ESearchCase::IgnoreCase))
			{
				return Culture.CultureName;
			}
		}

		return CultureName;
	}

	static TArray<ULocalizationTarget*> ResolveTargets(const FString& TargetName, const FString& TargetSetFilter, FString& OutError)
	{
		TArray<ULocalizationTarget*> AvailableTargets = GetTargetsForSet(TargetSetFilter);
		TArray<ULocalizationTarget*> ResolvedTargets;

		FString TrimmedTargetName = TargetName;
		TrimmedTargetName.TrimStartAndEndInline();
		if (TrimmedTargetName.IsEmpty() || TrimmedTargetName == TEXT("*") || TrimmedTargetName.Equals(TEXT("All"), ESearchCase::IgnoreCase))
		{
			ResolvedTargets = MoveTemp(AvailableTargets);
		}
		else
		{
			for (ULocalizationTarget* Target : AvailableTargets)
			{
				if (Target && Target->Settings.Name.Equals(TrimmedTargetName, ESearchCase::IgnoreCase))
				{
					ResolvedTargets.Add(Target);
				}
			}
		}

		if (ResolvedTargets.IsEmpty())
		{
			OutError = FString::Printf(TEXT("No localization target matched TargetName='%s' TargetSet='%s'."), *TargetName, *TargetSetFilter);
		}

		return ResolvedTargets;
	}

	static FOrionLocalizationTargetInfo MakeTargetInfo(ULocalizationTarget* Target)
	{
		FOrionLocalizationTargetInfo Info;
		if (!Target)
		{
			return Info;
		}

		Target->UpdateWordCountsFromCSV();
		Target->UpdateStatusFromConflictReport();

		Info.Name = Target->Settings.Name;
		Info.bIsEngineTarget = Target->IsMemberOfEngineTargetSet();
		Info.NativeCulture = GetNativeCultureName(Target);
		Info.ConflictStatus = ConflictStatusToString(Target->Settings.ConflictStatus);
		Info.ConfigDirectory = LocalizationConfigurationScript::GetConfigDirectory(Target);
		Info.DataDirectory = LocalizationConfigurationScript::GetDataDirectory(Target);
		Info.ConfigPaths = LocalizationConfigurationScript::GetConfigPaths(Target);
		Info.ConfigPaths.Add(LocalizationConfigurationScript::GetRegenerateResourcesConfigPath(Target));
		Info.OutputPaths = LocalizationConfigurationScript::GetOutputFilePaths(Target);

		for (const FCultureStatistics& Culture : Target->Settings.SupportedCulturesStatistics)
		{
			FOrionLocalizationCultureInfo CultureInfo;
			CultureInfo.CultureName = Culture.CultureName;
			CultureInfo.bIsNativeCulture = Culture.CultureName == Info.NativeCulture;
			CultureInfo.WordCount = static_cast<int32>(Culture.WordCount);
			Info.Cultures.Add(CultureInfo);
		}

		return Info;
	}

	static bool WriteConfig(FLocalizationConfigurationScript&& Script, const FString& ConfigPath, bool bUseSourceControl, FString& OutError)
	{
		if (bUseSourceControl)
		{
			if (!Script.WriteWithSCC(ConfigPath))
			{
				OutError = FString::Printf(TEXT("Failed to write localization config '%s'."), *ConfigPath);
				return false;
			}
			return true;
		}

		Script.Write(ConfigPath);
		if (!FPaths::FileExists(ConfigPath))
		{
			OutError = FString::Printf(TEXT("Failed to write localization config '%s'."), *ConfigPath);
			return false;
		}

		return true;
	}

	static FString MakeTemporaryConfigPath(const FString& DefaultConfigPath)
	{
		return FPaths::CreateTempFilename(
		*FPaths::GetPath(DefaultConfigPath),
		*FPaths::GetBaseFilename(DefaultConfigPath),
		*FPaths::GetExtension(DefaultConfigPath, true));
	}

	static void BroadcastTargetDataUpdated(ULocalizationTarget* Target)
	{
		if (!Target)
		{
			return;
		}

		const FString TargetContentPath = FPaths::Combine(
		Target->IsMemberOfEngineTargetSet() ? FPaths::EngineContentDir() : FPaths::ProjectContentDir(),
		TEXT("Localization"),
		Target->Settings.Name);
		LocalizationDelegates::OnLocalizationTargetDataUpdated.Broadcast(TargetContentPath);
	}

	static EGenerateLocResFlags GetPreviewFlags(const ULocalizationTarget* Target)
	{
		if (!Target)
		{
			return EGenerateLocResFlags::None;
		}

		EGenerateLocResFlags Flags = EGenerateLocResFlags::None;
		if (Target->Settings.CompileSettings.SkipSourceCheck)
		{
			Flags |= EGenerateLocResFlags::AllowStaleTranslations;
		}
		if (Target->Settings.CompileSettings.ValidateFormatPatterns)
		{
			Flags |= EGenerateLocResFlags::ValidateFormatPatterns;
		}
		if (Target->Settings.CompileSettings.ValidateSafeWhitespace)
		{
			Flags |= EGenerateLocResFlags::ValidateSafeWhitespace;
		}
		if (Target->Settings.CompileSettings.ValidateRichTextTags)
		{
			Flags |= EGenerateLocResFlags::ValidateRichTextTags;
		}
		return Flags;
	}

	static bool PrepareOperationConfig(
	const FString& Operation,
	ULocalizationTarget* Target,
	const FString& CultureName,
	const FString& PathOverride,
	FString& OutConfigPath,
	bool& bOutUseProjectFile,
	bool& bOutDeleteConfigAfterRun,
	FString& OutError)
	{
		if (!Target)
		{
			OutError = TEXT("Localization target is null.");
			return false;
		}

		const bool bUseCulture = !CultureName.IsEmpty() && OperationSupportsCulture(Operation);
		const TOptional<FString> OptionalCulture = bUseCulture ? TOptional<FString>(CultureName) : TOptional<FString>();
		const TOptional<FString> OptionalPathOverride = PathOverride.IsEmpty() ? TOptional<FString>() : TOptional<FString>(PathOverride);
		const bool bUseSourceControl = !bUseCulture;

		bOutUseProjectFile = !Target->IsMemberOfEngineTargetSet();
		bOutDeleteConfigAfterRun = false;

		FLocalizationConfigurationScript Script;
		if (Operation == TEXT("GatherText"))
		{
			OutConfigPath = LocalizationConfigurationScript::GetGatherTextConfigPath(Target);
			Script = LocalizationConfigurationScript::GenerateGatherTextConfigFile(Target);
		}
		else if (Operation == TEXT("ImportText"))
		{
			OutConfigPath = LocalizationConfigurationScript::GetImportTextConfigPath(Target, OptionalCulture);
			Script = LocalizationConfigurationScript::GenerateImportTextConfigFile(Target, OptionalCulture, OptionalPathOverride);
		}
		else if (Operation == TEXT("ExportText"))
		{
			OutConfigPath = LocalizationConfigurationScript::GetExportTextConfigPath(Target, OptionalCulture);
			Script = LocalizationConfigurationScript::GenerateExportTextConfigFile(Target, OptionalCulture, OptionalPathOverride);
		}
		else if (Operation == TEXT("ImportDialogueScript"))
		{
			OutConfigPath = LocalizationConfigurationScript::GetImportDialogueScriptConfigPath(Target, OptionalCulture);
			Script = LocalizationConfigurationScript::GenerateImportDialogueScriptConfigFile(Target, OptionalCulture, OptionalPathOverride);
		}
		else if (Operation == TEXT("ExportDialogueScript"))
		{
			OutConfigPath = LocalizationConfigurationScript::GetExportDialogueScriptConfigPath(Target, OptionalCulture);
			Script = LocalizationConfigurationScript::GenerateExportDialogueScriptConfigFile(Target, OptionalCulture, OptionalPathOverride);
		}
		else if (Operation == TEXT("ImportDialogue"))
		{
			OutConfigPath = LocalizationConfigurationScript::GetImportDialogueConfigPath(Target, OptionalCulture);
			Script = LocalizationConfigurationScript::GenerateImportDialogueConfigFile(Target, OptionalCulture);
		}
		else if (Operation == TEXT("GenerateReports"))
		{
			OutConfigPath = LocalizationConfigurationScript::GetWordCountReportConfigPath(Target);
			Script = LocalizationConfigurationScript::GenerateWordCountReportConfigFile(Target);
		}
		else if (Operation == TEXT("CompileText"))
		{
			OutConfigPath = LocalizationConfigurationScript::GetCompileTextConfigPath(Target, OptionalCulture);
			Script = LocalizationConfigurationScript::GenerateCompileTextConfigFile(Target, OptionalCulture);
		}
		else if (Operation == TEXT("PreviewTranslations"))
		{
			OutConfigPath = LocalizationConfigurationScript::GetRegenerateResourcesConfigPath(Target);
			Script = LocalizationConfigurationScript::GenerateRegenerateResourcesConfigFile(Target);
		}
		else
		{
			OutError = FString::Printf(TEXT("Unsupported localization operation '%s'."), *Operation);
			return false;
		}

		if (bUseCulture)
		{
			OutConfigPath = MakeTemporaryConfigPath(OutConfigPath);
			bOutDeleteConfigAfterRun = true;
		}

		return WriteConfig(MoveTemp(Script), OutConfigPath, bUseSourceControl, OutError);
	}

	static FString GetLogTail(const FString& LogOutput, bool& bOutTruncated)
	{
		if (LogOutput.Len() <= MaxLogTailCharacters)
		{
			bOutTruncated = false;
			return LogOutput;
		}

		bOutTruncated = true;
		return LogOutput.Right(MaxLogTailCharacters);
	}

	static bool ExecuteCommandletConfig(
	const FString& ConfigPath,
	bool bUseProjectFile,
	int32 TimeoutSeconds,
	FOrionLocalizationCommandletStepResult& Step)
	{
		const double StartTime = FPlatformTime::Seconds();
		TSharedPtr<FLocalizationCommandletProcess> Process = FLocalizationCommandletProcess::Execute(ConfigPath, bUseProjectFile);
		if (!Process.IsValid())
		{
			Step.DurationSeconds = static_cast<float>(FPlatformTime::Seconds() - StartTime);
			Step.Message = FString::Printf(TEXT("Failed to launch GatherText commandlet for config '%s'."), *ConfigPath);
			return false;
		}

		Step.ProcessArguments = Process->GetProcessArguments();
		FString LogOutput;
		int32 ReturnCode = -1;
		const double TimeoutAt = TimeoutSeconds > 0 ? StartTime + static_cast<double>(TimeoutSeconds) : 0.0;
		FProcHandle& ProcessHandle = Process->GetHandle();

		for (;;)
		{
			const FString PipeText = FPlatformProcess::ReadPipe(Process->GetReadPipe());
			if (!PipeText.IsEmpty())
			{
				LogOutput += PipeText;
			}

			if (ProcessHandle.IsValid() && FPlatformProcess::GetProcReturnCode(ProcessHandle, &ReturnCode))
			{
				break;
			}

			if (TimeoutAt > 0.0 && FPlatformTime::Seconds() >= TimeoutAt)
			{
				if (ProcessHandle.IsValid() && FPlatformProcess::IsProcRunning(ProcessHandle))
				{
					FPlatformProcess::TerminateProc(ProcessHandle, true);
				}
				Step.DurationSeconds = static_cast<float>(FPlatformTime::Seconds() - StartTime);
				Step.ReturnCode = -1;
				Step.LogTail = GetLogTail(LogOutput, Step.bLogTruncated);
				Step.Message = FString::Printf(TEXT("Localization commandlet timed out after %d second(s)."), TimeoutSeconds);
				return false;
			}

			FPlatformProcess::Sleep(0.1f);
		}

		LogOutput += FPlatformProcess::ReadPipe(Process->GetReadPipe());
		Step.DurationSeconds = static_cast<float>(FPlatformTime::Seconds() - StartTime);
		Step.ReturnCode = ReturnCode;
		Step.LogTail = GetLogTail(LogOutput, Step.bLogTruncated);
		Step.bSuccess = ReturnCode == 0;
		Step.Message = Step.bSuccess ?
		TEXT("Localization commandlet completed.") :
		FString::Printf(TEXT("Localization commandlet failed with return code %d."), ReturnCode);
		return Step.bSuccess;
	}
}

FOrionToolResult UOrionLocalizationToolset::OpenLocalizationDashboard()
{
	using namespace UE::OrionProjectToolsets;

	ILocalizationDashboardModule::Get().Show();
	return MakeResult(true, TEXT("Localization Dashboard opened."));
}

FOrionLocalizationTargetsResult UOrionLocalizationToolset::ListLocalizationTargets(const FString& TargetSet)
{
	using namespace UE::OrionProjectToolsets::Localization;

	FOrionLocalizationTargetsResult Result;
	const TArray<ULocalizationTarget*> Targets = GetTargetsForSet(TargetSet);
	for (ULocalizationTarget* Target : Targets)
	{
		Result.Targets.Add(MakeTargetInfo(Target));
	}

	Result.bSuccess = true;
	Result.Message = FString::Printf(TEXT("Found %d localization target(s)."), Result.Targets.Num());
	return Result;
}

FOrionLocalizationCommandletResult UOrionLocalizationToolset::RunLocalizationOperation(
	const FString& Operation,
	const FString& TargetName,
	const FString& TargetSet,
	const FString& CultureName,
	const FString& PathOverride,
	int32 TimeoutSeconds)
{
	using namespace UE::OrionProjectToolsets::Localization;

	FOrionLocalizationCommandletResult Result;
	Result.Operation = CanonicalOperationName(Operation);
	if (Result.Operation.IsEmpty())
	{
		Result.Message = FString::Printf(TEXT("Unsupported localization operation '%s'."), *Operation);
		return Result;
	}

	if (!CultureName.IsEmpty() && !OperationSupportsCulture(Result.Operation))
	{
		Result.Message = FString::Printf(TEXT("Operation '%s' does not accept CultureName."), *Result.Operation);
		return Result;
	}

	FString ResolveError;
	const TArray<ULocalizationTarget*> Targets = ResolveTargets(TargetName, TargetSet, ResolveError);
	if (Targets.IsEmpty())
	{
		Result.Message = ResolveError;
		return Result;
	}

	Result.bSuccess = true;
	for (ULocalizationTarget* Target : Targets)
	{
		FOrionLocalizationCommandletStepResult Step;
		Step.TargetName = Target ? Target->Settings.Name : FString();
		Step.bIsEngineTarget = Target ? Target->IsMemberOfEngineTargetSet() : false;
		Step.Operation = Result.Operation;
		const FString ConfiguredCultureName = ResolveConfiguredCultureName(Target, CultureName);
		Step.CultureName = ConfiguredCultureName;
		Step.OutputPaths = Target ? LocalizationConfigurationScript::GetOutputFilePaths(Target) : TArray<FString>();

		if (!IsSupportedCulture(Target, ConfiguredCultureName))
		{
			Step.Message = FString::Printf(TEXT("Culture '%s' is not configured on target '%s'."), *CultureName, *Step.TargetName);
			Result.Steps.Add(Step);
			Result.bSuccess = false;
			continue;
		}

		if (Result.Operation == TEXT("GenerateConfigFiles"))
		{
			LocalizationConfigurationScript::GenerateAllConfigFiles(Target);
			Step.ConfigPath = LocalizationConfigurationScript::GetConfigDirectory(Target);
			Step.bSuccess = true;
			Step.ReturnCode = 0;
			Step.Message = TEXT("Localization config files generated.");
			Result.Steps.Add(Step);
			continue;
		}

		bool bUseProjectFile = true;
		bool bDeleteConfigAfterRun = false;
		FString Error;
		if (!PrepareOperationConfig(Result.Operation, Target, ConfiguredCultureName, PathOverride, Step.ConfigPath, bUseProjectFile, bDeleteConfigAfterRun, Error))
		{
			Step.Message = Error;
			Result.Steps.Add(Step);
			Result.bSuccess = false;
			continue;
		}

		if (Result.Operation == TEXT("PreviewTranslations"))
		{
			const double StartTime = FPlatformTime::Seconds();
			Step.bSuccess = FTextLocalizationResourceGenerator::GenerateLocResAndUpdateLiveEntriesFromConfig(Step.ConfigPath, GetPreviewFlags(Target));
			Step.ReturnCode = Step.bSuccess ? 0 : 1;
			Step.DurationSeconds = static_cast<float>(FPlatformTime::Seconds() - StartTime);
			Step.Message = Step.bSuccess ?
				TEXT("Live editor localization entries updated for the active culture.") :
				TEXT("Failed to update live editor localization entries.");
		}
		else
		{
			Step.bSuccess = ExecuteCommandletConfig(Step.ConfigPath, bUseProjectFile, TimeoutSeconds, Step);
		}

		if (Step.bSuccess && Target)
		{
			Target->UpdateWordCountsFromCSV();
			Target->UpdateStatusFromConflictReport();
			BroadcastTargetDataUpdated(Target);
		}

		if (bDeleteConfigAfterRun)
		{
			IFileManager::Get().Delete(*Step.ConfigPath);
		}

		Result.bSuccess = Result.bSuccess && Step.bSuccess;
		Result.Steps.Add(Step);
	}

	Result.Message = Result.bSuccess ?
		FString::Printf(TEXT("Localization operation '%s' completed for %d target(s)."), *Result.Operation, Result.Steps.Num()) :
		FString::Printf(TEXT("Localization operation '%s' failed for one or more target(s)."), *Result.Operation);
	return Result;
}
