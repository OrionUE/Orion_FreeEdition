/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UI_ActivatableWidget.h"

#include "CommonUITypes.h"
#include "ICommonInputModule.h"
#include "Common/GameUIInputActionDomainTable.h"
#include "Editor/WidgetCompilerLog.h"
#include "Input/CommonUIInputTypes.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(UI_ActivatableWidget)

#define LOCTEXT_NAMESPACE "GameUI"

UUI_ActivatableWidget::UUI_ActivatableWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

TOptional<FUIInputConfig> UUI_ActivatableWidget::GetDesiredInputConfig() const
{
	switch (InputConfig)
	{
	case EWidgetInputMode::GameAndMenu:
		return FUIInputConfig(ECommonInputMode::All, GameMouseCaptureMode);
	case EWidgetInputMode::Game:
		return FUIInputConfig(ECommonInputMode::Game, GameMouseCaptureMode);
	case EWidgetInputMode::Menu:
		return FUIInputConfig(ECommonInputMode::Menu, EMouseCaptureMode::NoCapture);
	case EWidgetInputMode::Default:
	default:
		return TOptional<FUIInputConfig>();
	}
}

#if WITH_EDITOR
void UUI_ActivatableWidget::ValidateCompiledWidgetTree(const UWidgetTree& BlueprintWidgetTree, class IWidgetCompilerLog& CompileLog) const
{
	Super::ValidateCompiledWidgetTree(BlueprintWidgetTree, CompileLog);

	if (!GetClass()->IsFunctionImplementedInScript(GET_FUNCTION_NAME_CHECKED(UUI_ActivatableWidget, BP_GetDesiredFocusTarget)))
	{
		if (GetParentNativeClass(GetClass()) == UUI_ActivatableWidget::StaticClass())
		{
			CompileLog.Warning(LOCTEXT("ValidateGetDesiredFocusTarget_Warning", "GetDesiredFocusTarget wasn't implemented, you're going to have trouble using gamepads on this screen."));
		}
		else
		{
			//TODO: Note for now, because we can't guarantee it isn't implemented in a native subclass of this one.
			CompileLog.Note(LOCTEXT("ValidateGetDesiredFocusTarget_Note", "GetDesiredFocusTarget wasn't implemented, you're going to have trouble using gamepads on this screen.  If it was implemented in the native base class you can ignore this message."));
		}
	}
}
#endif

void UUI_ActivatableWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (bIsSecondBackHandler)
	{
		if (UGameUIInputActionDomainTable* InputActionDomainTable = Cast<UGameUIInputActionDomainTable>(ICommonInputModule::GetSettings().GetActionDomainTable()))
		{
			if (CommonUI::IsEnhancedInputSupportEnabled() && ICommonInputModule::GetSettings().GetEnhancedInputBackAction())
			{
				FBindUIActionArgs BindArgs(InputActionDomainTable->EnhancedInputSecondBackAction, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleBackAction));
				BindArgs.bDisplayInActionBar = bIsSecondBackActionDisplayedInActionBar;
				BindArgs.OverrideDisplayName = OverrideBackActionDisplayName;

				SecondBackActionHandle = RegisterUIActionBinding(BindArgs);
			}
			else if (!InputActionDomainTable->SecondBackAction.IsNull())
			{
				if (FCommonInputActionDataBase* SecondBackInputActionData = InputActionDomainTable->SecondBackAction.GetRow<FCommonInputActionDataBase>(TEXT("")))
				{
					const FCommonInputTypeInfo SecondBackInputTypeInfo = SecondBackInputActionData->GetInputTypeInfo(ECommonInputType::MouseAndKeyboard, FCommonInputDefaults::GamepadGeneric);
					if (SecondBackInputTypeInfo.GetKey().IsMouseButton())
					{
						bRightMouseButtonBackAction = true;
					}

					FBindUIActionArgs BindArgs(InputActionDomainTable->SecondBackAction, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleBackAction));
					BindArgs.bDisplayInActionBar = bIsSecondBackActionDisplayedInActionBar;
					BindArgs.OverrideDisplayName = OverrideBackActionDisplayName;

					SecondBackActionHandle = RegisterUIActionBinding(BindArgs);
				}
			}
		}
	}
}

void UUI_ActivatableWidget::NativeDestruct()
{
	Super::NativeDestruct();

	if (SecondBackActionHandle.IsValid())
	{
		SecondBackActionHandle.Unregister();
	}
}

FReply UUI_ActivatableWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if (bRightMouseButtonBackAction && InMouseEvent.IsMouseButtonDown(EKeys::RightMouseButton))
	{
		HandleBackAction();
	}

	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

#undef LOCTEXT_NAMESPACE
