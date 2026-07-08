/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_PopupScreen.h"

#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetTree.h"
#include "CommonTextBlock.h"
#include "Components/Border.h"
#include "Components/Button.h"
#include "Components/HorizontalBox.h"
#include "Components/HorizontalBoxSlot.h"
#include "Components/Overlay.h"
#include "Components/OverlaySlot.h"
#include "Components/PanelWidget.h"
#include "Components/ScrollBox.h"
#include "Components/SizeBox.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
#include "Engine/World.h"
#include "Foundation/UI_PopupContentWidget.h"
#include "GameUILogChannels.h"
#include "InputCoreTypes.h"
#include "TimerManager.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_PopupScreen)

#define LOCTEXT_NAMESPACE "UIPopupScreen"

void UUI_PopupActionBinding::Initialize(UUI_PopupScreen* InOwnerScreen, FName InActionId)
{
	OwnerScreen = InOwnerScreen;
	ActionId = InActionId;
}

void UUI_PopupActionBinding::HandleClicked()
{
	if (OwnerScreen)
	{
		OwnerScreen->ClosePopupWithActionId(ActionId);
	}
}

UUI_PopupScreen::UUI_PopupScreen(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	InputConfig = EWidgetInputMode::Menu;
	bIsSecondBackHandler = true;
}

void UUI_PopupScreen::SetupPopup(UGameUIPopupDescriptor* Descriptor, FGameUIPopupResultDelegate ResultCallback)
{
	ActiveDescriptor = Descriptor;
	OnResultCallback = ResultCallback;
	bHasPendingResult = false;
	bResultBroadcast = false;

	if (ActiveDescriptor)
	{
		ActiveDescriptor->EnsureDefaultAction();
	}

	ApplyDescriptor();
}

void UUI_PopupScreen::RequestDismiss(ECommonMessagingResult DismissResult)
{
	if (!ActiveDescriptor || !ActiveDescriptor->bDismissible)
	{
		return;
	}

	FGameUIPopupResult Result;
	Result.Descriptor = ActiveDescriptor;
	Result.ActionId = TEXT("Dismiss");
	Result.CommonResult = DismissResult;
	Result.bDismissedWithoutAction = true;

	PrepareResultAndDeactivate(Result);
}

void UUI_PopupScreen::ClosePopupWithActionId(FName ActionId)
{
	if (!ActiveDescriptor)
	{
		return;
	}

	const FGameUIPopupAction* Action = ActiveDescriptor->Actions.FindByPredicate([ActionId](const FGameUIPopupAction& Candidate)
	{
		return Candidate.ActionId == ActionId;
	});

	if (!Action)
	{
		return;
	}

	if (!Action->bClosesPopup)
	{
		OnPopupActionInvoked(ActiveDescriptor, *Action);
		return;
	}

	FGameUIPopupResult Result;
	Result.Descriptor = ActiveDescriptor;
	Result.ActionId = Action->ActionId;
	Result.ActionTag = Action->ActionTag;
	Result.CommonResult = Action->CommonResult;

	PrepareResultAndDeactivate(Result);
}

TSharedRef<SWidget> UUI_PopupScreen::RebuildWidget()
{
	BuildDefaultWidgetTreeIfNeeded();

	return Super::RebuildWidget();
}

void UUI_PopupScreen::NativePreConstruct()
{
	BuildDefaultWidgetTreeIfNeeded();

	Super::NativePreConstruct();

	ApplyDescriptor();
}

void UUI_PopupScreen::NativeConstruct()
{
	Super::NativeConstruct();

	if (Border_TapToCloseZone)
	{
		Border_TapToCloseZone->OnMouseButtonDownEvent.BindDynamic(this, &ThisClass::HandleTapToCloseZoneMouseButtonDown);
	}

	ApplyAutoDismiss();
}

void UUI_PopupScreen::NativeDestruct()
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(AutoDismissTimerHandle);
	}

	Super::NativeDestruct();
}

void UUI_PopupScreen::NativeOnDeactivated()
{
	Super::NativeOnDeactivated();

	if (!bHasPendingResult && ActiveDescriptor)
	{
		FGameUIPopupResult Result;
		Result.Descriptor = ActiveDescriptor;
		Result.ActionId = TEXT("Killed");
		Result.CommonResult = ECommonMessagingResult::Killed;
		Result.bDismissedWithoutAction = true;
		PendingResult = Result;
		bHasPendingResult = true;
	}

	BroadcastPreparedResult();
}

FEventReply UUI_PopupScreen::HandleTapToCloseZoneMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent)
{
	FEventReply Reply;
	Reply.NativeReply = FReply::Unhandled();

	if (ActiveDescriptor && ActiveDescriptor->bTapOutsideToDismiss && (MouseEvent.IsTouchEvent() || MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton))
	{
		RequestDismiss(ECommonMessagingResult::Declined);
		Reply.NativeReply = FReply::Handled();
	}

	return Reply;
}

void UUI_PopupScreen::BuildDefaultWidgetTreeIfNeeded()
{
	if (!WidgetTree || WidgetTree->RootWidget)
	{
		return;
	}

	UOverlay* Root = WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass(), TEXT("GeneratedPopupRoot"));
	WidgetTree->RootWidget = Root;

	Border_TapToCloseZone = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("Border_TapToCloseZone"));
	Border_TapToCloseZone->SetBrushColor(FLinearColor(0.0f, 0.0f, 0.0f, 0.58f));
	if (UOverlaySlot* TapZoneSlot = Root->AddChildToOverlay(Border_TapToCloseZone))
	{
		TapZoneSlot->SetHorizontalAlignment(HAlign_Fill);
		TapZoneSlot->SetVerticalAlignment(VAlign_Fill);
	}

	SizeBox_Window = WidgetTree->ConstructWidget<USizeBox>(USizeBox::StaticClass(), TEXT("SizeBox_Window"));
	SizeBox_Window->SetMinDesiredWidth(480.0f);
	SizeBox_Window->SetMaxDesiredWidth(880.0f);
	if (UOverlaySlot* WindowSlot = Root->AddChildToOverlay(SizeBox_Window))
	{
		WindowSlot->SetHorizontalAlignment(HAlign_Center);
		WindowSlot->SetVerticalAlignment(VAlign_Center);
	}

	UBorder* WindowBorder = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("GeneratedWindowBorder"));
	WindowBorder->SetBrushColor(FLinearColor(0.025f, 0.026f, 0.03f, 0.98f));
	WindowBorder->SetPadding(FMargin(28.0f, 24.0f));
	SizeBox_Window->AddChild(WindowBorder);

	UVerticalBox* WindowLayout = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("GeneratedWindowLayout"));
	WindowBorder->SetContent(WindowLayout);

	Text_Title = WidgetTree->ConstructWidget<UCommonTextBlock>(UCommonTextBlock::StaticClass(), TEXT("Text_Title"));
	Text_Title->SetText(LOCTEXT("DefaultPopupTitle", "Popup"));
	Text_Title->SetColorAndOpacity(FSlateColor(FLinearColor::White));
	if (UVerticalBoxSlot* TitleSlot = WindowLayout->AddChildToVerticalBox(Text_Title))
	{
		TitleSlot->SetPadding(FMargin(0.0f, 0.0f, 0.0f, 8.0f));
	}

	Text_Subtitle = WidgetTree->ConstructWidget<UCommonTextBlock>(UCommonTextBlock::StaticClass(), TEXT("Text_Subtitle"));
	Text_Subtitle->SetAutoWrapText(true);
	Text_Subtitle->SetColorAndOpacity(FSlateColor(FLinearColor(0.78f, 0.82f, 0.88f, 1.0f)));
	if (UVerticalBoxSlot* SubtitleSlot = WindowLayout->AddChildToVerticalBox(Text_Subtitle))
	{
		SubtitleSlot->SetPadding(FMargin(0.0f, 0.0f, 0.0f, 12.0f));
	}

	UScrollBox* ScrollBox = WidgetTree->ConstructWidget<UScrollBox>(UScrollBox::StaticClass(), TEXT("GeneratedContentScrollBox"));
	if (UVerticalBoxSlot* ScrollSlot = WindowLayout->AddChildToVerticalBox(ScrollBox))
	{
		ScrollSlot->SetPadding(FMargin(0.0f, 0.0f, 0.0f, 18.0f));
		ScrollSlot->SetSize(FSlateChildSize(ESlateSizeRule::Fill));
	}

	UVerticalBox* ContentLayout = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("GeneratedContentLayout"));
	ScrollBox->AddChild(ContentLayout);

	Panel_Content = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("Panel_Content"));
	ContentLayout->AddChildToVerticalBox(Panel_Content);

	Panel_Actions = WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass(), TEXT("Panel_Actions"));
	if (UVerticalBoxSlot* ActionSlot = WindowLayout->AddChildToVerticalBox(Panel_Actions))
	{
		ActionSlot->SetHorizontalAlignment(HAlign_Right);
	}
}

void UUI_PopupScreen::ApplyDescriptor()
{
	if (!ActiveDescriptor)
	{
		return;
	}

	ActiveDescriptor->EnsureDefaultAction();

	if (SizeBox_Window)
	{
		if (ActiveDescriptor->PreferredSize.X > 0.0f)
		{
			SizeBox_Window->SetWidthOverride(ActiveDescriptor->PreferredSize.X);
		}
		else
		{
			SizeBox_Window->ClearWidthOverride();
		}

		if (ActiveDescriptor->PreferredSize.Y > 0.0f)
		{
			SizeBox_Window->SetHeightOverride(ActiveDescriptor->PreferredSize.Y);
		}
		else
		{
			SizeBox_Window->ClearHeightOverride();
		}
	}

	ApplyShellContent();
	ApplyContentWidget();
	ApplyActionContent();
	ApplyAutoDismiss();

	OnPopupDescriptorApplied(ActiveDescriptor);
}

void UUI_PopupScreen::ApplyShellContent()
{
	if (!ActiveDescriptor)
	{
		return;
	}

	if (Text_Title)
	{
		Text_Title->SetText(ActiveDescriptor->Title);
		SetOptionalWidgetVisibility(Text_Title, !ActiveDescriptor->Title.IsEmpty());
	}

	if (Text_Subtitle)
	{
		Text_Subtitle->SetText(ActiveDescriptor->Subtitle);
		SetOptionalWidgetVisibility(Text_Subtitle, !ActiveDescriptor->Subtitle.IsEmpty());
	}
}

void UUI_PopupScreen::ApplyContentWidget()
{
	if (!Panel_Content || !ActiveDescriptor)
	{
		return;
	}

	Panel_Content->ClearChildren();
	GeneratedContentInstances.Reset();

	UUserWidget* ContentWidget = CreatePopupContentWidget();
	if (!ContentWidget)
	{
		SetOptionalWidgetVisibility(Panel_Content, false);
		return;
	}

	GeneratedContentInstances.Add(ContentWidget);
	ContentWidget->TakeWidget();
	Panel_Content->AddChild(ContentWidget);
	SetOptionalWidgetVisibility(Panel_Content, true);

	if (UUI_PopupContentWidget* PopupContent = Cast<UUI_PopupContentWidget>(ContentWidget))
	{
		PopupContent->SetupPopupContent(ActiveDescriptor);
	}
}

UUserWidget* UUI_PopupScreen::CreatePopupContentWidget()
{
	if (!ActiveDescriptor)
	{
		return nullptr;
	}

	TSubclassOf<UUserWidget> ContentClass = nullptr;
	if (ActiveDescriptor->ContentKind == EGameUIPopupContentKind::CustomWidget && ActiveDescriptor->CustomContentWidgetClass)
	{
		ContentClass = ActiveDescriptor->CustomContentWidgetClass;
	}
	else
	{
		ContentClass = ActiveDescriptor->GetLoadedContentWidgetClass();
	}

	if (!ContentClass)
	{
		UE_LOG(LogGameUI, Warning, TEXT("Popup content widget class failed to resolve for popup %s."),
			*ActiveDescriptor->PopupId.ToString());
		return nullptr;
	}

	if (APlayerController* OwningPlayer = GetOwningPlayer())
	{
		return CreateWidget<UUserWidget>(OwningPlayer, ContentClass);
	}

	if (UWorld* World = GetWorld())
	{
		return CreateWidget<UUserWidget>(World, ContentClass);
	}

	return nullptr;
}

void UUI_PopupScreen::ApplyActionContent()
{
	if (!Panel_Actions || !ActiveDescriptor)
	{
		return;
	}

	Panel_Actions->ClearChildren();
	GeneratedActionBindings.Reset();

	for (const FGameUIPopupAction& Action : ActiveDescriptor->Actions)
	{
		UButton* Button = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass());
		UCommonTextBlock* ButtonText = WidgetTree->ConstructWidget<UCommonTextBlock>(UCommonTextBlock::StaticClass());
		ButtonText->SetText(Action.DisplayText);
		ButtonText->SetColorAndOpacity(FSlateColor(FLinearColor::White));
		ButtonText->SetMargin(FMargin(18.0f, 8.0f));
		Button->AddChild(ButtonText);

		UUI_PopupActionBinding* Binding = NewObject<UUI_PopupActionBinding>(this);
		Binding->Initialize(this, Action.ActionId);
		Button->OnClicked.AddDynamic(Binding, &UUI_PopupActionBinding::HandleClicked);
		GeneratedActionBindings.Add(Binding);

		UPanelSlot* PanelSlot = Panel_Actions->AddChild(Button);
		if (UHorizontalBoxSlot* HorizontalSlot = Cast<UHorizontalBoxSlot>(PanelSlot))
		{
			HorizontalSlot->SetPadding(FMargin(8.0f, 0.0f, 0.0f, 0.0f));
		}
	}

	SetOptionalWidgetVisibility(Panel_Actions, !ActiveDescriptor->Actions.IsEmpty());
}

void UUI_PopupScreen::ApplyAutoDismiss()
{
	if (!ActiveDescriptor)
	{
		return;
	}

	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(AutoDismissTimerHandle);

		if (ActiveDescriptor->AutoDismissSeconds > 0.0f)
		{
			World->GetTimerManager().SetTimer(
				AutoDismissTimerHandle,
				FTimerDelegate::CreateUObject(this, &ThisClass::RequestDismiss, ECommonMessagingResult::Cancelled),
				ActiveDescriptor->AutoDismissSeconds,
				false);
		}
	}
}

void UUI_PopupScreen::ClearGeneratedContent()
{
	GeneratedActionBindings.Reset();
	GeneratedContentInstances.Reset();
}

void UUI_PopupScreen::PrepareResultAndDeactivate(const FGameUIPopupResult& Result)
{
	if (bResultBroadcast)
	{
		return;
	}

	PendingResult = Result;
	bHasPendingResult = true;
	OnPopupResultPrepared(ActiveDescriptor, PendingResult);

	DeactivateWidget();
}

void UUI_PopupScreen::BroadcastPreparedResult()
{
	if (!bHasPendingResult || bResultBroadcast)
	{
		return;
	}

	bResultBroadcast = true;

	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(AutoDismissTimerHandle);
	}

	if (ActiveDescriptor)
	{
		ActiveDescriptor->BroadcastResult(PendingResult);
	}

	if (OnResultCallback.IsBound())
	{
		OnResultCallback.Execute(ActiveDescriptor, PendingResult);
	}

	ClearGeneratedContent();
	ActiveDescriptor = nullptr;
	OnResultCallback.Unbind();
}

void UUI_PopupScreen::SetOptionalWidgetVisibility(UWidget* Widget, bool bVisible) const
{
	if (Widget)
	{
		Widget->SetVisibility(bVisible ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
	}
}

#undef LOCTEXT_NAMESPACE
