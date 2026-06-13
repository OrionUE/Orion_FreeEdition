/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Engine/DataAsset.h"
#include "CorePawnData.generated.h"

class UCoreAbilityTagRelationshipMapping;
class UCoreAbilitySet;
class UInputSystemConfig;

/**
 * UCorePawnData
 * 
 * 用于定义Pawn属性数据的不可变资产
 */
UCLASS(Const, Meta=(ShortTooltip="Data asset used to define a Pawn."))
class GAMECORE_API UCorePawnData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UCorePawnData();

public:
	// Pawn类的实例化（使用Pawn或Character）
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Data|Pawn")
	TSubclassOf<APawn> PawnClass;
	
	// 赋予Pawn的能力集
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Data|Abilities")
	TArray<TObjectPtr<UCoreAbilitySet>> AbilitySets;

	// Pawn行为与能力标签Tag的映射
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Data|Abilities")
	TObjectPtr<UCoreAbilityTagRelationshipMapping> TagRelationshipMapping;

	// Input configuration used by player controlled pawns to create input mappings and bind input actions.
	// 输入配置：对Pawn创建控制输入和操作绑定的配置
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Data|Input")
	TObjectPtr<UInputSystemConfig> InputConfig;
};
