/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameSettingValueDiscrete.h"

#include "GameSettingValueDiscrete_Display.generated.h"

UCLASS()
class UGameSettingValueDiscrete_Display : public UGameSettingValueDiscrete
{
	GENERATED_BODY()
	
public:
	UGameSettingValueDiscrete_Display();

	virtual void BeginDestroy() override;

	/** UGameSettingValue */
	virtual void StoreInitial() override;
	virtual void ResetToDefault() override;
	virtual void RestoreToInitial() override;

	/** UGameSettingValueDiscrete */
	virtual void SetDiscreteOptionByIndex(int32 Index) override;
	virtual int32 GetDiscreteOptionIndex() const override;
	virtual int32 GetDiscreteOptionDefaultIndex() const override;
	virtual TArray<FText> GetDiscreteOptions() const override;

protected:
	/** UGameSettingValue */
	virtual void OnInitialized() override;
	virtual void OnDependencyChanged() override;

	void OnDisplayMetricsChanged(const FDisplayMetrics& NewDisplayMetrics);

	FString InitialMonitorID;
	int32 InitialMonitorIndex = -1;

	FDisplayMetrics CurrentDisplayMetrics;
	FDelegateHandle DisplayMetricsChangedHandle;
};
