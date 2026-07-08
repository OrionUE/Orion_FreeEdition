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

	void SetDevelopmentHUDVisible(bool bVisible, bool bOpenPanel);

protected:
	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

protected:
	void HandleDevelopmentAction();
	void SetDevelopmentHUDActivated(bool bActivated, bool bForceRefresh);

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
