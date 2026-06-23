/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameSettingAction.h"
#include "GameSettingValueScalarDynamic.h"

#include "GameSettingAction_HDRCalibrationEditor.generated.h"

class UGameSetting;

UCLASS()
class UGameSettingAction_HDRCalibrationEditor : public UGameSettingAction
{
	GENERATED_BODY()

public:
	UGameSettingAction_HDRCalibrationEditor();
	virtual TArray<UGameSetting*> GetChildSettings() override;

private:
	UPROPERTY()
	TObjectPtr<UGameSettingValueScalarDynamic> HDRCalibrationValueSetting;
};
