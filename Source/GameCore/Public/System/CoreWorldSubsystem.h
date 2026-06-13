/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Subsystems/WorldSubsystem.h"

#include "CoreWorldSubsystem.generated.h"

UCLASS()
class GAMECORE_API UCoreWorldSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

protected:
	// 是否创建该子系统
	bool bShouldCreate = true;

	// 是否在客户端创建该子系统
	bool bShouldCreateOnClient = true;

	// 是否在DS服务器创建该子系统
	bool bShouldCreateOnDedicatedServer = true;

	TArray<TSubclassOf<UWorldSubsystem>> PrerequisiteWorldSubsystemList;
};
