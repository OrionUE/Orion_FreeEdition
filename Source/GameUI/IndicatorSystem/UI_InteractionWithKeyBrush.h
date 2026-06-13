/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CommonUserWidget.h"

#include "UI_InteractionWithKeyBrush.generated.h"

class UInputAction;
class UCommonActionWidget;

UCLASS()
class UUI_InteractionWithKeyBrush : public UCommonUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	UFUNCTION(BlueprintCallable)
	void OnVisibilityChanged(bool bVisible);

protected:
	UFUNCTION(BlueprintImplementableEvent, meta=(DisplayName="OnVisibilityChanged"))
	void K2_OnVisibilityChanged(bool bVisible);

protected:
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UCommonActionWidget> InputActionWidget;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	const TObjectPtr<UInputAction> InputAction;
};
