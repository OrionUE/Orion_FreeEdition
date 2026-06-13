// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

namespace UE::FileSandboxUI
{
class ISandboxEntryPointRegistry;

class IFileSandboxUIModule : public IModuleInterface
{
public:

	/**
	 * Singleton-like access to this module's interface.  This is just for convenience!
	 * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
	 *
	 * @return Returns singleton instance, loading the module on demand if needed
	 */
	static IFileSandboxUIModule& Get() { return FModuleManager::LoadModuleChecked<IFileSandboxUIModule>("FileSandboxUI"); }

	/**
	 * Checks to see if this module is loaded and ready.  It is only valid to call Get() during shutdown if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static bool IsAvailable() { return FModuleManager::Get().IsModuleLoaded("FileSandboxUI"); }
	
	/** @return Manager with which you can register editor entry points into the sandbox system. */
	virtual ISandboxEntryPointRegistry& GetEntryPointRegistry() = 0;
};
}
