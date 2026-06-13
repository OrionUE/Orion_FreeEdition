/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GameFeaturesToolset.h"

#include "AssetRegistry/AssetRegistryModule.h"
#include "Editor.h"
#include "Engine/AssetManagerTypes.h"
#include "GameFeatureData.h"
#include "GameFeaturesSubsystem.h"
#include "GameFeaturesSubsystemSettings.h"
#include "GameFeaturePluginOperationResult.h"
#include "GameFeatureTypes.h"
#include "Interfaces/IPluginManager.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Misc/PackageName.h"
#include "Subsystems/EditorAssetSubsystem.h"
#include "UObject/Package.h"
#include "UObject/SoftObjectPath.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameFeaturesToolset)

DEFINE_LOG_CATEGORY(LogGameFeaturesToolset);

namespace UE::GameFeaturesToolset::Private
{

	// Maps the engine's ~34 internal GFP states to
	// the simplified user-facing enum. Transitional and
	// error states all collapse to Unknown.
	static EPluginToolsetGFPState ToGFPState(
		EGameFeaturePluginState State)
	{
		switch (State)
		{
		case EGameFeaturePluginState::Uninitialized:
			return EPluginToolsetGFPState::Uninitialized;
		case EGameFeaturePluginState::Installed:
			return EPluginToolsetGFPState::Installed;
		case EGameFeaturePluginState::Registered:
			return EPluginToolsetGFPState::Registered;
		case EGameFeaturePluginState::Loaded:
			return EPluginToolsetGFPState::Loaded;
		case EGameFeaturePluginState::Active:
			return EPluginToolsetGFPState::Active;
		default:
			return EPluginToolsetGFPState::Unknown;
		}
	}

	static void RaiseError(const FString& Message)
	{
		UE::MCPCompat::RaiseScriptError(
			FString::Printf(
				TEXT("GameFeaturesToolset: %s"), *Message));
	}

	static UGameFeaturesSubsystem* GetGameFeaturesSubsystem()
	{
		UGameFeaturesSubsystem* Subsystem =	GEngine ?
			GEngine->GetEngineSubsystem<UGameFeaturesSubsystem>() : nullptr;
		if (!Subsystem)
		{
			RaiseError(TEXT("GameFeaturesSubsystem not available. Ensure GameFeatures "
					"plugin is enabled."));
		}
		return Subsystem;
	}

	static bool IsGameFeaturePluginName(const FString& PluginName)
	{
		UGameFeaturesSubsystem* Subsystem = GetGameFeaturesSubsystem();
		if (!Subsystem)
		{
			return false;
		}

		FString PluginURL;
		return Subsystem->GetPluginURLByName(PluginName, PluginURL);
	}

	FString ResolvePluginURLOrRaise(const FString& PluginName,
		UGameFeaturesSubsystem*& OutSubsystem)
	{
		OutSubsystem = GetGameFeaturesSubsystem();
		if (!OutSubsystem)
		{
			return FString();
		}

		FString PluginURL;
		if (!OutSubsystem->GetPluginURLByName(PluginName, PluginURL))
		{
			RaiseError(FString::Printf(TEXT("GFP not found: %s"), *PluginName));
			return FString();
		}

		return PluginURL;
	}

	static FString MakeObjectPathFromPackageName(const FString& PackageName)
	{
		const FString AssetName = FPackageName::GetLongPackageAssetName(PackageName);
		return AssetName.IsEmpty() ? FString() : PackageName + TEXT(".") + AssetName;
	}

	static FString NormalizeObjectPath(const FString& AssetPath)
	{
		FString NormalizedPath = AssetPath;
		NormalizedPath.TrimStartAndEndInline();
		NormalizedPath.ReplaceInline(TEXT("\\"), TEXT("/"));

		if (NormalizedPath.Contains(TEXT(".")))
		{
			return NormalizedPath;
		}

		FText Reason;
		if (FPackageName::IsValidLongPackageName(NormalizedPath, true, &Reason))
		{
			return MakeObjectPathFromPackageName(NormalizedPath);
		}

		return NormalizedPath;
	}

	static FString NormalizeDirectoryForGameFeatureData(const FString& DirectoryPath, const FString& PluginName)
	{
		FString NormalizedPath = DirectoryPath;
		NormalizedPath.TrimStartAndEndInline();
		NormalizedPath.ReplaceInline(TEXT("\\"), TEXT("/"));
		NormalizedPath.RemoveFromEnd(TEXT("/"));

		const FString PluginRootPath = TEXT("/") + PluginName;
		if (NormalizedPath == PluginRootPath)
		{
			return FString();
		}

		NormalizedPath.RemoveFromStart(PluginRootPath / TEXT(""));
		return NormalizedPath;
	}

	static bool TryParseCookRule(const FString& CookRuleText, EPrimaryAssetCookRule& OutCookRule)
	{
		const FString NormalizedRule = CookRuleText.TrimStartAndEnd().Replace(TEXT("EPrimaryAssetCookRule::"), TEXT(""));
		if (NormalizedRule.Equals(TEXT("Unknown"), ESearchCase::IgnoreCase))
		{
			OutCookRule = EPrimaryAssetCookRule::Unknown;
			return true;
		}
		if (NormalizedRule.Equals(TEXT("NeverCook"), ESearchCase::IgnoreCase))
		{
			OutCookRule = EPrimaryAssetCookRule::NeverCook;
			return true;
		}
		if (NormalizedRule.Equals(TEXT("ProductionNeverCook"), ESearchCase::IgnoreCase) ||
			NormalizedRule.Equals(TEXT("DevelopmentCook"), ESearchCase::IgnoreCase))
		{
			OutCookRule = EPrimaryAssetCookRule::ProductionNeverCook;
			return true;
		}
		if (NormalizedRule.Equals(TEXT("DevelopmentAlwaysProductionNeverCook"), ESearchCase::IgnoreCase) ||
			NormalizedRule.Equals(TEXT("DevelopmentAlwaysCook"), ESearchCase::IgnoreCase))
		{
			OutCookRule = EPrimaryAssetCookRule::DevelopmentAlwaysProductionNeverCook;
			return true;
		}
		if (NormalizedRule.Equals(TEXT("DevelopmentAlwaysProductionUnknownCook"), ESearchCase::IgnoreCase))
		{
			OutCookRule = EPrimaryAssetCookRule::DevelopmentAlwaysProductionUnknownCook;
			return true;
		}
		if (NormalizedRule.Equals(TEXT("AlwaysCook"), ESearchCase::IgnoreCase))
		{
			OutCookRule = EPrimaryAssetCookRule::AlwaysCook;
			return true;
		}

		return false;
	}

	static bool SaveLoadedAssetOrRaise(UObject* Asset)
	{
		UEditorAssetSubsystem* AssetSubsystem = GEditor ?
			GEditor->GetEditorSubsystem<UEditorAssetSubsystem>() : nullptr;
		if (!AssetSubsystem)
		{
			RaiseError(TEXT("EditorAssetSubsystem not available."));
			return false;
		}
		if (!AssetSubsystem->SaveLoadedAsset(Asset, false))
		{
			RaiseError(FString::Printf(TEXT("Failed to save asset '%s'."), *GetPathNameSafe(Asset)));
			return false;
		}
		return true;
	}

	static FString GetRootGameFeatureDataPackageNameOrRaise(const FString& PluginName)
	{
		const TSharedPtr<IPlugin> FoundPlugin = IPluginManager::Get().FindPlugin(PluginName);
		if (!FoundPlugin)
		{
			RaiseError(FString::Printf(TEXT("Could not find a plugin with name '%s'"), *PluginName));
			return FString();
		}

		if (!FoundPlugin->CanContainContent())
		{
			RaiseError(FString::Printf(TEXT("Plugin '%s' cannot contain content."), *PluginName));
			return FString();
		}

		FString MountRoot = FoundPlugin->GetMountedAssetPath();
		MountRoot.TrimStartAndEndInline();
		MountRoot.ReplaceInline(TEXT("\\"), TEXT("/"));
		MountRoot.RemoveFromEnd(TEXT("/"));
		if (MountRoot.IsEmpty())
		{
			MountRoot = TEXT("/") + FoundPlugin->GetName();
		}

		const FString PackageName = MountRoot + TEXT("/") + FoundPlugin->GetName();
		FText Reason;
		if (!FPackageName::IsValidLongPackageName(PackageName, true, &Reason))
		{
			RaiseError(FString::Printf(TEXT("Default GameFeatureData path '%s' is invalid: %s"), *PackageName, *Reason.ToString()));
			return FString();
		}

		return PackageName;
	}
}

TArray<FString> UGameFeaturesToolset::ListEnabledGameFeaturePlugins()
{
	TArray<FString> Names;
	for (const TSharedRef<IPlugin>& Plugin : IPluginManager::Get().GetEnabledPlugins())
	{
		if (UE::GameFeaturesToolset::Private::IsGameFeaturePluginName(Plugin->GetName()))
		{
			Names.Add(Plugin->GetName());
		}
	}
	Names.Sort();
	return Names;
}

TArray<FString> UGameFeaturesToolset::ListDiscoveredGameFeaturePlugins()
{
	TArray<FString> Names;
	for (const TSharedRef<IPlugin>& Plugin : IPluginManager::Get().GetDiscoveredPlugins())
	{
		if (UE::GameFeaturesToolset::Private::IsGameFeaturePluginName(Plugin->GetName()))
		{
			Names.Add(Plugin->GetName());
		}
	}
	Names.Sort();
	return Names;
}

bool UGameFeaturesToolset::IsGameFeaturePlugin(const FString& PluginName)
{
	using namespace UE::GameFeaturesToolset::Private;
	TSharedPtr<IPlugin> FoundPlugin = IPluginManager::Get().FindPlugin(PluginName);
	if(!FoundPlugin)
	{
		RaiseError(FString::Printf(TEXT("Could not find a plugin with name '%s'"), *PluginName));
		return false;
	}
	return IsGameFeaturePluginName(PluginName);
}

FString UGameFeaturesToolset::CreateGameFeatureDataAsset(const FString& PluginName, bool bSave)
{
	using namespace UE::GameFeaturesToolset::Private;

	const FString PackageName = GetRootGameFeatureDataPackageNameOrRaise(PluginName);
	if (PackageName.IsEmpty())
	{
		return FString();
	}

	const FString ObjectPath = MakeObjectPathFromPackageName(PackageName);
	if (UObject* ExistingObject = StaticLoadObject(UObject::StaticClass(), nullptr, *ObjectPath))
	{
		if (!ExistingObject->IsA<UGameFeatureData>())
		{
			RaiseError(FString::Printf(TEXT("Asset '%s' already exists but is not a GameFeatureData asset."), *ObjectPath));
			return FString();
		}

		return ExistingObject->GetPathName();
	}

	UPackage* Package = CreatePackage(*PackageName);
	if (!Package)
	{
		RaiseError(FString::Printf(TEXT("Failed to create package '%s'."), *PackageName));
		return FString();
	}

	const FString AssetName = FPackageName::GetLongPackageAssetName(PackageName);
	UGameFeatureData* GameFeatureData = NewObject<UGameFeatureData>(
		Package,
		UGameFeatureData::StaticClass(),
		FName(*AssetName),
		RF_Public | RF_Standalone | RF_Transactional);
	if (!GameFeatureData)
	{
		RaiseError(FString::Printf(TEXT("Failed to create GameFeatureData asset '%s'."), *PackageName));
		return FString();
	}

#if WITH_EDITORONLY_DATA
	GameFeatureData->UpdateAssetBundleData();
#endif
	FAssetRegistryModule::AssetCreated(GameFeatureData);
	Package->MarkPackageDirty();

	if (bSave)
	{
		UEditorAssetSubsystem* AssetSubsystem = GEditor ?
			GEditor->GetEditorSubsystem<UEditorAssetSubsystem>() : nullptr;
		if (!AssetSubsystem || !AssetSubsystem->SaveLoadedAsset(GameFeatureData, false))
		{
			RaiseError(FString::Printf(TEXT("Failed to save GameFeatureData asset '%s'."), *GameFeatureData->GetPathName()));
			return FString();
		}
	}

	return GameFeatureData->GetPathName();
}

FString UGameFeaturesToolset::AddPrimaryAssetTypeToGameFeatureDataAsset(
	const FString& GameFeatureDataPath,
	const FString& PrimaryAssetType,
	const FString& AssetBaseClassPath,
	bool bHasBlueprintClasses,
	const TArray<FString>& Directories,
	const TArray<FString>& SpecificAssets,
	bool bIsEditorOnly,
	const FString& CookRule,
	bool bSave)
{
	using namespace UE::GameFeaturesToolset::Private;

	if (PrimaryAssetType.TrimStartAndEnd().IsEmpty())
	{
		RaiseError(TEXT("PrimaryAssetType cannot be empty."));
		return FString();
	}

	UGameFeatureData* GameFeatureData = Cast<UGameFeatureData>(
		StaticLoadObject(UGameFeatureData::StaticClass(), nullptr, *NormalizeObjectPath(GameFeatureDataPath)));
	if (!GameFeatureData)
	{
		RaiseError(FString::Printf(TEXT("Failed to load GameFeatureData asset '%s'."), *GameFeatureDataPath));
		return FString();
	}

	UClass* AssetBaseClass = LoadObject<UClass>(nullptr, *AssetBaseClassPath);
	if (!AssetBaseClass)
	{
		RaiseError(FString::Printf(TEXT("Failed to load asset base class '%s'."), *AssetBaseClassPath));
		return FString();
	}

	EPrimaryAssetCookRule ParsedCookRule = EPrimaryAssetCookRule::AlwaysCook;
	if (!TryParseCookRule(CookRule, ParsedCookRule))
	{
		RaiseError(FString::Printf(TEXT("Unknown cook rule '%s'."), *CookRule));
		return FString();
	}

	FString PluginName;
	GameFeatureData->GetPluginName(PluginName);
	if (PluginName.IsEmpty())
	{
		FString PackageRoot;
		FString PackagePath;
		FString PackageShortName;
		if (FPackageName::SplitLongPackageName(GameFeatureData->GetOutermost()->GetName(), PackageRoot, PackagePath, PackageShortName))
		{
			PackageRoot.RemoveFromStart(TEXT("/"));
			PluginName = PackageRoot;
		}
	}

	FPrimaryAssetTypeInfo TypeInfo(
		FName(*PrimaryAssetType.TrimStartAndEnd()),
		AssetBaseClass,
		bHasBlueprintClasses,
		bIsEditorOnly);
	TypeInfo.Rules.CookRule = ParsedCookRule;

	for (const FString& Directory : Directories)
	{
		if (Directory.TrimStartAndEnd().IsEmpty())
		{
			continue;
		}

		FDirectoryPath DirectoryPath;
		DirectoryPath.Path = NormalizeDirectoryForGameFeatureData(Directory, PluginName);
		TypeInfo.GetDirectories().Add(DirectoryPath);
	}

	for (const FString& SpecificAsset : SpecificAssets)
	{
		if (SpecificAsset.TrimStartAndEnd().IsEmpty())
		{
			continue;
		}

		TypeInfo.GetSpecificAssets().Add(FSoftObjectPath(NormalizeObjectPath(SpecificAsset)));
	}

	GameFeatureData->Modify();
	TArray<FPrimaryAssetTypeInfo>& TypesToScan = GameFeatureData->GetPrimaryAssetTypesToScan();
	const int32 ExistingIndex = TypesToScan.IndexOfByPredicate(
		[&TypeInfo](const FPrimaryAssetTypeInfo& ExistingTypeInfo)
		{
			return ExistingTypeInfo.PrimaryAssetType == TypeInfo.PrimaryAssetType;
		});

	if (ExistingIndex == INDEX_NONE)
	{
		TypesToScan.Add(TypeInfo);
	}
	else
	{
		TypesToScan[ExistingIndex] = TypeInfo;
	}

#if WITH_EDITORONLY_DATA
	GameFeatureData->UpdateAssetBundleData();
#endif
	GameFeatureData->MarkPackageDirty();

	if (bSave && !SaveLoadedAssetOrRaise(GameFeatureData))
	{
		return FString();
	}

	return GameFeatureData->GetPathName();
}

bool UGameFeaturesToolset::IsGameFeatureActive(const FString& PluginName)
{
	using namespace UE::GameFeaturesToolset::Private;

	UGameFeaturesSubsystem* Subsystem = nullptr;
	FString PluginURL = ResolvePluginURLOrRaise(PluginName, Subsystem);
	if (PluginURL.IsEmpty())
	{
		return false;
	}
	check(Subsystem);
	EGameFeaturePluginState State =	Subsystem->GetPluginState(PluginURL);
	return State == EGameFeaturePluginState::Active;
}

EPluginToolsetGFPState
UGameFeaturesToolset::GetGameFeatureState(const FString& PluginName)
{
	using namespace UE::GameFeaturesToolset::Private;

	UGameFeaturesSubsystem* Subsystem = nullptr;
	FString PluginURL = ResolvePluginURLOrRaise(PluginName, Subsystem);
	if (PluginURL.IsEmpty())
	{
		return EPluginToolsetGFPState::Unknown;
	}
	check(Subsystem);

	EGameFeaturePluginState State =	Subsystem->GetPluginState(PluginURL);
	return ToGFPState(State);
}

bool UGameFeaturesToolset::RequestActivateGameFeature(const FString& PluginName)
{
	using namespace UE::GameFeaturesToolset::Private;
	UGameFeaturesSubsystem* Subsystem = nullptr;
	FString PluginURL = ResolvePluginURLOrRaise(PluginName, Subsystem);
	if (PluginURL.IsEmpty())
	{
		return false;
	}
	check(Subsystem);

	Subsystem->LoadAndActivateGameFeaturePlugin(
		PluginURL,
		FGameFeaturePluginLoadComplete::CreateLambda(
			[PluginName](
				const UE::GameFeatures::FResult& Result)
			{
				if (Result.HasError())
				{
					const FString Error = Result.GetError();
					UE_LOG(LogGameFeaturesToolset, Error,
						TEXT("Activate GFP '%s' failed: %s"),
						*PluginName,
						*Error);
				}
			}));

	return true;
}

bool UGameFeaturesToolset::RequestDeactivateGameFeature(
	const FString& PluginName)
{
	using namespace UE::GameFeaturesToolset::Private;
	UGameFeaturesSubsystem* Subsystem = nullptr;
	FString PluginURL = ResolvePluginURLOrRaise(PluginName, Subsystem);
	if (PluginURL.IsEmpty())
	{
		return false;
	}
	check(Subsystem);

	Subsystem->DeactivateGameFeaturePlugin(
		PluginURL,
		FGameFeaturePluginDeactivateComplete::
		CreateLambda(
			[PluginName](
				const UE::GameFeatures::FResult& Result)
			{
				if (Result.HasError())
				{
					const FString Error = Result.GetError();
					UE_LOG(LogGameFeaturesToolset, Error,
						TEXT("Deactivate GFP '%s' failed: %s"),
						*PluginName,
						*Error);
				}
			}));

	return true;
}
