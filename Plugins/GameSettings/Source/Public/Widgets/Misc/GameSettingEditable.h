// Copyright (c) Ideality Century, Inc. All Rights Reserved.

#pragma once

#include "CommonActivatableWidget.h"
#include "CommonButtonBase.h"

#include "GameSettingEditable.generated.h"

class UGameSettingListEntrySetting_Editable;

//////////////////////////////////////////////////////////////////////////
// UGameSettingEditable
//////////////////////////////////////////////////////////////////////////

UCLASS(Abstract, meta = (Category = "Settings", DisableNativeTick))
class GAMESETTINGS_API UGameSettingEditable : public UCommonButtonBase
{
	GENERATED_BODY()

public:
	UGameSettingEditable(const FObjectInitializer& Initializer);
	
	virtual void SetValue(const FString& InValue);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void SetDisplayValue(const FString& InValue);
};

//////////////////////////////////////////////////////////////////////////
// UGameSettingEditable_FormulaBar
//////////////////////////////////////////////////////////////////////////

UCLASS(Abstract, meta = (Category = "Settings", DisableNativeTick))
class UGameSettingEditable_FormulaBar : public UCommonActivatableWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;
	virtual TOptional<FUIInputConfig> GetDesiredInputConfig() const override;

	void OnClickedConfirmButton();
	void OnClickedCancelButton();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	FString GetSettingValueToString();

public:
	UFUNCTION(BlueprintCallable)
	void SetTargetSetting(UGameSettingListEntrySetting_Editable* InSetting);

protected:
	TWeakObjectPtr<UGameSettingListEntrySetting_Editable> TargetSetting;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	TObjectPtr<UCommonButtonBase> ConfirmButton;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	TObjectPtr<UCommonButtonBase> CancelButton;
};
