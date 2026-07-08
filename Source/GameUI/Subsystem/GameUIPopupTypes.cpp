/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GameUIPopupTypes.h"

#include "Foundation/UI_PopupContentWidget.h"
#include "UObject/Package.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameUIPopupTypes)

#define LOCTEXT_NAMESPACE "GameUIPopupTypes"

UGameUIPopupDescriptor::UGameUIPopupDescriptor()
{
	PopupId = FGuid::NewGuid();
}

UGameUIPopupDescriptor* UGameUIPopupDescriptor::CreateTextPopup(UObject* WorldContextObject, const FText& Title, const FText& Body)
{
	UGameUIPopupDescriptor* Descriptor = NewObject<UGameUIPopupDescriptor>(WorldContextObject ? WorldContextObject : GetTransientPackage());
	Descriptor->ContentKind = EGameUIPopupContentKind::RichText;
	Descriptor->Title = Title;
	Descriptor->Body = Body;
	Descriptor->EnsureDefaultAction();

	return Descriptor;
}

UGameUIPopupDescriptor* UGameUIPopupDescriptor::CreateHtmlPopup(UObject* WorldContextObject, const FText& Title, const FString& Html, bool bIsUrl)
{
	UGameUIPopupDescriptor* Descriptor = NewObject<UGameUIPopupDescriptor>(WorldContextObject ? WorldContextObject : GetTransientPackage());
	Descriptor->ContentKind = bIsUrl ? EGameUIPopupContentKind::HtmlUrl : EGameUIPopupContentKind::HtmlString;
	Descriptor->Title = Title;

	if (bIsUrl)
	{
		Descriptor->HtmlURL = Html;
	}
	else
	{
		Descriptor->HtmlString = Html;
	}

	Descriptor->EnsureDefaultAction();

	return Descriptor;
}

UGameUIPopupDescriptor* UGameUIPopupDescriptor::CreateRewardPopup(UObject* WorldContextObject, const FText& Title, const FText& Body, const TArray<FGameUIPopupRewardLine>& InRewards)
{
	UGameUIPopupDescriptor* Descriptor = NewObject<UGameUIPopupDescriptor>(WorldContextObject ? WorldContextObject : GetTransientPackage());
	Descriptor->ContentKind = EGameUIPopupContentKind::Reward;
	Descriptor->Title = Title;
	Descriptor->Body = Body;
	Descriptor->Rewards = InRewards;
	Descriptor->EnsureDefaultAction();

	return Descriptor;
}

UGameUIPopupDescriptor* UGameUIPopupDescriptor::AddAction(FName ActionId, const FText& DisplayText, ECommonMessagingResult CommonResult)
{
	FGameUIPopupAction& Action = Actions.AddDefaulted_GetRef();
	Action.ActionId = ActionId;
	Action.DisplayText = DisplayText;
	Action.CommonResult = CommonResult;

	return this;
}

void UGameUIPopupDescriptor::EnsureDefaultAction()
{
	if (!Actions.IsEmpty())
	{
		return;
	}

	AddAction(TEXT("Confirm"), LOCTEXT("DefaultConfirmAction", "OK"), ECommonMessagingResult::Confirmed);
}

TSubclassOf<UUI_PopupContentWidget> UGameUIPopupDescriptor::GetLoadedContentWidgetClass() const
{
	if (!ContentWidgetClass.IsNull())
	{
		return ContentWidgetClass.Get();
	}

	switch (ContentKind)
	{
	case EGameUIPopupContentKind::Reward:
		return UUI_RewardPopupContent::StaticClass();

	case EGameUIPopupContentKind::HtmlString:
	case EGameUIPopupContentKind::HtmlUrl:
		return UUI_HtmlPopupContent::StaticClass();

	case EGameUIPopupContentKind::Text:
	case EGameUIPopupContentKind::RichText:
	case EGameUIPopupContentKind::CustomWidget:
	default:
		return UUI_TextPopupContent::StaticClass();
	}
}

bool UGameUIPopupDescriptor::HasUnloadedContentWidgetClass() const { return !ContentWidgetClass.IsNull() && !ContentWidgetClass.Get(); }

FSoftObjectPath UGameUIPopupDescriptor::GetContentWidgetClassPath() const { return ContentWidgetClass.ToSoftObjectPath(); }

void UGameUIPopupDescriptor::BroadcastResult(const FGameUIPopupResult& Result)
{
	OnPopupResult.Broadcast(this, Result);
}

#undef LOCTEXT_NAMESPACE
