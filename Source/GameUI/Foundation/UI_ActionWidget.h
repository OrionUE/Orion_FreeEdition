/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CommonActionWidget.h"

#include "UI_ActionWidget.generated.h"

class UInputAction;
class UEnhancedInputLocalPlayerSubsystem;

/**
 * An action widget that will get the icon of key that is currently assigned to the common input action on this widget
 */
UCLASS(BlueprintType, Blueprintable, meta=(DisplayName="Action Widget Base"))
class GAMEUI_API UUI_ActionWidget : public UCommonActionWidget
{
	GENERATED_BODY()

public:
	//~ Begin UCommonActionWidget interface
	virtual FSlateBrush GetIcon() const override;
	//~ End of UCommonActionWidget interface

private:
	UEnhancedInputLocalPlayerSubsystem* GetEnhancedInputSubsystem() const;

public:
	// The Enhanced Input Action that is associated with this Common Input action
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	const TObjectPtr<UInputAction> AssociatedInputAction;
};
