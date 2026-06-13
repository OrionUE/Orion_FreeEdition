/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CommonLocalPlayer.h"

#include "CoreLocalPlayer.generated.h"

/**
 * UCoreLocalPlayer
 *
 * 游戏LocalPlayer核心基类
 *
 * @note
 * 需要在DefaultEngine.ini添加此类的名称和路径
 * [/Script/Engine.Engine]
 * LocalPlayerClassName=/Script/ModuleName.LocalPlayerClassName
 */
UCLASS()
class GAMECORE_API UCoreLocalPlayer : public UCommonLocalPlayer
{
	GENERATED_BODY()

public:
	UCoreLocalPlayer();
};
