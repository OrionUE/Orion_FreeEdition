// Copyright Epic Games, Inc. All Rights Reserved.

#include "Kismet/KismetSystemLibrary.h"

#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION < 8

#include "Blueprint/BlueprintExceptionInfo.h"
#include "EngineLogs.h"
#include "UObject/Script.h"
#include "UObject/Stack.h"

void UKismetSystemLibrary::RaiseScriptError(const FString& ErrorMessage)
{
#if !(UE_BUILD_TEST || UE_BUILD_SHIPPING)
	FFrame* TopFrame = FFrame::GetThreadLocalTopStackFrame();
	if (TopFrame)
	{
#if WITH_EDITOR
		const FBlueprintExceptionInfo ExceptionInfo(
			EBlueprintExceptionType::UserRaisedError,
			FText::FromString(ErrorMessage));
		FBlueprintCoreDelegates::ThrowScriptException(TopFrame->Object, *TopFrame, ExceptionInfo);
#else
		UE_LOG(LogBlueprintUserMessages, Error, TEXT("%s:\n%s"), *ErrorMessage, *TopFrame->GetStackTrace());
#endif
	}
#endif
}

#endif

namespace UE::MCPCompat
{
	void RaiseScriptError(const FString& ErrorMessage)
	{
		UKismetSystemLibrary::RaiseScriptError(ErrorMessage);
	}
}
