// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Containers/UnrealString.h"
#include "Containers/ArrayView.h"

namespace UE::FileSandboxCore
{
/** Data describing a change in a repository */
struct FRepositoryChangedEvent
{
	/** Root directories of sandboxes that have been added. */
	TConstArrayView<FString> AddedSandboxPaths;
	
	/** Root directories of sandboxes that have been removed. */
	TConstArrayView<FString> RemovedSandboxPaths;
};
}
