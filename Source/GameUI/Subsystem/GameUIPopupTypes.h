/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "GameplayTagContainer.h"
#include "Math/Vector2D.h"
#include "Messaging/CommonMessagingSubsystem.h"
#include "Styling/SlateBrush.h"
#include "UObject/Object.h"
#include "UObject/SoftObjectPtr.h"

#include "GameUIPopupTypes.generated.h"

class UGameUIPopupDescriptor;
class UUI_PopupContentWidget;
class UUI_PopupScreen;
class UUserWidget;

UENUM(BlueprintType)
enum class EGameUIPopupContentKind : uint8
{
	Text,
	RichText,
	Reward,
	CustomWidget,
	HtmlString,
	HtmlUrl
};

USTRUCT(BlueprintType)
struct FGameUIPopupRewardLine
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup")
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup")
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup")
	int32 Quantity = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup")
	FSlateBrush IconBrush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup")
	FGameplayTag RewardTag;
};

USTRUCT(BlueprintType)
struct FGameUIPopupAction
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup")
	FName ActionId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup")
	FText DisplayText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup")
	FDataTableRowHandle InputAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup")
	FGameplayTag ActionTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup")
	ECommonMessagingResult CommonResult = ECommonMessagingResult::Confirmed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup")
	bool bClosesPopup = true;
};

USTRUCT(BlueprintType)
struct FGameUIPopupResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category="Popup")
	TObjectPtr<UGameUIPopupDescriptor> Descriptor;

	UPROPERTY(BlueprintReadOnly, Category="Popup")
	FName ActionId;

	UPROPERTY(BlueprintReadOnly, Category="Popup")
	FGameplayTag ActionTag;

	UPROPERTY(BlueprintReadOnly, Category="Popup")
	ECommonMessagingResult CommonResult = ECommonMessagingResult::Unknown;

	UPROPERTY(BlueprintReadOnly, Category="Popup")
	bool bDismissedWithoutAction = false;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameUIPopupDynamicResultDelegate, UGameUIPopupDescriptor*, Descriptor, FGameUIPopupResult, Result);
DECLARE_DELEGATE_TwoParams(FGameUIPopupResultDelegate, UGameUIPopupDescriptor* /* Descriptor */, const FGameUIPopupResult& /* Result */);

/**
 * Data-only request object for a queued UI popup.
 */
UCLASS(BlueprintType)
class GAMEUI_API UGameUIPopupDescriptor : public UObject
{
	GENERATED_BODY()

public:
	UGameUIPopupDescriptor();

	UFUNCTION(BlueprintCallable, Category="Game UI|Popup", meta=(WorldContext="WorldContextObject"))
	static UGameUIPopupDescriptor* CreateTextPopup(UObject* WorldContextObject, const FText& Title, const FText& Body);

	UFUNCTION(BlueprintCallable, Category="Game UI|Popup", meta=(WorldContext="WorldContextObject"))
	static UGameUIPopupDescriptor* CreateHtmlPopup(UObject* WorldContextObject, const FText& Title, const FString& Html, bool bIsUrl);

	UFUNCTION(BlueprintCallable, Category="Game UI|Popup", meta=(WorldContext="WorldContextObject"))
	static UGameUIPopupDescriptor* CreateRewardPopup(UObject* WorldContextObject, const FText& Title, const FText& Body, const TArray<FGameUIPopupRewardLine>& InRewards);

	UFUNCTION(BlueprintCallable, Category="Game UI|Popup")
	UGameUIPopupDescriptor* AddAction(FName ActionId, const FText& DisplayText, ECommonMessagingResult CommonResult = ECommonMessagingResult::Confirmed);

	UFUNCTION(BlueprintCallable, Category="Game UI|Popup")
	void EnsureDefaultAction();

	UFUNCTION(BlueprintPure, Category="Game UI|Popup")
	TSubclassOf<UUI_PopupContentWidget> GetLoadedContentWidgetClass() const;

	bool HasUnloadedContentWidgetClass() const;
	FSoftObjectPath GetContentWidgetClassPath() const;
	void BroadcastResult(const FGameUIPopupResult& Result);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup")
	FGuid PopupId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup")
	FGameplayTag PopupType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup")
	FName PopupGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup")
	int32 Priority = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup")
	bool bReplaceQueuedPopupsInGroup = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup")
	bool bDismissible = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup")
	bool bTapOutsideToDismiss = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup", meta=(ClampMin="0.0"))
	float AutoDismissSeconds = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup|Presentation")
	TSoftClassPtr<UUI_PopupScreen> PopupScreenClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup|Presentation")
	TSoftClassPtr<UUI_PopupContentWidget> ContentWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup")
	FVector2D PreferredSize = FVector2D(720.0, 540.0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup|Content")
	EGameUIPopupContentKind ContentKind = EGameUIPopupContentKind::Text;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup|Content")
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup|Content")
	FText Subtitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup|Content", meta=(MultiLine="true"))
	FText Body;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup|Content")
	FSlateBrush HeroBrush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup|Content")
	TArray<FGameUIPopupRewardLine> Rewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup|Content")
	TSubclassOf<UUserWidget> CustomContentWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup|HTML", meta=(MultiLine="true"))
	FString HtmlString;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup|HTML")
	FString HtmlURL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup|HTML")
	FString HtmlBaseURL = TEXT("https://local.popup/");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup|HTML")
	bool bHtmlSupportsTransparency = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Popup|Action")
	TArray<FGameUIPopupAction> Actions;

	UPROPERTY(BlueprintAssignable, Category="Game UI|Popup")
	FGameUIPopupDynamicResultDelegate OnPopupResult;
};
