// Copyright (c) Ideality Century, Inc. All Rights Reserved.
// Author: LiuZe

#pragma once

#include "EnhancedInputComponent.h"
#include "InputSystemConfig.h"
#include "InputSystemComponent.generated.h"

class UEnhancedInputLocalPlayerSubsystem;

struct FGameplayTag;

/**
 * UInputSystemComponent
 * Component used to manage input mappings and bindings using an input config data asset.
 * 用于使用输入配置数据资产管理输入映射和绑定
 *
 * 需在DefaultInput.ini添加此类的名称和路径
 * [/Script/Engine.InputSettings]
 * DefaultInputComponentClass=/Script/CommonInputSystem.InputSystemComponent
 *
 * @see https://idealitycentury.yuque.com/bt1dl9/project_doc/ntl5e01h2x97gk0k
 */
UCLASS(Config=Input)
class COMMONINPUTSYSTEM_API UInputSystemComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()

public:
	UInputSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	void AddInputMappings(const UInputSystemConfig* InputConfig, UEnhancedInputLocalPlayerSubsystem* InputSubsystem) const;
	void RemoveInputMappings(const UInputSystemConfig* InputConfig, UEnhancedInputLocalPlayerSubsystem* InputSubsystem) const;

	template<class UserClass, typename FuncType>
	void BindNativeAction(const UInputSystemConfig* InputConfig, const FGameplayTag& InputTag, ETriggerEvent TriggerEvent, UserClass* Object, FuncType Func, bool bLogIfNotFound);

	template<class UserClass, typename PressedFuncType, typename StartedPressedFuncType, typename ReleasedFuncType>
	void BindAbilityActions(const UInputSystemConfig* InputConfig, UserClass* Object, PressedFuncType PressedFunc, StartedPressedFuncType StartedPressedFunc, ReleasedFuncType ReleasedFunc, TArray<uint32>& BindHandles);

	void RemoveBinds(TArray<uint32>& BindHandles);
};

template <class UserClass, typename FuncType>
void UInputSystemComponent::BindNativeAction(const UInputSystemConfig* InputConfig, const FGameplayTag& InputTag, ETriggerEvent TriggerEvent, UserClass* Object, FuncType Func, bool bLogIfNotFound)
{
	check(InputConfig);
	if (const UInputAction* IA = InputConfig->FindNativeInputActionForTag(InputTag, bLogIfNotFound))
	{
		BindAction(IA, TriggerEvent, Object, Func);
	}
}

template <class UserClass, typename PressedFuncType, typename StartedPressedFuncType, typename ReleasedFuncType>
void UInputSystemComponent::BindAbilityActions(const UInputSystemConfig* InputConfig, UserClass* Object, PressedFuncType PressedFunc, StartedPressedFuncType StartedPressedFunc,ReleasedFuncType ReleasedFunc, TArray<uint32>& BindHandles)
{
	check(InputConfig);

	for (const FInputSystemAction& Action : InputConfig->AbilityInputActions)
	{
		if (Action.InputAction && Action.InputTag.IsValid())
		{
			if (PressedFunc)
			{
				BindHandles.Add(BindAction(Action.InputAction, ETriggerEvent::Triggered, Object, PressedFunc, Action.InputTag).GetHandle());
			}
			if (StartedPressedFunc)
			{
				BindHandles.Add(BindAction(Action.InputAction, ETriggerEvent::Started, Object, StartedPressedFunc, Action.InputTag).GetHandle());
			}
			if (ReleasedFunc)
			{
				BindHandles.Add(BindAction(Action.InputAction, ETriggerEvent::Completed, Object, ReleasedFunc, Action.InputTag).GetHandle());
			}
		}
	}
}
