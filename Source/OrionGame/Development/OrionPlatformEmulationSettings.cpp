/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionPlatformEmulationSettings.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionPlatformEmulationSettings)

UOrionPlatformEmulationSettings::UOrionPlatformEmulationSettings()
{
}

FName UOrionPlatformEmulationSettings::GetCategoryName() const
{
	return FApp::GetProjectName();
}

FName UOrionPlatformEmulationSettings::GetPretendBaseDeviceProfile() const
{
	return PretendBaseDeviceProfile;
}

FName UOrionPlatformEmulationSettings::GetPretendPlatformName() const
{
	return PretendPlatform;
}
