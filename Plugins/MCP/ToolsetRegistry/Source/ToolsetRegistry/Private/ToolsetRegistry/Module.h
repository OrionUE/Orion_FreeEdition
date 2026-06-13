// Copyright Epic Games, Inc. All Rights Reserved.


#pragma once

#include "Modules/ModuleInterface.h"
#include "Logging/LogMacros.h"

//
// FToolsetRegistryModule
//
DECLARE_LOG_CATEGORY_EXTERN(LogToolsetRegistry, Log, Log);

class FToolsetRegistryModule : public IModuleInterface
{
public:
	
	// IModuleInterface interface 
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
};
