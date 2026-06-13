/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Input/OrionAimSensitivityData.h"
#include "Input/OrionInputModifiers.h"

#include "BBL_Input.generated.h"

UCLASS(MinimalAPI, BlueprintType, meta=(DisplayName="Aim Sensitivity Data", ShortTooltip="Data asset used to define a map of Gamepad Sensitivty to a float value."))
class UBBL_AimSensitivityData : public UOrionAimSensitivityData
{
	GENERATED_BODY()
};

UCLASS(MinimalAPI, meta=(DisplayName="Setting Based Scalar"))
class UBBL_SettingBasedScalar : public UOrionSettingBasedScalar
{
	GENERATED_BODY()
};

UCLASS(MinimalAPI, meta=(DisplayName="Setting Driven Dead Zone"))
class UBBL_InputModifierDeadZone : public UOrionInputModifierDeadZone
{
	GENERATED_BODY()
};

UCLASS(MinimalAPI, meta=(DisplayName="Setting Gamepad Sensitivity"))
class UBBL_InputModifierGamepadSensitivity : public UOrionInputModifierGamepadSensitivity
{
	GENERATED_BODY()
};

UCLASS(MinimalAPI, meta=(DisplayName="Setting Aim Inversion"))
class UBBL_InputModifierAimInversion : public UOrionInputModifierAimInversion
{
	GENERATED_BODY()
};
