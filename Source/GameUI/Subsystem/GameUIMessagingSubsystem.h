/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameUIPopupDefinition.h"
#include "GameUIPopupTypes.h"
#include "Messaging/CommonGameDialog.h"

#include "GameUIMessagingSubsystem.generated.h"

struct FStreamableHandle;
class UUI_PopupScreen;
class UUserWidget;

enum class EGameUIMessagingDialogType : uint8
{
	Confirmation,
	Error
};

USTRUCT()
struct FGameUIPendingDialogRequest
{
	GENERATED_BODY()

	UPROPERTY()
	TObjectPtr<UCommonGameDialogDescriptor> DialogDescriptor;

	FCommonMessagingResultDelegate ResultCallback;
	EGameUIMessagingDialogType DialogType = EGameUIMessagingDialogType::Confirmation;
};

USTRUCT()
struct FGameUIPendingPopupRequest
{
	GENERATED_BODY()

	UPROPERTY()
	TObjectPtr<UGameUIPopupDescriptor> PopupDescriptor;

	FGameUIPopupResultDelegate ResultCallback;
	int32 SequenceId = 0;
};

struct FGameUIPendingPopupDefinitionBatchRequest
{
	FName PopupContext = NAME_None;
	TArray<TSoftClassPtr<UGameUIPopupDefinitionBase>> DefinitionClasses;
	FSimpleDelegate CompletionCallback;
};

struct FGameUIPendingPopupPreloadBatchRequest
{
	FName PopupContext = NAME_None;
	TArray<TSoftClassPtr<UGameUIPopupDefinitionBase>> DefinitionClasses;
	FSimpleDelegate CompletionCallback;
};

/**
 * UGameUIMessagingSubsystem
 * 
 * UI消息与弹窗子系统
 * 负责显示确认、出错消息UI，以及数据驱动的通用弹窗队列。
 *
 * @note
 * 需要在DefaultGame配置中，[/Script/GameUI.GameUIMessagingSubsystem]指定确认、出错和默认弹窗外壳UI。
 */
UCLASS()
class UGameUIMessagingSubsystem : public UCommonMessagingSubsystem
{
	GENERATED_BODY()

public:
	UGameUIMessagingSubsystem();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	virtual void ShowConfirmation(UCommonGameDialogDescriptor* DialogDescriptor, FCommonMessagingResultDelegate ResultCallback = FCommonMessagingResultDelegate()) override;
	virtual void ShowError(UCommonGameDialogDescriptor* DialogDescriptor, FCommonMessagingResultDelegate ResultCallback = FCommonMessagingResultDelegate()) override;

	UFUNCTION(BlueprintCallable, Category="Game UI|Popup")
	bool EnqueuePopup(UGameUIPopupDescriptor* PopupDescriptor);

	bool ShowPopup(UGameUIPopupDescriptor* PopupDescriptor, FGameUIPopupResultDelegate ResultCallback = FGameUIPopupResultDelegate());

	UFUNCTION(BlueprintCallable, Category="Game UI|Popup")
	void ShowPopupsForContext(FName PopupContext, const TArray<TSoftClassPtr<UGameUIPopupDefinitionBase>>& DefinitionClasses);

	void ShowPopupDefinitionsForContext(FName PopupContext, const TArray<TSoftClassPtr<UGameUIPopupDefinitionBase>>& DefinitionClasses, FSimpleDelegate CompletionCallback = FSimpleDelegate());

	UFUNCTION(BlueprintCallable, Category="Game UI|Popup")
	void PreloadPopupsForContext(FName PopupContext, const TArray<TSoftClassPtr<UGameUIPopupDefinitionBase>>& DefinitionClasses);

	void PreloadPopupDefinitionsForContext(FName PopupContext, const TArray<TSoftClassPtr<UGameUIPopupDefinitionBase>>& DefinitionClasses, FSimpleDelegate CompletionCallback = FSimpleDelegate());

	UFUNCTION(BlueprintCallable, Category="Game UI|Popup")
	bool CancelQueuedPopup(FGuid PopupId);

	UFUNCTION(BlueprintCallable, Category="Game UI|Popup")
	bool DismissActivePopup(ECommonMessagingResult DismissResult = ECommonMessagingResult::Cancelled);

	UFUNCTION(BlueprintPure, Category="Game UI|Popup")
	int32 GetQueuedPopupCount() const;

	UFUNCTION(BlueprintPure, Category="Game UI|Popup")
	bool IsPopupActive() const;

private:
	void BeginLoadDialogClasses();
	void HandleDialogClassesLoaded();
	void TryWarmUpDialogWidgets();
	bool WarmUpDialogWidget(TSubclassOf<UUserWidget> DialogClass);
	bool WarmUpPopupDescriptorPresentation(UGameUIPopupDescriptor* PopupDescriptor);
	bool WarmUpPopupContentWidget(UGameUIPopupDescriptor* PopupDescriptor);
	UUserWidget* CreateWarmUpWidgetInstance(TSubclassOf<UUserWidget> WidgetClass);
	void ShowDialog(EGameUIMessagingDialogType DialogType, UCommonGameDialogDescriptor* DialogDescriptor, FCommonMessagingResultDelegate ResultCallback);
	void QueueDialog(EGameUIMessagingDialogType DialogType, UCommonGameDialogDescriptor* DialogDescriptor, FCommonMessagingResultDelegate ResultCallback);
	void FlushPendingDialogRequests();
	bool PushDialog(EGameUIMessagingDialogType DialogType, UCommonGameDialogDescriptor* DialogDescriptor, FCommonMessagingResultDelegate ResultCallback);
	TSubclassOf<UCommonGameDialog> GetDialogClass(EGameUIMessagingDialogType DialogType) const;
	void ApplyPopupReplacementPolicy(UGameUIPopupDescriptor* PopupDescriptor);
	void QueuePopup(UGameUIPopupDescriptor* PopupDescriptor, FGameUIPopupResultDelegate ResultCallback);
	void TryShowNextPopup();
	void SchedulePopupRetry();
	void HandlePopupPresentationClassesLoaded();
	bool PreparePopupPresentationClasses(UGameUIPopupDescriptor* PopupDescriptor);
	bool CanPushPopupNow() const;
	bool PushPopup(FGameUIPendingPopupRequest PopupRequest);
	void HandlePopupResult(UGameUIPopupDescriptor* Descriptor, const FGameUIPopupResult& Result);
	TSubclassOf<UUI_PopupScreen> GetPopupDialogClass(const UGameUIPopupDescriptor* PopupDescriptor = nullptr) const;
	void QueuePopupDefinitionBatch(FName PopupContext, const TArray<TSoftClassPtr<UGameUIPopupDefinitionBase>>& DefinitionClasses, FSimpleDelegate CompletionCallback);
	void TryProcessNextPopupDefinitionBatch();
	void BeginLoadActivePopupDefinitionBatch();
	void HandlePopupDefinitionClassesLoaded();
	void EvaluateLoadedPopupDefinitions(FName PopupContext, const TArray<TSoftClassPtr<UGameUIPopupDefinitionBase>>& DefinitionClasses, FSimpleDelegate CompletionCallback);
	void QueuePopupPreloadDefinitionBatch(FName PopupContext, const TArray<TSoftClassPtr<UGameUIPopupDefinitionBase>>& DefinitionClasses, FSimpleDelegate CompletionCallback);
	void TryProcessNextPopupPreloadDefinitionBatch();
	void BeginLoadActivePopupPreloadDefinitionBatch();
	void HandlePopupPreloadDefinitionClassesLoaded();
	void EvaluateLoadedPopupPreloadDefinitions();
	void BeginLoadActivePopupPreloadPresentationClasses();
	void HandlePopupPreloadPresentationClassesLoaded();
	void FinishActivePopupPreloadRequest();
	void CollectPopupPresentationClassPaths(const UGameUIPopupDescriptor* PopupDescriptor, TArray<FSoftObjectPath>& OutClassPaths) const;

	UPROPERTY(config)
	TSoftClassPtr<UCommonGameDialog> ConfirmationDialogClass;

	UPROPERTY(config)
	TSoftClassPtr<UCommonGameDialog> ErrorDialogClass;

	UPROPERTY(config)
	TSoftClassPtr<UUI_PopupScreen> PopupDialogClass;

	UPROPERTY()
	TSubclassOf<UCommonGameDialog> ConfirmationDialogClassPtr;

	UPROPERTY()
	TSubclassOf<UCommonGameDialog> ErrorDialogClassPtr;

	UPROPERTY()
	TSubclassOf<UUI_PopupScreen> PopupDialogClassPtr;

	UPROPERTY(Transient)
	TArray<TObjectPtr<UUserWidget>> WarmedDialogInstances;

	UPROPERTY(Transient)
	TArray<TSubclassOf<UUserWidget>> WarmedWidgetClasses;

	UPROPERTY(Transient)
	TArray<FGameUIPendingDialogRequest> PendingDialogRequests;

	UPROPERTY(Transient)
	TArray<FGameUIPendingPopupRequest> PendingPopupRequests;

	UPROPERTY(Transient)
	TArray<TObjectPtr<UGameUIPopupDefinitionBase>> ActivePopupDefinitions;

	UPROPERTY(Transient)
	TArray<TObjectPtr<UGameUIPopupDescriptor>> ActivePopupPreloadDescriptors;

	UPROPERTY(Transient)
	TObjectPtr<UUI_PopupScreen> ActivePopup;

	TSharedPtr<FStreamableHandle> DialogClassLoadHandle;
	TSharedPtr<FStreamableHandle> PopupPresentationClassLoadHandle;
	TSharedPtr<FStreamableHandle> PopupDefinitionClassesLoadHandle;
	TSharedPtr<FStreamableHandle> PopupPreloadDefinitionClassesLoadHandle;
	TSharedPtr<FStreamableHandle> PopupPreloadPresentationClassLoadHandle;
	FGameUIPendingPopupRequest ActivePopupRequest;
	FGameUIPendingPopupDefinitionBatchRequest ActivePopupDefinitionRequest;
	FGameUIPendingPopupPreloadBatchRequest ActivePopupPreloadRequest;
	TArray<FGameUIPendingPopupDefinitionBatchRequest> PendingPopupDefinitionRequests;
	TArray<FGameUIPendingPopupPreloadBatchRequest> PendingPopupPreloadRequests;
	TArray<FSoftObjectPath> RequestedPopupPresentationClassLoads;

	int32 PopupRequestSequence = 0;
	bool bDialogClassesLoaded = false;
	bool bDialogWidgetsWarmedUp = false;
	bool bPopupRetryScheduled = false;
};
