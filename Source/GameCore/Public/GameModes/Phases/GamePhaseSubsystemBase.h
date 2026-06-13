/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameplayTagContainer.h"
#include "System/CoreWorldSubsystem.h"
#include "GameplayAbilitySpecHandle.h"

#include "GamePhaseSubsystemBase.generated.h"

class UGamePhaseAbility;

DECLARE_DYNAMIC_DELEGATE_OneParam(FGamePhaseDynamicDelegate, const UGamePhaseAbility*, Phase);
DECLARE_DELEGATE_OneParam(FGamePhaseDelegate, const UGamePhaseAbility* Phase);

DECLARE_DYNAMIC_DELEGATE_OneParam(FGamePhaseTagDynamicDelegate, const FGameplayTag&, PhaseTag);
DECLARE_DELEGATE_OneParam(FGamePhaseTagDelegate, const FGameplayTag& PhaseTag);

/** Match rule for message receivers */
UENUM(BlueprintType)
enum class EPhaseTagMatchType : uint8
{
	// An exact match will only receive messages with exactly the same channel
	// (e.g., registering for "A.B" will match a broadcast of A.B but not A.B.C)
	ExactMatch,

	// A partial match will receive any messages rooted in the same channel
	// (e.g., registering for "A.B" will match a broadcast of A.B as well as A.B.C)
	PartialMatch
};

/**
 * UGamePhaseSubsystemBase
 *
 * 游戏阶段管理子系统基类
 * 用于管理一个游戏世界的游戏阶段
 * 允许子标签阶段同时运行
 */
UCLASS(Abstract)
class GAMECORE_API UGamePhaseSubsystemBase : public UCoreWorldSubsystem
{
	GENERATED_BODY()

public:
	UGamePhaseSubsystemBase();

	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

protected:
	virtual bool DoesSupportWorldType(const EWorldType::Type WorldType) const override;

public:
	virtual void StartPhase(TSubclassOf<UGamePhaseAbility> PhaseAbility, FGamePhaseDelegate PhaseEndedCallback = FGamePhaseDelegate());

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Game Phase", meta=(DisplayName="Start Phase", AutoCreateRefTerm="PhaseEnded"))
	void K2_StartPhase(TSubclassOf<UGamePhaseAbility> PhaseAbility, const FGamePhaseDynamicDelegate& PhaseEnded);

	void WhenPhaseStartsOrIsActive(FGameplayTag PhaseTag, EPhaseTagMatchType MatchType, const FGamePhaseTagDelegate& WhenPhaseActive);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Game Phase", meta=(DisplayName="When Phase Starts or Is Active", AutoCreateRefTerm="WhenPhaseActive"))
	void K2_WhenPhaseStartsOrIsActive(FGameplayTag PhaseTag, EPhaseTagMatchType MatchType, FGamePhaseTagDynamicDelegate WhenPhaseActive);

	void WhenPhaseEnds(FGameplayTag PhaseTag, EPhaseTagMatchType MatchType, const FGamePhaseTagDelegate& WhenPhaseEnd);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Game Phase", meta=(DisplayName="When Phase Ends", AutoCreateRefTerm="WhenPhaseEnd"))
	void K2_WhenPhaseEnds(FGameplayTag PhaseTag, EPhaseTagMatchType MatchType, FGamePhaseTagDynamicDelegate WhenPhaseEnd);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, BlueprintPure=false, meta=(AutoCreateRefTerm="PhaseTag"))
	bool IsPhaseActive(const FGameplayTag& PhaseTag) const;

protected:
	void OnStartPhase(const UGamePhaseAbility* PhaseAbility, const FGameplayAbilitySpecHandle PhaseAbilityHandle);
	void OnEndPhase(const UGamePhaseAbility* PhaseAbility, const FGameplayAbilitySpecHandle PhaseAbilityHandle);

private:
	struct FGamePhaseEntry
	{
	public:
		FGameplayTag PhaseTag;
		FGamePhaseDelegate PhaseEndedCallback;
	};

	TMap<FGameplayAbilitySpecHandle, FGamePhaseEntry> ActivePhaseMap;

	struct FPhaseObserver
	{
	public:
		bool IsMatch(const FGameplayTag& ComparePhaseTag) const;
	
		FGameplayTag PhaseTag;
		EPhaseTagMatchType MatchType = EPhaseTagMatchType::ExactMatch;
		FGamePhaseTagDelegate PhaseCallback;
	};
	
	TArray<FPhaseObserver> PhaseStartObservers;
	TArray<FPhaseObserver> PhaseEndObservers;

	friend class UGamePhaseAbility;
};
