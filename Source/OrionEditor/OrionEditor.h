/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "Modules/ModuleManager.h"

class FOrionEditorModule : public FDefaultGameModuleImpl
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

protected:
    void OnBeginPIE(bool bIsSimulating);
    void OnEndPIE(bool bIsSimulating);

private:
    typedef FOrionEditorModule ThisClass;
};
