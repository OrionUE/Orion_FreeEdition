// Copyright Epic Games, Inc. All Rights Reserved.

#include "ToolsetRegistry/ToolCallAsyncResultString.h"
#include "Tests/ToolCallAsyncResultTest.h"

#if WITH_DEV_AUTOMATION_TESTS

UE_TOOLSET_REGISTRY_TOOL_CALL_ASYNC_RESULT_WITH_VALUE_SPEC(
	String, UToolCallAsyncResultString, FString,
	[]() -> FString { return TEXT("Done"); },
	[](const FString& ExpectedValue) -> TSharedPtr<FJsonValue> {
		return MakeShared<FJsonValueString>(ExpectedValue);
	})

#endif  // WITH_DEV_AUTOMATION_TESTS	