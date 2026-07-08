/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "OrionExperienceToolset.h"
#include "OrionLocalizationToolset.h"
#include "OrionMetaSoundToolset.h"
#include "OrionUMGToolset.h"
#include "ToolsetRegistry/UToolsetRegistry.h"

class FOrionProjectToolsetsModule : public IModuleInterface
{
public:
	virtual void StartupModule() override
	{
		UToolsetRegistry::RegisterToolsetClass(UOrionExperienceToolset::StaticClass());
		UToolsetRegistry::RegisterToolsetClass(UOrionLocalizationToolset::StaticClass());
		UToolsetRegistry::RegisterToolsetClass(UOrionMetaSoundToolset::StaticClass());
		UToolsetRegistry::RegisterToolsetClass(UOrionUMGToolset::StaticClass());
	}

	virtual void ShutdownModule() override
	{
		UToolsetRegistry::UnregisterToolsetClass(UOrionUMGToolset::StaticClass());
		UToolsetRegistry::UnregisterToolsetClass(UOrionMetaSoundToolset::StaticClass());
		UToolsetRegistry::UnregisterToolsetClass(UOrionLocalizationToolset::StaticClass());
		UToolsetRegistry::UnregisterToolsetClass(UOrionExperienceToolset::StaticClass());
	}
};

IMPLEMENT_MODULE(FOrionProjectToolsetsModule, OrionProjectToolsets)
