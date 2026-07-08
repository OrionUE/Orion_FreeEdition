/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Subsystem/GameUIPopupTypes.h"
#include "UI_ActivatableWidget.h"

#include "UI_PopupScreen.generated.h"

class UBorder;
class UCommonTextBlock;
class UPanelWidget;
class USizeBox;
class UUI_PopupScreen;
class UUserWidget;
class UWidget;
class SWidget;

UCLASS()
class UUI_PopupActionBinding : public UObject
{
	GENERATED_BODY()

public:
	void Initialize(UUI_PopupScreen* InOwnerScreen, FName InActionId);

	UFUNCTION()
	void HandleClicked();

private:
	UPROPERTY()
	TObjectPtr<UUI_PopupScreen> OwnerScreen;

	FName ActionId;
};

/**
 * Data-driven modal popup shell that hosts pluggable popup content widgets.
 */
UCLASS(BlueprintType, Blueprintable, meta=(DisplayName="Popup Screen Base"))
class GAMEUI_API UUI_PopupScreen : public UUI_ActivatableWidget
{
	GENERATED_BODY()

public:
	UUI_PopupScreen(const FObjectInitializer& ObjectInitializer);

	void SetupPopup(UGameUIPopupDescriptor* Descriptor, FGameUIPopupResultDelegate ResultCallback);
	void RequestDismiss(ECommonMessagingResult DismissResult);
	void ClosePopupWithActionId(FName ActionId);

protected:
	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void NativePreConstruct() override;
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativeOnDeactivated() override;

	UFUNCTION(BlueprintImplementableEvent, Category="Game UI|Popup")
	void OnPopupDescriptorApplied(UGameUIPopupDescriptor* Descriptor);

	UFUNCTION(BlueprintImplementableEvent, Category="Game UI|Popup")
	void OnPopupActionInvoked(UGameUIPopupDescriptor* Descriptor, FGameUIPopupAction Action);

	UFUNCTION(BlueprintImplementableEvent, Category="Game UI|Popup")
	void OnPopupResultPrepared(UGameUIPopupDescriptor* Descriptor, FGameUIPopupResult Result);

private:
	UFUNCTION()
	FEventReply HandleTapToCloseZoneMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);

	void BuildDefaultWidgetTreeIfNeeded();
	void ApplyDescriptor();
	void ApplyShellContent();
	void ApplyContentWidget();
	void ApplyActionContent();
	void ApplyAutoDismiss();
	void ClearGeneratedContent();
	UUserWidget* CreatePopupContentWidget();
	void PrepareResultAndDeactivate(const FGameUIPopupResult& Result);
	void BroadcastPreparedResult();
	void SetOptionalWidgetVisibility(UWidget* Widget, bool bVisible) const;

private:
	FGameUIPopupResultDelegate OnResultCallback;
	FGameUIPopupResult PendingResult;

	UPROPERTY(Transient)
	TObjectPtr<UGameUIPopupDescriptor> ActiveDescriptor;

	UPROPERTY(Transient)
	TArray<TObjectPtr<UUI_PopupActionBinding>> GeneratedActionBindings;

	UPROPERTY(Transient)
	TArray<TObjectPtr<UUserWidget>> GeneratedContentInstances;

	UPROPERTY(Meta=(BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> Text_Title;

	UPROPERTY(Meta=(BindWidgetOptional))
	TObjectPtr<UCommonTextBlock> Text_Subtitle;

	UPROPERTY(Meta=(BindWidgetOptional))
	TObjectPtr<UPanelWidget> Panel_Content;

	UPROPERTY(Meta=(BindWidgetOptional))
	TObjectPtr<UPanelWidget> Panel_Actions;

	UPROPERTY(Meta=(BindWidgetOptional))
	TObjectPtr<UBorder> Border_TapToCloseZone;

	UPROPERTY(Meta=(BindWidgetOptional))
	TObjectPtr<USizeBox> SizeBox_Window;

	FTimerHandle AutoDismissTimerHandle;

	bool bHasPendingResult = false;
	bool bResultBroadcast = false;
};
