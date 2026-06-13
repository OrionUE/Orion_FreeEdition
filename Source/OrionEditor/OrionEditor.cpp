/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionEditor.h"

#include "GameModes/CoreExperienceManager.h"

#define LOCTEXT_NAMESPACE "FOrionEditorModule"

void FOrionEditorModule::StartupModule()
{
	if (!IsRunningGame())
	{
		FEditorDelegates::BeginPIE.AddRaw(this, &ThisClass::OnBeginPIE);
		FEditorDelegates::EndPIE.AddRaw(this, &ThisClass::OnEndPIE);
	}
}

void FOrionEditorModule::ShutdownModule()
{
	FEditorDelegates::BeginPIE.RemoveAll(this);
	FEditorDelegates::EndPIE.RemoveAll(this);
}

void FOrionEditorModule::OnBeginPIE(bool bIsSimulating)
{
	UCoreExperienceManager* ExperienceManager = GEngine->GetEngineSubsystem<UCoreExperienceManager>();
	check(ExperienceManager);
	ExperienceManager->OnPlayInEditorBegun();
}

void FOrionEditorModule::OnEndPIE(bool bIsSimulating)
{
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FOrionEditorModule, OrionEditor)
