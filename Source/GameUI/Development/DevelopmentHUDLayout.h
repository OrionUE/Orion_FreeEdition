/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Blueprint/UserWidget.h"

#include "Foundation/UIComboActionBinding.h"

#include "DevelopmentHUDLayout.generated.h"

UCLASS(Abstract, BlueprintType, Blueprintable, Meta=(DisplayName="Development HUD Layout Base", Category="HUD"))
class GAMEUI_API UDevelopmentHUDLayout : public UUserWidget
{
	GENERATED_BODY()

public:
	UDevelopmentHUDLayout(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

protected:
	void HandleDevelopmentAction();

	UFUNCTION(BlueprintImplementableEvent, DisplayName="HandleDevelopmentAction")
	void K2_HandleDevelopmentAction();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FKey> DevelopmentActionKeys;

	UPROPERTY(BlueprintReadOnly)
	bool bDevelopmentHUDActivated = false;

private:
	FUIComboActionBindingHandle DevelopmentActionHandle;
};
