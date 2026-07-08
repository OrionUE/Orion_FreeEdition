/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Subsystem/GameUIPopupDefinition.h"
#include "System/Flow/OrionFlowAction.h"

#include "GameUIFrontendPopupFlowAction.generated.h"

class UGameUIMessagingSubsystem;

/**
 * Frontend flow action that evaluates popup definitions through GameUIMessagingSubsystem.
 */
UCLASS(BlueprintType, Blueprintable, DisplayName="Game UI Frontend Popup Flow Action")
class GAMEUI_API UGameUIFrontendPopupFlowAction : public UOrionFlowAction
{
	GENERATED_BODY()

public:
	virtual void PreloadAction(UObject* FlowContext, FSimpleDelegate CompletionCallback) override;
	virtual void ExecuteAction(UObject* FlowContext, FSimpleDelegate CompletionCallback) override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup")
	FName PopupContext = TEXT("Startup");

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup")
	TArray<TSoftClassPtr<UGameUIPopupDefinitionBase>> PopupDefinitionClasses;

private:
	UGameUIMessagingSubsystem* ResolveMessagingSubsystem(UObject* FlowContext, const TCHAR* OperationName) const;
};
