/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameSettingValueDiscrete.h"

#include "GameSettingValueDiscrete_Resolution.generated.h"

/**
 * 分辨率设置
 */
UCLASS()
class UGameSettingValueDiscrete_Resolution : public UGameSettingValueDiscrete
{
	GENERATED_BODY()

public:
	UGameSettingValueDiscrete_Resolution();

protected:
	virtual void OnInitialized() override;
	virtual void OnDependencyChanged() override;

public:
	/** UGameSettingValue */
	virtual void StoreInitial() override;
	virtual void ResetToDefault() override;
	virtual void RestoreToInitial() override;
	
	/** UGameSettingValueDiscrete */
	virtual void SetDiscreteOptionByIndex(int32 Index) override;
	virtual int32 GetDiscreteOptionIndex() const override;
	virtual TArray<FText> GetDiscreteOptions() const override;

protected:
	void InitializeResolutions();
	bool ShouldAllowFullScreenResolution(const FScreenResolutionRHI& SrcScreenRes, int32 FilterThreshold) const;
	static void GetStandardWindowResolutions(const FIntPoint& MinResolution, const FIntPoint& MaxResolution, float MinAspectRatio, TArray<FIntPoint>& OutResolutions);
	void SelectAppropriateResolutions();
	int32 FindIndexOfDisplayResolution(const FIntPoint& InPoint) const;
	int32 FindIndexOfDisplayResolutionForceValid(const FIntPoint& InPoint) const;
	int32 FindClosestResolutionIndex(const FIntPoint& Resolution) const;

protected:
	struct FScreenResolutionEntry
	{
		uint32	Width = 0;
		uint32	Height = 0;
		uint32	RefreshRate = 0;
		FText   OverrideText;

		FIntPoint GetResolution() const { return FIntPoint(Width, Height); }
		FText GetDisplayText() const;
	};

	TOptional<EWindowMode::Type> LastWindowMode;
	
	/** An array of strings the map to resolutions, populated based on the window mode */
	TArray<TSharedPtr<FScreenResolutionEntry>> Resolutions;

	/** An array of strings the map to fullscreen resolutions */
	TArray<TSharedPtr<FScreenResolutionEntry>> ResolutionsFullscreen;

	/** An array of strings the map to windowed fullscreen resolutions */
	TArray<TSharedPtr<FScreenResolutionEntry>> ResolutionsWindowedFullscreen;

	/** An array of strings the map to windowed resolutions */
	TArray<TSharedPtr<FScreenResolutionEntry>> ResolutionsWindowed;

	FIntPoint InitialResolution;
};
