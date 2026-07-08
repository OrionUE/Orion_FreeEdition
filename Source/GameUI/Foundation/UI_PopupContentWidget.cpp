/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_PopupContentWidget.h"

#ifndef GAMEUI_WITH_ORION_BROWSER
#define GAMEUI_WITH_ORION_BROWSER 0
#endif

#include "Blueprint/WidgetTree.h"
#include "CommonRichTextBlock.h"
#include "CommonTextBlock.h"
#include "Components/Image.h"
#include "Components/PanelWidget.h"
#include "Components/SizeBox.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
#include "Foundation/GameUIWebBrowser.h"
#include "GameUILogChannels.h"
#include "Subsystem/GameUIPopupTypes.h"

#if GAMEUI_WITH_ORION_BROWSER
#include "Modules/ModuleManager.h"
#include "OrionBrowserModule.h"
#include "OrionBrowserWidget.h"
#endif

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_PopupContentWidget)

#define LOCTEXT_NAMESPACE "UIPopupContentWidget"

void UUI_PopupContentWidget::SetupPopupContent(UGameUIPopupDescriptor* Descriptor)
{
	ActiveDescriptor = Descriptor;
	NativeOnPopupDescriptorSet();
	OnPopupDescriptorSet(Descriptor);
}

void UUI_PopupContentWidget::NativeOnPopupDescriptorSet()
{
}

void UUI_PopupContentWidget::SetOptionalWidgetVisibility(UWidget* Widget, bool bVisible) const
{
	if (Widget)
	{
		Widget->SetVisibility(bVisible ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
	}
}

TSharedRef<SWidget> UUI_TextPopupContent::RebuildWidget()
{
	BuildDefaultWidgetTreeIfNeeded();

	return Super::RebuildWidget();
}

void UUI_TextPopupContent::NativeOnPopupDescriptorSet()
{
	Super::NativeOnPopupDescriptorSet();

	if (!ActiveDescriptor)
	{
		return;
	}

	if (Image_Hero)
	{
		const bool bHasHeroBrush = ActiveDescriptor->HeroBrush.DrawAs != ESlateBrushDrawType::NoDrawType || ActiveDescriptor->HeroBrush.GetResourceObject() != nullptr;
		if (bHasHeroBrush)
		{
			Image_Hero->SetBrush(ActiveDescriptor->HeroBrush);
		}

		SetOptionalWidgetVisibility(Image_Hero, bHasHeroBrush);
	}

	if (RichText_Body)
	{
		RichText_Body->SetText(ActiveDescriptor->Body);
		SetOptionalWidgetVisibility(RichText_Body, !ActiveDescriptor->Body.IsEmpty());
	}
}

void UUI_TextPopupContent::BuildDefaultWidgetTreeIfNeeded()
{
	if (!WidgetTree || WidgetTree->RootWidget)
	{
		return;
	}

	UVerticalBox* ContentLayout = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("GeneratedTextContentLayout"));
	WidgetTree->RootWidget = ContentLayout;

	Image_Hero = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Image_Hero"));
	if (UVerticalBoxSlot* HeroSlot = ContentLayout->AddChildToVerticalBox(Image_Hero))
	{
		HeroSlot->SetPadding(FMargin(0.0f, 0.0f, 0.0f, 12.0f));
	}

	RichText_Body = WidgetTree->ConstructWidget<UCommonRichTextBlock>(UCommonRichTextBlock::StaticClass(), TEXT("RichText_Body"));
	RichText_Body->SetAutoWrapText(true);
	RichText_Body->SetText(LOCTEXT("DefaultTextPopupBody", "Popup body"));
	ContentLayout->AddChildToVerticalBox(RichText_Body);
}

TSharedRef<SWidget> UUI_RewardPopupContent::RebuildWidget()
{
	BuildDefaultWidgetTreeIfNeeded();

	return Super::RebuildWidget();
}

void UUI_RewardPopupContent::NativeOnPopupDescriptorSet()
{
	Super::NativeOnPopupDescriptorSet();

	if (!ActiveDescriptor)
	{
		return;
	}

	if (Image_Hero)
	{
		const bool bHasHeroBrush = ActiveDescriptor->HeroBrush.DrawAs != ESlateBrushDrawType::NoDrawType || ActiveDescriptor->HeroBrush.GetResourceObject() != nullptr;
		if (bHasHeroBrush)
		{
			Image_Hero->SetBrush(ActiveDescriptor->HeroBrush);
		}

		SetOptionalWidgetVisibility(Image_Hero, bHasHeroBrush);
	}

	if (RichText_Body)
	{
		RichText_Body->SetText(ActiveDescriptor->Body);
		SetOptionalWidgetVisibility(RichText_Body, !ActiveDescriptor->Body.IsEmpty());
	}

	if (!Panel_Rewards || !WidgetTree)
	{
		return;
	}

	Panel_Rewards->ClearChildren();
	SetOptionalWidgetVisibility(Panel_Rewards, !ActiveDescriptor->Rewards.IsEmpty());

	for (const FGameUIPopupRewardLine& Reward : ActiveDescriptor->Rewards)
	{
		FText RewardText = Reward.DisplayName;
		if (Reward.Quantity > 1)
		{
			RewardText = FText::Format(LOCTEXT("RewardWithQuantity", "{0} x{1}"), Reward.DisplayName, FText::AsNumber(Reward.Quantity));
		}

		UCommonTextBlock* RewardTextBlock = WidgetTree->ConstructWidget<UCommonTextBlock>(UCommonTextBlock::StaticClass());
		RewardTextBlock->SetText(RewardText);
		RewardTextBlock->SetAutoWrapText(true);
		RewardTextBlock->SetColorAndOpacity(FSlateColor(FLinearColor(0.92f, 0.94f, 0.98f, 1.0f)));
		Panel_Rewards->AddChild(RewardTextBlock);

		if (!Reward.Description.IsEmpty())
		{
			UCommonTextBlock* RewardDescriptionBlock = WidgetTree->ConstructWidget<UCommonTextBlock>(UCommonTextBlock::StaticClass());
			RewardDescriptionBlock->SetText(Reward.Description);
			RewardDescriptionBlock->SetAutoWrapText(true);
			RewardDescriptionBlock->SetColorAndOpacity(FSlateColor(FLinearColor(0.68f, 0.72f, 0.78f, 1.0f)));
			Panel_Rewards->AddChild(RewardDescriptionBlock);
		}
	}
}

void UUI_RewardPopupContent::BuildDefaultWidgetTreeIfNeeded()
{
	if (!WidgetTree || WidgetTree->RootWidget)
	{
		return;
	}

	UVerticalBox* ContentLayout = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("GeneratedRewardContentLayout"));
	WidgetTree->RootWidget = ContentLayout;

	Image_Hero = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Image_Hero"));
	if (UVerticalBoxSlot* HeroSlot = ContentLayout->AddChildToVerticalBox(Image_Hero))
	{
		HeroSlot->SetPadding(FMargin(0.0f, 0.0f, 0.0f, 12.0f));
	}

	RichText_Body = WidgetTree->ConstructWidget<UCommonRichTextBlock>(UCommonRichTextBlock::StaticClass(), TEXT("RichText_Body"));
	RichText_Body->SetAutoWrapText(true);
	if (UVerticalBoxSlot* BodySlot = ContentLayout->AddChildToVerticalBox(RichText_Body))
	{
		BodySlot->SetPadding(FMargin(0.0f, 0.0f, 0.0f, 12.0f));
	}

	Panel_Rewards = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("Panel_Rewards"));
	ContentLayout->AddChildToVerticalBox(Panel_Rewards);
}

TSharedRef<SWidget> UUI_HtmlPopupContent::RebuildWidget()
{
	BuildDefaultWidgetTreeIfNeeded();

	return Super::RebuildWidget();
}

void UUI_HtmlPopupContent::NativeOnPopupDescriptorSet()
{
	Super::NativeOnPopupDescriptorSet();

	if (!ActiveDescriptor)
	{
		return;
	}

	if (RichText_Body)
	{
		RichText_Body->SetText(ActiveDescriptor->Body);
		SetOptionalWidgetVisibility(RichText_Body, !ActiveDescriptor->Body.IsEmpty());
	}

	UWidget* BrowserWidget = FindWebBrowserWidget();
	if (!BrowserWidget || !IsWebBrowserAvailable())
	{
		UE_LOG(LogGameUI, Warning, TEXT("Popup requested HTML content but OrionBrowser is unavailable or the popup content has no WebBrowser_Html widget."));
		SetOptionalWidgetVisibility(BrowserWidget, false);
		return;
	}

	SetOptionalWidgetVisibility(BrowserWidget, true);

#if GAMEUI_WITH_ORION_BROWSER
	if (UGameUIWebBrowser* GameUIBrowser = Cast<UGameUIWebBrowser>(BrowserWidget))
	{
		GameUIBrowser->SetSupportsTransparency(ActiveDescriptor->bHtmlSupportsTransparency);
		GameUIBrowser->SetCursorPolicy(EGameUIWebBrowserCursorPolicy::ForceDefault);

		if (ActiveDescriptor->ContentKind == EGameUIPopupContentKind::HtmlUrl)
		{
			GameUIBrowser->LoadURL(ActiveDescriptor->HtmlURL);
		}
		else
		{
			GameUIBrowser->LoadString(ActiveDescriptor->HtmlString, ActiveDescriptor->HtmlBaseURL);
		}
	}
	else if (UOrionBrowserWidget* OrionBrowser = Cast<UOrionBrowserWidget>(BrowserWidget))
	{
		OrionBrowser->SetCursorPolicy(EOrionBrowserCursorPolicy::GameControlled);

		if (ActiveDescriptor->ContentKind == EGameUIPopupContentKind::HtmlUrl)
		{
			OrionBrowser->LoadURL(ActiveDescriptor->HtmlURL);
		}
		else
		{
			OrionBrowser->LoadString(ActiveDescriptor->HtmlString, ActiveDescriptor->HtmlBaseURL);
		}
	}
#endif
}

void UUI_HtmlPopupContent::BuildDefaultWidgetTreeIfNeeded()
{
	if (!WidgetTree || WidgetTree->RootWidget)
	{
		return;
	}

	UVerticalBox* ContentLayout = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("GeneratedHtmlContentLayout"));
	WidgetTree->RootWidget = ContentLayout;

	RichText_Body = WidgetTree->ConstructWidget<UCommonRichTextBlock>(UCommonRichTextBlock::StaticClass(), TEXT("RichText_Body"));
	RichText_Body->SetAutoWrapText(true);
	if (UVerticalBoxSlot* BodySlot = ContentLayout->AddChildToVerticalBox(RichText_Body))
	{
		BodySlot->SetPadding(FMargin(0.0f, 0.0f, 0.0f, 12.0f));
	}

#if GAMEUI_WITH_ORION_BROWSER
	USizeBox* BrowserSizeBox = WidgetTree->ConstructWidget<USizeBox>(USizeBox::StaticClass(), TEXT("GeneratedBrowserSizeBox"));
	BrowserSizeBox->SetMinDesiredHeight(360.0f);
	ContentLayout->AddChildToVerticalBox(BrowserSizeBox);

	WebBrowser_Html = WidgetTree->ConstructWidget<UGameUIWebBrowser>(UGameUIWebBrowser::StaticClass(), TEXT("WebBrowser_Html"));
	BrowserSizeBox->AddChild(WebBrowser_Html);
#endif
}

UWidget* UUI_HtmlPopupContent::FindWebBrowserWidget() const
{
#if GAMEUI_WITH_ORION_BROWSER
	if (UGameUIWebBrowser* GameUIBrowser = Cast<UGameUIWebBrowser>(WebBrowser_Html))
	{
		return GameUIBrowser;
	}

	if (UOrionBrowserWidget* Browser = Cast<UOrionBrowserWidget>(WebBrowser_Html))
	{
		return Browser;
	}
#endif

	return nullptr;
}

bool UUI_HtmlPopupContent::IsWebBrowserAvailable() const
{
#if GAMEUI_WITH_ORION_BROWSER
	IOrionBrowserModule* WebBrowserModule = FModuleManager::LoadModulePtr<IOrionBrowserModule>(TEXT("OrionBrowser"));
	return WebBrowserModule && WebBrowserModule->IsWebModuleAvailable();
#else
	return false;
#endif
}

#undef LOCTEXT_NAMESPACE
