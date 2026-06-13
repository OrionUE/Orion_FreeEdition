// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Containers/UnrealString.h"
#include "Metadata/PCGAttributePropertySelector.h"

#include "PCGAttributePropertySelectorConverterTest.generated.h"

// Test-only USTRUCT used to surface a real FProperty for the selector to the converter.
USTRUCT()
struct FPCGAttributeSelectorTestHolder
{
	GENERATED_BODY()

	UPROPERTY()
	FPCGAttributePropertyInputSelector Selector;

	UPROPERTY()
	FString PlainString;
};
