/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"

#include "CoreAbilitySet.generated.h"

struct FActiveGameplayEffectHandle;
struct FGameplayAbilitySpecHandle;
class UCoreAbilitySystemComponent;
class UAttributeSet;
class UGameplayEffect;
class UCoreGameplayAbility;

/**
 *	用于授予能力GA的数据集
 */
USTRUCT(BlueprintType)
struct FCoreAbilitySet_GameplayAbility
{
	GENERATED_BODY()

public:
	// 授予的GA
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UCoreGameplayAbility> Ability;

	// 能力等级
	UPROPERTY(EditDefaultsOnly)
	int32 AbilityLevel = 1;

	// 处理输入能力的Tag
	UPROPERTY(EditDefaultsOnly, Meta = (Categories = "InputTag"))
	FGameplayTag InputTag;
};

/**
 * 用于授予GE的数据集
 */
USTRUCT(BlueprintType)
struct FCoreAbilitySet_GameplayEffect
{
	GENERATED_BODY()

public:
	// 授予的GE
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameplayEffect> GameplayEffect;

	// GE等级
	UPROPERTY(EditDefaultsOnly)
	float EffectLevel = 1.0f;
};

/**
 * 用于授予属性集AS的数据集
 */
USTRUCT(BlueprintType)
struct FCoreAbilitySet_AttributeSet
{
	GENERATED_BODY()

public:
	// 授予的AS
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAttributeSet> AttributeSet;
};

/**
 * Data used to store handles to what has been granted by the ability set.
 * 用于储存能力数据集的句柄
 */
USTRUCT(BlueprintType)
struct GAMECORE_API FCoreAbilitySet_GrantedHandles
{
	GENERATED_BODY()

public:
	/** 添加GA句柄 */
	void AddAbilitySpecHandle(const FGameplayAbilitySpecHandle& Handle);
	/** 添加GE句柄 */
	void AddGameplayEffectHandle(const FActiveGameplayEffectHandle& Handle);
	/** 添加属性集句柄 */
	void AddAttributeSet(UAttributeSet* Set);

	/**
	 * 移除该组件内所有关于此数据集句柄的能力集
	 * @param InASC		技能组件
	 */
	void TakeFromAbilitySystem(UCoreAbilitySystemComponent* InASC);

protected:
	// GA句柄
	UPROPERTY()
	TArray<FGameplayAbilitySpecHandle> AbilitySpecHandles;

	// GE句柄
	UPROPERTY()
	TArray<FActiveGameplayEffectHandle> GameplayEffectHandles;

	// AS句柄
	UPROPERTY()
	TArray<TObjectPtr<UAttributeSet>> GrantedAttributeSets;
};

/**
 * 游戏Ability能力集
 * 用于定义GA和GE不可变配置资产
 */
UCLASS(BlueprintType, Const)
class GAMECORE_API UCoreAbilitySet : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UCoreAbilitySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	/**
	 * Grants the ability set to the specified ability system component.
	 * The returned handles can be used later to take away anything that was granted.
	 * 将能力集授予指定的能力系统组件，并返回能力数据集句柄
	 * 
	 * @param InASC						能力组件
	 * @param OutGrantedHandles			返回的能力数据句柄集
	 * @param SourceObject				创建GA的对象
	 */
	void GiveToAbilitySystem(UCoreAbilitySystemComponent* InASC, FCoreAbilitySet_GrantedHandles* OutGrantedHandles, UObject* SourceObject = nullptr) const;

protected:
	// 当能力数据集被授予时的GA数据集
	UPROPERTY(EditDefaultsOnly, Category = "GameplayAbilities", meta=(TitleProperty=Ability))
	TArray<FCoreAbilitySet_GameplayAbility> GrantedGameplayAbilities;

	// 当能力数据集被授予时的GE数据集
	UPROPERTY(EditDefaultsOnly, Category = "GameplayEffects", meta=(TitleProperty=GameplayEffect))
	TArray<FCoreAbilitySet_GameplayEffect> GrantedGameplayEffects;

	// 当能力数据集被授予时的AS数据集
	UPROPERTY(EditDefaultsOnly, Category = "AttributeSets", meta=(TitleProperty=AttributeSet))
	TArray<FCoreAbilitySet_AttributeSet> GrantedAttributes;
};
