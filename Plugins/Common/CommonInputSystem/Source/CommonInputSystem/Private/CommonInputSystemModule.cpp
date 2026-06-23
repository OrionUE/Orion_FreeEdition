/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Modules/ModuleManager.h"

class FCommonInputSystemModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

void FCommonInputSystemModule::StartupModule()
{
}

void FCommonInputSystemModule::ShutdownModule()
{
}

IMPLEMENT_MODULE(FCommonInputSystemModule, CommonInputSystem)
