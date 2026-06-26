/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Commandlets/OrionPSOFilterCommandlet.h"

#include "HAL/FileManager.h"
#include "Misc/Parse.h"
#include "Misc/Paths.h"
#include "PipelineFileCache.h"
#include "RHIStrings.h"
#include "ShaderPipelineCache.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionPSOFilterCommandlet)

namespace
{
	struct FPSOFilterOptions
	{
		bool bKeepGraphics = true;
		bool bKeepMeshGraphics = true;
		bool bKeepCompute = true;
		bool bKeepRayTracing = true;
	};

	bool ShouldKeepPSO(const FPipelineCacheFileFormatPSO& PSO, const FPSOFilterOptions& Options)
	{
		switch (PSO.Type)
		{
		case FPipelineCacheFileFormatPSO::DescriptorType::Compute:
			return Options.bKeepCompute;

		case FPipelineCacheFileFormatPSO::DescriptorType::Graphics:
			if (PSO.GraphicsDesc.MeshShader != FShaderHash())
			{
				return Options.bKeepMeshGraphics;
			}
			return Options.bKeepGraphics;

		case FPipelineCacheFileFormatPSO::DescriptorType::RayTracing:
			return Options.bKeepRayTracing;

		default:
			return false;
		}
	}

	bool HasWildcard(const FString& Path)
	{
		return Path.Contains(TEXT("*")) || Path.Contains(TEXT("?"));
	}

	void AddInputFilesFromSpec(const FString& InputSpec, TArray<FString>& InputFiles)
	{
		FString TrimmedSpec = InputSpec;
		TrimmedSpec.TrimStartAndEndInline();
		if (TrimmedSpec.IsEmpty())
		{
			return;
		}

		const FString FullSpec = FPaths::ConvertRelativePathToFull(TrimmedSpec);
		if (!HasWildcard(FullSpec))
		{
			if (FPaths::FileExists(FullSpec))
			{
				InputFiles.AddUnique(FullSpec);
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Input PSO cache does not exist: %s"), *FullSpec);
			}
			return;
		}

		FString SearchRoot = FPaths::GetPath(FullSpec);
		if (SearchRoot.IsEmpty())
		{
			SearchRoot = FPaths::ProjectDir();
		}

		TArray<FString> Matches;
		IFileManager::Get().FindFilesRecursive(
			Matches,
			*SearchRoot,
			*FPaths::GetCleanFilename(FullSpec),
			true,
			false,
			false);

		for (const FString& Match : Matches)
		{
			InputFiles.AddUnique(FPaths::ConvertRelativePathToFull(Match));
		}
	}

	TArray<FString> ResolveInputFiles(const FString& InputPath)
	{
		TArray<FString> InputSpecs;
		InputPath.ParseIntoArray(InputSpecs, TEXT(";"), true);
		if (InputSpecs.IsEmpty())
		{
			InputSpecs.Add(InputPath);
		}

		TArray<FString> InputFiles;
		for (const FString& InputSpec : InputSpecs)
		{
			AddInputFilesFromSpec(InputSpec, InputFiles);
		}
		InputFiles.Sort();
		return InputFiles;
	}

	void CountPSO(
		const FPipelineCacheFileFormatPSO& PSO,
		int32& GraphicsCount,
		int32& MeshGraphicsCount,
		int32& ComputeCount,
		int32& RayTracingCount,
		int32& UnknownCount)
	{
		switch (PSO.Type)
		{
		case FPipelineCacheFileFormatPSO::DescriptorType::Compute:
			++ComputeCount;
			break;

		case FPipelineCacheFileFormatPSO::DescriptorType::Graphics:
			if (PSO.GraphicsDesc.MeshShader != FShaderHash())
			{
				++MeshGraphicsCount;
			}
			else
			{
				++GraphicsCount;
			}
			break;

		case FPipelineCacheFileFormatPSO::DescriptorType::RayTracing:
			++RayTracingCount;
			break;

		default:
			++UnknownCount;
			break;
		}
	}
}

UOrionPSOFilterCommandlet::UOrionPSOFilterCommandlet(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	IsClient = false;
	IsEditor = true;
	IsServer = false;
	LogToConsole = true;
}

int32 UOrionPSOFilterCommandlet::Main(const FString& Params)
{
	TArray<FString> Tokens;
	TArray<FString> Switches;
	TMap<FString, FString> ParamVals;
	ParseCommandLine(*Params, Tokens, Switches, ParamVals);

	FString InputPath;
	FString OutputPath;
	FString ShaderFormatName = TEXT("PCD3D_SM6");
	FString GameVersionText;

	ParamVals.RemoveAndCopyValue(TEXT("Input"), InputPath);
	ParamVals.RemoveAndCopyValue(TEXT("Output"), OutputPath);
	ParamVals.RemoveAndCopyValue(TEXT("ShaderFormat"), ShaderFormatName);
	ParamVals.RemoveAndCopyValue(TEXT("GameVersion"), GameVersionText);

	if (InputPath.IsEmpty() && Tokens.Num() > 0)
	{
		InputPath = Tokens[0];
	}
	if (OutputPath.IsEmpty() && Tokens.Num() > 1)
	{
		OutputPath = Tokens[1];
	}

	if (InputPath.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("Missing -Input=<Path> or first positional input .upipelinecache path."));
		return 1;
	}
	if (OutputPath.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("Missing -Output=<Path> or second positional output .upipelinecache path."));
		return 1;
	}

	FPSOFilterOptions Options;
	if (Switches.Contains(TEXT("OnlyGraphics")))
	{
		Options.bKeepGraphics = true;
		Options.bKeepMeshGraphics = false;
		Options.bKeepCompute = false;
		Options.bKeepRayTracing = false;
	}
	if (Switches.Contains(TEXT("OnlyMesh")))
	{
		Options.bKeepGraphics = false;
		Options.bKeepMeshGraphics = true;
		Options.bKeepCompute = false;
		Options.bKeepRayTracing = false;
	}
	if (Switches.Contains(TEXT("OnlyCompute")))
	{
		Options.bKeepGraphics = false;
		Options.bKeepMeshGraphics = false;
		Options.bKeepCompute = true;
		Options.bKeepRayTracing = false;
	}
	if (Switches.Contains(TEXT("NoGraphics")))
	{
		Options.bKeepGraphics = false;
	}
	if (Switches.Contains(TEXT("NoMesh")))
	{
		Options.bKeepMeshGraphics = false;
	}
	if (Switches.Contains(TEXT("NoCompute")))
	{
		Options.bKeepCompute = false;
	}
	if (Switches.Contains(TEXT("NoRayTracing")))
	{
		Options.bKeepRayTracing = false;
	}

	const FString ResolvedOutputPath = FPaths::ConvertRelativePathToFull(OutputPath);
	IFileManager::Get().MakeDirectory(*FPaths::GetPath(ResolvedOutputPath), true);

	const TArray<FString> ResolvedInputFiles = ResolveInputFiles(InputPath);
	if (ResolvedInputFiles.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("No PSO cache files matched input: %s"), *InputPath);
		return 1;
	}

	TSet<FPipelineCacheFileFormatPSO> SourcePSOs;
	int32 LoadedInputFileCount = 0;
	for (const FString& ResolvedInputFile : ResolvedInputFiles)
	{
		const int32 BeforeCount = SourcePSOs.Num();
		if (!FPipelineFileCacheManager::LoadPipelineFileCacheInto(ResolvedInputFile, SourcePSOs))
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to load PSO cache or cache is empty: %s"), *ResolvedInputFile);
			continue;
		}

		++LoadedInputFileCount;
		UE_LOG(LogTemp, Display, TEXT("Loaded PSO cache: %s (merged %d new PSOs)"),
			*ResolvedInputFile, SourcePSOs.Num() - BeforeCount);
	}

	if (SourcePSOs.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("No PSOs were loaded from %d matched input file(s)."), ResolvedInputFiles.Num());
		return 1;
	}

	TSet<FPipelineCacheFileFormatPSO> FilteredPSOs;
	int32 SourceGraphicsCount = 0;
	int32 SourceMeshGraphicsCount = 0;
	int32 SourceComputeCount = 0;
	int32 SourceRayTracingCount = 0;
	int32 SourceUnknownCount = 0;
	int32 KeptGraphicsCount = 0;
	int32 KeptMeshGraphicsCount = 0;
	int32 KeptComputeCount = 0;
	int32 KeptRayTracingCount = 0;
	int32 KeptUnknownCount = 0;

	for (const FPipelineCacheFileFormatPSO& PSO : SourcePSOs)
	{
		CountPSO(PSO, SourceGraphicsCount, SourceMeshGraphicsCount, SourceComputeCount, SourceRayTracingCount, SourceUnknownCount);

		if (ShouldKeepPSO(PSO, Options))
		{
			FilteredPSOs.Add(PSO);
			CountPSO(PSO, KeptGraphicsCount, KeptMeshGraphicsCount, KeptComputeCount, KeptRayTracingCount, KeptUnknownCount);
		}
	}

	uint32 GameVersion = static_cast<uint32>(FShaderPipelineCache::GetGameVersionForPSOFileCache());
	if (!GameVersionText.IsEmpty())
	{
		LexFromString(GameVersion, *GameVersionText);
	}

	const EShaderPlatform ShaderPlatform = ShaderFormatToLegacyShaderPlatform(FName(*ShaderFormatName));
	if (ShaderPlatform == SP_NumPlatforms)
	{
		UE_LOG(LogTemp, Error, TEXT("Unknown ShaderFormat: %s"), *ShaderFormatName);
		return 1;
	}

	if (FilteredPSOs.IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("Filter removed every PSO; not writing empty cache."));
		return 1;
	}

	if (!FPipelineFileCacheManager::SavePipelineFileCacheFrom(GameVersion, ShaderPlatform, ResolvedOutputPath, FilteredPSOs))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to save filtered PSO cache: %s"), *ResolvedOutputPath);
		return 1;
	}

	UE_LOG(LogTemp, Display, TEXT("Input PSOs: total=%d graphics=%d meshGraphics=%d compute=%d rayTracing=%d unknown=%d"),
		SourcePSOs.Num(), SourceGraphicsCount, SourceMeshGraphicsCount, SourceComputeCount, SourceRayTracingCount, SourceUnknownCount);
	UE_LOG(LogTemp, Display, TEXT("Output PSOs: total=%d graphics=%d meshGraphics=%d compute=%d rayTracing=%d unknown=%d"),
		FilteredPSOs.Num(), KeptGraphicsCount, KeptMeshGraphicsCount, KeptComputeCount, KeptRayTracingCount, KeptUnknownCount);
	UE_LOG(LogTemp, Display, TEXT("Loaded input files: %d/%d"), LoadedInputFileCount, ResolvedInputFiles.Num());
	UE_LOG(LogTemp, Display, TEXT("GameVersion: %u"), GameVersion);
	UE_LOG(LogTemp, Display, TEXT("Wrote filtered PSO cache: %s"), *ResolvedOutputPath);
	return 0;
}
