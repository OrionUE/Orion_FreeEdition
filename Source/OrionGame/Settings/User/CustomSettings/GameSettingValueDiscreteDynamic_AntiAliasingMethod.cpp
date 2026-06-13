/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GameSettingValueDiscreteDynamic_AntiAliasingMethod.h"

#include "Settings/User/OrionSettingsLocal.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameSettingValueDiscreteDynamic_AntiAliasingMethod)

#define LOCTEXT_NAMESPACE "GameSettings"

void UGameSettingValueDiscreteDynamic_AntiAliasingMethod::SetDiscreteOptionByIndex(int32 Index)
{
	Super::SetDiscreteOptionByIndex(Index);
}

void UGameSettingValueDiscreteDynamic_AntiAliasingMethod::OnInitialized()
{
	SetAntiAliasingMethodEnum();

	Super::OnInitialized();
}

void UGameSettingValueDiscreteDynamic_AntiAliasingMethod::OnApply()
{
	Super::OnApply();
}

void UGameSettingValueDiscreteDynamic_AntiAliasingMethod::OnEditConditionsChanged()
{
	Super::OnEditConditionsChanged();

	if (UOrionSettingsLocal::Get()->GetDLSSUpscaleEnabled())
	{
		// 如果DLSSUpscale启动，抗锯齿为TSR
		SetValue(AAM_TSR);
	}
	else
	{
		SetValue(UOrionSettingsLocal::Get()->GetDesiredAntiAliasingMethod());
	}
}

void UGameSettingValueDiscreteDynamic_AntiAliasingMethod::SetAntiAliasingMethodEnum()
{
	AddEnumOption(AAM_None, LOCTEXT("AntiAliasingMethod_None", "None"));
	AddEnumOption(AAM_FXAA, LOCTEXT("AntiAliasingMethod_FXAA", "FXAA"));
	AddEnumOption(AAM_TemporalAA, LOCTEXT("AntiAliasingMethod_TAA", "TAA"));
	AddEnumOption(AAM_MSAA, LOCTEXT("AntiAliasingMethod_MASS", "MASS"));
	AddEnumOption(AAM_TSR, LOCTEXT("AntiAliasingMethod_TSR", "TSR"));

	RefreshEditableState();
}

#undef LOCTEXT_NAMESPACE
