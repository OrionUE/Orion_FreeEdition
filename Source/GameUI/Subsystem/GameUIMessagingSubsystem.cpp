/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GameUIMessagingSubsystem.h"

#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "CommonLocalPlayer.h"
#include "Engine/AssetManager.h"
#include "Engine/GameInstance.h"
#include "Engine/StreamableManager.h"
#include "Foundation/UI_PopupContentWidget.h"
#include "Foundation/UI_PopupScreen.h"
#include "GameFramework/PlayerController.h"
#include "GameUILogChannels.h"
#include "NativeGameplayTags.h"
#include "PrimaryGameLayout.h"
#include "TimerManager.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameUIMessagingSubsystem)

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_UI_LAYER_MODAL, "UI.Layer.Modal");

namespace
{
	struct FGameUIPopupDefinitionBatchState
	{
		FSimpleDelegate CompletionCallback;
		int32 RemainingPopups = 0;
		bool bCompletionExecuted = false;

		void CompleteOne()
		{
			if (bCompletionExecuted)
			{
				return;
			}

			--RemainingPopups;
			if (RemainingPopups > 0)
			{
				return;
			}

			bCompletionExecuted = true;
			CompletionCallback.ExecuteIfBound();
		}
	};

	const TCHAR* LexToString(EGameUIMessagingDialogType DialogType)
	{
		switch (DialogType)
		{
		case EGameUIMessagingDialogType::Confirmation:
			return TEXT("Confirmation");

		case EGameUIMessagingDialogType::Error:
			return TEXT("Error");
		}

		return TEXT("Unknown");
	}
}

UGameUIMessagingSubsystem::UGameUIMessagingSubsystem()
{
}

void UGameUIMessagingSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	BeginLoadDialogClasses();
}

void UGameUIMessagingSubsystem::Deinitialize()
{
	if (DialogClassLoadHandle.IsValid())
	{
		DialogClassLoadHandle->CancelHandle();
		DialogClassLoadHandle.Reset();
	}

	if (PopupPresentationClassLoadHandle.IsValid())
	{
		PopupPresentationClassLoadHandle->CancelHandle();
		PopupPresentationClassLoadHandle.Reset();
	}

	if (PopupDefinitionClassesLoadHandle.IsValid())
	{
		PopupDefinitionClassesLoadHandle->CancelHandle();
		PopupDefinitionClassesLoadHandle.Reset();
	}

	if (PopupPreloadDefinitionClassesLoadHandle.IsValid())
	{
		PopupPreloadDefinitionClassesLoadHandle->CancelHandle();
		PopupPreloadDefinitionClassesLoadHandle.Reset();
	}

	if (PopupPreloadPresentationClassLoadHandle.IsValid())
	{
		PopupPreloadPresentationClassLoadHandle->CancelHandle();
		PopupPreloadPresentationClassLoadHandle.Reset();
	}

	PendingDialogRequests.Reset();
	PendingPopupRequests.Reset();
	WarmedDialogInstances.Reset();
	WarmedWidgetClasses.Reset();
	RequestedPopupPresentationClassLoads.Reset();
	ActivePopupDefinitions.Reset();
	ActivePopupPreloadDescriptors.Reset();
	PendingPopupDefinitionRequests.Reset();
	PendingPopupPreloadRequests.Reset();
	ConfirmationDialogClassPtr = nullptr;
	ErrorDialogClassPtr = nullptr;
	PopupDialogClassPtr = nullptr;
	ActivePopup = nullptr;
	ActivePopupRequest = FGameUIPendingPopupRequest();
	ActivePopupDefinitionRequest = FGameUIPendingPopupDefinitionBatchRequest();
	ActivePopupPreloadRequest = FGameUIPendingPopupPreloadBatchRequest();
	bDialogClassesLoaded = false;
	bDialogWidgetsWarmedUp = false;
	bPopupRetryScheduled = false;

	Super::Deinitialize();
}

void UGameUIMessagingSubsystem::ShowConfirmation(UCommonGameDialogDescriptor* DialogDescriptor, FCommonMessagingResultDelegate ResultCallback)
{
	ShowDialog(EGameUIMessagingDialogType::Confirmation, DialogDescriptor, ResultCallback);
}

void UGameUIMessagingSubsystem::ShowError(UCommonGameDialogDescriptor* DialogDescriptor, FCommonMessagingResultDelegate ResultCallback)
{
	ShowDialog(EGameUIMessagingDialogType::Error, DialogDescriptor, ResultCallback);
}

bool UGameUIMessagingSubsystem::EnqueuePopup(UGameUIPopupDescriptor* PopupDescriptor) { return ShowPopup(PopupDescriptor); }

void UGameUIMessagingSubsystem::ShowPopupsForContext(FName PopupContext, const TArray<TSoftClassPtr<UGameUIPopupDefinitionBase>>& DefinitionClasses)
{
	ShowPopupDefinitionsForContext(PopupContext, DefinitionClasses);
}

void UGameUIMessagingSubsystem::ShowPopupDefinitionsForContext(FName PopupContext, const TArray<TSoftClassPtr<UGameUIPopupDefinitionBase>>& DefinitionClasses, FSimpleDelegate CompletionCallback)
{
	QueuePopupDefinitionBatch(PopupContext, DefinitionClasses, CompletionCallback);
}

void UGameUIMessagingSubsystem::PreloadPopupsForContext(FName PopupContext, const TArray<TSoftClassPtr<UGameUIPopupDefinitionBase>>& DefinitionClasses)
{
	PreloadPopupDefinitionsForContext(PopupContext, DefinitionClasses);
}

void UGameUIMessagingSubsystem::PreloadPopupDefinitionsForContext(FName PopupContext, const TArray<TSoftClassPtr<UGameUIPopupDefinitionBase>>& DefinitionClasses, FSimpleDelegate CompletionCallback)
{
	QueuePopupPreloadDefinitionBatch(PopupContext, DefinitionClasses, CompletionCallback);
}

bool UGameUIMessagingSubsystem::ShowPopup(UGameUIPopupDescriptor* PopupDescriptor, FGameUIPopupResultDelegate ResultCallback)
{
	if (!PopupDescriptor)
	{
		UE_LOG(LogGameUI, Warning, TEXT("Ignored popup request with null descriptor."));
		return false;
	}

	PopupDescriptor->EnsureDefaultAction();
	ApplyPopupReplacementPolicy(PopupDescriptor);
	QueuePopup(PopupDescriptor, ResultCallback);
	TryShowNextPopup();

	return true;
}

bool UGameUIMessagingSubsystem::CancelQueuedPopup(FGuid PopupId)
{
	const int32 RemovedCount = PendingPopupRequests.RemoveAll([PopupId](const FGameUIPendingPopupRequest& Request)
	{
		return Request.PopupDescriptor && Request.PopupDescriptor->PopupId == PopupId;
	});

	return RemovedCount > 0;
}

bool UGameUIMessagingSubsystem::DismissActivePopup(ECommonMessagingResult DismissResult)
{
	if (!ActivePopup)
	{
		return false;
	}

	ActivePopup->RequestDismiss(DismissResult);
	return true;
}

int32 UGameUIMessagingSubsystem::GetQueuedPopupCount() const { return PendingPopupRequests.Num(); }

bool UGameUIMessagingSubsystem::IsPopupActive() const { return ActivePopup != nullptr; }

void UGameUIMessagingSubsystem::BeginLoadDialogClasses()
{
	if (bDialogClassesLoaded || DialogClassLoadHandle.IsValid())
	{
		return;
	}

	TArray<FSoftObjectPath> DialogClassPaths;

	if (!ConfirmationDialogClass.IsNull())
	{
		DialogClassPaths.AddUnique(ConfirmationDialogClass.ToSoftObjectPath());
	}

	if (!ErrorDialogClass.IsNull())
	{
		DialogClassPaths.AddUnique(ErrorDialogClass.ToSoftObjectPath());
	}

	if (!PopupDialogClass.IsNull())
	{
		DialogClassPaths.AddUnique(PopupDialogClass.ToSoftObjectPath());
	}

	if (DialogClassPaths.IsEmpty())
	{
		HandleDialogClassesLoaded();
		return;
	}

	DialogClassLoadHandle = UAssetManager::Get().GetStreamableManager().RequestAsyncLoad(
		DialogClassPaths,
		FStreamableDelegate::CreateUObject(this, &ThisClass::HandleDialogClassesLoaded),
		FStreamableManager::AsyncLoadHighPriority);
}

void UGameUIMessagingSubsystem::HandleDialogClassesLoaded()
{
	DialogClassLoadHandle.Reset();

	ConfirmationDialogClassPtr = ConfirmationDialogClass.Get();
	ErrorDialogClassPtr = ErrorDialogClass.Get();
	PopupDialogClassPtr = PopupDialogClass.Get();
	bDialogClassesLoaded = true;

	if (!ConfirmationDialogClassPtr)
	{
		UE_LOG(LogGameUI, Warning, TEXT("Confirmation dialog class failed to load: %s"),
			*ConfirmationDialogClass.ToSoftObjectPath().ToString());
	}

	if (!ErrorDialogClassPtr)
	{
		UE_LOG(LogGameUI, Warning, TEXT("Error dialog class failed to load: %s"),
			*ErrorDialogClass.ToSoftObjectPath().ToString());
	}

	if (!PopupDialogClass.IsNull() && !PopupDialogClassPtr)
	{
		UE_LOG(LogGameUI, Warning, TEXT("Popup dialog class failed to load: %s"),
			*PopupDialogClass.ToSoftObjectPath().ToString());
	}

	TryWarmUpDialogWidgets();
	FlushPendingDialogRequests();
	TryProcessNextPopupPreloadDefinitionBatch();
	TryShowNextPopup();
}

void UGameUIMessagingSubsystem::TryWarmUpDialogWidgets()
{
	if (!bDialogClassesLoaded || bDialogWidgetsWarmedUp)
	{
		return;
	}

	const bool bConfirmationWarmed = ConfirmationDialogClassPtr
		? WarmUpDialogWidget(ConfirmationDialogClassPtr)
		: ConfirmationDialogClass.IsNull();
	const bool bErrorWarmed = (ErrorDialogClassPtr == ConfirmationDialogClassPtr) || (ErrorDialogClassPtr
		? WarmUpDialogWidget(ErrorDialogClassPtr)
		: ErrorDialogClass.IsNull());
	const bool bPopupWarmed = WarmUpDialogWidget(GetPopupDialogClass());
	bDialogWidgetsWarmedUp = bConfirmationWarmed && bErrorWarmed && bPopupWarmed;

	if (!bDialogWidgetsWarmedUp)
	{
		UE_LOG(LogGameUI, Verbose, TEXT("Game UI dialog warm-up finished with missing widget instance. Confirmation=%d Error=%d Popup=%d"),
			bConfirmationWarmed,
			bErrorWarmed,
			bPopupWarmed);
	}
}

bool UGameUIMessagingSubsystem::WarmUpDialogWidget(TSubclassOf<UUserWidget> DialogClass)
{
	if (!DialogClass)
	{
		return false;
	}

	if (WarmedWidgetClasses.Contains(DialogClass))
	{
		return true;
	}

	UUserWidget* Dialog = CreateWarmUpWidgetInstance(DialogClass);
	if (!Dialog)
	{
		UE_LOG(LogGameUI, Verbose, TEXT("Failed to create warm-up dialog instance: %s"),
			*GetPathNameSafe(DialogClass));
		return false;
	}

	Dialog->TakeWidget();
	WarmedDialogInstances.Add(Dialog);
	WarmedWidgetClasses.Add(DialogClass);

	return true;
}

bool UGameUIMessagingSubsystem::WarmUpPopupDescriptorPresentation(UGameUIPopupDescriptor* PopupDescriptor)
{
	if (!PopupDescriptor)
	{
		return false;
	}

	const bool bDialogWarmed = WarmUpDialogWidget(GetPopupDialogClass(PopupDescriptor));
	const bool bContentWarmed = WarmUpPopupContentWidget(PopupDescriptor);

	return bDialogWarmed && bContentWarmed;
}

bool UGameUIMessagingSubsystem::WarmUpPopupContentWidget(UGameUIPopupDescriptor* PopupDescriptor)
{
	if (!PopupDescriptor)
	{
		return false;
	}

	TSubclassOf<UUserWidget> ContentClass = nullptr;
	if (PopupDescriptor->ContentKind == EGameUIPopupContentKind::CustomWidget && PopupDescriptor->CustomContentWidgetClass)
	{
		ContentClass = PopupDescriptor->CustomContentWidgetClass;
	}
	else
	{
		ContentClass = PopupDescriptor->GetLoadedContentWidgetClass();
	}

	if (!ContentClass)
	{
		return false;
	}

	if (WarmedWidgetClasses.Contains(ContentClass))
	{
		return true;
	}

	UUserWidget* ContentWidget = CreateWarmUpWidgetInstance(ContentClass);
	if (!ContentWidget)
	{
		UE_LOG(LogGameUI, Verbose, TEXT("Failed to create warm-up popup content instance: %s"),
			*GetPathNameSafe(ContentClass));
		return false;
	}

	ContentWidget->TakeWidget();
	if (UUI_PopupContentWidget* PopupContentWidget = Cast<UUI_PopupContentWidget>(ContentWidget))
	{
		PopupContentWidget->SetupPopupContent(PopupDescriptor);
	}

	WarmedDialogInstances.Add(ContentWidget);
	WarmedWidgetClasses.Add(ContentClass);

	return true;
}

UUserWidget* UGameUIMessagingSubsystem::CreateWarmUpWidgetInstance(TSubclassOf<UUserWidget> WidgetClass)
{
	if (!WidgetClass)
	{
		return nullptr;
	}

	UCommonLocalPlayer* LocalPlayer = GetLocalPlayer<UCommonLocalPlayer>();
	if (!LocalPlayer)
	{
		return nullptr;
	}

	if (APlayerController* OwningPlayer = LocalPlayer->GetPlayerController(GetWorld()))
	{
		if (UUserWidget* Widget = UWidgetBlueprintLibrary::Create(GetWorld(), WidgetClass, OwningPlayer))
		{
			return Widget;
		}
	}

	if (UGameInstance* GameInstance = LocalPlayer->GetGameInstance())
	{
		return UUserWidget::CreateWidgetInstance(*GameInstance, WidgetClass, NAME_None);
	}

	return nullptr;
}

void UGameUIMessagingSubsystem::ShowDialog(EGameUIMessagingDialogType DialogType, UCommonGameDialogDescriptor* DialogDescriptor, FCommonMessagingResultDelegate ResultCallback)
{
	if (!DialogDescriptor)
	{
		UE_LOG(LogGameUI, Warning, TEXT("Ignored %s dialog request with null descriptor."),
			LexToString(DialogType));
		return;
	}

	if (!bDialogClassesLoaded)
	{
		QueueDialog(DialogType, DialogDescriptor, ResultCallback);
		BeginLoadDialogClasses();
		return;
	}

	if (!GetDialogClass(DialogType))
	{
		UE_LOG(LogGameUI, Warning, TEXT("Ignored %s dialog request because its dialog class is not loaded."),
			LexToString(DialogType));
		return;
	}

	PushDialog(DialogType, DialogDescriptor, ResultCallback);
}

void UGameUIMessagingSubsystem::QueueDialog(EGameUIMessagingDialogType DialogType, UCommonGameDialogDescriptor* DialogDescriptor, FCommonMessagingResultDelegate ResultCallback)
{
	FGameUIPendingDialogRequest& PendingRequest = PendingDialogRequests.AddDefaulted_GetRef();
	PendingRequest.DialogType = DialogType;
	PendingRequest.DialogDescriptor = DialogDescriptor;
	PendingRequest.ResultCallback = ResultCallback;
}

void UGameUIMessagingSubsystem::FlushPendingDialogRequests()
{
	if (!bDialogClassesLoaded || PendingDialogRequests.IsEmpty())
	{
		return;
	}

	TArray<FGameUIPendingDialogRequest> Requests = MoveTemp(PendingDialogRequests);
	PendingDialogRequests.Reset();

	for (FGameUIPendingDialogRequest& Request : Requests)
	{
		PushDialog(Request.DialogType, Request.DialogDescriptor, Request.ResultCallback);
	}
}

void UGameUIMessagingSubsystem::ApplyPopupReplacementPolicy(UGameUIPopupDescriptor* PopupDescriptor)
{
	if (!PopupDescriptor || !PopupDescriptor->bReplaceQueuedPopupsInGroup || PopupDescriptor->PopupGroup.IsNone())
	{
		return;
	}

	for (int32 RequestIndex = PendingPopupRequests.Num() - 1; RequestIndex >= 0; --RequestIndex)
	{
		FGameUIPendingPopupRequest& Request = PendingPopupRequests[RequestIndex];
		if (!Request.PopupDescriptor || Request.PopupDescriptor->PopupGroup != PopupDescriptor->PopupGroup)
		{
			continue;
		}

		FGameUIPopupResult Result;
		Result.Descriptor = Request.PopupDescriptor;
		Result.ActionId = TEXT("Replaced");
		Result.CommonResult = ECommonMessagingResult::Killed;
		Result.bDismissedWithoutAction = true;

		Request.PopupDescriptor->BroadcastResult(Result);
		if (Request.ResultCallback.IsBound())
		{
			Request.ResultCallback.Execute(Request.PopupDescriptor, Result);
		}

		PendingPopupRequests.RemoveAt(RequestIndex);
	}
}

void UGameUIMessagingSubsystem::QueuePopup(UGameUIPopupDescriptor* PopupDescriptor, FGameUIPopupResultDelegate ResultCallback)
{
	FGameUIPendingPopupRequest PendingRequest;
	PendingRequest.PopupDescriptor = PopupDescriptor;
	PendingRequest.ResultCallback = ResultCallback;
	PendingRequest.SequenceId = ++PopupRequestSequence;

	const int32 InsertIndex = PendingPopupRequests.IndexOfByPredicate([&PendingRequest](const FGameUIPendingPopupRequest& ExistingRequest)
	{
		if (!ExistingRequest.PopupDescriptor)
		{
			return true;
		}

		if (PendingRequest.PopupDescriptor->Priority != ExistingRequest.PopupDescriptor->Priority)
		{
			return PendingRequest.PopupDescriptor->Priority > ExistingRequest.PopupDescriptor->Priority;
		}

		return PendingRequest.SequenceId < ExistingRequest.SequenceId;
	});

	if (InsertIndex == INDEX_NONE)
	{
		PendingPopupRequests.Add(PendingRequest);
	}
	else
	{
		PendingPopupRequests.Insert(PendingRequest, InsertIndex);
	}
}

void UGameUIMessagingSubsystem::TryShowNextPopup()
{
	bPopupRetryScheduled = false;

	if (ActivePopup || PendingPopupRequests.IsEmpty())
	{
		return;
	}

	if (!bDialogClassesLoaded)
	{
		BeginLoadDialogClasses();
		return;
	}

	if (PendingPopupRequests[0].PopupDescriptor && !PreparePopupPresentationClasses(PendingPopupRequests[0].PopupDescriptor))
	{
		return;
	}

	if (!CanPushPopupNow())
	{
		SchedulePopupRetry();
		return;
	}

	FGameUIPendingPopupRequest PopupRequest = PendingPopupRequests[0];
	PendingPopupRequests.RemoveAt(0);

	if (!PushPopup(PopupRequest))
	{
		FGameUIPopupResult Result;
		Result.Descriptor = PopupRequest.PopupDescriptor;
		Result.ActionId = TEXT("FailedToShow");
		Result.CommonResult = ECommonMessagingResult::Killed;
		Result.bDismissedWithoutAction = true;

		if (PopupRequest.PopupDescriptor)
		{
			PopupRequest.PopupDescriptor->BroadcastResult(Result);
		}

		if (PopupRequest.ResultCallback.IsBound())
		{
			PopupRequest.ResultCallback.Execute(PopupRequest.PopupDescriptor, Result);
		}

		TryShowNextPopup();
	}
}

void UGameUIMessagingSubsystem::SchedulePopupRetry()
{
	if (bPopupRetryScheduled)
	{
		return;
	}

	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	bPopupRetryScheduled = true;
	World->GetTimerManager().SetTimerForNextTick(FTimerDelegate::CreateUObject(this, &ThisClass::TryShowNextPopup));
}

void UGameUIMessagingSubsystem::HandlePopupPresentationClassesLoaded()
{
	PopupPresentationClassLoadHandle.Reset();
	TryShowNextPopup();
}

bool UGameUIMessagingSubsystem::PreparePopupPresentationClasses(UGameUIPopupDescriptor* PopupDescriptor)
{
	if (!PopupDescriptor)
	{
		return true;
	}

	TArray<FSoftObjectPath> ClassPathsToLoad;
	if (!PopupDescriptor->PopupScreenClass.IsNull() && !PopupDescriptor->PopupScreenClass.Get())
	{
		ClassPathsToLoad.AddUnique(PopupDescriptor->PopupScreenClass.ToSoftObjectPath());
	}

	if (PopupDescriptor->HasUnloadedContentWidgetClass())
	{
		ClassPathsToLoad.AddUnique(PopupDescriptor->GetContentWidgetClassPath());
	}

	bool bWaitingOnRequestedPath = false;
	ClassPathsToLoad.RemoveAll([this, &bWaitingOnRequestedPath](const FSoftObjectPath& ClassPath)
	{
		const bool bAlreadyRequested = RequestedPopupPresentationClassLoads.Contains(ClassPath);
		bWaitingOnRequestedPath |= bAlreadyRequested;
		return bAlreadyRequested;
	});

	if (ClassPathsToLoad.IsEmpty())
	{
		return !bWaitingOnRequestedPath || !PopupPresentationClassLoadHandle.IsValid();
	}

	if (PopupPresentationClassLoadHandle.IsValid())
	{
		return false;
	}

	RequestedPopupPresentationClassLoads.Append(ClassPathsToLoad);
	PopupPresentationClassLoadHandle = UAssetManager::Get().GetStreamableManager().RequestAsyncLoad(
		ClassPathsToLoad,
		FStreamableDelegate::CreateUObject(this, &ThisClass::HandlePopupPresentationClassesLoaded),
		FStreamableManager::AsyncLoadHighPriority);

	return false;
}

bool UGameUIMessagingSubsystem::CanPushPopupNow() const
{
	const UCommonLocalPlayer* LocalPlayer = GetLocalPlayer<UCommonLocalPlayer>();
	return LocalPlayer && LocalPlayer->GetRootUILayout();
}

bool UGameUIMessagingSubsystem::PushPopup(FGameUIPendingPopupRequest PopupRequest)
{
	if (!PopupRequest.PopupDescriptor)
	{
		return false;
	}

	TSubclassOf<UUI_PopupScreen> DialogClass = GetPopupDialogClass(PopupRequest.PopupDescriptor);
	if (!DialogClass)
	{
		return false;
	}

	UCommonLocalPlayer* LocalPlayer = GetLocalPlayer<UCommonLocalPlayer>();
	if (!LocalPlayer)
	{
		return false;
	}

	UPrimaryGameLayout* RootLayout = LocalPlayer->GetRootUILayout();
	if (!RootLayout)
	{
		return false;
	}

	ActivePopupRequest = PopupRequest;
	ActivePopup = RootLayout->PushWidgetToLayerStack<UUI_PopupScreen>(TAG_UI_LAYER_MODAL, DialogClass, [this, PopupRequest](UUI_PopupScreen& PopupToSetup)
		{
			PopupToSetup.SetupPopup(
				PopupRequest.PopupDescriptor,
				FGameUIPopupResultDelegate::CreateUObject(this, &ThisClass::HandlePopupResult));
		});

	if (!ActivePopup)
	{
		ActivePopupRequest = FGameUIPendingPopupRequest();
	}

	return ActivePopup != nullptr;
}

void UGameUIMessagingSubsystem::HandlePopupResult(UGameUIPopupDescriptor* Descriptor, const FGameUIPopupResult& Result)
{
	FGameUIPopupResultDelegate ResultCallback = ActivePopupRequest.ResultCallback;

	ActivePopup = nullptr;
	ActivePopupRequest = FGameUIPendingPopupRequest();

	if (ResultCallback.IsBound())
	{
		ResultCallback.Execute(Descriptor, Result);
	}

	TryShowNextPopup();
}

bool UGameUIMessagingSubsystem::PushDialog(EGameUIMessagingDialogType DialogType, UCommonGameDialogDescriptor* DialogDescriptor, FCommonMessagingResultDelegate ResultCallback)
{
	TSubclassOf<UCommonGameDialog> DialogClass = GetDialogClass(DialogType);
	if (!DialogClass || !DialogDescriptor)
	{
		return false;
	}

	UCommonLocalPlayer* LocalPlayer = GetLocalPlayer<UCommonLocalPlayer>();
	if (!LocalPlayer)
	{
		UE_LOG(LogGameUI, Warning, TEXT("Failed to show %s dialog because local player is missing."),
			LexToString(DialogType));
		return false;
	}

	UPrimaryGameLayout* RootLayout = LocalPlayer->GetRootUILayout();
	if (!RootLayout)
	{
		UE_LOG(LogGameUI, Warning, TEXT("Failed to show %s dialog because root UI layout is missing."),
			LexToString(DialogType));
		return false;
	}

	UCommonGameDialog* Dialog = RootLayout->PushWidgetToLayerStack<UCommonGameDialog>(TAG_UI_LAYER_MODAL, DialogClass, [DialogDescriptor, ResultCallback](UCommonGameDialog& DialogToSetup)
		{
			DialogToSetup.SetupDialog(DialogDescriptor, ResultCallback);
		});

	return Dialog != nullptr;
}

TSubclassOf<UCommonGameDialog> UGameUIMessagingSubsystem::GetDialogClass(EGameUIMessagingDialogType DialogType) const
{
	switch (DialogType)
	{
	case EGameUIMessagingDialogType::Confirmation:
		return ConfirmationDialogClassPtr;

	case EGameUIMessagingDialogType::Error:
		return ErrorDialogClassPtr;
	}

	return nullptr;
}

TSubclassOf<UUI_PopupScreen> UGameUIMessagingSubsystem::GetPopupDialogClass(const UGameUIPopupDescriptor* PopupDescriptor) const
{
	if (PopupDescriptor && !PopupDescriptor->PopupScreenClass.IsNull())
	{
		if (UClass* PopupScreenClass = PopupDescriptor->PopupScreenClass.Get())
		{
			return PopupScreenClass;
		}

		UE_LOG(LogGameUI, Warning, TEXT("Popup screen class failed to load: %s. Falling back to default popup dialog class."),
			*PopupDescriptor->PopupScreenClass.ToSoftObjectPath().ToString());
	}

	if (PopupDialogClassPtr)
	{
		return PopupDialogClassPtr;
	}

	return UUI_PopupScreen::StaticClass();
}

void UGameUIMessagingSubsystem::QueuePopupDefinitionBatch(FName PopupContext, const TArray<TSoftClassPtr<UGameUIPopupDefinitionBase>>& DefinitionClasses, FSimpleDelegate CompletionCallback)
{
	if (DefinitionClasses.IsEmpty())
	{
		CompletionCallback.ExecuteIfBound();
		return;
	}

	FGameUIPendingPopupDefinitionBatchRequest& PendingRequest = PendingPopupDefinitionRequests.AddDefaulted_GetRef();
	PendingRequest.PopupContext = PopupContext;
	PendingRequest.DefinitionClasses = DefinitionClasses;
	PendingRequest.CompletionCallback = CompletionCallback;

	TryProcessNextPopupDefinitionBatch();
}

void UGameUIMessagingSubsystem::TryProcessNextPopupDefinitionBatch()
{
	if (PopupDefinitionClassesLoadHandle.IsValid() || !ActivePopupDefinitionRequest.DefinitionClasses.IsEmpty() || PendingPopupDefinitionRequests.IsEmpty())
	{
		return;
	}

	ActivePopupDefinitionRequest = MoveTemp(PendingPopupDefinitionRequests[0]);
	PendingPopupDefinitionRequests.RemoveAt(0);

	BeginLoadActivePopupDefinitionBatch();
}

void UGameUIMessagingSubsystem::BeginLoadActivePopupDefinitionBatch()
{
	TArray<FSoftObjectPath> DefinitionClassPaths;
	for (const TSoftClassPtr<UGameUIPopupDefinitionBase>& DefinitionClass : ActivePopupDefinitionRequest.DefinitionClasses)
	{
		if (!DefinitionClass.IsNull() && !DefinitionClass.Get())
		{
			DefinitionClassPaths.AddUnique(DefinitionClass.ToSoftObjectPath());
		}
	}

	if (DefinitionClassPaths.IsEmpty())
	{
		FGameUIPendingPopupDefinitionBatchRequest RequestToEvaluate = MoveTemp(ActivePopupDefinitionRequest);
		ActivePopupDefinitionRequest = FGameUIPendingPopupDefinitionBatchRequest();
		EvaluateLoadedPopupDefinitions(RequestToEvaluate.PopupContext, RequestToEvaluate.DefinitionClasses, RequestToEvaluate.CompletionCallback);
		TryProcessNextPopupDefinitionBatch();
		return;
	}

	PopupDefinitionClassesLoadHandle = UAssetManager::Get().GetStreamableManager().RequestAsyncLoad(
		DefinitionClassPaths,
		FStreamableDelegate::CreateUObject(this, &ThisClass::HandlePopupDefinitionClassesLoaded),
		FStreamableManager::AsyncLoadHighPriority);
}

void UGameUIMessagingSubsystem::HandlePopupDefinitionClassesLoaded()
{
	PopupDefinitionClassesLoadHandle.Reset();

	FGameUIPendingPopupDefinitionBatchRequest RequestToEvaluate = MoveTemp(ActivePopupDefinitionRequest);
	ActivePopupDefinitionRequest = FGameUIPendingPopupDefinitionBatchRequest();

	EvaluateLoadedPopupDefinitions(RequestToEvaluate.PopupContext, RequestToEvaluate.DefinitionClasses, RequestToEvaluate.CompletionCallback);
	TryProcessNextPopupDefinitionBatch();
}

void UGameUIMessagingSubsystem::EvaluateLoadedPopupDefinitions(FName PopupContext, const TArray<TSoftClassPtr<UGameUIPopupDefinitionBase>>& DefinitionClasses, FSimpleDelegate CompletionCallback)
{
	UCommonLocalPlayer* LocalPlayer = GetLocalPlayer<UCommonLocalPlayer>();
	if (!LocalPlayer)
	{
		UE_LOG(LogGameUI, Warning, TEXT("Skipped popup definition evaluation because local player is missing."));
		CompletionCallback.ExecuteIfBound();
		return;
	}

	ActivePopupDefinitions.Reset();

	TSharedRef<FGameUIPopupDefinitionBatchState> BatchState = MakeShared<FGameUIPopupDefinitionBatchState>();
	BatchState->CompletionCallback = CompletionCallback;

	for (const TSoftClassPtr<UGameUIPopupDefinitionBase>& DefinitionClassPtr : DefinitionClasses)
	{
		UClass* DefinitionClass = DefinitionClassPtr.Get();
		if (!DefinitionClass)
		{
			UE_LOG(LogGameUI, Warning, TEXT("Popup definition class failed to load: %s"),
				*DefinitionClassPtr.ToSoftObjectPath().ToString());
			continue;
		}

		UGameUIPopupDefinitionBase* Definition = NewObject<UGameUIPopupDefinitionBase>(this, DefinitionClass);
		if (!Definition || !Definition->CanShowPopup(LocalPlayer, PopupContext))
		{
			continue;
		}

		UGameUIPopupDescriptor* Descriptor = Definition->BuildPopupDescriptor(this, LocalPlayer, PopupContext);
		if (!Descriptor)
		{
			continue;
		}

		ActivePopupDefinitions.Add(Definition);
		++BatchState->RemainingPopups;

		const bool bPopupQueued = ShowPopup(
			Descriptor,
			FGameUIPopupResultDelegate::CreateWeakLambda(this, [BatchState](UGameUIPopupDescriptor* Descriptor, const FGameUIPopupResult& Result)
			{
				BatchState->CompleteOne();
			}));

		if (!bPopupQueued)
		{
			BatchState->CompleteOne();
		}
	}

	if (BatchState->RemainingPopups == 0)
	{
		BatchState->bCompletionExecuted = true;
		CompletionCallback.ExecuteIfBound();
	}
}

void UGameUIMessagingSubsystem::QueuePopupPreloadDefinitionBatch(FName PopupContext, const TArray<TSoftClassPtr<UGameUIPopupDefinitionBase>>& DefinitionClasses, FSimpleDelegate CompletionCallback)
{
	if (DefinitionClasses.IsEmpty())
	{
		CompletionCallback.ExecuteIfBound();
		return;
	}

	FGameUIPendingPopupPreloadBatchRequest& PendingRequest = PendingPopupPreloadRequests.AddDefaulted_GetRef();
	PendingRequest.PopupContext = PopupContext;
	PendingRequest.DefinitionClasses = DefinitionClasses;
	PendingRequest.CompletionCallback = CompletionCallback;

	TryProcessNextPopupPreloadDefinitionBatch();
}

void UGameUIMessagingSubsystem::TryProcessNextPopupPreloadDefinitionBatch()
{
	if (!bDialogClassesLoaded)
	{
		BeginLoadDialogClasses();
		return;
	}

	if (PopupPreloadDefinitionClassesLoadHandle.IsValid() ||
		PopupPreloadPresentationClassLoadHandle.IsValid() ||
		!ActivePopupPreloadRequest.DefinitionClasses.IsEmpty() ||
		PendingPopupPreloadRequests.IsEmpty())
	{
		return;
	}

	ActivePopupPreloadRequest = MoveTemp(PendingPopupPreloadRequests[0]);
	PendingPopupPreloadRequests.RemoveAt(0);

	BeginLoadActivePopupPreloadDefinitionBatch();
}

void UGameUIMessagingSubsystem::BeginLoadActivePopupPreloadDefinitionBatch()
{
	TArray<FSoftObjectPath> DefinitionClassPaths;
	for (const TSoftClassPtr<UGameUIPopupDefinitionBase>& DefinitionClass : ActivePopupPreloadRequest.DefinitionClasses)
	{
		if (!DefinitionClass.IsNull() && !DefinitionClass.Get())
		{
			DefinitionClassPaths.AddUnique(DefinitionClass.ToSoftObjectPath());
		}
	}

	if (DefinitionClassPaths.IsEmpty())
	{
		EvaluateLoadedPopupPreloadDefinitions();
		return;
	}

	PopupPreloadDefinitionClassesLoadHandle = UAssetManager::Get().GetStreamableManager().RequestAsyncLoad(
		DefinitionClassPaths,
		FStreamableDelegate::CreateUObject(this, &ThisClass::HandlePopupPreloadDefinitionClassesLoaded),
		FStreamableManager::AsyncLoadHighPriority);
}

void UGameUIMessagingSubsystem::HandlePopupPreloadDefinitionClassesLoaded()
{
	PopupPreloadDefinitionClassesLoadHandle.Reset();
	EvaluateLoadedPopupPreloadDefinitions();
}

void UGameUIMessagingSubsystem::EvaluateLoadedPopupPreloadDefinitions()
{
	UCommonLocalPlayer* LocalPlayer = GetLocalPlayer<UCommonLocalPlayer>();
	if (!LocalPlayer)
	{
		UE_LOG(LogGameUI, Warning, TEXT("Skipped popup preload because local player is missing."));
		FinishActivePopupPreloadRequest();
		return;
	}

	ActivePopupPreloadDescriptors.Reset();

	for (const TSoftClassPtr<UGameUIPopupDefinitionBase>& DefinitionClassPtr : ActivePopupPreloadRequest.DefinitionClasses)
	{
		UClass* DefinitionClass = DefinitionClassPtr.Get();
		if (!DefinitionClass)
		{
			UE_LOG(LogGameUI, Warning, TEXT("Popup definition class failed to preload: %s"),
				*DefinitionClassPtr.ToSoftObjectPath().ToString());
			continue;
		}

		UGameUIPopupDefinitionBase* Definition = NewObject<UGameUIPopupDefinitionBase>(this, DefinitionClass);
		if (!Definition || !Definition->CanShowPopup(LocalPlayer, ActivePopupPreloadRequest.PopupContext))
		{
			continue;
		}

		UGameUIPopupDescriptor* Descriptor = Definition->BuildPopupDescriptor(this, LocalPlayer, ActivePopupPreloadRequest.PopupContext);
		if (Descriptor)
		{
			ActivePopupPreloadDescriptors.Add(Descriptor);
		}
	}

	BeginLoadActivePopupPreloadPresentationClasses();
}

void UGameUIMessagingSubsystem::BeginLoadActivePopupPreloadPresentationClasses()
{
	TArray<FSoftObjectPath> PresentationClassPaths;
	for (UGameUIPopupDescriptor* Descriptor : ActivePopupPreloadDescriptors)
	{
		CollectPopupPresentationClassPaths(Descriptor, PresentationClassPaths);
	}

	if (PresentationClassPaths.IsEmpty())
	{
		HandlePopupPreloadPresentationClassesLoaded();
		return;
	}

	PopupPreloadPresentationClassLoadHandle = UAssetManager::Get().GetStreamableManager().RequestAsyncLoad(
		PresentationClassPaths,
		FStreamableDelegate::CreateUObject(this, &ThisClass::HandlePopupPreloadPresentationClassesLoaded),
		FStreamableManager::AsyncLoadHighPriority);
}

void UGameUIMessagingSubsystem::HandlePopupPreloadPresentationClassesLoaded()
{
	PopupPreloadPresentationClassLoadHandle.Reset();

	TryWarmUpDialogWidgets();

	int32 WarmedPopupCount = 0;
	for (UGameUIPopupDescriptor* Descriptor : ActivePopupPreloadDescriptors)
	{
		if (WarmUpPopupDescriptorPresentation(Descriptor))
		{
			++WarmedPopupCount;
		}
	}

	UE_LOG(LogGameUI, Verbose, TEXT("Preloaded popup presentation classes for context %s. Definitions=%d Descriptors=%d Warmed=%d"),
		*ActivePopupPreloadRequest.PopupContext.ToString(),
		ActivePopupPreloadRequest.DefinitionClasses.Num(),
		ActivePopupPreloadDescriptors.Num(),
		WarmedPopupCount);

	FinishActivePopupPreloadRequest();
}

void UGameUIMessagingSubsystem::FinishActivePopupPreloadRequest()
{
	FSimpleDelegate CompletionCallback = ActivePopupPreloadRequest.CompletionCallback;

	ActivePopupPreloadDescriptors.Reset();
	ActivePopupPreloadRequest = FGameUIPendingPopupPreloadBatchRequest();

	CompletionCallback.ExecuteIfBound();
	TryProcessNextPopupPreloadDefinitionBatch();
}

void UGameUIMessagingSubsystem::CollectPopupPresentationClassPaths(const UGameUIPopupDescriptor* PopupDescriptor, TArray<FSoftObjectPath>& OutClassPaths) const
{
	if (!PopupDescriptor)
	{
		return;
	}

	if (!PopupDescriptor->PopupScreenClass.IsNull() && !PopupDescriptor->PopupScreenClass.Get())
	{
		OutClassPaths.AddUnique(PopupDescriptor->PopupScreenClass.ToSoftObjectPath());
	}

	if (PopupDescriptor->HasUnloadedContentWidgetClass())
	{
		OutClassPaths.AddUnique(PopupDescriptor->GetContentWidgetClassPath());
	}
}
