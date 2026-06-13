// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "SandboxInitArgs.h"
#include "Utils/SandboxDirectoryUtils.h"

namespace UE::FileSandboxCore
{
/** Args for deleting sandbox by name. */
struct FDeleteSandboxByNameArgs
{
	/** The name of the sandbox you want to load. */
	FString Name;

	/** The directory in which to search for the sandbox. */
	FString BaseDirectory;

	explicit FDeleteSandboxByNameArgs(FString InName, FString InBaseDirectory = GetBaseSandboxDirectory()) 
		: Name(MoveTemp(InName))
		, BaseDirectory(MoveTemp(InBaseDirectory))
	{
		check(!Name.IsEmpty());
	}
};
}
