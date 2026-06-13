/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CommonButtonBase.h"

#include "UI_ButtonBase.generated.h"

UCLASS(Abstract, BlueprintType, Blueprintable, meta=(DisplayName="Button Base"))
class GAMEUI_API UUI_ButtonBase : public UCommonButtonBase
{
	GENERATED_BODY()

protected:
	// UUserWidget interface
	virtual void NativePreConstruct() override;
	// End of UUserWidget interface

	// UCommonButtonBase interface
	virtual void UpdateInputActionWidget() override;
	virtual void OnInputMethodChanged(ECommonInputType CurrentInputType) override;
	// End of UCommonButtonBase interface

public:
	UFUNCTION(BlueprintCallable)
	void SetButtonText(const FText& InText);

	UFUNCTION(BlueprintCallable)
	void SetButtonIconBrush(const FSlateBrush& InBrush);

protected:
	void RefreshButtonText();
	
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateButtonText(const FText& InText);

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateButtonStyle();

private:
	UPROPERTY(EditAnywhere, Category="Button", meta=(InlineEditConditionToggle))
	bool bOverrideButtonText = true;

	UPROPERTY(EditAnywhere, Category="Button", meta=(editcondition="bOverrideButtonText"))
	FText ButtonText;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Button|Icon", meta=(InlineEditConditionToggle))
	bool bUseIconOverride = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Button|Icon", meta=(editcondition="bUseIconOverride"))
	FSlateBrush IconImageBrush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Button|Icon", meta=(editcondition="bUseIconOverride"))
	FVector2D IconImageSize;
};
