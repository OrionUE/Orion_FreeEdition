/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "Modules/ModuleManager.h"

#if ORIONBROWSERWIDGET_WITH_BROWSER
#include "OrionBrowserModule.h"
#endif

class FOrionBrowserWidgetModule : public IModuleInterface
{
public:
	virtual void StartupModule() override
	{
#if ORIONBROWSERWIDGET_WITH_BROWSER
		IOrionBrowserModule::Get();
#endif
	}

	virtual void ShutdownModule() override
	{
	}
};

IMPLEMENT_MODULE(FOrionBrowserWidgetModule, OrionBrowserWidget);
