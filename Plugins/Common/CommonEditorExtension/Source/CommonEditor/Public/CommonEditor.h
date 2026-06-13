// Copyright (c) Ideality Century, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FCommonEditorModule : public FDefaultGameModuleImpl
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

protected:
    static void BindGameplayAbilitiesEditorDelegates();
    static void UnbindGameplayAbilitiesEditorDelegates();
    
    void ModulesChangedCallback(FName ModuleThatChanged, EModuleChangeReason ReasonForChange);
    
private:
    typedef FCommonEditorModule ThisClass;

    FDelegateHandle ToolMenusHandle;
};
