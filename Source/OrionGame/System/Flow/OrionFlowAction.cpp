/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "System/Flow/OrionFlowAction.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionFlowAction)

void UOrionFlowAction::PreloadAction(UObject* FlowContext, FSimpleDelegate CompletionCallback) { CompletionCallback.ExecuteIfBound(); }

void UOrionFlowAction::ExecuteAction(UObject* FlowContext, FSimpleDelegate CompletionCallback) { CompletionCallback.ExecuteIfBound(); }
