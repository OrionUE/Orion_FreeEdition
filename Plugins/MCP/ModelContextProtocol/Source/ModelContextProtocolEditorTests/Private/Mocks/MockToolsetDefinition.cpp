// Copyright Epic Games, Inc. All Rights Reserved.

#include "Mocks/MockToolsetDefinition.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(MockToolsetDefinition)

FString UMockToolsetDefinition::Greet(const FString& Name)
{
	return FString::Printf(TEXT("Hello, %s!"), *Name);
}

int32 UMockToolsetDefinition::Add(int32 A, int32 B)
{
	return A + B;
}
