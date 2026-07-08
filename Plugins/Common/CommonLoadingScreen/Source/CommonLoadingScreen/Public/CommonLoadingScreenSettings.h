// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine/DeveloperSettingsBackedByCVars.h"
#include "UObject/SoftObjectPath.h"

#include "CommonLoadingScreenSettings.generated.h"

class UObject;

/**
 * Settings for a loading screen system.
 */
UCLASS(config=Game, defaultconfig, meta=(DisplayName="Common Loading Screen"))
class UCommonLoadingScreenSettings : public UDeveloperSettingsBackedByCVars
{
	GENERATED_BODY()

public:
	UCommonLoadingScreenSettings();

public:
	// The widget to load for the loading screen.
	UPROPERTY(config, EditAnywhere, Category=Display, meta=(MetaClass="/Script/UMG.UserWidget"))
	FSoftClassPath LoadingScreenWidget;

	// The z-order of the loading screen widget in the viewport stack
	UPROPERTY(config, EditAnywhere, Category=Display)
	int32 LoadingScreenZOrder = 10000;

	// How long to hold the loading screen up after other loading finishes (in seconds) to
	// try to give texture streaming a chance to avoid blurriness
	//
	// Note: This is not normally applied in the editor for iteration time, but can be 
	// enabled via HoldLoadingScreenAdditionalSecsEvenInEditor
 	UPROPERTY(config, EditAnywhere, Category=Configuration, meta=(ForceUnits=s, ConsoleVariable="CommonLoadingScreen.HoldLoadingScreenAdditionalSecs"))
	float HoldLoadingScreenAdditionalSecs = 2.0f;

	// The interval in seconds beyond which the loading screen is considered permanently hung (if non-zero).
 	UPROPERTY(config, EditAnywhere, Category=Configuration, meta=(ForceUnits=s))
	float LoadingScreenHeartbeatHangDuration = 0.0f;

	// The interval in seconds between each log of what is keeping a loading screen up (if non-zero).
 	UPROPERTY(config, EditAnywhere, Category=Configuration, meta=(ForceUnits=s))
	float LogLoadingScreenHeartbeatInterval = 5.0f;

	// When true, the reason the loading screen is shown or hidden will be printed to the log every frame.
	UPROPERTY(Transient, EditAnywhere, Category=Debugging, meta=(ConsoleVariable="CommonLoadingScreen.LogLoadingScreenReasonEveryFrame"))
	bool LogLoadingScreenReasonEveryFrame = 0;

	// Force the loading screen to be displayed (useful for debugging)
	UPROPERTY(Transient, EditAnywhere, Category=Debugging, meta=(ConsoleVariable="CommonLoadingScreen.AlwaysShow"))
	bool ForceLoadingScreenVisible = false;

	// Should we apply the additional HoldLoadingScreenAdditionalSecs delay even in the editor
	// (useful when iterating on loading screens)
	UPROPERTY(Transient, EditAnywhere, Category=Debugging)
	bool HoldLoadingScreenAdditionalSecsEvenInEditor = false;

	// Should we apply the additional HoldLoadingScreenAdditionalSecs delay even in the editor
	// (useful when iterating on loading screens)
	UPROPERTY(config, EditAnywhere, Category=Configuration)
	bool ForceTickLoadingScreenEvenInEditor = true;

	// 是否启用单调递增（进度条绝不回退）
	UPROPERTY(config, EditAnywhere, Category=ProgressBar)
	bool bMonotonicIncrease = true;

	// 进度条过度时间
	UPROPERTY(config, EditAnywhere, Category=ProgressBar)
	float TimerInterval = 0.1f;

	// 最小可见进度（防止长时间卡 0%）
	UPROPERTY(config, EditAnywhere, Category=ProgressBar, meta=(ClampMin="0.0", ClampMax="1.0"))
	float MinVisiblePercent = 0.02f;

	// 插值速度（越大越快接近目标）
	UPROPERTY(config, EditAnywhere, Category=ProgressBar)
	float InterpSpeed = 0.5f;

	// 没有可靠包加载百分比时，启用忙碌式视觉进度
	UPROPERTY(config, EditAnywhere, Category=ProgressBar)
	bool bUseIndeterminateProgress = true;

	// 忙碌式视觉进度的起始比例
	UPROPERTY(config, EditAnywhere, Category=ProgressBar, meta=(ClampMin="0.0", ClampMax="1.0", EditCondition="bUseIndeterminateProgress"))
	float IndeterminateProgressStartPercent = 0.08f;

	// 忙碌式视觉进度最多推进到这个比例，剩余进度留给加载完成段
	UPROPERTY(config, EditAnywhere, Category=ProgressBar, meta=(ClampMin="0.0", ClampMax="1.0", EditCondition="bUseIndeterminateProgress"))
	float IndeterminateProgressTargetPercent = 0.90f;

	// 忙碌式视觉进度接近目标比例所需的参考时长
	UPROPERTY(config, EditAnywhere, Category=ProgressBar, meta=(ClampMin="0.1", ForceUnits=s, EditCondition="bUseIndeterminateProgress"))
	float IndeterminateProgressSecondsToTarget = 4.0f;

	// 加载结束后推进到 100% 的插值速度
	UPROPERTY(config, EditAnywhere, Category=ProgressBar)
	float CompletionInterpSpeed = 8.0f;

	// 达到完成阈值后额外保留多久，避免同步加载结束后进度条直接消失
	UPROPERTY(config, EditAnywhere, Category=ProgressBar, meta=(ClampMin="0.0", ForceUnits=s))
	float CompletionHoldSeconds = 0.35f;

	// 判断进度条已经可视为完成的阈值
	UPROPERTY(config, EditAnywhere, Category=ProgressBar, meta=(ClampMin="0.0", ClampMax="1.0"))
	float CompletionVisibleThreshold = 0.99f;

	// 兼容旧配置：逻辑阶段只用于诊断，不再直接作为可视进度
	UPROPERTY(config, EditAnywhere, Category=ProgressBar)
	float StageWeight = 1.f;

	// 大于 0 时允许使用可靠的关卡包进度
	UPROPERTY(config, EditAnywhere, Category=ProgressBar)
	float LevelPackageWeight = 0.f;
};
