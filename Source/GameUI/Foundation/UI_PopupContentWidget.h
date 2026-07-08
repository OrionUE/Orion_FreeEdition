/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Blueprint/UserWidget.h"

#include "UI_PopupContentWidget.generated.h"

class UCommonRichTextBlock;
class UCommonTextBlock;
class UGameUIPopupDescriptor;
class UImage;
class UPanelWidget;
class UWidget;
class SWidget;

/**
 * Base class for popup body presentation widgets.
 */
UCLASS(Abstract, BlueprintType, Blueprintable, meta=(DisplayName="Popup Content Widget Base"))
class GAMEUI_API UUI_PopupContentWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="Game UI|Popup")
	void SetupPopupContent(UGameUIPopupDescriptor* Descriptor);

	UFUNCTION(BlueprintPure, Category="Game UI|Popup")
	UGameUIPopupDescriptor* GetPopupDescriptor() const { return ActiveDescriptor; }

protected:
	virtual void NativeOnPopupDescriptorSet();

	UFUNCTION(BlueprintImplementableEvent, Category="Game UI|Popup")
	void OnPopupDescriptorSet(UGameUIPopupDescriptor* Descriptor);

	void SetOptionalWidgetVisibility(UWidget* Widget, bool bVisible) const;

protected:
	UPROPERTY(Transient, BlueprintReadOnly, Category="Popup")
	TObjectPtr<UGameUIPopupDescriptor> ActiveDescriptor;
};

/**
 * Default rich text popup body.
 */
UCLASS(BlueprintType, Blueprintable, meta=(DisplayName="Text Popup Content"))
class GAMEUI_API UUI_TextPopupContent : public UUI_PopupContentWidget
{
	GENERATED_BODY()

protected:
	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void NativeOnPopupDescriptorSet() override;

private:
	void BuildDefaultWidgetTreeIfNeeded();

private:
	UPROPERTY(Meta=(BindWidgetOptional))
	TObjectPtr<UImage> Image_Hero;

	UPROPERTY(Meta=(BindWidgetOptional))
	TObjectPtr<UCommonRichTextBlock> RichText_Body;
};

/**
 * Popup body that renders reward rows.
 */
UCLASS(BlueprintType, Blueprintable, meta=(DisplayName="Reward Popup Content"))
class GAMEUI_API UUI_RewardPopupContent : public UUI_PopupContentWidget
{
	GENERATED_BODY()

protected:
	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void NativeOnPopupDescriptorSet() override;

private:
	void BuildDefaultWidgetTreeIfNeeded();

private:
	UPROPERTY(Meta=(BindWidgetOptional))
	TObjectPtr<UImage> Image_Hero;

	UPROPERTY(Meta=(BindWidgetOptional))
	TObjectPtr<UCommonRichTextBlock> RichText_Body;

	UPROPERTY(Meta=(BindWidgetOptional))
	TObjectPtr<UPanelWidget> Panel_Rewards;
};

/**
 * Popup body that renders inline HTML or a remote URL.
 */
UCLASS(BlueprintType, Blueprintable, meta=(DisplayName="HTML Popup Content"))
class GAMEUI_API UUI_HtmlPopupContent : public UUI_PopupContentWidget
{
	GENERATED_BODY()

protected:
	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void NativeOnPopupDescriptorSet() override;

private:
	void BuildDefaultWidgetTreeIfNeeded();
	UWidget* FindWebBrowserWidget() const;
	bool IsWebBrowserAvailable() const;

private:
	UPROPERTY(Meta=(BindWidgetOptional))
	TObjectPtr<UCommonRichTextBlock> RichText_Body;

	UPROPERTY(Meta=(BindWidgetOptional))
	TObjectPtr<UWidget> WebBrowser_Html;
};
