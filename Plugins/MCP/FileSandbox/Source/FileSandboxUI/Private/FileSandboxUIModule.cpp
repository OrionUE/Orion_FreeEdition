// Copyright Epic Games, Inc. All Rights Reserved.

#include "FileSandboxUIModule.h"

#include "EntryPoint/SandboxEntryPointManager.h"

namespace UE::FileSandboxUI
{
void FFileSandboxUIModule::StartupModule()
{
    EntryPoints = MakeUnique<FSandboxEntryPointManager>();
}

void FFileSandboxUIModule::ShutdownModule()
{
    EntryPoints.Reset();
}
}
    
IMPLEMENT_MODULE(UE::FileSandboxUI::FFileSandboxUIModule, FileSandboxUI)