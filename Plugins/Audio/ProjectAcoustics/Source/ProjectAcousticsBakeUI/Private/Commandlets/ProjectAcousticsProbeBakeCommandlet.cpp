/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Commandlets/ProjectAcousticsProbeBakeCommandlet.h"

#include "AcousticsEdMode.h"
#include "AcousticsDebugRenderer.h"
#include "AcousticsMaterialLibrary.h"
#include "AcousticsPinnedProbe.h"
#include "AcousticsProbesTab.h"
#include "AcousticsSharedState.h"
#include "Editor.h"
#include "EngineUtils.h"
#include "FileHelpers.h"
#include "GameFramework/Actor.h"
#include "HAL/FileManager.h"
#include "HAL/PlatformFilemanager.h"
#include "HAL/PlatformMisc.h"
#include "Interfaces/IPluginManager.h"
#include "IPythonScriptPlugin.h"
#include "MathUtils.h"
#include "Misc/ConfigCacheIni.h"
#include "Misc/FileHelper.h"
#include "Misc/PackageName.h"
#include "Misc/Parse.h"
#include "Misc/Paths.h"
#include "Modules/ModuleManager.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ProjectAcousticsProbeBakeCommandlet)

namespace
{
	const FString UsePhysicalMaterialsSection = TEXT("UsePhysicalMaterials");
	static const FName c_EditableProbeFolderPath(TEXT("ProjectAcoustics/EditableProbes"));
	static const TCHAR* c_EditableProbeActorNamePrefix = TEXT("PA_EditableProbe");
	static const TCHAR* c_ManualProbeActorNamePrefix = TEXT("PA_ManualProbe");
	static const TCHAR* c_ManualProbeListOverrideMarker = TEXT("OrionManualProbeListOverride=true");
	static const TCHAR* c_ManualProbeListOverrideMarkerComment = TEXT("\t<!-- OrionManualProbeListOverride=true -->\r\n");

	FString GetProjectAcousticsProjectConfigFilePath()
	{
		return FPaths::Combine(FPaths::ProjectConfigDir(), TEXT("ProjectAcoustics.ini"));
	}

	FString GetLegacyProjectAcousticsPluginConfigFilePath()
	{
		const TSharedPtr<IPlugin> ProjectAcousticsPlugin = IPluginManager::Get().FindPlugin(c_PluginName);
		if (!ProjectAcousticsPlugin.IsValid())
		{
			return FString();
		}

		return FPaths::Combine(
			ProjectAcousticsPlugin->GetBaseDir(),
			TEXT("Config"),
			TEXT("WindowsEditor"),
			TEXT("ProjectAcoustics.ini"));
	}

	void MigrateLegacyProjectAcousticsConfig(const FString& ProjectConfigFilePath)
	{
		IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
		PlatformFile.CreateDirectoryTree(*FPaths::GetPath(ProjectConfigFilePath));

		const FString LegacyConfigFilePath = GetLegacyProjectAcousticsPluginConfigFilePath();
		if (!FPaths::FileExists(ProjectConfigFilePath) &&
			!LegacyConfigFilePath.IsEmpty() &&
			FPaths::FileExists(LegacyConfigFilePath))
		{
			PlatformFile.CopyFile(*ProjectConfigFilePath, *LegacyConfigFilePath);
		}
	}

	enum class EProbeBakePreset : uint8
	{
		Fastest,
		Quality
	};

	struct FProjectAcousticsProbeCommandletReport
	{
		FString SourceMap;
		FString ReportPath = TEXT("Saved/OrionUE/ProjectAcoustics/acoustic-probes-report.json");
		FString PresetName = TEXT("Fastest");
		FString ConfigFilePath;
		FString VoxFilePath;
		FString Error;
		int32 MaterialMappingsLoaded = 0;
		int32 ProbeCount = 0;
		int32 ExistingProbeCount = 0;
		int32 GeneratedProbeCount = 0;
		int32 AppendedProbeCount = 0;
		int32 DuplicateProbeCount = 0;
		int32 AppendProbeRegionActorCount = 0;
		int32 AppendProbeRegionCandidateCount = 0;
		int32 AppendProbeOutOfRegionCount = 0;
		float EstimatedProcessingMinutes = 0.0f;
		float ProjectAcousticsEstimatedProcessingMinutes = 0.0f;
		float LocalCpuEstimatedProcessingMinutes = 0.0f;
		double AppendProbeDuplicateToleranceCm = 50.0;
		double AppendProbeRegionBoundsPaddingCm = 0.0;
		double LocalCpuEstimationPower = 0.0;
		double LocalCpuEstimationCoefficient = 0.0;
		double CalibrationProbeCountA = 0.0;
		double CalibrationMinutesA = 0.0;
		double CalibrationProbeCountB = 0.0;
		double CalibrationMinutesB = 0.0;
		FString EstimationModel = TEXT("ProjectAcousticsPython");
		FString LocalCpuName;
		FString AppendProbeRegionTag;
		int32 LocalCpuPhysicalCores = 0;
		int32 LocalCpuLogicalProcessors = 0;
		bool bCompleted = false;
		bool bUsePhysicalMaterials = false;
		bool bVoxFileExists = false;
		bool bConfigFileExists = false;
		bool bUseLocalCpuCalibration = false;
		bool bLocalCpuCalibrationValid = false;
		bool bAppendToExistingProbeList = false;
		bool bProbeListMerged = false;
	};

	struct FEditableProbeActorCounts
	{
		int32 Total = 0;
		int32 Managed = 0;
		int32 IncludedInManualList = 0;
		int32 GeneratedFromSimulationConfiguration = 0;
		int32 SourceIndexed = 0;
		int32 EditableFolder = 0;
		int32 EditableName = 0;
		int32 ManagedByEditorCriteria = 0;
	};

	struct FEditableProbeAuditReport
	{
		FString SourceMap;
		FString ReportPath = TEXT("Saved/OrionUE/ProjectAcoustics/editable-probe-audit.json");
		FString ConfigFilePath;
		FString VoxFilePath;
		FString ContentDir;
		FString Prefix;
		FString Error;
		FVector InitialCentroid = FVector::ZeroVector;
		FVector SpawnedCentroid = FVector::ZeroVector;
		FVector ReloadedCentroid = FVector::ZeroVector;
		FVector FirstInitialProbe = FVector::ZeroVector;
		FVector FirstSpawnedProbe = FVector::ZeroVector;
		FVector FirstReloadedProbe = FVector::ZeroVector;
		FEditableProbeActorCounts PreMakePinnedProbeActors;
		FEditableProbeActorCounts AfterMakePinnedProbeActors;
		FEditableProbeActorCounts AfterClearPinnedProbeActors;
		int32 DebugRendererCountAfterInitialLoad = 0;
		int32 DebugRendererCountAfterClearNull = 0;
		int32 DebugRendererCountAfterReload = 0;
		int32 InitialProbeCount = 0;
		int32 SeededLegacyProbeActorCount = 0;
		int32 DeletedPreMakeProbeActorCount = 0;
		int32 SpawnedProbeActorCount = 0;
		int32 DeletedManagedProbeActorCount = 0;
		int32 ReloadedProbeCount = 0;
		double MaxSpawnLocationErrorCm = 0.0;
		double AverageSpawnLocationErrorCm = 0.0;
		double MaxReloadLocationDeltaCm = 0.0;
		double CentroidInitialToSpawnedDeltaCm = 0.0;
		double CentroidInitialToReloadedDeltaCm = 0.0;
		bool bCompleted = false;
		bool bPassed = false;
		bool bConfigFileExists = false;
		bool bVoxFileExists = false;
		bool bSpawnedAllProbeActors = false;
		bool bReloadedProbeCountMatches = false;
		bool bManagedProbeActorsCleared = false;
		bool bSeedLegacyEditableProbeActors = false;
	};

	struct FManualProbeRoundTripAuditReport
	{
		FString SourceMap;
		FString ReportPath = TEXT("Saved/OrionUE/ProjectAcoustics/manual-probe-roundtrip-audit.json");
		FString ConfigFilePath;
		FString ContentDir;
		FString Prefix;
		FString Error;
		FVector InputProbeLocation = FVector(-15505.643669, -4808.601954, -425.054347);
		FVector ReloadedProbeLocation = FVector::ZeroVector;
		FVector WrittenTritonLocation = FVector::ZeroVector;
		int32 OriginalProbeCount = 0;
		int32 ReloadedProbeCount = 0;
		double InputToReloadedDeltaCm = 0.0;
		bool bCompleted = false;
		bool bPassed = false;
		bool bConfigFileExists = false;
		bool bWroteProbeOverride = false;
		bool bRestoredOriginalConfig = false;
	};

	FString JsonEscape(FString Value)
	{
		Value.ReplaceInline(TEXT("\\"), TEXT("\\\\"));
		Value.ReplaceInline(TEXT("\""), TEXT("\\\""));
		Value.ReplaceInline(TEXT("\r"), TEXT("\\r"));
		Value.ReplaceInline(TEXT("\n"), TEXT("\\n"));
		Value.ReplaceInline(TEXT("\t"), TEXT("\\t"));
		return Value;
	}

	FString JsonVector(const FVector& Value)
	{
		return FString::Printf(
			TEXT("{\"x\": %.6f, \"y\": %.6f, \"z\": %.6f}"),
			Value.X,
			Value.Y,
			Value.Z);
	}

	FString FormatProbeCoordinate(double Value)
	{
		if (FMath::IsNearlyZero(Value, 0.000001))
		{
			Value = 0.0;
		}

		FString CoordinateText = FString::Printf(TEXT("%.6f"), Value);
		while (CoordinateText.EndsWith(TEXT("0")))
		{
			CoordinateText.LeftChopInline(1);
		}
		if (CoordinateText.EndsWith(TEXT(".")))
		{
			CoordinateText.LeftChopInline(1);
		}
		return CoordinateText;
	}

	FString BuildProbeListXml(const TArray<FVector>& ProbeLocations)
	{
		FString ProbeListText = TEXT("\t<ProbeList size=\"dynamic\">\r\n");
		for (int32 ProbeIndex = 0; ProbeIndex < ProbeLocations.Num(); ++ProbeIndex)
		{
			const FVector TritonLocation = AcousticsUtils::UnrealPositionToTriton(ProbeLocations[ProbeIndex]);
			ProbeListText += FString::Printf(TEXT("\t\t<value%d>\r\n"), ProbeIndex);
			ProbeListText += FString::Printf(TEXT("\t\t\t<i>%s</i>\r\n"), *FormatProbeCoordinate(TritonLocation.X));
			ProbeListText += FString::Printf(TEXT("\t\t\t<j>%s</j>\r\n"), *FormatProbeCoordinate(TritonLocation.Y));
			ProbeListText += FString::Printf(TEXT("\t\t\t<k>%s</k>\r\n"), *FormatProbeCoordinate(TritonLocation.Z));
			ProbeListText += FString::Printf(TEXT("\t\t</value%d>\r\n"), ProbeIndex);
		}
		ProbeListText += TEXT("\t</ProbeList>");
		return ProbeListText;
	}

	bool ReplaceXmlElementInnerText(
		FString& XmlText, const TCHAR* ElementName, const FString& NewInnerText, FString& OutError)
	{
		const FString OpenTag = FString::Printf(TEXT("<%s>"), ElementName);
		const FString CloseTag = FString::Printf(TEXT("</%s>"), ElementName);

		const int32 OpenTagStart = XmlText.Find(*OpenTag, ESearchCase::CaseSensitive);
		if (OpenTagStart == INDEX_NONE)
		{
			OutError = FString::Printf(TEXT("ProjectAcoustics config is missing %s."), ElementName);
			return false;
		}

		const int32 InnerStart = OpenTagStart + OpenTag.Len();
		const int32 CloseTagStart =
			XmlText.Find(*CloseTag, ESearchCase::CaseSensitive, ESearchDir::FromStart, InnerStart);
		if (CloseTagStart == INDEX_NONE)
		{
			OutError = FString::Printf(TEXT("ProjectAcoustics config is missing closing %s."), *CloseTag);
			return false;
		}

		XmlText = XmlText.Left(InnerStart) + NewInnerText + XmlText.Mid(CloseTagStart);
		return true;
	}

	bool ReplaceProbeListXml(FString& XmlText, const FString& NewProbeListXml, FString& OutError)
	{
		const FString ProbeListCloseTag = TEXT("</ProbeList>");
		XmlText.ReplaceInline(c_ManualProbeListOverrideMarkerComment, TEXT(""));
		XmlText.ReplaceInline(*FString::Printf(TEXT("<!-- %s -->\r\n"), c_ManualProbeListOverrideMarker), TEXT(""));
		XmlText.ReplaceInline(*FString::Printf(TEXT("\t<!-- %s -->"), c_ManualProbeListOverrideMarker), TEXT(""));
		XmlText.ReplaceInline(*FString::Printf(TEXT("<!-- %s -->"), c_ManualProbeListOverrideMarker), TEXT(""));

		const int32 ProbeListStart = XmlText.Find(TEXT("<ProbeList"), ESearchCase::CaseSensitive);
		if (ProbeListStart == INDEX_NONE)
		{
			OutError = TEXT("ProjectAcoustics config is missing ProbeList.");
			return false;
		}

		const int32 ProbeListEnd =
			XmlText.Find(*ProbeListCloseTag, ESearchCase::CaseSensitive, ESearchDir::FromStart, ProbeListStart);
		if (ProbeListEnd == INDEX_NONE)
		{
			OutError = TEXT("ProjectAcoustics config is missing ProbeList close tag.");
			return false;
		}

		XmlText =
			XmlText.Left(ProbeListStart) + c_ManualProbeListOverrideMarkerComment + NewProbeListXml +
			XmlText.Mid(ProbeListEnd + ProbeListCloseTag.Len());
		return true;
	}

	FVector CalculateCentroid(const TArray<FVector>& Locations)
	{
		if (Locations.Num() == 0)
		{
			return FVector::ZeroVector;
		}

		FVector Sum = FVector::ZeroVector;
		for (const FVector& Location : Locations)
		{
			Sum += Location;
		}
		return Sum / static_cast<double>(Locations.Num());
	}

	bool IsEditableProbeFolder(const AAcousticsPinnedProbe* ProbeActor)
	{
		return ProbeActor != nullptr &&
			ProbeActor->GetFolderPath().ToString().Equals(c_EditableProbeFolderPath.ToString(), ESearchCase::IgnoreCase);
	}

	bool IsEditableProbeName(const AAcousticsPinnedProbe* ProbeActor)
	{
		if (ProbeActor == nullptr)
		{
			return false;
		}

		const FString ActorName = ProbeActor->GetName();
		const FString ActorLabel = ProbeActor->GetActorLabel();
		return ActorName.StartsWith(c_EditableProbeActorNamePrefix) ||
			ActorLabel.StartsWith(c_EditableProbeActorNamePrefix) ||
			ActorLabel.StartsWith(c_ManualProbeActorNamePrefix);
	}

	bool IsProbeActorManagedByProbeEditor(const AAcousticsPinnedProbe* ProbeActor)
	{
		if (ProbeActor == nullptr)
		{
			return false;
		}

		return ProbeActor->bManagedByProbeEditor ||
			ProbeActor->bGeneratedFromSimulationConfiguration ||
			ProbeActor->SourceProbeIndex != INDEX_NONE ||
			IsEditableProbeFolder(ProbeActor) ||
			IsEditableProbeName(ProbeActor);
	}

	FEditableProbeActorCounts CountPinnedProbeActors(UWorld* World)
	{
		FEditableProbeActorCounts Counts;
		if (World == nullptr)
		{
			return Counts;
		}

		for (TActorIterator<AAcousticsPinnedProbe> ActorIterator(World); ActorIterator; ++ActorIterator)
		{
			const AAcousticsPinnedProbe* ProbeActor = *ActorIterator;
			if (ProbeActor == nullptr)
			{
				continue;
			}

			++Counts.Total;
			if (ProbeActor->bManagedByProbeEditor)
			{
				++Counts.Managed;
			}
			if (ProbeActor->bIncludeInManualProbeList)
			{
				++Counts.IncludedInManualList;
			}
			if (ProbeActor->bGeneratedFromSimulationConfiguration)
			{
				++Counts.GeneratedFromSimulationConfiguration;
			}
			if (ProbeActor->SourceProbeIndex != INDEX_NONE)
			{
				++Counts.SourceIndexed;
			}
			if (IsEditableProbeFolder(ProbeActor))
			{
				++Counts.EditableFolder;
			}
			if (IsEditableProbeName(ProbeActor))
			{
				++Counts.EditableName;
			}
			if (IsProbeActorManagedByProbeEditor(ProbeActor))
			{
				++Counts.ManagedByEditorCriteria;
			}
		}

		return Counts;
	}

	FString JsonActorCounts(const FEditableProbeActorCounts& Counts)
	{
		return FString::Printf(
			TEXT("{\"total\": %d, \"managed\": %d, \"includedInManualList\": %d, ")
			TEXT("\"generatedFromSimulationConfiguration\": %d, \"sourceIndexed\": %d, ")
			TEXT("\"editableFolder\": %d, \"editableName\": %d, \"managedByEditorCriteria\": %d}"),
			Counts.Total,
			Counts.Managed,
			Counts.IncludedInManualList,
			Counts.GeneratedFromSimulationConfiguration,
			Counts.SourceIndexed,
			Counts.EditableFolder,
			Counts.EditableName,
			Counts.ManagedByEditorCriteria);
	}

	int32 CountDebugRenderers(UWorld* World)
	{
		if (World == nullptr)
		{
			return 0;
		}

		int32 Count = 0;
		for (TActorIterator<AAcousticsDebugRenderer> ActorIterator(World); ActorIterator; ++ActorIterator)
		{
			if (*ActorIterator != nullptr)
			{
				++Count;
			}
		}
		return Count;
	}

	int32 DeleteManagedProbeActors(UWorld* World)
	{
		if (World == nullptr)
		{
			return 0;
		}

		TArray<AAcousticsPinnedProbe*> ProbeActorsToDelete;
		for (TActorIterator<AAcousticsPinnedProbe> ActorIterator(World); ActorIterator; ++ActorIterator)
		{
			AAcousticsPinnedProbe* ProbeActor = *ActorIterator;
			if (ProbeActor != nullptr && IsProbeActorManagedByProbeEditor(ProbeActor))
			{
				ProbeActorsToDelete.Add(ProbeActor);
			}
		}

		for (AAcousticsPinnedProbe* ProbeActor : ProbeActorsToDelete)
		{
			ProbeActor->Modify();
			World->EditorDestroyActor(ProbeActor, true);
		}

		return ProbeActorsToDelete.Num();
	}

	AAcousticsPinnedProbe* SpawnAuditLegacyEditableProbeActor(
		UWorld* World,
		const FVector& Location,
		int32 SourceProbeIndex)
	{
		if (World == nullptr)
		{
			return nullptr;
		}

		ULevel* TargetLevel = World->PersistentLevel.Get();
		if (TargetLevel == nullptr)
		{
			TargetLevel = World->GetCurrentLevel();
		}

		FActorSpawnParameters SpawnParameters;
		SpawnParameters.OverrideLevel = TargetLevel;
		SpawnParameters.ObjectFlags = RF_Transactional;
		SpawnParameters.Name = MakeUniqueObjectName(
			TargetLevel != nullptr ? static_cast<UObject*>(TargetLevel) : static_cast<UObject*>(World),
			AAcousticsPinnedProbe::StaticClass(),
			FName(c_EditableProbeActorNamePrefix));

		AAcousticsPinnedProbe* ProbeActor =
			World->SpawnActor<AAcousticsPinnedProbe>(Location, FRotator::ZeroRotator, SpawnParameters);
		if (ProbeActor == nullptr)
		{
			return nullptr;
		}

		ProbeActor->SetActorLocation(Location, false, nullptr, ETeleportType::TeleportPhysics);
		ProbeActor->bIncludeInManualProbeList = true;
		ProbeActor->bManagedByProbeEditor = false;
		ProbeActor->bGeneratedFromSimulationConfiguration = false;
		ProbeActor->SourceProbeIndex = INDEX_NONE;
		ProbeActor->SetFolderPath(c_EditableProbeFolderPath);
		ProbeActor->SetActorLabel(FString::Printf(TEXT("PA_EditableProbe_Legacy_%05d"), SourceProbeIndex));
		return ProbeActor;
	}

	AAcousticsPinnedProbe* SpawnAuditEditableProbeActor(
		UWorld* World,
		const FVector& Location,
		int32 SourceProbeIndex)
	{
		if (World == nullptr)
		{
			return nullptr;
		}

		ULevel* TargetLevel = World->PersistentLevel.Get();
		if (TargetLevel == nullptr)
		{
			TargetLevel = World->GetCurrentLevel();
		}

		FActorSpawnParameters SpawnParameters;
		SpawnParameters.OverrideLevel = TargetLevel;
		SpawnParameters.ObjectFlags = RF_Transactional;
		SpawnParameters.Name = MakeUniqueObjectName(
			TargetLevel != nullptr ? static_cast<UObject*>(TargetLevel) : static_cast<UObject*>(World),
			AAcousticsPinnedProbe::StaticClass(),
			FName(c_EditableProbeActorNamePrefix));

		AAcousticsPinnedProbe* ProbeActor =
			World->SpawnActor<AAcousticsPinnedProbe>(Location, FRotator::ZeroRotator, SpawnParameters);
		if (ProbeActor == nullptr)
		{
			return nullptr;
		}

		ProbeActor->SetActorLocation(Location, false, nullptr, ETeleportType::TeleportPhysics);
		ProbeActor->bIncludeInManualProbeList = true;
		ProbeActor->bManagedByProbeEditor = true;
		ProbeActor->bGeneratedFromSimulationConfiguration = true;
		ProbeActor->SourceProbeIndex = SourceProbeIndex;
		ProbeActor->SetFolderPath(c_EditableProbeFolderPath);
		return ProbeActor;
	}

	bool EnsureProbeConfigurationLoaded(FString& OutError)
	{
		const AcousticsSimulationConfiguration* SimulationConfiguration =
			AcousticsSharedState::GetSimulationConfiguration();
		if (SimulationConfiguration != nullptr && SimulationConfiguration->IsReady())
		{
			return true;
		}

		TUniquePtr<AcousticsSimulationConfiguration> ReloadedConfiguration = AcousticsSimulationConfiguration::Create(
			AcousticsSharedState::GetProjectConfiguration().content_dir,
			AcousticsSharedState::GetConfigFilename());
		if (!ReloadedConfiguration || !ReloadedConfiguration->IsReady())
		{
			OutError = TEXT("Failed to load ProjectAcoustics simulation configuration from current config file.");
			return false;
		}

		AcousticsSharedState::SetSimulationConfiguration(MoveTemp(ReloadedConfiguration));
		return true;
	}

	bool ReadCurrentProbeList(TArray<FVector>& OutProbeLocations, FString& OutError)
	{
		if (!EnsureProbeConfigurationLoaded(OutError))
		{
			return false;
		}

		const AcousticsSimulationConfiguration* SimulationConfiguration =
			AcousticsSharedState::GetSimulationConfiguration();
		if (SimulationConfiguration == nullptr || !SimulationConfiguration->IsReady())
		{
			OutError = TEXT("ProjectAcoustics simulation configuration is unavailable.");
			return false;
		}

		if (!SimulationConfiguration->GetProbeList(OutProbeLocations))
		{
			OutError = TEXT("Failed to read ProjectAcoustics probe list.");
			return false;
		}

		return true;
	}

	FString NormalizePackagePath(FString Value)
	{
		Value.TrimStartAndEndInline();
		Value.ReplaceInline(TEXT("\\"), TEXT("/"));
		if (Value.IsEmpty())
		{
			return Value;
		}

		if (Value.EndsWith(TEXT(".umap")))
		{
			FString LongPackageName;
			if (FPackageName::TryConvertFilenameToLongPackageName(Value, LongPackageName))
			{
				Value = LongPackageName;
			}
			else
			{
				Value.LeftChopInline(5);
				const int32 ContentIndex = Value.Find(TEXT("/Content/"), ESearchCase::IgnoreCase, ESearchDir::FromEnd);
				if (ContentIndex != INDEX_NONE)
				{
					Value = TEXT("/Game/") + Value.Mid(ContentIndex + 9);
				}
			}
		}

		int32 DotIndex = INDEX_NONE;
		if (Value.FindChar(TEXT('.'), DotIndex))
		{
			Value.LeftInline(DotIndex);
		}

		if (!Value.StartsWith(TEXT("/")))
		{
			if (Value.StartsWith(TEXT("Content/"), ESearchCase::IgnoreCase))
			{
				Value = TEXT("/Game/") + Value.Mid(8);
			}
			else
			{
				Value = TEXT("/Game/") + Value;
			}
		}

		return Value;
	}

	FString ResolveProjectFilePath(const FString& Path)
	{
		if (FPaths::IsRelative(Path))
		{
			return FPaths::ConvertRelativePathToFull(FPaths::ProjectDir(), Path);
		}
		return FPaths::ConvertRelativePathToFull(Path);
	}

	FString MakeMapFilename(const FString& MapPackage)
	{
		return FPackageName::LongPackageNameToFilename(MapPackage, FPackageName::GetMapPackageExtension());
	}

	UWorld* GetCurrentEditorWorld()
	{
		if (GEditor == nullptr)
		{
			return nullptr;
		}
		return GEditor->GetEditorWorldContext().World();
	}

	bool LoadEditorMap(const FString& MapPackage)
	{
		const FString MapFilename = MakeMapFilename(MapPackage);
		if (!FEditorFileUtils::LoadMap(MapFilename, false, false))
		{
			UE_LOG(LogAcoustics, Error, TEXT("Failed to load map: %s (%s)"), *MapPackage, *MapFilename);
			return false;
		}

		return GetCurrentEditorWorld() != nullptr;
	}

	EProbeBakePreset ParsePreset(const FString& PresetName)
	{
		if (PresetName.Equals(TEXT("Quality"), ESearchCase::IgnoreCase) ||
			PresetName.Equals(TEXT("HighQuality"), ESearchCase::IgnoreCase))
		{
			return EProbeBakePreset::Quality;
		}

		return EProbeBakePreset::Fastest;
	}

	void ApplyProbePreset(EProbeBakePreset Preset)
	{
		FSimulationParameters SimulationParameters = AcousticsSharedState::GetSimulationParameters();

		if (Preset == EProbeBakePreset::Quality)
		{
			SimulationParameters.max_frequency = 500;
			SimulationParameters.receiver_spacing = 150.0f;
			SimulationParameters.probe_spacing.horizontal_spacing_min = 50.0f;
			SimulationParameters.probe_spacing.horizontal_spacing_max = 350.0f;
			SimulationParameters.probe_spacing.vertical_spacing = 100.0f;
			SimulationParameters.probe_spacing.min_height_above_ground = 75.0f;
		}
		else
		{
			SimulationParameters.max_frequency = 250;
			SimulationParameters.receiver_spacing = 1500.0f;
			SimulationParameters.probe_spacing.horizontal_spacing_min = 100.0f;
			SimulationParameters.probe_spacing.horizontal_spacing_max = 1000.0f;
			SimulationParameters.probe_spacing.vertical_spacing = 300.0f;
			SimulationParameters.probe_spacing.min_height_above_ground = 150.0f;
		}

		AcousticsSharedState::SetSimulationParameters(SimulationParameters);
	}

	bool EnsureProjectAcousticsPython(FString& OutError)
	{
		IPythonScriptPlugin* PythonScriptPlugin = IPythonScriptPlugin::Get();
		if (PythonScriptPlugin == nullptr)
		{
			PythonScriptPlugin = FModuleManager::LoadModulePtr<IPythonScriptPlugin>(TEXT("PythonScriptPlugin"));
		}

		if (PythonScriptPlugin == nullptr)
		{
			OutError = TEXT("PythonScriptPlugin is not loaded.");
			return false;
		}

		PythonScriptPlugin->ForceEnablePythonAtRuntime();
		if (!PythonScriptPlugin->IsPythonAvailable() || !PythonScriptPlugin->IsPythonInitialized())
		{
			OutError = TEXT("PythonScriptPlugin is not available or not initialized.");
			return false;
		}

		const TSharedPtr<IPlugin> ProjectAcousticsPlugin = IPluginManager::Get().FindPlugin(c_PluginName);
		if (!ProjectAcousticsPlugin.IsValid())
		{
			OutError = TEXT("ProjectAcoustics plugin is not available.");
			return false;
		}

		FString PythonDir = FPaths::ConvertRelativePathToFull(
			FPaths::Combine(ProjectAcousticsPlugin->GetBaseDir(), TEXT("Content/Python")));
		PythonDir.ReplaceInline(TEXT("\\"), TEXT("/"));
		PythonDir.ReplaceInline(TEXT("\""), TEXT("\\\""));

		const FString PythonCommand = FString::Printf(
			TEXT("import sys\n")
			TEXT("project_acoustics_python_dir = r\"%s\"\n")
			TEXT("if project_acoustics_python_dir not in sys.path:\n")
			TEXT("    sys.path.append(project_acoustics_python_dir)\n")
			TEXT("import init_project_acoustics\n"),
			*PythonDir);

		if (!PythonScriptPlugin->ExecPythonCommand(*PythonCommand))
		{
			OutError = TEXT("Failed to import ProjectAcoustics Python projection.");
			return false;
		}

		return true;
	}

	bool ReadProjectAcousticsConfig(FConfigFile& OutConfig, FString& OutConfigFilePath)
	{
		OutConfigFilePath = GetProjectAcousticsProjectConfigFilePath();
		MigrateLegacyProjectAcousticsConfig(OutConfigFilePath);
		OutConfig.Read(OutConfigFilePath);
		return FPaths::FileExists(OutConfigFilePath);
	}

	bool LoadMaterialLibraryFromConfig(
		const FConfigFile& Config,
		TUniquePtr<AcousticsMaterialLibrary>& OutMaterialLibrary,
		TMap<FString, FString>& OutMaterialToAcousticMaterial,
		int32& OutMaterialMappingsLoaded)
	{
		TMap<FString, float> MaterialMap;
		const FConfigSection* MaterialsSection = Config.FindSection(c_ConfigSectionMaterials);
		if (MaterialsSection != nullptr)
		{
			for (const TPair<FName, FConfigValue>& Pair : *MaterialsSection)
			{
				const FString MaterialName = Pair.Key.ToString();
				FString AcousticMaterialName;
				FString AbsorptionText;
				if (!Pair.Value.GetValue().Split(TEXT(","), &AcousticMaterialName, &AbsorptionText))
				{
					continue;
				}

				float Absorption = 0.1f;
				LexTryParseString(Absorption, *AbsorptionText);
				MaterialMap.Add(MaterialName, Absorption);
				OutMaterialToAcousticMaterial.Add(MaterialName, AcousticMaterialName);
				++OutMaterialMappingsLoaded;
			}
		}

		if (!MaterialMap.Contains(TEXT("Default")))
		{
			MaterialMap.Add(TEXT("Default"), 0.1f);
			OutMaterialToAcousticMaterial.Add(TEXT("Default"), TEXT("Default"));
		}

		OutMaterialLibrary = AcousticsMaterialLibrary::Create(MaterialMap);
		return OutMaterialLibrary.IsValid();
	}

	bool ReadUsePhysicalMaterialsForCurrentMap(const FConfigFile& Config)
	{
		UWorld* World = GetCurrentEditorWorld();
		if (World == nullptr)
		{
			return false;
		}

		bool bUsePhysicalMaterials = false;
		Config.GetBool(*UsePhysicalMaterialsSection, *World->GetMapName(), bUsePhysicalMaterials);
		return bUsePhysicalMaterials;
	}

	double ParseDoubleParameter(const FString& Params, const TCHAR* Key, double DefaultValue)
	{
		FString ParsedValueText;
		const TCHAR* ValueEnd = nullptr;
		if (!FParse::Value(*Params, Key, ParsedValueText, false, &ValueEnd))
		{
			return DefaultValue;
		}

		const TCHAR* Cursor = ValueEnd;
		while (Cursor != nullptr && FChar::IsWhitespace(*Cursor))
		{
			++Cursor;
		}

		if (Cursor != nullptr && *Cursor == TEXT('.'))
		{
			ParsedValueText += TEXT(".");
			++Cursor;
			while (FChar::IsDigit(*Cursor))
			{
				ParsedValueText.AppendChar(*Cursor);
				++Cursor;
			}
		}

		double ParsedValue = DefaultValue;
		LexTryParseString(ParsedValue, *ParsedValueText);
		return ParsedValue;
	}

	bool ParsePathParameter(const FString& Params, const TCHAR* Key, FString& OutValue)
	{
		const TCHAR* ValueEnd = nullptr;
		if (!FParse::Value(*Params, Key, OutValue, false, &ValueEnd))
		{
			return false;
		}

		const TCHAR* Cursor = ValueEnd;
		while (Cursor != nullptr && FChar::IsWhitespace(*Cursor))
		{
			++Cursor;
		}

		if (Cursor != nullptr && *Cursor == TEXT('.'))
		{
			const TCHAR* ExtensionStart = Cursor;
			++Cursor;
			while (FChar::IsAlnum(*Cursor))
			{
				++Cursor;
			}

			if (Cursor > ExtensionStart + 1)
			{
				OutValue += FString(UE_PTRDIFF_TO_INT32(Cursor - ExtensionStart), ExtensionStart);
			}
		}

		return true;
	}

	void FillLocalCpuInfo(FProjectAcousticsProbeCommandletReport& Report)
	{
		Report.LocalCpuName = FPlatformMisc::GetCPUBrand();
		Report.LocalCpuPhysicalCores = FPlatformMisc::NumberOfCores();
		Report.LocalCpuLogicalProcessors = FPlatformMisc::NumberOfCoresIncludingHyperthreads();
	}

	void ConfigureLocalCpuCalibration(const FString& Params, FProjectAcousticsProbeCommandletReport& Report)
	{
		Report.bUseLocalCpuCalibration = FParse::Param(*Params, TEXT("UseLocalCpuBakeTimeCalibration"));
		if (!Report.bUseLocalCpuCalibration)
		{
			return;
		}

		Report.CalibrationProbeCountA = ParseDoubleParameter(Params, TEXT("CalibrationProbeCountA="), 250.0);
		Report.CalibrationMinutesA = ParseDoubleParameter(Params, TEXT("CalibrationMinutesA="), 210.0);
		Report.CalibrationProbeCountB = ParseDoubleParameter(Params, TEXT("CalibrationProbeCountB="), 1150.0);
		Report.CalibrationMinutesB = ParseDoubleParameter(Params, TEXT("CalibrationMinutesB="), 5760.0);

		const bool bHasPositiveCalibration =
			Report.CalibrationProbeCountA > 0.0 &&
			Report.CalibrationMinutesA > 0.0 &&
			Report.CalibrationProbeCountB > 0.0 &&
			Report.CalibrationMinutesB > 0.0;
		const bool bHasDistinctProbeCounts =
			!FMath::IsNearlyEqual(Report.CalibrationProbeCountA, Report.CalibrationProbeCountB);
		if (!bHasPositiveCalibration || !bHasDistinctProbeCounts)
		{
			return;
		}

		const double ProbeRatio = Report.CalibrationProbeCountB / Report.CalibrationProbeCountA;
		const double TimeRatio = Report.CalibrationMinutesB / Report.CalibrationMinutesA;
		if (ProbeRatio <= 0.0 || TimeRatio <= 0.0 || FMath::IsNearlyEqual(ProbeRatio, 1.0))
		{
			return;
		}

		Report.LocalCpuEstimationPower = FMath::Loge(TimeRatio) / FMath::Loge(ProbeRatio);
		Report.LocalCpuEstimationCoefficient =
			Report.CalibrationMinutesA / FMath::Pow(Report.CalibrationProbeCountA, Report.LocalCpuEstimationPower);
		Report.bLocalCpuCalibrationValid =
			FMath::IsFinite(Report.LocalCpuEstimationPower) &&
			FMath::IsFinite(Report.LocalCpuEstimationCoefficient) &&
			Report.LocalCpuEstimationPower > 0.0 &&
			Report.LocalCpuEstimationCoefficient > 0.0;
	}

	void ApplyLocalCpuEstimate(FProjectAcousticsProbeCommandletReport& Report)
	{
		Report.EstimatedProcessingMinutes = Report.ProjectAcousticsEstimatedProcessingMinutes;
		Report.EstimationModel = TEXT("ProjectAcousticsPython");

		if (!Report.bUseLocalCpuCalibration || !Report.bLocalCpuCalibrationValid || Report.ProbeCount <= 0)
		{
			return;
		}

		Report.LocalCpuEstimatedProcessingMinutes = static_cast<float>(
			Report.LocalCpuEstimationCoefficient *
			FMath::Pow(static_cast<double>(Report.ProbeCount), Report.LocalCpuEstimationPower));
		Report.EstimatedProcessingMinutes = Report.LocalCpuEstimatedProcessingMinutes;
		Report.EstimationModel = TEXT("LocalCpuPowerLawCalibration");
	}

	void WriteReport(const FProjectAcousticsProbeCommandletReport& Report)
	{
		const FString ResolvedReportPath = ResolveProjectFilePath(Report.ReportPath);
		IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
		PlatformFile.CreateDirectoryTree(*FPaths::GetPath(ResolvedReportPath));

		const FString Json = FString::Printf(
			TEXT("{\n")
			TEXT("  \"summary\": {\n")
			TEXT("    \"completed\": %s,\n")
			TEXT("    \"sourceMap\": \"%s\",\n")
			TEXT("    \"preset\": \"%s\",\n")
			TEXT("    \"usePhysicalMaterials\": %s,\n")
			TEXT("    \"materialMappingsLoaded\": %d,\n")
			TEXT("    \"probeCount\": %d,\n")
			TEXT("    \"appendToExistingProbeList\": %s,\n")
			TEXT("    \"probeListMerged\": %s,\n")
			TEXT("    \"existingProbeCount\": %d,\n")
			TEXT("    \"generatedProbeCount\": %d,\n")
			TEXT("    \"appendedProbeCount\": %d,\n")
			TEXT("    \"duplicateProbeCount\": %d,\n")
			TEXT("    \"appendProbeDuplicateToleranceCm\": %.3f,\n")
			TEXT("    \"appendProbeRegionTag\": \"%s\",\n")
			TEXT("    \"appendProbeRegionBoundsPaddingCm\": %.3f,\n")
			TEXT("    \"appendProbeRegionActorCount\": %d,\n")
			TEXT("    \"appendProbeRegionCandidateCount\": %d,\n")
			TEXT("    \"appendProbeOutOfRegionCount\": %d,\n")
			TEXT("    \"estimatedProcessingMinutes\": %.3f,\n")
			TEXT("    \"estimatedProcessingHours\": %.3f,\n")
			TEXT("    \"estimatedProcessingDays\": %.3f,\n")
			TEXT("    \"projectAcousticsEstimatedProcessingMinutes\": %.3f,\n")
			TEXT("    \"localCpuEstimatedProcessingMinutes\": %.3f,\n")
			TEXT("    \"estimationModel\": \"%s\",\n")
			TEXT("    \"localCpu\": {\n")
			TEXT("      \"name\": \"%s\",\n")
			TEXT("      \"physicalCores\": %d,\n")
			TEXT("      \"logicalProcessors\": %d\n")
			TEXT("    },\n")
			TEXT("    \"localCpuCalibration\": {\n")
			TEXT("      \"enabled\": %s,\n")
			TEXT("      \"valid\": %s,\n")
			TEXT("      \"model\": \"minutes = coefficient * pow(probeCount, power)\",\n")
			TEXT("      \"probeCountA\": %.3f,\n")
			TEXT("      \"minutesA\": %.3f,\n")
			TEXT("      \"probeCountB\": %.3f,\n")
			TEXT("      \"minutesB\": %.3f,\n")
			TEXT("      \"coefficient\": %.9f,\n")
			TEXT("      \"power\": %.6f\n")
			TEXT("    },\n")
			TEXT("    \"voxFile\": \"%s\",\n")
			TEXT("    \"voxFileExists\": %s,\n")
			TEXT("    \"configFile\": \"%s\",\n")
			TEXT("    \"configFileExists\": %s,\n")
			TEXT("    \"manualProbeEditingRecommended\": true,\n")
			TEXT("    \"error\": \"%s\"\n")
			TEXT("  }\n")
			TEXT("}\n"),
			Report.bCompleted ? TEXT("true") : TEXT("false"),
			*JsonEscape(Report.SourceMap),
			*JsonEscape(Report.PresetName),
			Report.bUsePhysicalMaterials ? TEXT("true") : TEXT("false"),
			Report.MaterialMappingsLoaded,
			Report.ProbeCount,
			Report.bAppendToExistingProbeList ? TEXT("true") : TEXT("false"),
			Report.bProbeListMerged ? TEXT("true") : TEXT("false"),
			Report.ExistingProbeCount,
			Report.GeneratedProbeCount,
			Report.AppendedProbeCount,
			Report.DuplicateProbeCount,
			Report.AppendProbeDuplicateToleranceCm,
			*JsonEscape(Report.AppendProbeRegionTag),
			Report.AppendProbeRegionBoundsPaddingCm,
			Report.AppendProbeRegionActorCount,
			Report.AppendProbeRegionCandidateCount,
			Report.AppendProbeOutOfRegionCount,
			Report.EstimatedProcessingMinutes,
			Report.EstimatedProcessingMinutes / 60.0f,
			Report.EstimatedProcessingMinutes / 1440.0f,
			Report.ProjectAcousticsEstimatedProcessingMinutes,
			Report.LocalCpuEstimatedProcessingMinutes,
			*JsonEscape(Report.EstimationModel),
			*JsonEscape(Report.LocalCpuName),
			Report.LocalCpuPhysicalCores,
			Report.LocalCpuLogicalProcessors,
			Report.bUseLocalCpuCalibration ? TEXT("true") : TEXT("false"),
			Report.bLocalCpuCalibrationValid ? TEXT("true") : TEXT("false"),
			Report.CalibrationProbeCountA,
			Report.CalibrationMinutesA,
			Report.CalibrationProbeCountB,
			Report.CalibrationMinutesB,
			Report.LocalCpuEstimationCoefficient,
			Report.LocalCpuEstimationPower,
			*JsonEscape(Report.VoxFilePath),
			Report.bVoxFileExists ? TEXT("true") : TEXT("false"),
			*JsonEscape(Report.ConfigFilePath),
			Report.bConfigFileExists ? TEXT("true") : TEXT("false"),
			*JsonEscape(Report.Error));

		FFileHelper::SaveStringToFile(Json, *ResolvedReportPath, FFileHelper::EEncodingOptions::ForceUTF8WithoutBOM);
	}

	void AppendError(FString& ExistingError, const FString& AdditionalError)
	{
		if (AdditionalError.IsEmpty())
		{
			return;
		}

		if (ExistingError.IsEmpty())
		{
			ExistingError = AdditionalError;
			return;
		}

		ExistingError += TEXT(" ");
		ExistingError += AdditionalError;
	}

	bool SaveConfigText(const FString& ConfigFilePath, const FString& ConfigXmlText, FString& OutError)
	{
		FPlatformFileManager::Get().GetPlatformFile().SetReadOnly(*ConfigFilePath, false);
		if (!FFileHelper::SaveStringToFile(
				ConfigXmlText, *ConfigFilePath, FFileHelper::EEncodingOptions::ForceUTF8WithoutBOM))
		{
			OutError = FString::Printf(TEXT("Failed to write ProjectAcoustics config file: %s"), *ConfigFilePath);
			return false;
		}

		return true;
	}

	void RunManualProbeRoundTripAudit(FManualProbeRoundTripAuditReport& Report)
	{
		Report.ContentDir = AcousticsSharedState::GetProjectConfiguration().content_dir;
		Report.Prefix = AcousticsSharedState::GetConfigurationPrefixForLevel();
		Report.ConfigFilePath = AcousticsSharedState::GetConfigFilepath();
		Report.bConfigFileExists = FPaths::FileExists(Report.ConfigFilePath);
		Report.WrittenTritonLocation = AcousticsUtils::UnrealPositionToTriton(Report.InputProbeLocation);

		if (!Report.bConfigFileExists)
		{
			Report.Error = FString::Printf(TEXT("ProjectAcoustics config file is missing: %s"), *Report.ConfigFilePath);
			return;
		}

		FString OriginalConfigXmlText;
		if (!FFileHelper::LoadFileToString(OriginalConfigXmlText, *Report.ConfigFilePath))
		{
			Report.Error =
				FString::Printf(TEXT("Failed to read ProjectAcoustics config file: %s"), *Report.ConfigFilePath);
			return;
		}

		AcousticsSharedState::SetSimulationConfiguration(nullptr);
		FString ProbeError;
		TArray<FVector> OriginalProbeLocations;
		if (ReadCurrentProbeList(OriginalProbeLocations, ProbeError))
		{
			Report.OriginalProbeCount = OriginalProbeLocations.Num();
		}
		else
		{
			AppendError(Report.Error, ProbeError);
		}

		FString ModifiedConfigXmlText = OriginalConfigXmlText;
		TArray<FVector> ProbeLocations;
		ProbeLocations.Add(Report.InputProbeLocation);
		FString ReplaceError;
		if (!ReplaceXmlElementInnerText(
				ModifiedConfigXmlText, TEXT("NumProbes"), FString::FromInt(ProbeLocations.Num()), ReplaceError) ||
			!ReplaceProbeListXml(ModifiedConfigXmlText, BuildProbeListXml(ProbeLocations), ReplaceError))
		{
			AppendError(Report.Error, ReplaceError);
			return;
		}

		FString SaveError;
		if (!SaveConfigText(Report.ConfigFilePath, ModifiedConfigXmlText, SaveError))
		{
			AppendError(Report.Error, SaveError);
			return;
		}

		Report.bWroteProbeOverride = true;
		AcousticsSharedState::SetSimulationConfiguration(nullptr);
		TUniquePtr<AcousticsSimulationConfiguration> ReloadedConfiguration = AcousticsSimulationConfiguration::Create(
			AcousticsSharedState::GetProjectConfiguration().content_dir,
			AcousticsSharedState::GetConfigFilename());
		if (ReloadedConfiguration && ReloadedConfiguration->IsReady())
		{
			AcousticsSharedState::SetSimulationConfiguration(MoveTemp(ReloadedConfiguration));
			TArray<FVector> ReloadedProbeLocations;
			if (ReadCurrentProbeList(ReloadedProbeLocations, ProbeError))
			{
				Report.ReloadedProbeCount = ReloadedProbeLocations.Num();
				if (ReloadedProbeLocations.Num() > 0)
				{
					Report.ReloadedProbeLocation = ReloadedProbeLocations[0];
					Report.InputToReloadedDeltaCm =
						FVector::Dist(Report.InputProbeLocation, Report.ReloadedProbeLocation);
				}
			}
			else
			{
				AppendError(Report.Error, ProbeError);
			}
		}
		else
		{
			AppendError(Report.Error, TEXT("Failed to reload ProjectAcoustics config after writing manual probe."));
		}

		AcousticsSharedState::SetSimulationConfiguration(nullptr);
		FString RestoreError;
		Report.bRestoredOriginalConfig = SaveConfigText(Report.ConfigFilePath, OriginalConfigXmlText, RestoreError);
		if (!Report.bRestoredOriginalConfig)
		{
			AppendError(Report.Error, RestoreError);
		}
		else
		{
			TUniquePtr<AcousticsSimulationConfiguration> RestoredConfiguration =
				AcousticsSimulationConfiguration::Create(
					AcousticsSharedState::GetProjectConfiguration().content_dir,
					AcousticsSharedState::GetConfigFilename());
			if (RestoredConfiguration && RestoredConfiguration->IsReady())
			{
				AcousticsSharedState::SetSimulationConfiguration(MoveTemp(RestoredConfiguration));
			}
			else
			{
				AppendError(Report.Error, TEXT("Restored ProjectAcoustics config but failed to reload it."));
			}
		}

		constexpr double CoordinateToleranceCm = 0.1;
		Report.bPassed =
			Report.bWroteProbeOverride &&
			Report.bRestoredOriginalConfig &&
			Report.ReloadedProbeCount == 1 &&
			Report.InputToReloadedDeltaCm <= CoordinateToleranceCm;
		Report.bCompleted = true;
	}

	void WriteManualProbeRoundTripAuditReport(const FManualProbeRoundTripAuditReport& Report)
	{
		const FString ResolvedReportPath = ResolveProjectFilePath(Report.ReportPath);
		IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
		PlatformFile.CreateDirectoryTree(*FPaths::GetPath(ResolvedReportPath));

		const FString Json = FString::Printf(
			TEXT("{\n")
			TEXT("  \"summary\": {\n")
			TEXT("    \"completed\": %s,\n")
			TEXT("    \"passed\": %s,\n")
			TEXT("    \"sourceMap\": \"%s\",\n")
			TEXT("    \"contentDir\": \"%s\",\n")
			TEXT("    \"prefix\": \"%s\",\n")
			TEXT("    \"configFile\": \"%s\",\n")
			TEXT("    \"configFileExists\": %s,\n")
			TEXT("    \"originalProbeCount\": %d,\n")
			TEXT("    \"reloadedProbeCount\": %d,\n")
			TEXT("    \"inputProbeLocation\": %s,\n")
			TEXT("    \"writtenTritonLocation\": %s,\n")
			TEXT("    \"reloadedProbeLocation\": %s,\n")
			TEXT("    \"inputToReloadedDeltaCm\": %.6f,\n")
			TEXT("    \"wroteProbeOverride\": %s,\n")
			TEXT("    \"restoredOriginalConfig\": %s,\n")
			TEXT("    \"error\": \"%s\"\n")
			TEXT("  }\n")
			TEXT("}\n"),
			Report.bCompleted ? TEXT("true") : TEXT("false"),
			Report.bPassed ? TEXT("true") : TEXT("false"),
			*JsonEscape(Report.SourceMap),
			*JsonEscape(Report.ContentDir),
			*JsonEscape(Report.Prefix),
			*JsonEscape(Report.ConfigFilePath),
			Report.bConfigFileExists ? TEXT("true") : TEXT("false"),
			Report.OriginalProbeCount,
			Report.ReloadedProbeCount,
			*JsonVector(Report.InputProbeLocation),
			*JsonVector(Report.WrittenTritonLocation),
			*JsonVector(Report.ReloadedProbeLocation),
			Report.InputToReloadedDeltaCm,
			Report.bWroteProbeOverride ? TEXT("true") : TEXT("false"),
			Report.bRestoredOriginalConfig ? TEXT("true") : TEXT("false"),
			*JsonEscape(Report.Error));

		FFileHelper::SaveStringToFile(Json, *ResolvedReportPath, FFileHelper::EEncodingOptions::ForceUTF8WithoutBOM);
	}

	void RunEditableProbeAudit(FEditableProbeAuditReport& Report)
	{
		UWorld* World = GetCurrentEditorWorld();
		Report.ContentDir = AcousticsSharedState::GetProjectConfiguration().content_dir;
		Report.Prefix = AcousticsSharedState::GetConfigurationPrefixForLevel();
		Report.ConfigFilePath = AcousticsSharedState::GetConfigFilepath();
		Report.VoxFilePath = AcousticsSharedState::GetVoxFilepath();
		Report.bConfigFileExists = FPaths::FileExists(Report.ConfigFilePath);
		Report.bVoxFileExists = FPaths::FileExists(Report.VoxFilePath);

		if (World == nullptr)
		{
			Report.Error = TEXT("No editor world is loaded.");
			return;
		}

		if (!Report.bConfigFileExists || !Report.bVoxFileExists)
		{
			Report.Error = TEXT("ProjectAcoustics config or vox file is missing.");
			return;
		}

		FString ProbeError;
		TArray<FVector> InitialProbeLocations;
		if (!ReadCurrentProbeList(InitialProbeLocations, ProbeError))
		{
			Report.Error = ProbeError;
			return;
		}

		Report.DebugRendererCountAfterInitialLoad = CountDebugRenderers(World);
		Report.InitialProbeCount = InitialProbeLocations.Num();
		Report.InitialCentroid = CalculateCentroid(InitialProbeLocations);
		if (InitialProbeLocations.Num() > 0)
		{
			Report.FirstInitialProbe = InitialProbeLocations[0];
		}

		if (Report.bSeedLegacyEditableProbeActors)
		{
			const int32 LegacySeedCount = FMath::Min(3, InitialProbeLocations.Num());
			for (int32 ProbeIndex = 0; ProbeIndex < LegacySeedCount; ++ProbeIndex)
			{
				const FVector LegacyOffset(100000.0, 100000.0, 5000.0);
				if (SpawnAuditLegacyEditableProbeActor(
						World,
						InitialProbeLocations[ProbeIndex] + LegacyOffset,
						ProbeIndex) != nullptr)
				{
					++Report.SeededLegacyProbeActorCount;
				}
			}
		}

		Report.PreMakePinnedProbeActors = CountPinnedProbeActors(World);
		Report.DeletedPreMakeProbeActorCount = DeleteManagedProbeActors(World);

		TArray<FVector> SpawnedProbeLocations;
		double SpawnLocationErrorSum = 0.0;
		for (int32 ProbeIndex = 0; ProbeIndex < InitialProbeLocations.Num(); ++ProbeIndex)
		{
			const FVector& ExpectedLocation = InitialProbeLocations[ProbeIndex];
			AAcousticsPinnedProbe* ProbeActor = SpawnAuditEditableProbeActor(World, ExpectedLocation, ProbeIndex);
			if (ProbeActor == nullptr)
			{
				continue;
			}

			const FVector ActualLocation = ProbeActor->GetActorLocation();
			SpawnedProbeLocations.Add(ActualLocation);
			const double LocationErrorCm = FVector::Dist(ActualLocation, ExpectedLocation);
			Report.MaxSpawnLocationErrorCm = FMath::Max(Report.MaxSpawnLocationErrorCm, LocationErrorCm);
			SpawnLocationErrorSum += LocationErrorCm;
		}

		Report.SpawnedProbeActorCount = SpawnedProbeLocations.Num();
		Report.SpawnedCentroid = CalculateCentroid(SpawnedProbeLocations);
		Report.CentroidInitialToSpawnedDeltaCm = FVector::Dist(Report.InitialCentroid, Report.SpawnedCentroid);
		if (SpawnedProbeLocations.Num() > 0)
		{
			Report.FirstSpawnedProbe = SpawnedProbeLocations[0];
			Report.AverageSpawnLocationErrorCm = SpawnLocationErrorSum / static_cast<double>(SpawnedProbeLocations.Num());
		}
		Report.AfterMakePinnedProbeActors = CountPinnedProbeActors(World);
		Report.bSpawnedAllProbeActors = Report.SpawnedProbeActorCount == Report.InitialProbeCount;

		Report.DeletedManagedProbeActorCount = DeleteManagedProbeActors(World);
		Report.AfterClearPinnedProbeActors = CountPinnedProbeActors(World);
		Report.bManagedProbeActorsCleared = Report.AfterClearPinnedProbeActors.ManagedByEditorCriteria == 0;

		AcousticsSharedState::SetSimulationConfiguration(nullptr);
		Report.DebugRendererCountAfterClearNull = CountDebugRenderers(World);

		TUniquePtr<AcousticsSimulationConfiguration> ReloadedConfiguration = AcousticsSimulationConfiguration::Create(
			AcousticsSharedState::GetProjectConfiguration().content_dir,
			AcousticsSharedState::GetConfigFilename());
		if (!ReloadedConfiguration || !ReloadedConfiguration->IsReady())
		{
			Report.Error = TEXT("Failed to reload ProjectAcoustics simulation configuration after clearing probes.");
			return;
		}

		AcousticsSharedState::SetSimulationConfiguration(MoveTemp(ReloadedConfiguration));
		Report.DebugRendererCountAfterReload = CountDebugRenderers(World);

		TArray<FVector> ReloadedProbeLocations;
		if (!ReadCurrentProbeList(ReloadedProbeLocations, ProbeError))
		{
			Report.Error = ProbeError;
			return;
		}

		Report.ReloadedProbeCount = ReloadedProbeLocations.Num();
		Report.ReloadedCentroid = CalculateCentroid(ReloadedProbeLocations);
		Report.CentroidInitialToReloadedDeltaCm = FVector::Dist(Report.InitialCentroid, Report.ReloadedCentroid);
		Report.bReloadedProbeCountMatches = Report.ReloadedProbeCount == Report.InitialProbeCount;
		if (ReloadedProbeLocations.Num() > 0)
		{
			Report.FirstReloadedProbe = ReloadedProbeLocations[0];
		}

		const int32 ProbeCountToCompare = FMath::Min(InitialProbeLocations.Num(), ReloadedProbeLocations.Num());
		for (int32 ProbeIndex = 0; ProbeIndex < ProbeCountToCompare; ++ProbeIndex)
		{
			Report.MaxReloadLocationDeltaCm = FMath::Max(
				Report.MaxReloadLocationDeltaCm,
				FVector::Dist(InitialProbeLocations[ProbeIndex], ReloadedProbeLocations[ProbeIndex]));
		}

		constexpr double CoordinateToleranceCm = 0.1;
		Report.bPassed =
			Report.bSpawnedAllProbeActors &&
			Report.bManagedProbeActorsCleared &&
			Report.bReloadedProbeCountMatches &&
			Report.MaxSpawnLocationErrorCm <= CoordinateToleranceCm &&
			Report.MaxReloadLocationDeltaCm <= CoordinateToleranceCm &&
			Report.CentroidInitialToSpawnedDeltaCm <= CoordinateToleranceCm &&
			Report.CentroidInitialToReloadedDeltaCm <= CoordinateToleranceCm &&
			Report.DebugRendererCountAfterClearNull == 0 &&
			Report.DebugRendererCountAfterReload == 1 &&
			(!Report.bSeedLegacyEditableProbeActors ||
				Report.DeletedPreMakeProbeActorCount >= Report.SeededLegacyProbeActorCount);
		Report.bCompleted = true;
	}

	void WriteEditableProbeAuditReport(const FEditableProbeAuditReport& Report)
	{
		const FString ResolvedReportPath = ResolveProjectFilePath(Report.ReportPath);
		IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
		PlatformFile.CreateDirectoryTree(*FPaths::GetPath(ResolvedReportPath));

		const FString Json = FString::Printf(
			TEXT("{\n")
			TEXT("  \"summary\": {\n")
			TEXT("    \"completed\": %s,\n")
			TEXT("    \"passed\": %s,\n")
			TEXT("    \"sourceMap\": \"%s\",\n")
			TEXT("    \"contentDir\": \"%s\",\n")
			TEXT("    \"prefix\": \"%s\",\n")
			TEXT("    \"configFile\": \"%s\",\n")
			TEXT("    \"configFileExists\": %s,\n")
			TEXT("    \"voxFile\": \"%s\",\n")
			TEXT("    \"voxFileExists\": %s,\n")
			TEXT("    \"initialProbeCount\": %d,\n")
			TEXT("    \"seedLegacyEditableProbeActors\": %s,\n")
			TEXT("    \"seededLegacyProbeActorCount\": %d,\n")
			TEXT("    \"deletedPreMakeProbeActorCount\": %d,\n")
			TEXT("    \"spawnedProbeActorCount\": %d,\n")
			TEXT("    \"deletedManagedProbeActorCount\": %d,\n")
			TEXT("    \"reloadedProbeCount\": %d,\n")
			TEXT("    \"spawnedAllProbeActors\": %s,\n")
			TEXT("    \"managedProbeActorsCleared\": %s,\n")
			TEXT("    \"reloadedProbeCountMatches\": %s,\n")
			TEXT("    \"maxSpawnLocationErrorCm\": %.6f,\n")
			TEXT("    \"averageSpawnLocationErrorCm\": %.6f,\n")
			TEXT("    \"maxReloadLocationDeltaCm\": %.6f,\n")
			TEXT("    \"centroidInitialToSpawnedDeltaCm\": %.6f,\n")
			TEXT("    \"centroidInitialToReloadedDeltaCm\": %.6f,\n")
			TEXT("    \"debugRendererCountAfterInitialLoad\": %d,\n")
			TEXT("    \"debugRendererCountAfterClearNull\": %d,\n")
			TEXT("    \"debugRendererCountAfterReload\": %d,\n")
			TEXT("    \"initialCentroid\": %s,\n")
			TEXT("    \"spawnedCentroid\": %s,\n")
			TEXT("    \"reloadedCentroid\": %s,\n")
			TEXT("    \"firstInitialProbe\": %s,\n")
			TEXT("    \"firstSpawnedProbe\": %s,\n")
			TEXT("    \"firstReloadedProbe\": %s,\n")
			TEXT("    \"preMakePinnedProbeActors\": %s,\n")
			TEXT("    \"afterMakePinnedProbeActors\": %s,\n")
			TEXT("    \"afterClearPinnedProbeActors\": %s,\n")
			TEXT("    \"error\": \"%s\"\n")
			TEXT("  }\n")
			TEXT("}\n"),
			Report.bCompleted ? TEXT("true") : TEXT("false"),
			Report.bPassed ? TEXT("true") : TEXT("false"),
			*JsonEscape(Report.SourceMap),
			*JsonEscape(Report.ContentDir),
			*JsonEscape(Report.Prefix),
			*JsonEscape(Report.ConfigFilePath),
			Report.bConfigFileExists ? TEXT("true") : TEXT("false"),
			*JsonEscape(Report.VoxFilePath),
			Report.bVoxFileExists ? TEXT("true") : TEXT("false"),
			Report.InitialProbeCount,
			Report.bSeedLegacyEditableProbeActors ? TEXT("true") : TEXT("false"),
			Report.SeededLegacyProbeActorCount,
			Report.DeletedPreMakeProbeActorCount,
			Report.SpawnedProbeActorCount,
			Report.DeletedManagedProbeActorCount,
			Report.ReloadedProbeCount,
			Report.bSpawnedAllProbeActors ? TEXT("true") : TEXT("false"),
			Report.bManagedProbeActorsCleared ? TEXT("true") : TEXT("false"),
			Report.bReloadedProbeCountMatches ? TEXT("true") : TEXT("false"),
			Report.MaxSpawnLocationErrorCm,
			Report.AverageSpawnLocationErrorCm,
			Report.MaxReloadLocationDeltaCm,
			Report.CentroidInitialToSpawnedDeltaCm,
			Report.CentroidInitialToReloadedDeltaCm,
			Report.DebugRendererCountAfterInitialLoad,
			Report.DebugRendererCountAfterClearNull,
			Report.DebugRendererCountAfterReload,
			*JsonVector(Report.InitialCentroid),
			*JsonVector(Report.SpawnedCentroid),
			*JsonVector(Report.ReloadedCentroid),
			*JsonVector(Report.FirstInitialProbe),
			*JsonVector(Report.FirstSpawnedProbe),
			*JsonVector(Report.FirstReloadedProbe),
			*JsonActorCounts(Report.PreMakePinnedProbeActors),
			*JsonActorCounts(Report.AfterMakePinnedProbeActors),
			*JsonActorCounts(Report.AfterClearPinnedProbeActors),
			*JsonEscape(Report.Error));

		FFileHelper::SaveStringToFile(Json, *ResolvedReportPath, FFileHelper::EEncodingOptions::ForceUTF8WithoutBOM);
	}
}

UProjectAcousticsProbeBakeCommandlet::UProjectAcousticsProbeBakeCommandlet(
	const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	IsClient = false;
	IsEditor = true;
	LogToConsole = true;
}

int32 UProjectAcousticsProbeBakeCommandlet::Main(const FString& Params)
{
	FProjectAcousticsProbeCommandletReport Report;
	FString SourceMap;
	FParse::Value(*Params, TEXT("SourceMap="), SourceMap);
	ParsePathParameter(Params, TEXT("Report="), Report.ReportPath);
	FParse::Value(*Params, TEXT("Preset="), Report.PresetName);
	FillLocalCpuInfo(Report);
	ConfigureLocalCpuCalibration(Params, Report);
	const bool bAuditEditableProbes = FParse::Param(*Params, TEXT("AuditEditableProbes"));
	const bool bAuditManualProbeRoundTrip = FParse::Param(*Params, TEXT("AuditManualProbeRoundTrip"));
	Report.bAppendToExistingProbeList = FParse::Param(*Params, TEXT("AppendToExistingProbeList"));
	Report.AppendProbeDuplicateToleranceCm =
		ParseDoubleParameter(Params, TEXT("AppendProbeDuplicateToleranceCm="), Report.AppendProbeDuplicateToleranceCm);
	FParse::Value(*Params, TEXT("AppendProbeRegionTag="), Report.AppendProbeRegionTag);
	Report.AppendProbeRegionTag.TrimStartAndEndInline();
	Report.AppendProbeRegionBoundsPaddingCm = ParseDoubleParameter(
		Params,
		TEXT("AppendProbeRegionBoundsPaddingCm="),
		Report.AppendProbeRegionBoundsPaddingCm);
	Report.AppendProbeRegionBoundsPaddingCm = FMath::Max(0.0, Report.AppendProbeRegionBoundsPaddingCm);

	if (Report.PresetName.IsEmpty())
	{
		Report.PresetName = TEXT("Fastest");
	}

	Report.SourceMap = NormalizePackagePath(SourceMap);
	if (Report.SourceMap.IsEmpty())
	{
		Report.Error = TEXT("Missing -SourceMap=/Game/... parameter.");
		WriteReport(Report);
		return 2;
	}

	if (!Report.AppendProbeRegionTag.IsEmpty() && !Report.bAppendToExistingProbeList)
	{
		Report.Error = TEXT("AppendProbeRegionTag requires -AppendToExistingProbeList.");
		WriteReport(Report);
		return 2;
	}

	if (!LoadEditorMap(Report.SourceMap))
	{
		Report.Error = TEXT("Failed to load source map.");
		WriteReport(Report);
		return 3;
	}

	FString PythonError;
	if (!EnsureProjectAcousticsPython(PythonError))
	{
		Report.Error = PythonError;
		WriteReport(Report);
		return 4;
	}

	AcousticsSharedState::Initialize();
	if (!AcousticsSharedState::IsInitialized())
	{
		Report.Error = TEXT("ProjectAcoustics shared state was not initialized.");
		WriteReport(Report);
		return 5;
	}

	FString OverrideContentDir;
	if (FParse::Value(*Params, TEXT("ContentDir="), OverrideContentDir) && !OverrideContentDir.IsEmpty())
	{
		FProjectConfiguration ProjectConfiguration = AcousticsSharedState::GetProjectConfiguration();
		ProjectConfiguration.content_dir = ResolveProjectFilePath(OverrideContentDir);
		AcousticsSharedState::SetProjectConfiguration(ProjectConfiguration);
	}

	FString OverridePrefix;
	if (FParse::Value(*Params, TEXT("Prefix="), OverridePrefix) && !OverridePrefix.IsEmpty())
	{
		AcousticsSharedState::SetConfigurationPrefixForLevel(OverridePrefix);
	}

	const FProjectConfiguration ProjectConfiguration = AcousticsSharedState::GetProjectConfiguration();
	if (ProjectConfiguration.content_dir.IsEmpty())
	{
		Report.Error = TEXT("ProjectAcoustics content_dir is empty.");
		WriteReport(Report);
		return 6;
	}

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	PlatformFile.CreateDirectoryTree(*ProjectConfiguration.content_dir);

	if (bAuditManualProbeRoundTrip)
	{
		FManualProbeRoundTripAuditReport AuditReport;
		AuditReport.SourceMap = Report.SourceMap;
		AuditReport.ReportPath = Report.ReportPath;
		AuditReport.InputProbeLocation.X =
			ParseDoubleParameter(Params, TEXT("ManualProbeX="), AuditReport.InputProbeLocation.X);
		AuditReport.InputProbeLocation.Y =
			ParseDoubleParameter(Params, TEXT("ManualProbeY="), AuditReport.InputProbeLocation.Y);
		AuditReport.InputProbeLocation.Z =
			ParseDoubleParameter(Params, TEXT("ManualProbeZ="), AuditReport.InputProbeLocation.Z);
		RunManualProbeRoundTripAudit(AuditReport);
		WriteManualProbeRoundTripAuditReport(AuditReport);
		UE_LOG(
			LogAcoustics,
			Display,
			TEXT("ProjectAcoustics manual probe round-trip audit completed=%s passed=%s reloadedProbeCount=%d inputToReloadedDeltaCm=%.6f"),
			AuditReport.bCompleted ? TEXT("true") : TEXT("false"),
			AuditReport.bPassed ? TEXT("true") : TEXT("false"),
			AuditReport.ReloadedProbeCount,
			AuditReport.InputToReloadedDeltaCm);
		AcousticsSharedState::SetSimulationConfiguration(nullptr);
		return AuditReport.bCompleted && AuditReport.bPassed ? 0 : 13;
	}

	if (bAuditEditableProbes)
	{
		FEditableProbeAuditReport AuditReport;
		AuditReport.SourceMap = Report.SourceMap;
		AuditReport.ReportPath = Report.ReportPath;
		AuditReport.bSeedLegacyEditableProbeActors =
			FParse::Param(*Params, TEXT("SeedLegacyEditableProbeActors")) ||
			FParse::Param(*Params, TEXT("InjectLegacyEditableProbeActors"));
		RunEditableProbeAudit(AuditReport);
		WriteEditableProbeAuditReport(AuditReport);
		UE_LOG(
			LogAcoustics,
			Display,
			TEXT("ProjectAcoustics editable probe audit completed=%s passed=%s initialProbeCount=%d spawned=%d maxSpawnErrorCm=%.6f maxReloadDeltaCm=%.6f"),
			AuditReport.bCompleted ? TEXT("true") : TEXT("false"),
			AuditReport.bPassed ? TEXT("true") : TEXT("false"),
			AuditReport.InitialProbeCount,
			AuditReport.SpawnedProbeActorCount,
			AuditReport.MaxSpawnLocationErrorCm,
			AuditReport.MaxReloadLocationDeltaCm);
		AcousticsSharedState::SetSimulationConfiguration(nullptr);
		return AuditReport.bCompleted && AuditReport.bPassed ? 0 : 12;
	}

	ApplyProbePreset(ParsePreset(Report.PresetName));

	FConfigFile ProjectConfig;
	FString ProjectConfigPath;
	const bool bProjectConfigLoaded = ReadProjectAcousticsConfig(ProjectConfig, ProjectConfigPath);
	Report.ConfigFilePath = ProjectConfigPath;
	Report.bConfigFileExists = FPaths::FileExists(ProjectConfigPath);
	if (!bProjectConfigLoaded)
	{
		Report.Error = TEXT("Failed to read ProjectAcoustics project config.");
		WriteReport(Report);
		return 7;
	}

	Report.bUsePhysicalMaterials = ReadUsePhysicalMaterialsForCurrentMap(ProjectConfig);

	TUniquePtr<AcousticsMaterialLibrary> MaterialLibrary;
	FAcousticsProbeBakeCommandletOptions BakeOptions;
	BakeOptions.bUsePhysicalMaterials = Report.bUsePhysicalMaterials;
	BakeOptions.bAutoContinueLargeNavigationMeshes = !FParse::Param(*Params, TEXT("StopOnLargeNavigationMesh"));
	BakeOptions.bAppendToExistingProbeList = Report.bAppendToExistingProbeList;
	BakeOptions.AppendProbeDuplicateToleranceCm = Report.AppendProbeDuplicateToleranceCm;
	BakeOptions.AppendProbeRegionTag = Report.AppendProbeRegionTag.IsEmpty()
		? NAME_None
		: FName(*Report.AppendProbeRegionTag);
	BakeOptions.AppendProbeRegionBoundsPaddingCm = Report.AppendProbeRegionBoundsPaddingCm;
	if (!LoadMaterialLibraryFromConfig(
			ProjectConfig,
			MaterialLibrary,
			BakeOptions.MaterialToAcousticMaterial,
			Report.MaterialMappingsLoaded))
	{
		Report.Error = TEXT("Failed to create ProjectAcoustics material library.");
		WriteReport(Report);
		return 8;
	}

	AcousticsSharedState::SetMaterialsLibrary(MoveTemp(MaterialLibrary));

	const bool bOverwrite = FParse::Param(*Params, TEXT("Overwrite"));
	if (bOverwrite && Report.bAppendToExistingProbeList)
	{
		Report.Error = TEXT("AppendToExistingProbeList cannot be combined with Overwrite.");
		Report.VoxFilePath = AcousticsSharedState::GetVoxFilepath();
		Report.ConfigFilePath = AcousticsSharedState::GetConfigFilepath();
		Report.bVoxFileExists = FPaths::FileExists(Report.VoxFilePath);
		Report.bConfigFileExists = FPaths::FileExists(Report.ConfigFilePath);
		WriteReport(Report);
		return 9;
	}

	if (bOverwrite)
	{
		PlatformFile.SetReadOnly(*AcousticsSharedState::GetVoxFilepath(), false);
		PlatformFile.SetReadOnly(*AcousticsSharedState::GetConfigFilepath(), false);
		PlatformFile.DeleteFile(*AcousticsSharedState::GetVoxFilepath());
		PlatformFile.DeleteFile(*AcousticsSharedState::GetConfigFilepath());
		AcousticsSharedState::SetSimulationConfiguration(nullptr);
	}
	else if (AcousticsSharedState::IsPrebakeActive() && !Report.bAppendToExistingProbeList)
	{
		Report.Error = TEXT("Existing probe preview files are active. Pass -Overwrite to regenerate.");
		Report.VoxFilePath = AcousticsSharedState::GetVoxFilepath();
		Report.ConfigFilePath = AcousticsSharedState::GetConfigFilepath();
		Report.bVoxFileExists = FPaths::FileExists(Report.VoxFilePath);
		Report.bConfigFileExists = FPaths::FileExists(Report.ConfigFilePath);
		WriteReport(Report);
		return 9;
	}

	FAcousticsProbeBakeCommandletResult Result;
	if (!SAcousticsProbesTab::ComputePrebakeForCommandlet(BakeOptions, Result))
	{
		Report.Error = Result.Error;
		Report.ExistingProbeCount = Result.ExistingProbeCount;
		Report.GeneratedProbeCount = Result.GeneratedProbeCount;
		Report.AppendedProbeCount = Result.AppendedProbeCount;
		Report.DuplicateProbeCount = Result.DuplicateProbeCount;
		Report.AppendProbeRegionActorCount = Result.AppendProbeRegionActorCount;
		Report.AppendProbeRegionCandidateCount = Result.AppendProbeRegionCandidateCount;
		Report.AppendProbeOutOfRegionCount = Result.AppendProbeOutOfRegionCount;
		Report.AppendProbeRegionTag = Result.AppendProbeRegionTag;
		Report.AppendProbeRegionBoundsPaddingCm = Result.AppendProbeRegionBoundsPaddingCm;
		Report.bProbeListMerged = Result.bProbeListMerged;
		Report.VoxFilePath = AcousticsSharedState::GetVoxFilepath();
		Report.ConfigFilePath = AcousticsSharedState::GetConfigFilepath();
		Report.bVoxFileExists = FPaths::FileExists(Report.VoxFilePath);
		Report.bConfigFileExists = FPaths::FileExists(Report.ConfigFilePath);
		WriteReport(Report);
		return 10;
	}

	Report.bCompleted = true;
	Report.ProbeCount = Result.ProbeCount;
	Report.ExistingProbeCount = Result.ExistingProbeCount;
	Report.GeneratedProbeCount = Result.GeneratedProbeCount;
	Report.AppendedProbeCount = Result.AppendedProbeCount;
	Report.DuplicateProbeCount = Result.DuplicateProbeCount;
	Report.AppendProbeRegionActorCount = Result.AppendProbeRegionActorCount;
	Report.AppendProbeRegionCandidateCount = Result.AppendProbeRegionCandidateCount;
	Report.AppendProbeOutOfRegionCount = Result.AppendProbeOutOfRegionCount;
	Report.AppendProbeRegionTag = Result.AppendProbeRegionTag;
	Report.AppendProbeRegionBoundsPaddingCm = Result.AppendProbeRegionBoundsPaddingCm;
	Report.bProbeListMerged = Result.bProbeListMerged;
	Report.ProjectAcousticsEstimatedProcessingMinutes = Result.EstimatedProcessingMinutes;
	ApplyLocalCpuEstimate(Report);
	Report.VoxFilePath = Result.VoxFilepath;
	Report.ConfigFilePath = Result.ConfigFilepath;
	Report.bVoxFileExists = FPaths::FileExists(Report.VoxFilePath);
	Report.bConfigFileExists = FPaths::FileExists(Report.ConfigFilePath);

	if (!Report.bVoxFileExists || !Report.bConfigFileExists)
	{
		Report.bCompleted = false;
		Report.Error = TEXT("ProjectAcoustics probe calculation completed but output files are missing.");
		WriteReport(Report);
		return 11;
	}

	WriteReport(Report);
	UE_LOG(
		LogAcoustics,
		Display,
		TEXT("ProjectAcoustics probes completed. ProbeCount=%d EstimatedProcessingMinutes=%.1f EstimationModel=%s Vox=%s Config=%s"),
		Report.ProbeCount,
		Report.EstimatedProcessingMinutes,
		*Report.EstimationModel,
		*Report.VoxFilePath,
		*Report.ConfigFilePath);
	return 0;
}
