/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "LoadingProcessInterface.h"
#include "Components/GameFrameworkInitStateInterface.h"
#include "Components/GameStateComponent.h"

#include "CoreExperienceManagerComponent.generated.h"

namespace UE::GameFeatures
{
	struct FResult;
}

class UCoreExperienceDefinition;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnCoreExperienceLoaded, const UCoreExperienceDefinition* /*Experience*/);

enum class ECoreExperienceLoadState
{
	Unloaded,
	Loading,
	LoadingGameFeatures,
	LoadingChaosTestingDelay,
	ExecutingActions,
	Loaded,
	Deactivating
};

/**
 * UCoreExperienceManagerComponent
 *
 * Experience管理组件
 *
 * @note 需在GameState中创建并初始化该组件
 */
UCLASS()
class GAMECORE_API UCoreExperienceManagerComponent : public UGameStateComponent, public ILoadingProcessInterface, public IGameFrameworkInitStateInterface 
{
	GENERATED_BODY()

public:
	UCoreExperienceManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	//~ Begin IGameFrameworkInitStateInterface interface
	virtual FName GetFeatureName() const override { return NAME_ActorFeatureName; }
	virtual bool CanChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) const override;
	virtual void HandleChangeInitState(UGameFrameworkComponentManager* Manager, FGameplayTag CurrentState, FGameplayTag DesiredState) override;
	virtual void OnActorInitStateChanged(const FActorInitStateChangedParams& Params) override;
	virtual void CheckDefaultInitialization() override;
	//~ End IGameFrameworkInitStateInterface interface

	//~UActorComponent interface
	virtual void OnRegister() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	//~End of UActorComponent interface

	//~ILoadingProcessInterface interface
	virtual bool ShouldShowLoadingScreen(FString& OutReason) const override;
	//~End of ILoadingProcessInterface

public:
	/** Tries to set the current experience, either a UI or gameplay one */
	void SetCurrentExperience(const FPrimaryAssetId& ExperienceId);

	/**
	 * Ensures the delegate is called once the experience has been loaded, before others are called.
	 * However, if the experience has already loaded, calls the delegate immediately.
	 */
	void CallOrRegister_OnExperienceLoaded_HighPriority(FOnCoreExperienceLoaded::FDelegate&& Delegate);

	/**
	 * Ensures the delegate is called once the experience has been loaded
	 * If the experience has already loaded, calls the delegate immediately
	 */
	void CallOrRegister_OnExperienceLoaded(FOnCoreExperienceLoaded::FDelegate&& Delegate);

	/**
	 * Ensures the delegate is called once the experience has been loaded
	 * If the experience has already loaded, calls the delegate immediately
	 */
	void CallOrRegister_OnExperienceLoaded_LowPriority(FOnCoreExperienceLoaded::FDelegate&& Delegate);

	DECLARE_MULTICAST_DELEGATE(FOnPlayerInitialized);
	void CallOrRegister_OnPlayerInitialized(FOnPlayerInitialized::FDelegate&& Delegate);

	/** This returns the current experience if it is fully loaded, asserting otherwise */
	const UCoreExperienceDefinition* GetCurrentExperienceChecked() const;

	template<typename T>
	const T* GetCurrentExperienceChecked() const
	{
		return Cast<T>(GetCurrentExperienceChecked());
	}

	/** Returns true if the experience is fully loaded */
	bool IsExperienceLoaded() const;

protected:
	virtual void StartExperienceLoad();
	virtual void OnExperienceLoadComplete();
	virtual void OnGameFeaturePluginLoadComplete(const UE::GameFeatures::FResult& Result);
	virtual void OnExperienceFullLoadCompleted();

	FORCEINLINE bool IsPlayerInitialized() const { return bPlayerInitialized; };

private:
	void OnActionDeactivationCompleted();
	void OnAllActionsDeactivated();

public:
	static const FName NAME_ActorFeatureName;

private:
	UPROPERTY(ReplicatedUsing=OnRep_CurrentExperience)
	TObjectPtr<const UCoreExperienceDefinition> CurrentExperience;

	UFUNCTION()
	void OnRep_CurrentExperience();

	ECoreExperienceLoadState LoadState = ECoreExperienceLoadState::Unloaded;

	// TODO: 使用队列代替
	TArray<FString> GameFeaturePluginURLs;

	int32 NumGameFeaturePluginsLoading = 0;
	int32 NumObservedPause = 0;
	int32 NumExpectedPause = 0;

	// Delegate called when the experience has finished loading just before others
	FOnCoreExperienceLoaded OnExperienceLoaded_HighPriority;

	// Delegate called when the experience has finished loading
	FOnCoreExperienceLoaded OnExperienceLoaded;

	// Delegate called when the experience has finished loading
	FOnCoreExperienceLoaded OnExperienceLoaded_LowPriority;

	FOnPlayerInitialized OnPlayerInitializedEvent;

	bool bPlayerInitialized = false;
};
