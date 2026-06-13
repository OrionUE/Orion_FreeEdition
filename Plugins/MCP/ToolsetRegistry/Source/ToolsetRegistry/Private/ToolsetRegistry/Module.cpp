// Copyright Epic Games, Inc. All Rights Reserved.


#include "ToolsetRegistry/Module.h"

#include "Modules/ModuleManager.h"

#define LOCTEXT_NAMESPACE "FToolsetRegistryModule"


//
//  FToolsetRegistryModule
//


/*virtual*/ void FToolsetRegistryModule::StartupModule()
{
}


/*virtual*/ void FToolsetRegistryModule::ShutdownModule()
{
	
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FToolsetRegistryModule, ToolsetRegistry);
DEFINE_LOG_CATEGORY(LogToolsetRegistry);