// Copyright Epic Games, Inc. All Rights Reserved.

#include "ToolsetRegistry/ToolCallExceptionHandlerInternal.h"

#include "Containers/UnrealString.h"
#include "Templates/UnrealTemplate.h"

#include "ToolsetRegistry/ToolCallExceptionHandlerTestScope.h"

namespace UE::ToolsetRegistry::Internal
{
	const TMap<EBlueprintExceptionType::Type, FString>
		HandledBlueprintExceptionTypeToErrorStrings =
	{
		{EBlueprintExceptionType::AccessViolation, TEXT("AccessViolation")},
		{EBlueprintExceptionType::InfiniteLoop, TEXT("InfiniteLoop")},
		{EBlueprintExceptionType::NonFatalError, TEXT("NonFatalError")},
		{EBlueprintExceptionType::FatalError, TEXT("FatalError")},
		{EBlueprintExceptionType::AbortExecution, TEXT("AbortExecution")},
		{EBlueprintExceptionType::UserRaisedError, TEXT("UserRaisedError")},
	};
	
	const TSet<EBlueprintExceptionType::Type> IgnoredBlueprintExceptionTypes =
	{
		EBlueprintExceptionType::Breakpoint,
		EBlueprintExceptionType::Tracepoint,
		EBlueprintExceptionType::WireTracepoint,
	};

	void CallWithinBlueprintScript(TFunction<void()>&& Func)
	{
		NewObject<UToolCallExceptionHandlerTestScope>()->CallFunction(MoveTemp(Func));
	}
}