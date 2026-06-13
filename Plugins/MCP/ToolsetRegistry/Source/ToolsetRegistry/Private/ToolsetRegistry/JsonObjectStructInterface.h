// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "UObject/Class.h"

struct FJsonObjectStructInterfaceRegistry
{
	static bool HasStructConverterRegistered(const UScriptStruct*)
	{
		return false;
	}
};
