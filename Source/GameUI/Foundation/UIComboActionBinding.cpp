/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "UIComboActionBinding.h"

int32 FUIComboActionBinding::IdCounter = 0;
TMap<FUIComboActionBindingHandle, TSharedPtr<FUIComboActionBinding>> FUIComboActionBinding::AllRegistrationsByHandle;

FUIComboActionBindingHandle::FUIComboActionBindingHandle()
	: RegistrationId(INDEX_NONE)
{
}

FUIComboActionBindingHandle::FUIComboActionBindingHandle(int32 InRegistrationId)
	: RegistrationId(InRegistrationId)
{
}

bool FUIComboActionBindingHandle::IsValid() const
{
	return RegistrationId >= 0 && FUIComboActionBinding::FindBinding(*this) != nullptr;
}

void FUIComboActionBindingHandle::Unregister()
{
	if (TSharedPtr<FUIComboActionBinding> Binding = FUIComboActionBinding::FindBinding(*this))
	{
		Binding->SetTickableTickType(ETickableTickType::Never);
	}

	FUIComboActionBinding::AllRegistrationsByHandle.Remove(*this);
	RegistrationId = INDEX_NONE;
}

void FUIComboActionBinding::Tick(float DeltaTime)
{
	CheckComboInput();
}

TStatId FUIComboActionBinding::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UUIComboActionBinding, STATGROUP_Tickables);
}

FUIComboActionBinding::FUIComboActionBinding(APlayerController* InPC, const TArray<FKey>& InComboKeys, const FSimpleDelegate& InOnTriggered)
	: Handle(IdCounter++)
	, PC(InPC)
	, ComboKeys(InComboKeys)
	, OnTriggered(InOnTriggered)
{
}

FUIComboActionBindingHandle FUIComboActionBinding::RegisterComboAction(APlayerController* InPC, const TArray<FKey>& InComboKeys, const FSimpleDelegate& InOnTriggered)
{
	TSharedPtr<FUIComboActionBinding> NewRegistration = MakeShareable(new FUIComboActionBinding(InPC, InComboKeys, InOnTriggered));
	FUIComboActionBindingHandle Handle = NewRegistration->Handle;
	AllRegistrationsByHandle.Add(Handle, MoveTemp(NewRegistration));

	return Handle;
}

TSharedPtr<FUIComboActionBinding> FUIComboActionBinding::FindBinding(FUIComboActionBindingHandle Handle)
{
	if (TSharedPtr<FUIComboActionBinding>* Ptr = AllRegistrationsByHandle.Find(Handle))
	{
		return *Ptr;
	}

	return nullptr;
}

void FUIComboActionBinding::CheckComboInput()
{
	if (!PC)
		return;

	for (const FKey& Key : ComboKeys)
	{
		if (!PC->IsInputKeyDown(Key))
		{
			bTriggered = false;
			return;
		}
	}

	if (!bTriggered)
	{
		OnTriggered.ExecuteIfBound();
		bTriggered = true;
	}
}
