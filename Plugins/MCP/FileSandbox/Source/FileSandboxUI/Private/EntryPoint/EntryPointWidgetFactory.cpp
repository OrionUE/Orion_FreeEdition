// Copyright Epic Games, Inc. All Rights Reserved.

#include "EntryPoint/EntryPointWidgetFactory.h"

#include "ExternalSandboxActiveViewModel.h"
#include "Widgets/SExternalSandboxActiveOverlay.h"

namespace UE::FileSandboxUI
{
TSharedRef<SWidget> MakeExternalSandboxActiveOverlay(const TSharedRef<IExternalSandboxActiveViewModel>& InViewModel)
{
	return SNew(SExternalSandboxActiveOverlay, InViewModel);
}

TSharedRef<IExternalSandboxActiveViewModel> MakeExternalSandboxActiveViewModel(
	const TSharedRef<ISandboxEntryPoint>& InOwningEntryPoint
	)
{
	return MakeShared<FExternalSandboxActiveViewModel>(InOwningEntryPoint);
}
}
