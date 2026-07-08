/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameUIPopupTypes.h"
#include "UObject/Object.h"
#include "UObject/SoftObjectPtr.h"

#include "GameUIPopupDefinition.generated.h"

class ULocalPlayer;
class UUI_PopupContentWidget;
class UUI_PopupScreen;
class UUserWidget;

UENUM(BlueprintType)
enum class EGameUIHtmlPopupSource : uint8
{
	URL,
	InlineString
};

/**
 * Base definition for a data-driven popup.
 */
UCLASS(Abstract, BlueprintType, Blueprintable, EditInlineNew, DefaultToInstanced)
class GAMEUI_API UGameUIPopupDefinitionBase : public UObject
{
	GENERATED_BODY()

public:
	UGameUIPopupDefinitionBase();

	UFUNCTION(BlueprintCallable, Category="Game UI|Popup")
	UGameUIPopupDescriptor* BuildPopupDescriptor(UObject* Outer, ULocalPlayer* LocalPlayer, FName PopupContext) const;

	UFUNCTION(BlueprintPure, Category="Game UI|Popup")
	bool MatchesPopupContext(FName PopupContext) const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Game UI|Popup")
	bool CanShowPopup(ULocalPlayer* LocalPlayer, FName PopupContext) const;

	UFUNCTION(BlueprintNativeEvent, Category="Game UI|Popup")
	void ConfigurePopupDescriptor(UGameUIPopupDescriptor* Descriptor, ULocalPlayer* LocalPlayer, FName PopupContext) const;

protected:
	virtual bool CanShowPopup_Implementation(ULocalPlayer* LocalPlayer, FName PopupContext) const;
	virtual void ConfigurePopupDescriptor_Implementation(UGameUIPopupDescriptor* Descriptor, ULocalPlayer* LocalPlayer, FName PopupContext) const;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup")
	bool bEnabled = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup")
	TArray<FName> PopupContexts;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup")
	FGameplayTag PopupType;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup")
	FName PopupGroup;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup")
	int32 Priority = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup")
	bool bReplaceQueuedPopupsInGroup = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup")
	bool bDismissible = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup")
	bool bTapOutsideToDismiss = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup", meta=(ClampMin="0.0"))
	float AutoDismissSeconds = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup|Presentation")
	TSoftClassPtr<UUI_PopupScreen> PopupScreenClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup|Presentation")
	TSoftClassPtr<UUI_PopupContentWidget> ContentWidgetClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup|Presentation")
	FVector2D PreferredSize = FVector2D(720.0, 540.0);

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup|Action")
	TArray<FGameUIPopupAction> Actions;
};

/**
 * Popup definition for HTML URL or inline HTML content.
 */
UCLASS(BlueprintType, Blueprintable, EditInlineNew, DefaultToInstanced)
class GAMEUI_API UGameUIHtmlPopupDefinition : public UGameUIPopupDefinitionBase
{
	GENERATED_BODY()

protected:
	virtual void ConfigurePopupDescriptor_Implementation(UGameUIPopupDescriptor* Descriptor, ULocalPlayer* LocalPlayer, FName PopupContext) const override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup|Content")
	FText Title;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup|Content")
	FText Subtitle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup|Content", meta=(MultiLine="true"))
	FText Body;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup|HTML")
	EGameUIHtmlPopupSource HtmlSource = EGameUIHtmlPopupSource::URL;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup|HTML", meta=(MultiLine="true"))
	FString HtmlString;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup|HTML")
	FString HtmlURL;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup|HTML")
	FString HtmlBaseURL = TEXT("https://local.popup/");

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup|HTML")
	bool bHtmlSupportsTransparency = true;
};

/**
 * Popup definition for reward lists.
 */
UCLASS(BlueprintType, Blueprintable, EditInlineNew, DefaultToInstanced)
class GAMEUI_API UGameUIRewardPopupDefinition : public UGameUIPopupDefinitionBase
{
	GENERATED_BODY()

protected:
	virtual void ConfigurePopupDescriptor_Implementation(UGameUIPopupDescriptor* Descriptor, ULocalPlayer* LocalPlayer, FName PopupContext) const override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup|Content")
	FText Title;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup|Content")
	FText Subtitle;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup|Content", meta=(MultiLine="true"))
	FText Body;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup|Content")
	FSlateBrush HeroBrush;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Popup|Content")
	TArray<FGameUIPopupRewardLine> Rewards;
};
