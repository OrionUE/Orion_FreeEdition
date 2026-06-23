/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_TabListWidgetBase.h"

#include "Blueprint/WidgetTree.h"
#include "CommonAnimatedSwitcher.h"
#include "CommonActionWidget.h"
#include "CommonButtonBase.h"
#include "CommonInputSubsystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_TabListWidgetBase)

void UUI_TabListWidgetBase::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	if (UCommonInputSubsystem* InputSubsystem = GetInputSubsystem())
	{
		InputMethodChangedDelegateHandle = InputSubsystem->OnInputMethodChangedNative.AddUObject(this, &ThisClass::HandleInputMethodChanged);
	}
}

void UUI_TabListWidgetBase::NativeConstruct()
{
	Super::NativeConstruct();

	SetupTabs();
	RefreshChildActionWidgetVisibility();
}

void UUI_TabListWidgetBase::NativeDestruct()
{
	if (UCommonInputSubsystem* InputSubsystem = GetInputSubsystem())
	{
		InputSubsystem->OnInputMethodChangedNative.Remove(InputMethodChangedDelegateHandle);
		InputMethodChangedDelegateHandle.Reset();
	}

	for (FTabDescriptor& TabInfo : PreregisteredTabInfoArray)
	{
		if (TabInfo.CreatedTabContentWidget)
		{
			TabInfo.CreatedTabContentWidget->RemoveFromParent();
			TabInfo.CreatedTabContentWidget = nullptr;
		}
	}
	
	Super::NativeDestruct();
}

void UUI_TabListWidgetBase::HandlePreLinkedSwitcherChanged()
{
	for (const FTabDescriptor& TabInfo : PreregisteredTabInfoArray)
	{
		// Remove tab content widget from linked switcher, as it is being disassociated
		if (TabInfo.CreatedTabContentWidget)
		{
			TabInfo.CreatedTabContentWidget->RemoveFromParent();
		}
	}

	Super::HandlePreLinkedSwitcherChanged();
}

void UUI_TabListWidgetBase::HandlePostLinkedSwitcherChanged()
{
	if (!IsDesignTime() && GetCachedWidget().IsValid())
	{
		// Don't bother making tabs if we're in the designer or haven't been constructed yet
		SetupTabs();
	}

	Super::HandlePostLinkedSwitcherChanged();
}

void UUI_TabListWidgetBase::HandleTabCreation_Implementation(FName TabId, UCommonButtonBase* TabButton)
{
	FTabDescriptor* TabInfoPtr = nullptr;
	
	FTabDescriptor TabInfo;
	if (GetPreregisteredTabInfo(TabId, TabInfo))
	{
		TabInfoPtr = &TabInfo;
	}
	else
	{
		TabInfoPtr = PendingTabLabelInfoMap.Find(TabId);
	}
	
	if (TabButton->GetClass()->ImplementsInterface(UUI_TabButtonInterface::StaticClass()))
	{
		if (ensureMsgf(TabInfoPtr, TEXT("A tab button was created with id %s but no label info was specified. RegisterDynamicTab should be used over RegisterTab to provide label info."), *TabId.ToString()))
		{
			IUI_TabButtonInterface::Execute_SetTabLabelInfo(TabButton, *TabInfoPtr);
		}
	}

	PendingTabLabelInfoMap.Remove(TabId);
}

bool UUI_TabListWidgetBase::GetPreregisteredTabInfo(const FName TabNameId, FTabDescriptor& OutTabInfo)
{
	const FTabDescriptor* const FoundTabInfo = PreregisteredTabInfoArray.FindByPredicate([&](const FTabDescriptor& TabInfo) -> bool
	{
		return TabInfo.TabId == TabNameId;
	});

	if (!FoundTabInfo)
	{
		return false;
	}

	OutTabInfo = *FoundTabInfo;
	return true;
}

void UUI_TabListWidgetBase::SetTabHiddenState(FName TabNameId, bool bHidden)
{
	for (FTabDescriptor& TabInfo : PreregisteredTabInfoArray)
	{
		if (TabInfo.TabId == TabNameId)
		{
			TabInfo.bHidden = bHidden;
			break;
		}
	}
}

void UUI_TabListWidgetBase::HandleInputMethodChanged(ECommonInputType NewInputMethod)
{
	RefreshChildActionWidgetVisibility(NewInputMethod);
}

void UUI_TabListWidgetBase::RefreshChildActionWidgetVisibility()
{
	const UCommonInputSubsystem* InputSubsystem = GetInputSubsystem();
	RefreshChildActionWidgetVisibility(InputSubsystem ? InputSubsystem->GetCurrentInputType() : ECommonInputType::Count);
}

void UUI_TabListWidgetBase::RefreshChildActionWidgetVisibility(ECommonInputType CurrentInputType)
{
	if (!WidgetTree)
	{
		return;
	}

	const bool bHideKeyboardMouseActionWidgets = CurrentInputType == ECommonInputType::MouseAndKeyboard;
	WidgetTree->ForEachWidget([bHideKeyboardMouseActionWidgets](UWidget* Widget)
	{
		if (UCommonActionWidget* ActionWidget = Cast<UCommonActionWidget>(Widget))
		{
			ActionWidget->SetHidden(bHideKeyboardMouseActionWidgets);
		}
	});
}

bool UUI_TabListWidgetBase::RegisterDynamicTab(const FTabDescriptor& TabDescriptor)
{
	// If it's hidden just ignore it.
	if (TabDescriptor.bHidden)
	{
		return true;
	}
	
	PendingTabLabelInfoMap.Add(TabDescriptor.TabId, TabDescriptor);

	return RegisterTab(TabDescriptor.TabId, TabDescriptor.TabButtonType, TabDescriptor.CreatedTabContentWidget);
}

bool UUI_TabListWidgetBase::IsFirstTabActive() const
{
	if (PreregisteredTabInfoArray.Num() > 0)
	{
		return GetActiveTab() == PreregisteredTabInfoArray[0].TabId;
	}

	return false;
}

bool UUI_TabListWidgetBase::IsLastTabActive() const
{
	if (PreregisteredTabInfoArray.Num() > 0)
	{
		return GetActiveTab() == PreregisteredTabInfoArray.Last().TabId;
	}

	return false;
}

bool UUI_TabListWidgetBase::IsTabVisible(FName TabId)
{
	if (const UCommonButtonBase* Button = GetTabButtonBaseByID(TabId))
	{
		const ESlateVisibility TabVisibility = Button->GetVisibility();
		return (TabVisibility == ESlateVisibility::Visible ||
			TabVisibility == ESlateVisibility::HitTestInvisible ||
			TabVisibility == ESlateVisibility::SelfHitTestInvisible);
	}

	return false;
}

int32 UUI_TabListWidgetBase::GetVisibleTabCount()
{
	int32 Result = 0;
	const int32 TabCount = GetTabCount();
	for ( int32 Index = 0; Index < TabCount; Index++ )
	{
		if (IsTabVisible(GetTabIdAtIndex(Index)))
		{
			Result++;
		}
	}

	return Result;
}

void UUI_TabListWidgetBase::SetupTabs()
{
	for (FTabDescriptor& TabInfo : PreregisteredTabInfoArray)
	{
		if (TabInfo.bHidden)
		{
			continue;
		}

		// If the tab content hasn't been created already, create it.
		if (!TabInfo.CreatedTabContentWidget && TabInfo.TabContentType)
		{
			TabInfo.CreatedTabContentWidget = CreateWidget<UCommonUserWidget>(GetOwningPlayer(), TabInfo.TabContentType);
			OnTabContentCreatedNative.Broadcast(TabInfo.TabId, Cast<UCommonUserWidget>(TabInfo.CreatedTabContentWidget));
			OnTabContentCreated.Broadcast(TabInfo.TabId, Cast<UCommonUserWidget>(TabInfo.CreatedTabContentWidget));
		}

		if (UCommonAnimatedSwitcher* CurrentLinkedSwitcher = GetLinkedSwitcher())
		{
			// Add the tab content to the newly linked switcher.
			if (!CurrentLinkedSwitcher->HasChild(TabInfo.CreatedTabContentWidget))
			{
				CurrentLinkedSwitcher->AddChild(TabInfo.CreatedTabContentWidget);
			}
		}

		// If the tab is not already registered, register it.
		if (GetTabButtonBaseByID(TabInfo.TabId) == nullptr)
		{
			RegisterTab(TabInfo.TabId, TabInfo.TabButtonType, TabInfo.CreatedTabContentWidget);
		}
	}
}
