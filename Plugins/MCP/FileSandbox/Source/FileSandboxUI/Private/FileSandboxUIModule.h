// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "IFileSandboxUIModule.h"
#include "EntryPoint/SandboxEntryPointManager.h"

namespace UE::FileSandboxUI
{
/** Knows about editor systems that start sandboxes. */
class FFileSandboxUIModule : public IFileSandboxUIModule
{
public:
	
	//~ Begin IModuleInterface Interface
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	//~ End IModuleInterface Interface
	
	//~ Begin IFileSandboxUIModule Interface
	virtual ISandboxEntryPointRegistry& GetEntryPointRegistry() override { return *EntryPoints.Get(); }
	//~ End IFileSandboxUIModule Interface
	
private:
	
	/** Knows about editor systems that start sandboxes. */
	TUniquePtr<FSandboxEntryPointManager> EntryPoints;
};
}

