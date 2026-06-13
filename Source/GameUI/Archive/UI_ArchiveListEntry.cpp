/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_ArchiveListEntry.h"

#include "CommonInputSubsystem.h"
#include "CommonTextBlock.h"
#include "SaveGame/ArchiveEntry.h"
#include "SaveGame/OrionArchiveManagerSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_ArchiveListEntry)

//////////////////////////////////////////////////////////////////////////
// UUI_ArchiveListEntryBase
//////////////////////////////////////////////////////////////////////////

void UUI_ArchiveListEntryBase::NativePreConstruct()
{
	Super::NativePreConstruct();
}

void UUI_ArchiveListEntryBase::NativeOnEntryReleased()
{
	StopAllAnimations();

	if (Background)
	{
		Background->StopAllAnimations();
	}
}

FReply UUI_ArchiveListEntryBase::NativeOnFocusReceived(const FGeometry& InGeometry, const FFocusEvent& InFocusEvent)
{
	const UCommonInputSubsystem* InputSubsystem = GetInputSubsystem();
	if (InputSubsystem && InputSubsystem->GetCurrentInputType() == ECommonInputType::Gamepad)
	{
		if (UWidget* PrimaryFocus = GetPrimaryGamepadFocusWidget())
		{
			TSharedPtr<SWidget> WidgetToFocus = PrimaryFocus->GetCachedWidget();
			if (WidgetToFocus.IsValid())
			{
				return FReply::Handled().SetUserFocus(WidgetToFocus.ToSharedRef(), InFocusEvent.GetCause());
			}
		}
	}

	return FReply::Unhandled();
}

void UUI_ArchiveListEntryBase::SetEntryStyle()
{
}

//////////////////////////////////////////////////////////////////////////
// UUI_ArchiveListEntry_Item
//////////////////////////////////////////////////////////////////////////

void UUI_ArchiveListEntry_Item::NativeOnListItemObjectSet(UObject* ListItemObject)
{
	Super::NativeOnListItemObjectSet(ListItemObject);

	ArchiveEntry = Cast<UArchiveEntry_Item>(ListItemObject);

	SetEntryStyle();
}

void UUI_ArchiveListEntry_Item::NativeOnItemSelectionChanged(bool bIsSelected)
{
	Super::NativeOnItemSelectionChanged(bIsSelected);

	if (bIsSelected)
	{
		ArchiveEntry->OperationArchiveChanged();
	}
}

FReply UUI_ArchiveListEntry_Item::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	OnBeginSelected();
	OnArchiveListEntryClicked.ExecuteIfBound(ArchiveEntry);
	ArchiveEntry->OperationArchiveChanged();

	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

void UUI_ArchiveListEntry_Item::SetEntryStyle()
{
	Super::SetEntryStyle();

	if (!ArchiveEntry || !ArchiveEntry->IsValid())
		return;

	Text_WorldName->SetText(FText::FromString(ArchiveEntry->GetWorldName()));
	Text_LastUpdateTime->SetText(FText::FromString(ArchiveEntry->GetLastUpdateTimeString()));
}

//////////////////////////////////////////////////////////////////////////
// UUI_ArchiveListEntry_NewGame
//////////////////////////////////////////////////////////////////////////

void UUI_ArchiveListEntry_NewGame::NativeOnListItemObjectSet(UObject* ListItemObject)
{
	Super::NativeOnListItemObjectSet(ListItemObject);

	ArchiveEntry = Cast<UArchiveEntry_NewGame>(ListItemObject);

	SetEntryStyle();
}

FReply UUI_ArchiveListEntry_NewGame::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if (UOrionArchiveManagerSubsystem* ArchiveManager = GetGameInstance()->GetSubsystem<UOrionArchiveManagerSubsystem>())
	{
		ArchiveManager->NewGame(nullptr);
	}

	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}
