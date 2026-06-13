/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameModes/CoreExperienceDefinition.h"

#include "OrionExperienceDefinition.generated.h"

class UOrionPlayerAccount;

/**
 * 游戏体验 - 数据定义
 */
UCLASS()
class ORIONGAME_API UOrionExperienceDefinition : public UCoreExperienceDefinition
{
	GENERATED_BODY()

public:
	UOrionExperienceDefinition();

#if WITH_EDITOR
	virtual EDataValidationResult IsDataValid(FDataValidationContext& Context) const override;
#endif

public:
	// 该游戏的玩家账户类
	UPROPERTY(EditDefaultsOnly, Category="Gameplay")
	TSubclassOf<UOrionPlayerAccount> PlayerAccountClass;
};
