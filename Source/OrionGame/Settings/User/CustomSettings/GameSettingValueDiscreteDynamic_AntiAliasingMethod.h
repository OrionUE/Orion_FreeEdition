/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameSettingValueDiscreteDynamic.h"

#include "GameSettingValueDiscreteDynamic_AntiAliasingMethod.generated.h"

UCLASS()
class UGameSettingValueDiscreteDynamic_AntiAliasingMethod : public UGameSettingValueDiscreteDynamic_Enum
{
	GENERATED_BODY()

public:
	virtual ~UGameSettingValueDiscreteDynamic_AntiAliasingMethod() = default;

	/** UGameSettingValueDiscrete */
	virtual void SetDiscreteOptionByIndex(int32 Index) override;

protected:
	virtual void OnInitialized() override;
	virtual void OnApply() override;
	virtual void OnEditConditionsChanged() override;

protected:
	void SetAntiAliasingMethodEnum();
};
