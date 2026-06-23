/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "InputSystemPlayerMappableKeyProfile.h"

#include "CommonInputBaseTypes.h"

void UInputSystemPlayerMappableKeyProfile::EquipProfile()
{
	Super::EquipProfile();

	// When a new key profile is equipped
}

void UInputSystemPlayerMappableKeyProfile::UnEquipProfile()
{
	Super::UnEquipProfile();

	// When a new key profile is unequipped
}

void UInputSystemPlayerMappableKeyProfile::InitializeControllerData() const
{
	if (KeySettingControllerData.Num() != KeySettingControllerDataClasses.Num())
	{
		for (TSoftClassPtr<UCommonInputBaseControllerData> KeySettingControllerDataPtr : KeySettingControllerData)
		{
			if (TSubclassOf<UCommonInputBaseControllerData> KeySettingControllerDataClass = KeySettingControllerDataPtr.LoadSynchronous())
			{
				KeySettingControllerDataClasses.Add(KeySettingControllerDataClass);
			}
		}
	}
}

bool UInputSystemPlayerMappableKeyProfile::TryGetInputBrush(FSlateBrush& OutBrush, FKey Key, ECommonInputType InputType, const FName GamepadName) const
{
	InitializeControllerData();

	for (const TSubclassOf<UCommonInputBaseControllerData>& KeySettingControllerDataPtr : KeySettingControllerDataClasses)
	{
		const UCommonInputBaseControllerData* DefaultKeySettingControllerData = KeySettingControllerDataPtr.GetDefaultObject();
		if (DefaultKeySettingControllerData && DefaultKeySettingControllerData->InputType == InputType)
		{
			if (DefaultKeySettingControllerData->InputType != ECommonInputType::Gamepad || DefaultKeySettingControllerData->GamepadName == GamepadName)
			{
				return DefaultKeySettingControllerData->TryGetInputBrush(OutBrush, Key);
			}
		}
	}

	return false;
}
