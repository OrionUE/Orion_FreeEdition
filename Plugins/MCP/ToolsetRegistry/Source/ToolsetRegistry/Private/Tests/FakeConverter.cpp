// Copyright Epic Games, Inc. All Rights Reserved.

#include "FakeConverter.h"

#include "Templates/UnrealTemplate.h"

#if WITH_DEV_AUTOMATION_TESTS

namespace UE::ToolsetRegistry
{
	FFakeConverter::FFakeConverter() = default;

	FFakeConverter::~FFakeConverter() = default;

	FString FFakeConverter::GetName() const
	{
		static FString Name(TEXT("FakeConverter"));
		return Name;
	}
}

#endif