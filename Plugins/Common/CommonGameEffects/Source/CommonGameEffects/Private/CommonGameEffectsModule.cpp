/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Modules/ModuleManager.h"

class FCommonGameEffectsModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

void FCommonGameEffectsModule::StartupModule()
{
}

void FCommonGameEffectsModule::ShutdownModule()
{
}
	
IMPLEMENT_MODULE(FCommonGameEffectsModule, CommonGameEffects)
