/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"

#include "InputSystemConfig.generated.h"

class UInputAction;

/**
 * 配置Input Action和Tag的结构体
 */
USTRUCT(BlueprintType)
struct FInputSystemAction
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<const UInputAction> InputAction = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Meta = (Categories = "InputTag"))
	FGameplayTag InputTag;
};

/**
 * 输入系统配置类
 * 不可变的输入配置数据资产，如需单独配置在角色输入配置中绑定
 */
UCLASS(Blueprintable, BlueprintType, Const)
class COMMONINPUTSYSTEM_API UInputSystemConfig : public UDataAsset
{
	GENERATED_BODY()

public:
	UInputSystemConfig(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Input|Pawn")
	const UInputAction* FindNativeInputActionForTag(const FGameplayTag& InputTag, bool bLogNotFound = true) const;

	UFUNCTION(BlueprintCallable, Category = "Input|Pawn")
	const UInputAction* FindAbilityInputActionForTag(const FGameplayTag& InputTag, bool bLogNotFound = true) const;

public:
	// 输入操作列表。这些输入动作映射到游戏玩法标签，必须手动绑定
	// 硬编码在项目中的输入，为该项目不变的基本输入
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Meta = (TitleProperty = "InputAction"))
	TArray<FInputSystemAction> NativeInputActions;

	// 输入操作列表。这些输入动作被映射到游戏玩法标签，并自动绑定到具有匹配输入标签的能力
	// 转交给相应的GameplayAbility的输入
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Meta = (TitleProperty = "InputAction"))
	TArray<FInputSystemAction> AbilityInputActions;
};
