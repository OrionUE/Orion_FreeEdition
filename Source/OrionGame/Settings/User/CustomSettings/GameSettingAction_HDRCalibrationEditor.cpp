/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GameSettingAction_HDRCalibrationEditor.h"

#include "DataSource/GameSettingDataSourceDynamic.h"
#include "Player/OrionLocalPlayer.h"
#include "Settings/User/OrionGameSettingRegistry.h"
#include "Settings/User/OrionSettingsLocal.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameSettingAction_HDRCalibrationEditor)

#define LOCTEXT_NAMESPACE "GameSettings"

UGameSettingAction_HDRCalibrationEditor::UGameSettingAction_HDRCalibrationEditor()
{
	HDRCalibrationValueSetting = NewObject<UGameSettingValueScalarDynamic>();
	HDRCalibrationValueSetting->SetDevName(TEXT("HDRCalibrationValue"));
	HDRCalibrationValueSetting->SetDisplayName(LOCTEXT("HDRCalibrationValue_Name", "HDR Max Luminance"));
	HDRCalibrationValueSetting->SetDescriptionRichText(LOCTEXT("HDRCalibrationValue_Description", "The maximum luminance for the HDR display."));
	HDRCalibrationValueSetting->SetDefaultValue(0.0f);
	HDRCalibrationValueSetting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetMaximumHDRDisplayNits));
	HDRCalibrationValueSetting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetMaximumHDRDisplayNits));
	HDRCalibrationValueSetting->SetDisplayFormat([](double SourceValue, double NormalizedValue){ return FText::AsNumber(SourceValue); });
	HDRCalibrationValueSetting->SetSettingParent(this);
}

TArray<UGameSetting*> UGameSettingAction_HDRCalibrationEditor::GetChildSettings()
{
	return { HDRCalibrationValueSetting };
}

#undef LOCTEXT_NAMESPACE
