/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameFeaturesProjectPolicies.h"
#include "GameFeatureStateChangeObserver.h"

#include "CoreGameFeaturesPolicy.generated.h"

/**
 * Manager to keep track of the state machines that bring a game feature plugin into memory and active
 *
 * @note
 * 需要在DefaultGame.ini中，将GameFeaturesManagerClass指定为此类
 * [/Script/GameFeatures.GameFeaturesSubsystemSettings]
 * GameFeaturesManagerClassName=/Script/GameCore.CoreGameFeaturesPolicy
 */
UCLASS(MinimalAPI, Config=Game)
class UCoreGameFeaturesPolicy : public UDefaultGameFeaturesProjectPolicies
{
	GENERATED_BODY()

public:
	UCoreGameFeaturesPolicy(const FObjectInitializer& ObjectInitializer);
	
	GAMECORE_API static UCoreGameFeaturesPolicy& Get();

	//~UGameFeaturesProjectPolicies interface
	virtual void InitGameFeatureManager() override;
	virtual void ShutdownGameFeatureManager() override;
	virtual TArray<FPrimaryAssetId> GetPreloadAssetListForGameFeature(const UGameFeatureData* GameFeatureToLoad, bool bIncludeLoadedAssets = false) const override;
	virtual bool IsPluginAllowed(const FString& PluginURL, FString* OutReason) const override;
	virtual const TArray<FName> GetPreloadBundleStateForGameFeature() const override;
	virtual void GetGameFeatureLoadingMode(bool& bLoadClientData, bool& bLoadServerData) const override;
	//~End of UGameFeaturesProjectPolicies interface

private:
	UPROPERTY(Transient)
	TArray<TObjectPtr<UObject>> Observers;
};

UCLASS()
class UCoreGameFeature_HotfixManager : public UObject, public IGameFeatureStateChangeObserver
{
	GENERATED_BODY()

public:
	virtual void OnGameFeatureLoading(const UGameFeatureData* GameFeatureData, const FString& PluginURL) override;
};

UCLASS()
class UCoreGameFeature_AddGameplayCuePaths : public UObject, public IGameFeatureStateChangeObserver
{
	GENERATED_BODY()

public:
	virtual void OnGameFeatureRegistering(const UGameFeatureData* GameFeatureData, const FString& PluginName, const FString& PluginURL) override;
	virtual void OnGameFeatureUnregistering(const UGameFeatureData* GameFeatureData, const FString& PluginName, const FString& PluginURL) override;
};
