// Copyright Epic Games, Inc. All Rights Reserved.

#include "MetaHumanGenerator.h"
#include "MetaHumanCharacterEditorSubsystem.h"
#include "MetaHumanCharacter.h"
#include "Editor.h"

DEFINE_LOG_CATEGORY(LogMetaHumanGenerator);

void FMetaHumanGeneratorModule::StartupModule() {}
void FMetaHumanGeneratorModule::ShutdownModule() {}

IMPLEMENT_MODULE(FMetaHumanGeneratorModule, MetaHumanGenerator)

void UMetaHumanGeneratorSubsystemWrapper::ResetNeckToBody(UMetaHumanCharacter *InCharacter)
{
	if (!InCharacter)
	{
		UE_LOG(LogMetaHumanGenerator, Error, TEXT("ResetNeckToBody: Invalid character (nullptr)"));
		return;
	}

	if (!GEditor)
	{
		UE_LOG(LogMetaHumanGenerator, Error, TEXT("ResetNeckToBody: Editor is not available"));
		return;
	}

	UMetaHumanCharacterEditorSubsystem *Subsystem = GEditor->GetEditorSubsystem<UMetaHumanCharacterEditorSubsystem>();
	if (!Subsystem)
	{
		UE_LOG(LogMetaHumanGenerator, Error, TEXT("ResetNeckToBody: MetaHumanCharacterEditorSubsystem not available"));
		return;
	}

	TSharedPtr<FMetaHumanCharacterIdentity::FState> NewState = Subsystem->CopyFaceState(InCharacter);
	if (!NewState)
	{
		UE_LOG(LogMetaHumanGenerator, Error, TEXT("ResetNeckToBody: Failed to copy face state for character %s"), *InCharacter->GetName());
		return;
	}

	NewState->ResetNeckRegion();
	Subsystem->ApplyFaceState(InCharacter, NewState.ToSharedRef());
}
