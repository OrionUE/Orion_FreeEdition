// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "Misc/AutomationTest.h"

#if WITH_DEV_AUTOMATION_TESTS

namespace ToolsetRegistryTest
{
	// Default flags to use for tests.
	const auto Flags =
		EAutomationTestFlags::EditorContext |
		EAutomationTestFlags::ProductFilter |
		EAutomationTestFlags::CriticalPriority;
}  // namespace ToolsetRegistryTest

#endif  // WITH_DEV_AUTOMATION_TESTS
