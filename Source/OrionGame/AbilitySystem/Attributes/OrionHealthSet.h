/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "AbilitySystemComponent.h"
#include "OrionAttributeSet.h"
#include "NativeGameplayTags.h"

#include "OrionHealthSet.generated.h"

UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Gameplay_Damage);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Gameplay_DamageImmunity);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Gameplay_DamageSelfDestruct);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Gameplay_FellOutOfWorld);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Orion_Damage_Message);

struct FGameplayEffectModCallbackData;

/**
 * UOrionHealthSet
 *
 * Class that defines attributes that are necessary for taking damage.
 * Attribute examples include: health, shields, and resistances.
 */
UCLASS(BlueprintType)
class ORIONGAME_API UOrionHealthSet : public UOrionAttributeSet
{
	GENERATED_BODY()

public:
	UOrionHealthSet();

	ATTRIBUTE_ACCESSORS(UOrionHealthSet, SpeedBuff);
	ATTRIBUTE_ACCESSORS(UOrionHealthSet, AimSpeedBuff);
	ATTRIBUTE_ACCESSORS(UOrionHealthSet, Health);
	ATTRIBUTE_ACCESSORS(UOrionHealthSet, MaxHealth);
	ATTRIBUTE_ACCESSORS(UOrionHealthSet, Healing);
	ATTRIBUTE_ACCESSORS(UOrionHealthSet, Damage);
	ATTRIBUTE_ACCESSORS(UOrionHealthSet, ConsumeAimingStamina);
	ATTRIBUTE_ACCESSORS(UOrionHealthSet, Stamina)//标红导入头文件#include "AbilitySystemComponent.h"
	ATTRIBUTE_ACCESSORS(UOrionHealthSet, MaxStamina)//使用默认宏实现get()set()fan

	ATTRIBUTE_ACCESSORS(UOrionHealthSet, AimingStamina)//标红导入头文件#include "AbilitySystemComponent.h"
	ATTRIBUTE_ACCESSORS(UOrionHealthSet, MaxAimingStamina)//使用默认宏实现get()set()fan

	// 当健康状况因损伤/愈合而发生变化时，客户端可能会丢失一些信息
	mutable FOrionAttributeEvent OnHealthChanged;

	// 当肺活量状况因损伤/愈合而发生变化时，客户端可能会丢失一些信息
	mutable FOrionAttributeEvent OnAimingStaminaChanged;

	// 当最大运行状况发生变化时委派
	mutable FOrionAttributeEvent OnMaxHealthChanged;

	// 委派在健康属性为零时进行广播
	mutable FOrionAttributeEvent OnOutOfHealth;

	// 当健康状况因运动/疲劳而发生变化时，客户端可能会丢失一些信息
	mutable FOrionAttributeEvent OnStaminaChanged;

	// 最大耐力变化时委派
	mutable FOrionAttributeEvent OnMaxStaminaChanged;

	// 代表在耐力属性为零时进行广播
	mutable FOrionAttributeEvent OnOutOfStamina;

	// 代表在耐力属性为零时进行广播
	mutable FOrionAttributeEvent OnOutOfAimingStamina;

protected:
	UFUNCTION()
	void OnRep_SpeedBuff(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	void OnRep_AimSpeedBuff(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_Stamina(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	virtual void OnRep_MaxStamina(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	virtual void OnRep_AimingStamina(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	virtual void OnRep_MaxAimingStamina(const FGameplayAttributeData& OldValue);
	
	virtual bool PreGameplayEffectExecute(FGameplayEffectModCallbackData& Data) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	virtual void PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const override;
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;

	void ClampAttribute(const FGameplayAttribute& Attribute, float& NewValue) const;

private:
	// The current health attribute.  The health will be capped by the max health attribute.  Health is hidden from modifiers so only executions can modify it.
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Health, Category="Orion|Health", meta=(AllowPrivateAccess=true))
	FGameplayAttributeData Health;

	// The current max health attribute.  Max health is an attribute since gameplay effects can modify it.
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_MaxHealth, Category="Orion|Health", meta=(AllowPrivateAccess=true))
	FGameplayAttributeData MaxHealth;

	// 体力
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_Stamina, Category="GAS|Stamina", meta=(AllowPrivateAccess=true))
	FGameplayAttributeData Stamina;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_MaxStamina, Category="GAS|Stamina", meta=(AllowPrivateAccess=true))
	FGameplayAttributeData MaxStamina;

	// 体力
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_AimingStamina, Category="GAS|AimingStamina", meta=(AllowPrivateAccess=true))
	FGameplayAttributeData AimingStamina;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_MaxAimingStamina, Category="GAS|AimingStamina", meta=(AllowPrivateAccess=true))
	FGameplayAttributeData MaxAimingStamina;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_SpeedBuff, Category="Orion|SpeedBuff", meta=(AllowPrivateAccess=true))
	FGameplayAttributeData SpeedBuff;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_AimSpeedBuff, Category="Orion|AimSpeedBuff", meta=(AllowPrivateAccess=true))
	FGameplayAttributeData AimSpeedBuff;

	// Used to track when the health reaches 0.
	bool bOutOfHealth;

	// Used to track when the health reaches 0.
	bool bOutOfStamina;

	// Used to track when the health reaches 0.
	bool bOutOfAimingStamina;

	// Store the health before any changes 
	float MaxHealthBeforeAttributeChange;

	float HealthBeforeAttributeChange;

	float AimingStaminaBeforeAttributeChange;

	// Store the health before any changes 
	float MaxStaminaBeforeAttributeChange;
	float StaminaBeforeAttributeChange;

	// -------------------------------------------------------------------
	//	Meta Attribute (please keep attributes that aren't 'stateful' below 
	// -------------------------------------------------------------------

	// Incoming healing. This is mapped directly to +Health
	UPROPERTY(BlueprintReadOnly, Category="Orion|Health", meta=(AllowPrivateAccess=true))
	FGameplayAttributeData Healing;

	// Incoming damage. This is mapped directly to -Health
	UPROPERTY(BlueprintReadOnly, Category="Orion|Health", meta=(HideFromModifiers, AllowPrivateAccess=true))
	FGameplayAttributeData Damage;

	// Incoming damage. This is mapped directly to -Health
	UPROPERTY(BlueprintReadOnly, Category="Orion|AimingStamina", meta=(AllowPrivateAccess=true))
	FGameplayAttributeData ConsumeAimingStamina;
};
