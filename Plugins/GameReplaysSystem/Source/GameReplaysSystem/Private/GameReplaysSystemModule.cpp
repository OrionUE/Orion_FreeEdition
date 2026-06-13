// Copyright (c) Ideality Century, Inc. All Rights Reserved.
// Author: LiuZe

#include "Modules/ModuleManager.h"

class FGameReplaysSystemModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

void FGameReplaysSystemModule::StartupModule()
{
}

void FGameReplaysSystemModule::ShutdownModule()
{
}
	
IMPLEMENT_MODULE(FGameReplaysSystemModule, GameReplaysSystem)
