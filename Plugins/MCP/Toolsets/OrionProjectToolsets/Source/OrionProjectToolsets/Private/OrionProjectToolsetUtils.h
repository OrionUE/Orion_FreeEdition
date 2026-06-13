/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#pragma once

#include "CoreMinimal.h"
#include "OrionBlueprintGraphToolset.h"

class UBlueprint;

namespace UE::OrionProjectToolsets
{
FOrionToolResult MakeResult(bool bSuccess, const FString& Message, const FString& AssetPath = FString());
FString NormalizeObjectPath(const FString& AssetPath);
UObject* LoadObjectFromPath(const FString& AssetPath, FString& OutError);
UClass* LoadClassFromPath(const FString& ClassPath, FString& OutError);
UBlueprint* LoadBlueprintFromPath(const FString& BlueprintPath, FString& OutError);
bool SaveLoadedAsset(UObject* Asset, bool bOnlyIfIsDirty, FString& OutError);
FString GetObjectPathSafe(const UObject* Object);
FString ExportPropertyValue(const FProperty* Property, const void* Container);
bool SetPropertyValueFromText(FProperty* Property, void* Container, UObject* Owner, const FString& ValueText, FString& OutError);
bool SetPropertyByPath(UObject* Object, const FString& PropertyPath, const FString& ValueText, FString& OutError);
bool SetPropertyByPath(UStruct* Struct, void* Container, UObject* Owner, const FString& PropertyPath, const FString& ValueText, FString& OutError);
void MarkObjectModified(UObject* Object);
}
