/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionAimSensitivityData.h"

#include "Settings/User/OrionSettingsShared.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionAimSensitivityData)

UOrionAimSensitivityData::UOrionAimSensitivityData(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SensitivityMap =
	{
		{ EOrionGamepadSensitivity::Slow,			0.5f },
		{ EOrionGamepadSensitivity::SlowPlus,		0.75f },
		{ EOrionGamepadSensitivity::SlowPlusPlus,	0.9f },
		{ EOrionGamepadSensitivity::Normal,			1.0f },
		{ EOrionGamepadSensitivity::NormalPlus,		1.1f },
		{ EOrionGamepadSensitivity::NormalPlusPlus,	1.25f },
		{ EOrionGamepadSensitivity::Fast,			1.5f },
		{ EOrionGamepadSensitivity::FastPlus,		1.75f },
		{ EOrionGamepadSensitivity::FastPlusPlus,	2.0f },
		{ EOrionGamepadSensitivity::Insane,			2.5f },
	};
}

float UOrionAimSensitivityData::SensitivityEnumToFloat(const EOrionGamepadSensitivity InSensitivity) const
{
	if (const float* Sens = SensitivityMap.Find(InSensitivity))
	{
		return *Sens;
	}

	return 1.0f;
}
