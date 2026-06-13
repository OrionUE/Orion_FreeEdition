// Copyright (c) Ideality Century, Inc. All Rights Reserved.
// Author: LiuZe

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
