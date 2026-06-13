/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CommonTabListWidgetBase.h"

#include "UI_TabListWidgetBase.generated.h"

USTRUCT(BlueprintType)
struct FTabDescriptor
{
	GENERATED_BODY()

public:
	FTabDescriptor()
	: bHidden(false)
	, CreatedTabContentWidget(nullptr)
	{ }

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName TabId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText TabText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush IconBrush;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bHidden;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UCommonButtonBase> TabButtonType;

	//TODO: This should become a TSoftClassPtr<>, the underlying common tab list needs to be able to handle lazy tab content construction.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UCommonUserWidget> TabContentType;

	UPROPERTY(Transient)
	TObjectPtr<UWidget> CreatedTabContentWidget;
};

UINTERFACE(BlueprintType)
class UUI_TabButtonInterface : public UInterface
{
	GENERATED_BODY()
};

class IUI_TabButtonInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, Category="Tab Button")
	void SetTabLabelInfo(const FTabDescriptor& TabDescriptor);
};

UCLASS(Abstract, Blueprintable, BlueprintType, meta=(DisableNativeTick, DisplayName="Tab List Widget Base"))
class GAMEUI_API UUI_TabListWidgetBase : public UCommonTabListWidgetBase
{
	GENERATED_BODY()

protected:
	//~ Begin UUserWidget interface
	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	//~ End of UUserWidget interface

	//~ Begin UCommonTabListWidgetBase interface
	virtual void HandlePreLinkedSwitcherChanged() override;
	virtual void HandlePostLinkedSwitcherChanged() override;
	virtual void HandleTabCreation_Implementation(FName TabId, UCommonButtonBase* TabButton) override;
	//~ End of UCommonTabListWidgetBase interface

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Tab List")
	bool GetPreregisteredTabInfo(const FName TabNameId, FTabDescriptor& OutTabInfo);

	/** Helper method to get at all the preregistered tab infos */
	const TArray<FTabDescriptor>& GetAllPreregisteredTabInfos() { return PreregisteredTabInfoArray; }

	// Toggles whether a specified tab is hidden, can only be called before the switcher is associated
	UFUNCTION(BlueprintCallable, Category="Tab List")
	void SetTabHiddenState(FName TabNameId, bool bHidden);

	UFUNCTION(BlueprintCallable, Category="Tab List")
	bool RegisterDynamicTab(const FTabDescriptor& TabDescriptor);

	UFUNCTION(BlueprintCallable, Category="Tab List")
	bool IsFirstTabActive() const;

	UFUNCTION(BlueprintCallable, Category="Tab List")
	bool IsLastTabActive() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Tab List")
	bool IsTabVisible(FName TabId);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Tab List")
	int32 GetVisibleTabCount();

private:
	void SetupTabs();

protected:
	// Delegate broadcast when a new tab is created. Allows hook-ups after creation
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTabContentCreated, FName, TabId, UCommonUserWidget*, TabWidget);
	UPROPERTY(BlueprintAssignable, Category="Tab List")
	FOnTabContentCreated OnTabContentCreated;

	DECLARE_MULTICAST_DELEGATE_TwoParams(FOnTabContentCreatedNative, FName /*TabId*/, UCommonUserWidget* /*TabWidget*/);
	FOnTabContentCreatedNative OnTabContentCreatedNative;

private:
	UPROPERTY(EditAnywhere, meta=(TitleProperty="TabId"))
	TArray<FTabDescriptor> PreregisteredTabInfoArray;
	
	// Stores label info for tabs that have been registered at runtime but not yet created. Elements are removed once they are created
	UPROPERTY()
	TMap<FName, FTabDescriptor> PendingTabLabelInfoMap;
};
