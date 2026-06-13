/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CommonListView.h"

#include "UI_ListView.generated.h"

class UUI_WidgetFactory;

UCLASS(meta=(DisableNativeTick, DisplayName="List View Base"))
class GAMEUI_API UUI_ListView : public UCommonListView
{
	GENERATED_BODY()

public:
	UUI_ListView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

#if WITH_EDITOR
	virtual void ValidateCompiledDefaults(IWidgetCompilerLog& InCompileLog) const override;
#endif

protected:
	virtual UUserWidget& OnGenerateEntryWidgetInternal(UObject* Item, TSubclassOf<UUserWidget> DesiredEntryClass, const TSharedRef<STableViewBase>& OwnerTable) override;

protected:
	UPROPERTY(EditAnywhere, Instanced, Category="Entry Creation")
	TArray<TObjectPtr<UUI_WidgetFactory>> FactoryRules;
};
