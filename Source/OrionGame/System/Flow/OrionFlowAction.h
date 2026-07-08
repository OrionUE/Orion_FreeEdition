/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Delegates/Delegate.h"
#include "UObject/Object.h"

#include "OrionFlowAction.generated.h"

/**
 * Generic asynchronous action that can be inserted into an Orion flow host.
 */
UCLASS(Abstract, BlueprintType, Blueprintable, EditInlineNew, DefaultToInstanced)
class ORIONGAME_API UOrionFlowAction : public UObject
{
	GENERATED_BODY()

public:
	virtual void PreloadAction(UObject* FlowContext, FSimpleDelegate CompletionCallback);
	virtual void ExecuteAction(UObject* FlowContext, FSimpleDelegate CompletionCallback);
};
