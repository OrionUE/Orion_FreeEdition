/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Modules/ModuleManager.h"

class FInteractionSystemModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

void FInteractionSystemModule::StartupModule()
{
}

void FInteractionSystemModule::ShutdownModule()
{
}
    
IMPLEMENT_MODULE(FInteractionSystemModule, InteractionSystem)
