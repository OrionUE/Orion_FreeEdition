/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

struct FUIComboActionBindingHandle
{
public:
	FUIComboActionBindingHandle();
private:
	FUIComboActionBindingHandle(int32 InRegistrationId);

public:
	bool IsValid() const;
	void Unregister();

	bool operator==(const FUIComboActionBindingHandle& Other) const { return RegistrationId == Other.RegistrationId; }
    bool operator!=(const FUIComboActionBindingHandle& Other) const { return !operator==(Other); }

	friend inline uint32 GetTypeHash(const FUIComboActionBindingHandle& Handle)
	{
		return ::GetTypeHash(Handle.RegistrationId);
	}

private:
	int32 RegistrationId = INDEX_NONE;

private:
	friend class FUIComboActionBinding;
};

class FUIComboActionBinding : public FTickableGameObject
{
public:
	FUIComboActionBinding() = delete;

	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;

private:
	FUIComboActionBinding(APlayerController* InPC, const TArray<FKey>& InComboKeys, const FSimpleDelegate& InOnTriggered);

public:
	static FUIComboActionBindingHandle RegisterComboAction(APlayerController* InPC, const TArray<FKey>& InComboKeys, const FSimpleDelegate& InOnTriggered);
	static TSharedPtr<FUIComboActionBinding> FindBinding(FUIComboActionBindingHandle Handle);

private:
	void CheckComboInput();

public:
	FUIComboActionBindingHandle Handle;

private:
	static int32 IdCounter;
	static TMap<FUIComboActionBindingHandle, TSharedPtr<FUIComboActionBinding>> AllRegistrationsByHandle;

	TObjectPtr<APlayerController> PC;
	TArray<FKey> ComboKeys;
	FSimpleDelegate OnTriggered;
	bool bTriggered = false;

private:
	friend FUIComboActionBindingHandle;
};
