/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "GameUIFrontendPopupFlowAction.h"

#include "Engine/LocalPlayer.h"
#include "Engine/World.h"
#include "GameUILogChannels.h"
#include "PrimaryGameLayout.h"
#include "Subsystem/GameUIMessagingSubsystem.h"
#include "UI/Frontend/OrionFrontendStateComponent.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GameUIFrontendPopupFlowAction)

void UGameUIFrontendPopupFlowAction::PreloadAction(UObject* FlowContext, FSimpleDelegate CompletionCallback)
{
	if (PopupDefinitionClasses.IsEmpty())
	{
		CompletionCallback.ExecuteIfBound();
		return;
	}

	UGameUIMessagingSubsystem* MessagingSubsystem = ResolveMessagingSubsystem(FlowContext, TEXT("preload"));
	if (!MessagingSubsystem)
	{
		CompletionCallback.ExecuteIfBound();
		return;
	}

	MessagingSubsystem->PreloadPopupDefinitionsForContext(PopupContext, PopupDefinitionClasses, CompletionCallback);
}

void UGameUIFrontendPopupFlowAction::ExecuteAction(UObject* FlowContext, FSimpleDelegate CompletionCallback)
{
	if (PopupDefinitionClasses.IsEmpty())
	{
		CompletionCallback.ExecuteIfBound();
		return;
	}

	UGameUIMessagingSubsystem* MessagingSubsystem = ResolveMessagingSubsystem(FlowContext, TEXT("execute"));
	if (!MessagingSubsystem)
	{
		CompletionCallback.ExecuteIfBound();
		return;
	}

	MessagingSubsystem->ShowPopupDefinitionsForContext(PopupContext, PopupDefinitionClasses, CompletionCallback);
}

UGameUIMessagingSubsystem* UGameUIFrontendPopupFlowAction::ResolveMessagingSubsystem(UObject* FlowContext, const TCHAR* OperationName) const
{
	UOrionFrontendStateComponent* FrontendStateComponent = Cast<UOrionFrontendStateComponent>(FlowContext);
	if (!FrontendStateComponent)
	{
		UE_LOG(LogGameUI, Warning, TEXT("Skipped frontend popup flow action %s because the flow context is not a frontend state component."),
			OperationName);
		return nullptr;
	}

	ULocalPlayer* LocalPlayer = nullptr;
	if (UPrimaryGameLayout* RootLayout = UPrimaryGameLayout::GetPrimaryGameLayoutForPrimaryPlayer(FrontendStateComponent))
	{
		LocalPlayer = RootLayout->GetOwningLocalPlayer();
	}

	if (!LocalPlayer)
	{
		if (UWorld* World = FrontendStateComponent->GetWorld())
		{
			LocalPlayer = World->GetFirstLocalPlayerFromController();
		}
	}

	if (!LocalPlayer)
	{
		UE_LOG(LogGameUI, Warning, TEXT("Skipped frontend popup flow action %s because the local player is missing."),
			OperationName);
		return nullptr;
	}

	UGameUIMessagingSubsystem* MessagingSubsystem = LocalPlayer->GetSubsystem<UGameUIMessagingSubsystem>();
	if (!MessagingSubsystem)
	{
		UE_LOG(LogGameUI, Warning, TEXT("Skipped frontend popup flow action %s because GameUIMessagingSubsystem is unavailable."),
			OperationName);
		return nullptr;
	}

	return MessagingSubsystem;
}
