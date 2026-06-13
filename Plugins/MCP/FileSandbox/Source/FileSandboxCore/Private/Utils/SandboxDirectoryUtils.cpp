// Copyright Epic Games, Inc. All Rights Reserved.

#include "Utils/SandboxDirectoryUtils.h"

#include "CommandLineUtils.h"
#include "IFileSandboxCoreModule.h"
#include "ISandboxInstance.h"
#include "ISandboxManager.h"
#include "Data/ManifestData.h"
#include "Data/SandboxMetaData.h"
#include "Data/VersionInfo.h"
#include "HAL/PlatformFileManager.h"
#include "JsonObjectConverter.h"
#include "LogFileSandbox.h"
#include "Misc/CommandLine.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "SandboxFileUtils.h"
#include "Sandbox/Platform/SanboxedFilePathUtils.h"
#include "Sandbox/Platform/SandboxedPlatformFilePath.h"
#include "Templates/Function.h"
#include "Types/EBreakBehavior.h"
#include "HAL/IConsoleManager.h"

#define LOCTEXT_NAMESPACE "SandboxDirectoryUtils"

namespace UE::FileSandboxCore
{

	
/** Minimum allowed sandbox name length */
constexpr int32 MinSandboxNameLength = 32;

/** Maximum allowed sandbox name length */
constexpr int32 MaxSandboxNameLength = 255;

/** Console variable to control maximum sandbox name length (clamped between 32 and 255 characters) */
static TAutoConsoleVariable<int32> CVarMaximumSandboxNameLength(
	TEXT("Sandbox.MaximumSandboxNameLength"),
	128,
	TEXT("Maximum allowed length for sandbox names. Valid range: 32-255 characters.\n")
	TEXT("Longer names may cause filesystem path length issues."),
	ECVF_Default
);

/**
 * Gets the maximum sandbox name length from the console variable, clamped to valid range [32, 255].
 * @return Maximum sandbox name length
 */
int32 GetMaximumSandboxNameLength()
{
	const int32 Value = CVarMaximumSandboxNameLength.GetValueOnAnyThread();
	return FMath::Clamp(Value, MinSandboxNameLength, MaxSandboxNameLength);
}
	
FString GetBaseSandboxDirectory()
{
	const FString CommandLineOverride = ParseDefaultSandboxDirectory();
	return CommandLineOverride.IsEmpty() 
		? FPaths::ProjectIntermediateDir() / TEXT("Sandboxes")
		: CommandLineOverride;
}

bool ValidateManifestContent(const FString& InFileContent)
{
	return LoadManifestFromContent(InFileContent).IsSet();
}

void ForEachSandbox(
	TFunctionRef<FProcessSandboxDirectorySignature> InProcessSandbox,
	const FString& InBaseDirectory
	)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	PlatformFile.IterateDirectory(*InBaseDirectory, [&InProcessSandbox](const TCHAR* FilenameOrDirectory, const bool bIsDirectory)
	{
		if (!bIsDirectory || !IsRootSandboxDirectory(FilenameOrDirectory))
		{
			return true;
		}
			
		return InProcessSandbox(FilenameOrDirectory) == EBreakBehavior::Continue;
	});
}

bool IsRootSandboxDirectory(const FString& InRootDirectory)
{
	const bool bDirectoryExists = FPaths::DirectoryExists(InRootDirectory);
	const bool bHasManifest = FPaths::FileExists(InRootDirectory / GetManifestFileName());
	const bool bHasMetadata = FPaths::FileExists(InRootDirectory / GetMetadataFileName());
	return bDirectoryExists && bHasManifest && bHasMetadata;
}

bool SaveMetaData(
	const FFileSandboxCore_SandboxMetaData& NewMetaData, const FString& InSandboxDirectory
	)
{
	FString JSONPayload;
	FJsonObjectConverter::UStructToJsonObjectString(
		NewMetaData,
		JSONPayload, 0, 0
		);
	
	const FString AbsFileName = InSandboxDirectory / GetMetadataFileName();
	const bool bSuccess =  FFileHelper::SaveStringToFile(JSONPayload, *AbsFileName);
	UE_CLOGF(!bSuccess, LogFileSandbox, Error, "Failed to write sandbox metadata file %ls", *AbsFileName);
	return bSuccess;
}
	
TOptional<FFileSandboxCore_SandboxMetaData> LoadMetaData(const FString& InSandboxDirectory)
{
	FString JSONPayload;
	const FString AbsFileName = InSandboxDirectory / GetMetadataFileName();
	if (FFileHelper::LoadFileToString(JSONPayload, *AbsFileName))
	{
		const TOptional<FFileSandboxCore_SandboxMetaData> Result = LoadMetaDataFromFileContent(JSONPayload);
		UE_CLOGF(!Result.IsSet(), LogFileSandbox, Error, "Failed to parse sandbox metadata file %ls", *AbsFileName);
		return Result;
	}
	return {};
}

TOptional<FFileSandboxCore_SandboxMetaData> LoadMetaDataFromFileContent(const FString& InFileContent)
{
	FFileSandboxCore_SandboxMetaData ManifestPlatformFileState;
	const FString& JSONPayload = InFileContent;
	const bool bParsed = FJsonObjectConverter::JsonObjectStringToUStruct(JSONPayload, &ManifestPlatformFileState, 0, 0);
	return bParsed ? ManifestPlatformFileState : TOptional<FFileSandboxCore_SandboxMetaData>{};
}

bool RenameSandboxWithDirectory(
	const FString& InNewName, const FString& InOldName, const FString& InBaseDirectory, const FFileSandboxCore_SandboxMetaData* InNewMetaData
	)
{
	if (CanRenameSandboxWithDirectory(InNewName, InOldName, InBaseDirectory) != ESandboxRenameSuitability::Allowed)
	{
		return false;
	}
	
	const FString OldSandboxDir = InBaseDirectory / InOldName;
	TOptional<FFileSandboxCore_SandboxMetaData> NewMetaData = InNewMetaData 
		? TOptional(*InNewMetaData) : LoadMetaData(*OldSandboxDir);
	if (!NewMetaData)
	{
		return false;
	}
	
	NewMetaData->Name = InNewName;
	if (!SaveMetaData(*NewMetaData, OldSandboxDir))
	{
		return false;
	}
	
	const FString NewDir = InBaseDirectory / InNewName;
	return IFileManager::Get().Move(*NewDir, *OldSandboxDir);
}

ESandboxRenameSuitability CanRenameSandboxWithDirectory(const FString& InNewName, const FString& InOldName, const FString& InBaseDirectory)
{
	if (InNewName.IsEmpty())
	{
		return ESandboxRenameSuitability::EmptyName;
	}
	
	if (InNewName == InOldName)
	{
		return ESandboxRenameSuitability::NameIsSame;
	}
	
	const FString OldDir = InBaseDirectory / InOldName;
	const bool bSandboxExists = IsRootSandboxDirectory(*OldDir);
	if (!bSandboxExists)
	{
		return ESandboxRenameSuitability::SandboxDoesNotExist;
	}
	
	if (!IsAllowedToRenameSandbox(OldDir))
	{
		return ESandboxRenameSuitability::ActiveSandbox;
	}
	
	const FString NewDirectory = InBaseDirectory / InNewName;
	const bool bNewDirectoryIsAvailable = FPaths::ValidatePath(NewDirectory) && !FPaths::DirectoryExists(NewDirectory);
	if (!bNewDirectoryIsAvailable)
	{
		return ESandboxRenameSuitability::InvalidDirectory;
	}
	
	return ESandboxRenameSuitability::Allowed;
}

bool IsAllowedToRenameSandbox(const FString& InSandboxDirectory)
{
	// Renaming would leave the internal sandbox root directory "stale". Let's not implement advanced renaming logic for that for now.
	ISandboxInstance* ActiveSandbox = IFileSandboxCoreModule::Get().GetSandboxManager().GetActiveSandboxInstance();
	const bool bIsNotActiveSandbox = !ActiveSandbox || !FPaths::IsSamePath(InSandboxDirectory, ActiveSandbox->GetRootDirectory());
	return bIsNotActiveSandbox;
}

FDateTime GetLastModified(const FString& InSandboxDirectory)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	const FString ManifestFile = FPaths::Combine(InSandboxDirectory, GetManifestFileName());
	return PlatformFile.GetTimeStampLocal(*ManifestFile);
}

FFileSandboxCore_VersionInfo LoadVersionInfo(const FString& InSandboxDirectory)
{
	const TOptional<FFileSandboxCore_ManifestData> Manifest = LoadManifest(InSandboxDirectory);
	return Manifest ? Manifest->VersionInfo : FFileSandboxCore_VersionInfo();
}

TOptional<FString> FindSandboxByName(
	const FString& InSandboxName,
	const FString& InBaseDirectory
	)
{
	TOptional<FString> Result;

	// First we'll look for a directory with the sandbox name and only load that metadata file... because that is the common case...
	ForEachSandbox([&InSandboxName, &Result](const FString& InPath)
	{
		if (FPaths::GetPathLeaf(InPath) != InSandboxName)
		{
			return EBreakBehavior::Continue;
		}

		const TOptional<FFileSandboxCore_SandboxMetaData> MetaData = LoadMetaData(InPath);
		if (MetaData && MetaData->Name == InSandboxName)
		{
			Result = InPath;
		}
			
		return EBreakBehavior::Break;
	}, InBaseDirectory);

	if (Result)
	{
		return Result;
	}

	// ... but somebody may have messed with the file system (user could have renamed folder or edited metadata file directly).
	ForEachSandbox([&InSandboxName, &Result](const FString& InPath)
	{
		const TOptional<FFileSandboxCore_SandboxMetaData> MetaData = LoadMetaData(InPath);
		if (MetaData && MetaData->Name == InSandboxName)
		{
			Result = InPath;
			return EBreakBehavior::Break;
		}
		return EBreakBehavior::Continue;
	}, InBaseDirectory);
	
	return Result;
}

EDirectorySuitability DetermineDirectorySuitability(const FString& InSandboxName, const FString& InBaseDirectory, FText* OutReason)
{
	if (InSandboxName.IsEmpty())
	{
		return EDirectorySuitability::EmptyName;
	}

	// Limit sandbox name length to prevent excessively long directory paths and FName character limits
	const int32 MaxLength = GetMaximumSandboxNameLength();
	if (InSandboxName.Len() > MaxLength)
	{
		return EDirectorySuitability::NameTooLong;
	}

	const FString NewDirectory = FPaths::Combine(InBaseDirectory, InSandboxName);
	if (!FPaths::ValidatePath(NewDirectory))
	{
		return EDirectorySuitability::InvalidPath;
	}

	if (FindSandboxByName(InSandboxName, InBaseDirectory))
	{
		return EDirectorySuitability::DuplicateName;
	}

	// We'll require that a sandbox be created in a new directory so we don't have to worry handling pre-existing files in that directory.
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	const bool bDirectoryAlreadyExists = PlatformFile.DirectoryExists(*NewDirectory);
	if (bDirectoryAlreadyExists)
	{
		return EDirectorySuitability::DirectoryAlreadyExists;
	}

	return EDirectorySuitability::Suitable;
}

FText FormatDirectorySuitabilityAsReason(EDirectorySuitability Suitability, const FString& InSandboxName, const FString& InBaseDirectory)
{
	switch (Suitability)
	{
	case EDirectorySuitability::Suitable: return LOCTEXT("Suitability.Suitable", "Suitable");
	case EDirectorySuitability::EmptyName: return LOCTEXT("Suitability.EmptyName", "Sandbox name cannot be empty");
	case EDirectorySuitability::NameTooLong:
		return FText::Format(
			LOCTEXT("Suitability.NameTooLong", "Sandbox name is too long ({0} characters). Maximum length is {1} characters."),
			FText::AsNumber(InSandboxName.Len()),
			FText::AsNumber(GetMaximumSandboxNameLength())
			);
	case EDirectorySuitability::DuplicateName:
		return FText::Format(LOCTEXT("Suitability.DuplicateName", "Sandbox name {0} already exists"), FText::FromString(InSandboxName));

	case EDirectorySuitability::InvalidPath:
		return FText::Format(
			LOCTEXT("Suitability.InvalidPath", "Directory {0} is malformed"),
			FText::FromString(FPaths::Combine(InBaseDirectory, InSandboxName))
			);

	case EDirectorySuitability::DirectoryAlreadyExists:
		return FText::Format(
			LOCTEXT("Suitability.DirectoryAlreadyExists", "Directory {0} already exists"),
			FText::FromString(FPaths::Combine(InBaseDirectory, InSandboxName))
			);

	default: checkNoEntry(); return FText::GetEmpty();
	}
}

TOptional<FString> GetSandboxPathFor(const FString& InSandboxDirectory, const FString& InNonSandboxPath)
{
	if (!IsRootSandboxDirectory(InSandboxDirectory))
	{
		return {};
	}
	
	// Need to convert to the directory in which sandbox files are stored. Example: 
	// - InSandboxDirectory = "D:/Workspaces/Fortnite-Main/Sandbox/Anim/ControlRigExample/Intermediate/Sandboxes/MySandbox"
	// - SandboxContentDirectory "D:/Workspaces/Fortnite-Main/Sandbox/Anim/ControlRigExample/Intermediate/Sandboxes/MySandbox/Sandbox"
	const FString SandboxContentDirectory = GetSandboxMountPointRoot(InSandboxDirectory);
	
	TOptional<FString> Result;
	EnumerateMountPoints([&SandboxContentDirectory, &InNonSandboxPath, &Result](const FString& InAssetPath, const FString& InFilesystemPath)
	{
		const FSandboxedPlatformFilePath MountPointPath = FSandboxedPlatformFilePath::CreateMountPoint(
			*SandboxContentDirectory, InAssetPath, InFilesystemPath
			);
		const TOptional<FSandboxedPlatformFilePath> Path = MakeSandboxedFilePathIfInMountPoint(InNonSandboxPath, MountPointPath);
		if (Path && !Path->GetSandboxPath().IsEmpty())
		{
			Result = Path->GetSandboxPath();
			return EBreakBehavior::Break;
		}
			
		return EBreakBehavior::Continue;
	});
	
	return Result;
}

TOptional<FString> GetSandboxName(const FString& InSandboxDirectory)
{
	if (!IsRootSandboxDirectory(InSandboxDirectory))
	{
		return {};
	}
	
	// We'll assume that the directory has the name, i.e. has a structure like ../Sandboxes/MySandboxName
	const FString& PathLeaf = FPaths::GetPathLeaf(InSandboxDirectory);
	return ensure(!PathLeaf.IsEmpty()) ? PathLeaf : TOptional<FString>();
}
}

#undef LOCTEXT_NAMESPACE
