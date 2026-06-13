/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Abilities/GameplayAbility.h"

#include "InteractionOption.generated.h"

class IInteractableTarget;
class UUserWidget;

/**
 * FInteractionOption
 * 交互选项
 * 为一个与一个物品接近时，显示的交互提示内容和交互逻辑能力
 */
USTRUCT(BlueprintType)
struct FInteractionOption
{
	GENERATED_BODY()

public:
	// The interactable target
	UPROPERTY(BlueprintReadWrite)
	TScriptInterface<IInteractableTarget> InteractableTarget;

	// 交互文本
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text;

	// 子文本
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText SubText;

	////////////////////////////////////////////////////////
	// 交互能力

	/**
	 * Place an ability on the avatar that they can activate when they perform interaction.
	 * The ability to grant the avatar when they get near interactable objects.
	 *
	 * 赋予角色此技能，在角色进行交互时激活
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UGameplayAbility> InteractionAbilityToGrant;

	/**
	 * Allow the object we're interacting with to have its own ability system and interaction ability, that we can activate instead.
	 * The ability system on the target that can be used for the TargetInteractionHandle and sending the event, if needed.
	 *
	 * 交互物品拥有自己的ability系统和GA，当交互时，触发这些GA
	 */
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UAbilitySystemComponent> TargetAbilitySystem = nullptr;

	/** The ability spec to activate on the object for this option. */
	UPROPERTY(BlueprintReadOnly)
	FGameplayAbilitySpecHandle TargetInteractionAbilityHandle;

	////////////////////////////////////////////////////////
	// UI

	/** 交互UI组件 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUserWidget> InteractionWidgetClass;

public:
	FORCEINLINE bool operator==(const FInteractionOption& Other) const
	{
		return InteractableTarget == Other.InteractableTarget &&
			InteractionAbilityToGrant == Other.InteractionAbilityToGrant&&
			TargetAbilitySystem == Other.TargetAbilitySystem &&
			TargetInteractionAbilityHandle == Other.TargetInteractionAbilityHandle &&
			InteractionWidgetClass == Other.InteractionWidgetClass &&
			Text.IdenticalTo(Other.Text) &&
			SubText.IdenticalTo(Other.SubText);
	}

	FORCEINLINE bool operator!=(const FInteractionOption& Other) const
	{
		return !operator==(Other);
	}

	FORCEINLINE bool operator<(const FInteractionOption& Other) const
	{
		return InteractableTarget.GetInterface() < Other.InteractableTarget.GetInterface();
	}
};

/**
 * 交互选项构造器
 */
class FInteractionOptionBuilder
{
public:
	FInteractionOptionBuilder(const TScriptInterface<IInteractableTarget>& InterfaceTargetScope, TArray<FInteractionOption>& InteractOptions)
		: Scope(InterfaceTargetScope)
		, Options(InteractOptions)
	{
	}

	void AddInteractionOption(const FInteractionOption& Option)
	{
		FInteractionOption& OptionEntry = Options.Add_GetRef(Option);
		OptionEntry.InteractableTarget = Scope;
	}

private:
	// 交互对象
	TScriptInterface<IInteractableTarget> Scope;

	// 当前所有交互选项
	TArray<FInteractionOption>& Options;
};
