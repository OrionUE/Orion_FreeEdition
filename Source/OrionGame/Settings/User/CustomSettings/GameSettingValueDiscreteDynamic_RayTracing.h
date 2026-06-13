/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameSettingValueDiscreteDynamic.h"

#include "GameSettingValueDiscreteDynamic_RayTracing.generated.h"

class UGameDLSSSubsystem;

UCLASS()
class UGameSettingValueDiscreteDynamic_RayTracing : public UGameSettingValueDiscreteDynamic_Bool
{
	GENERATED_BODY()

public:
	virtual ~UGameSettingValueDiscreteDynamic_RayTracing() = default;

	virtual void SetDiscreteOptionByIndex(int32 Index) override;
};
