/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GameUIPopupDefinition.h"

#include "Engine/LocalPlayer.h"
#include "UObject/Package.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameUIPopupDefinition)

UGameUIPopupDefinitionBase::UGameUIPopupDefinitionBase()
{
}

UGameUIPopupDescriptor* UGameUIPopupDefinitionBase::BuildPopupDescriptor(UObject* Outer, ULocalPlayer* LocalPlayer, FName PopupContext) const
{
	UGameUIPopupDescriptor* Descriptor = NewObject<UGameUIPopupDescriptor>(Outer ? Outer : GetTransientPackage());
	ConfigurePopupDescriptor(Descriptor, LocalPlayer, PopupContext);
	Descriptor->EnsureDefaultAction();

	return Descriptor;
}

bool UGameUIPopupDefinitionBase::MatchesPopupContext(FName PopupContext) const { return PopupContexts.IsEmpty() || PopupContexts.Contains(PopupContext); }

bool UGameUIPopupDefinitionBase::CanShowPopup_Implementation(ULocalPlayer* LocalPlayer, FName PopupContext) const { return bEnabled && MatchesPopupContext(PopupContext); }

void UGameUIPopupDefinitionBase::ConfigurePopupDescriptor_Implementation(UGameUIPopupDescriptor* Descriptor, ULocalPlayer* LocalPlayer, FName PopupContext) const
{
	if (!Descriptor)
	{
		return;
	}

	Descriptor->PopupType = PopupType;
	Descriptor->PopupGroup = PopupGroup;
	Descriptor->Priority = Priority;
	Descriptor->bReplaceQueuedPopupsInGroup = bReplaceQueuedPopupsInGroup;
	Descriptor->bDismissible = bDismissible;
	Descriptor->bTapOutsideToDismiss = bTapOutsideToDismiss;
	Descriptor->AutoDismissSeconds = AutoDismissSeconds;
	Descriptor->PopupScreenClass = PopupScreenClass;
	Descriptor->ContentWidgetClass = ContentWidgetClass;
	Descriptor->PreferredSize = PreferredSize;
	Descriptor->Actions = Actions;
}

void UGameUIHtmlPopupDefinition::ConfigurePopupDescriptor_Implementation(UGameUIPopupDescriptor* Descriptor, ULocalPlayer* LocalPlayer, FName PopupContext) const
{
	Super::ConfigurePopupDescriptor_Implementation(Descriptor, LocalPlayer, PopupContext);

	if (!Descriptor)
	{
		return;
	}

	Descriptor->ContentKind = HtmlSource == EGameUIHtmlPopupSource::InlineString
		? EGameUIPopupContentKind::HtmlString
		: EGameUIPopupContentKind::HtmlUrl;
	Descriptor->Title = Title;
	Descriptor->Subtitle = Subtitle;
	Descriptor->Body = Body;
	Descriptor->HtmlString = HtmlString;
	Descriptor->HtmlURL = HtmlURL;
	Descriptor->HtmlBaseURL = HtmlBaseURL;
	Descriptor->bHtmlSupportsTransparency = bHtmlSupportsTransparency;
}

void UGameUIRewardPopupDefinition::ConfigurePopupDescriptor_Implementation(UGameUIPopupDescriptor* Descriptor, ULocalPlayer* LocalPlayer, FName PopupContext) const
{
	Super::ConfigurePopupDescriptor_Implementation(Descriptor, LocalPlayer, PopupContext);

	if (!Descriptor)
	{
		return;
	}

	Descriptor->ContentKind = EGameUIPopupContentKind::Reward;
	Descriptor->Title = Title;
	Descriptor->Subtitle = Subtitle;
	Descriptor->Body = Body;
	Descriptor->HeroBrush = HeroBrush;
	Descriptor->Rewards = Rewards;
}
