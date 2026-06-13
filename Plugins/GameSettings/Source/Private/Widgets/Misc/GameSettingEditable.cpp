// Copyright (c) Ideality Century, Inc. All Rights Reserved.

#include "Widgets/Misc/GameSettingEditable.h"

#include "Widgets/GameSettingListEntry.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameSettingEditable)

//////////////////////////////////////////////////////////////////////////
// UGameSettingEditable
//////////////////////////////////////////////////////////////////////////

UGameSettingEditable::UGameSettingEditable(const FObjectInitializer& Initializer)
	: Super(Initializer)
{
}

void UGameSettingEditable::SetValue(const FString& InValue)
{
	SetDisplayValue(InValue);
}

//////////////////////////////////////////////////////////////////////////
// UGameSettingEditable_FormulaBar
//////////////////////////////////////////////////////////////////////////

void UGameSettingEditable_FormulaBar::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	ConfirmButton->OnClicked().AddUObject(this, &ThisClass::OnClickedConfirmButton);
	CancelButton->OnClicked().AddUObject(this, &ThisClass::OnClickedCancelButton);
}

void UGameSettingEditable_FormulaBar::NativeConstruct()
{
	Super::NativeConstruct();

	SetIsFocusable(true);
}

TOptional<FUIInputConfig> UGameSettingEditable_FormulaBar::GetDesiredInputConfig() const
{
	return FUIInputConfig(ECommonInputMode::Menu, EMouseCaptureMode::NoCapture);
}

void UGameSettingEditable_FormulaBar::OnClickedConfirmButton()
{
	if (TargetSetting.IsValid())
	{
		TargetSetting->SetValue(GetSettingValueToString());
	}

	DeactivateWidget();
}

void UGameSettingEditable_FormulaBar::OnClickedCancelButton()
{
	DeactivateWidget();
}

void UGameSettingEditable_FormulaBar::SetTargetSetting(UGameSettingListEntrySetting_Editable* InSetting)
{
	TargetSetting = InSetting;
}
