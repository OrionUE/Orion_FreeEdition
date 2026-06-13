/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "ToolsetRegistry/ToolsetDefinition.h"
#include "Logging/LogCategory.h"

#include "GameFeaturesToolset.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogGameFeaturesToolset, Log, All);

/// Simplified Game Feature Plugin state for AI tools.
/// Maps the engine's ~34 internal states to user-facing
/// states that an LLM would act on.
UENUM(BlueprintType)
enum class EPluginToolsetGFPState : uint8
{
	Uninitialized,
	Installed,
	Registered,
	Loaded,
	Active,
	Unknown
};

/// Provides tools for listing, activating, and deactivating Game Feature Plugins.
UCLASS(BlueprintType, Hidden)
class UGameFeaturesToolset : public UToolsetDefinition
{
	GENERATED_BODY()

public:

	/**
	 * Lists all enabled Game Feature Plugins  sorted by name. Enabled plugins are the only plugins
	 * known by the Game Features system beyond identifying if a plugin is a Game Feature Plugin.
	 * Use the Plugins toolset to do general plugin enable/disable tasks.
	 * @return Sorted names of all enabled Game Feature Plugins.
	 */
	UFUNCTION(meta = (AICallable), Category = "GameFeatures")
	static TArray<FString> ListEnabledGameFeaturePlugins();

	/**
	 * Lists all discovered Game Feature Plugins sorted by name. This includes enabled and disabled 
	 * plugins. Only enabled plugins are known by the Game Features system beyond identifying if a
	 * plugin is a Game Feature Plugin.
	 * Use the Plugins toolset to do general plugin enable/disable tasks.
	 * @return Sorted names of all discovered Game Feature Plugins.
	 */
	UFUNCTION(meta = (AICallable), Category = "GameFeatures")
	static TArray<FString> ListDiscoveredGameFeaturePlugins();

	/**
	 * Return whether or not a plugin is a Game Feature Plugin. Will error if no plugin of this
	 * name can be found by the Plugin Manager.
	 * @param PluginName Name of the plugin
	 * @return True if the plugin is a Game Feature Plugin
	 */
	UFUNCTION(meta = (AICallable), Category = "GameFeatures")
	static bool IsGameFeaturePlugin(const FString& PluginName);

	/**
	 * Creates or returns the root GameFeatureData asset for a GameFeature plugin.
	 * The default asset path is /PluginName/PluginName.
	 * @param PluginName Name of the GameFeature plugin.
	 * @param bSave Whether to save the created asset immediately.
	 * @return Object path of the root GameFeatureData asset.
	 */
	UFUNCTION(meta = (AICallable), Category = "GameFeatures")
	static FString CreateGameFeatureDataAsset(const FString& PluginName, bool bSave = false);

	/**
	 * Adds or replaces one PrimaryAssetTypesToScan entry on a root GameFeatureData asset.
	 * Directories under the same plugin mount are saved as plugin-relative paths.
	 * @param GameFeatureDataPath Root GameFeatureData object or package path.
	 * @param PrimaryAssetType Primary asset type name, e.g. BBL_ExperienceDefinition.
	 * @param AssetBaseClassPath Native class path for the primary asset base class.
	 * @param bHasBlueprintClasses True when assets are Blueprint classes.
	 * @param Directories Directories to scan. Plugin-root paths are converted to plugin-relative paths.
	 * @param SpecificAssets Optional specific object paths to scan.
	 * @param bIsEditorOnly Whether this primary asset type is editor only.
	 * @param CookRule Cook rule name: Unknown, NeverCook, DevelopmentCook, DevelopmentAlwaysCook, AlwaysCook.
	 * @param bSave Whether to save the GameFeatureData asset immediately.
	 * @return Object path of the updated GameFeatureData asset.
	 */
	UFUNCTION(meta = (AICallable), Category = "GameFeatures")
	static FString AddPrimaryAssetTypeToGameFeatureDataAsset(
		const FString& GameFeatureDataPath,
		const FString& PrimaryAssetType,
		const FString& AssetBaseClassPath,
		bool bHasBlueprintClasses,
		const TArray<FString>& Directories,
		const TArray<FString>& SpecificAssets,
		bool bIsEditorOnly = false,
		const FString& CookRule = TEXT("AlwaysCook"),
		bool bSave = false);

	/**
	 * Checks whether a Game Feature Plugin is active. Raises an error if the subsystem is unavailable
	 * or the plugin is not found.
	 * Use GetGameFeatureState if you need the current state when the plugin is not active.
	 * @param PluginName Name of the Game Feature Plugin.
	 * @return True if the Game Feature Plugin is active.
	 */
	UFUNCTION(meta = (AICallable), Category = "GameFeatures")
	static bool IsGameFeatureActive(const FString& PluginName);

	/**
	 * Gets the current state of a Game Feature Plugin.
	 * @param PluginName Name of the Game Feature Plugin.
	 * @return Simplified state enum. Raises an error if the subsystem is unavailable or the
	 *         plugin is not found.
	 */
	UFUNCTION(meta = (AICallable), Category = "GameFeatures")
	static EPluginToolsetGFPState GetGameFeatureState(const FString& PluginName);

	/**
	 * Requests activation of a Game Feature Plugin.
	 * Returns true if the activation request was submitted successfully. The actual activation
	 * happens asynchronously -- poll GetGameFeatureState() or IsGameFeatureActive()
	 * to confirm completion. Raises an error if the subsystem is unavailable
	 * or the plugin is not found.
	 * @param PluginName Name of the GFP.
	 * @return True if the request was submitted.
	 */
	UFUNCTION(meta = (AICallable), Category = "GameFeatures")
	static bool RequestActivateGameFeature(const FString& PluginName);

	/**
	 * Requests deactivation of a Game Feature Plugin.
	 * Returns true if the deactivation request was submitted successfully. The actual deactivation
	 * happens asynchronously -- poll GetGameFeatureState() to confirm completion.
	 * Raises an error if the subsystem is unavailable or the plugin is not found.
	 * @param PluginName Name of the GFP.
	 * @return True if the request was submitted.
	 */
	UFUNCTION(meta = (AICallable), Category = "GameFeatures")
	static bool RequestDeactivateGameFeature(const FString& PluginName);

};
