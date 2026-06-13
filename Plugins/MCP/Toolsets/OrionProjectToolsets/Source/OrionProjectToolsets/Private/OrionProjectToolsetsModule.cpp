/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "OrionBlueprintGraphToolset.h"
#include "OrionExperienceToolset.h"
#include "OrionObjectPropertyToolset.h"
#include "OrionUMGToolset.h"
#include "ToolsetRegistry/UToolsetRegistry.h"

class FOrionProjectToolsetsModule : public IModuleInterface
{
public:
	virtual void StartupModule() override
	{
		UToolsetRegistry::RegisterToolsetClass(UOrionBlueprintGraphToolset::StaticClass());
		UToolsetRegistry::RegisterToolsetClass(UOrionExperienceToolset::StaticClass());
		UToolsetRegistry::RegisterToolsetClass(UOrionObjectPropertyToolset::StaticClass());
		UToolsetRegistry::RegisterToolsetClass(UOrionUMGToolset::StaticClass());
	}

	virtual void ShutdownModule() override
	{
		UToolsetRegistry::UnregisterToolsetClass(UOrionUMGToolset::StaticClass());
		UToolsetRegistry::UnregisterToolsetClass(UOrionObjectPropertyToolset::StaticClass());
		UToolsetRegistry::UnregisterToolsetClass(UOrionExperienceToolset::StaticClass());
		UToolsetRegistry::UnregisterToolsetClass(UOrionBlueprintGraphToolset::StaticClass());
	}
};

IMPLEMENT_MODULE(FOrionProjectToolsetsModule, OrionProjectToolsets)
