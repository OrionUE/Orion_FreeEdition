/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Character/CorePawnControlComponent.h"

#include "OrionPawnControlComponent.generated.h"

/**
 * UOrionPawnControlComponent
 * 
 * 为玩家的Controller（玩家或AI）设置输入和镜头处理等组件
 */
UCLASS()
class ORIONGAME_API UOrionPawnControlComponent : public UCorePawnControlComponent
{
	GENERATED_BODY()

public:
	UOrionPawnControlComponent(const FObjectInitializer& ObjectInitializer);
	
protected:
	/** 硬编码输入 */
	virtual void AddNativeActionInput(UInputSystemComponent* InputComponent, const UInputSystemConfig* InputConfig) override;

	UFUNCTION(BlueprintNativeEvent, Category="Input")
	void Input_Move(const FInputActionValue& InputActionValue);
	
	UFUNCTION(BlueprintNativeEvent, Category="Input")
	void Input_LookMouse(const FInputActionValue& InputActionValue);
	
	UFUNCTION(BlueprintNativeEvent, Category="Input")
	void Input_LookStick(const FInputActionValue& InputActionValue);
};
