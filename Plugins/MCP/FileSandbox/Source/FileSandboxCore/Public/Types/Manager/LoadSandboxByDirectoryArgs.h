// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Containers/UnrealString.h"
#include "SandboxInitArgs.h"

namespace UE::FileSandboxCore
{
/** Args for loading a pre-existing sandbox. */
struct FLoadSandboxByDirectoryArgs
{
	/** The root directory of the sandbox (i.e. the one containing the manifest file). */
	FString SandboxRootPath;
	
	/** Base arguments for instantiating the sandbox environment. */
	FSandboxInitArgs InitArgs;

	explicit FLoadSandboxByDirectoryArgs(FString InSandboxRootPath) : SandboxRootPath(MoveTemp(InSandboxRootPath))
	{
		check(!SandboxRootPath.IsEmpty());
	}
};
}
