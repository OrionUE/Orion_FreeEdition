/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CommonButtonBase.h"
#include "CommonUserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"

#include "UI_ArchiveListEntry.generated.h"

class UArchiveEntry;
class UCommonTextBlock;
class UArchiveEntry_NewGame;
class UArchiveEntry_Item;

DECLARE_DELEGATE_OneParam(FOnArchiveListEntryClicked, UArchiveEntry* /*SelectedEntry*/);

//////////////////////////////////////////////////////////////////////////
// UUI_ArchiveListEntryBase
//////////////////////////////////////////////////////////////////////////

UCLASS(Abstract, NotBlueprintable, meta=(DisableNativeTick))
class UUI_ArchiveListEntryBase : public UCommonUserWidget, public IUserObjectListEntry
{
	GENERATED_BODY()

protected:
	virtual void NativePreConstruct() override;
	virtual void NativeOnEntryReleased() override;

	virtual FReply NativeOnFocusReceived(const FGeometry& InGeometry, const FFocusEvent& InFocusEvent) override;

	UFUNCTION(BlueprintImplementableEvent)
	UWidget* GetPrimaryGamepadFocusWidget();

	virtual void SetEntryStyle();

public:
	UFUNCTION(BlueprintImplementableEvent)
	void OnBeginSelected();

	UFUNCTION(BlueprintImplementableEvent)
	void OnEndSelected();

public:
	FOnArchiveListEntryClicked OnArchiveListEntryClicked;

private:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional, BlueprintProtected=true, AllowPrivateAccess=true))
	TObjectPtr<UUserWidget> Background;
};

//////////////////////////////////////////////////////////////////////////
// UUI_ArchiveListEntry_Item
//////////////////////////////////////////////////////////////////////////

UCLASS(Abstract, Blueprintable, meta=(DisableNativeTick, DisplayName="Archive List Entry"))
class UUI_ArchiveListEntry_Item : public UUI_ArchiveListEntryBase
{
	GENERATED_BODY()

protected:
	virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;
	virtual void NativeOnItemSelectionChanged(bool bIsSelected) override;
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

	virtual void SetEntryStyle() override;

protected:
	UPROPERTY()
	TObjectPtr<UArchiveEntry_Item> ArchiveEntry;

private:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget, BlueprintProtected=true, AllowPrivateAccess=true))
	TObjectPtr<UCommonTextBlock> Text_WorldName;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidget, BlueprintProtected=true, AllowPrivateAccess=true))
	TObjectPtr<UCommonTextBlock> Text_LastUpdateTime;
};

//////////////////////////////////////////////////////////////////////////
// UUI_ArchiveListEntry_NewGame
//////////////////////////////////////////////////////////////////////////

UCLASS(Abstract, Blueprintable, meta=(DisableNativeTick, DisplayName="Archive List Entry New Game"))
class UUI_ArchiveListEntry_NewGame : public UUI_ArchiveListEntryBase
{
	GENERATED_BODY()

protected:
	virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

protected:
	UPROPERTY()
	TObjectPtr<UArchiveEntry_NewGame> ArchiveEntry;
};
