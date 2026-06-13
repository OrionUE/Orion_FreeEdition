// Copyright (c) Ideality Century, Inc. All Rights Reserved.
// Author: LiuZe

#pragma once

#include "GameplayTagContainer.h"
#include "GameplayVerbMessage.generated.h"

/**
 * FGameplayVerbMessage
 * 
 * Represents a generic message of the form Instigator Verb Target (in Context, with Magnitude)
 * 游戏消息传递结构体
 */
USTRUCT(BlueprintType)
struct GAMEPLAYMESSAGERUNTIME_API FGameplayVerbMessage
{
	GENERATED_BODY()

public:
	// 动词，通过游戏标签来标记信息
	UPROPERTY(BlueprintReadWrite, Category=Gameplay)
	FGameplayTag Verb;

	// 发起者，发送消息的对象
	UPROPERTY(BlueprintReadWrite, Category=Gameplay)
	TObjectPtr<UObject> Instigator = nullptr;

	// 目标对象
	UPROPERTY(BlueprintReadWrite, Category=Gameplay)
	TObjectPtr<UObject> Target = nullptr;

	// 发起者标签容器，可以传递多个标签
	UPROPERTY(BlueprintReadWrite, Category=Gameplay)
	FGameplayTagContainer InstigatorTags;

	// 目标对象标签容器
	UPROPERTY(BlueprintReadWrite, Category=Gameplay)
	FGameplayTagContainer TargetTags;

	// 环境标签，对消息进行上下文的表述
	UPROPERTY(BlueprintReadWrite, Category=Gameplay)
	FGameplayTagContainer ContextTags;

	// 量级数据
	UPROPERTY(BlueprintReadWrite, Category=Gameplay)
	double Magnitude = 1.0;

	/**
	 * Returns a debug string representation of this message
	 * 返回此消息的调试字符串表达式
	 */
	FString ToString() const;
};
