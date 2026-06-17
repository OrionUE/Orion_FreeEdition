/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionProjectToolsetUtils.h"

#include "Editor.h"
#include "Engine/Blueprint.h"
#include "Misc/PackageName.h"
#include "Subsystems/EditorAssetSubsystem.h"
#include "UObject/Package.h"
#include "UObject/SoftObjectPath.h"
#include "UObject/TextProperty.h"
#include "UObject/UnrealType.h"

namespace UE::OrionProjectToolsets
{
FOrionToolResult MakeResult(bool bSuccess, const FString& Message, const FString& AssetPath)
{
	FOrionToolResult Result;
	Result.bSuccess = bSuccess;
	Result.Message = Message;
	Result.AssetPath = AssetPath;
	return Result;
}

FString NormalizeObjectPath(const FString& AssetPath)
{
	FString Path = AssetPath;
	Path.TrimStartAndEndInline();

	if (Path.IsEmpty())
	{
		return Path;
	}

	Path.ReplaceInline(TEXT("\\"), TEXT("/"));
	if (Path.StartsWith(TEXT("Content/")))
	{
		Path = TEXT("/Game/") + Path.RightChop(8);
	}

	if (!Path.StartsWith(TEXT("/")) || Path.Contains(TEXT(".")))
	{
		return Path;
	}

	const FString AssetName = FPackageName::GetLongPackageAssetName(Path);
	if (!AssetName.IsEmpty())
	{
		Path += TEXT(".") + AssetName;
	}

	return Path;
}

UObject* LoadObjectFromPath(const FString& AssetPath, FString& OutError)
{
	const FString ObjectPath = NormalizeObjectPath(AssetPath);
	UObject* Object = StaticLoadObject(UObject::StaticClass(), nullptr, *ObjectPath);
	if (!Object)
	{
		OutError = FString::Printf(TEXT("Failed to load object '%s'."), *ObjectPath);
	}
	return Object;
}

UClass* LoadClassFromPath(const FString& ClassPath, FString& OutError)
{
	const FString ObjectPath = NormalizeObjectPath(ClassPath);
	UObject* LoadedObject = StaticLoadObject(UObject::StaticClass(), nullptr, *ObjectPath);
	if (UClass* LoadedClass = Cast<UClass>(LoadedObject))
	{
		return LoadedClass;
	}

	if (UBlueprint* Blueprint = Cast<UBlueprint>(LoadedObject))
	{
		if (Blueprint->GeneratedClass)
		{
			return Blueprint->GeneratedClass;
		}
	}

	UClass* LoadedClass = StaticLoadClass(UObject::StaticClass(), nullptr, *ObjectPath);
	if (!LoadedClass && !ObjectPath.EndsWith(TEXT("_C")))
	{
		const FString GeneratedClassPath = ObjectPath + TEXT("_C");
		LoadedClass = StaticLoadClass(UObject::StaticClass(), nullptr, *GeneratedClassPath);
	}

	if (!LoadedClass)
	{
		OutError = FString::Printf(TEXT("Failed to load class '%s'."), *ObjectPath);
	}
	return LoadedClass;
}

UBlueprint* LoadBlueprintFromPath(const FString& BlueprintPath, FString& OutError)
{
	UObject* Object = LoadObjectFromPath(BlueprintPath, OutError);
	if (UBlueprint* Blueprint = Cast<UBlueprint>(Object))
	{
		return Blueprint;
	}

	if (UClass* Class = Cast<UClass>(Object))
	{
		if (UBlueprint* Blueprint = Cast<UBlueprint>(Class->ClassGeneratedBy))
		{
			return Blueprint;
		}
	}

	if (Object)
	{
		OutError = FString::Printf(TEXT("Object '%s' is not a Blueprint asset."), *BlueprintPath);
	}
	return nullptr;
}

bool SaveLoadedAsset(UObject* Asset, bool bOnlyIfIsDirty, FString& OutError)
{
	if (!Asset)
	{
		OutError = TEXT("Asset is null.");
		return false;
	}

	UEditorAssetSubsystem* AssetSubsystem = GEditor ?
		GEditor->GetEditorSubsystem<UEditorAssetSubsystem>() : nullptr;
	if (!AssetSubsystem)
	{
		OutError = TEXT("EditorAssetSubsystem is not available.");
		return false;
	}

	if (!AssetSubsystem->SaveLoadedAsset(Asset, bOnlyIfIsDirty))
	{
		OutError = FString::Printf(TEXT("Failed to save asset '%s'."), *Asset->GetPathName());
		return false;
	}

	return true;
}

FString GetObjectPathSafe(const UObject* Object)
{
	return Object ? Object->GetPathName() : FString();
}

FString ExportPropertyValue(const FProperty* Property, const void* Container)
{
	if (!Property || !Container)
	{
		return FString();
	}

	FString Value;
	const void* ValuePtr = Property->ContainerPtrToValuePtr<void>(Container);
	Property->ExportText_Direct(Value, ValuePtr, nullptr, nullptr, PPF_None);
	return Value;
}

bool SetPropertyValueFromText(FProperty* Property, void* Container, UObject* Owner, const FString& ValueText, FString& OutError)
{
	if (!Property || !Container)
	{
		OutError = TEXT("Property or container is null.");
		return false;
	}

	void* ValuePtr = Property->ContainerPtrToValuePtr<void>(Container);
	const TCHAR* ImportResult = Property->ImportText_Direct(*ValueText, ValuePtr, Owner, PPF_None);
	if (!ImportResult)
	{
		OutError = FString::Printf(TEXT("Failed to import value '%s' into property '%s'."), *ValueText, *Property->GetName());
		return false;
	}

	return true;
}

static bool ResolveNestedProperty(UStruct*& Struct, void*& Container, UObject*& Owner, const FString& Segment, FString& OutError)
{
	FProperty* Property = Struct ? Struct->FindPropertyByName(FName(*Segment)) : nullptr;
	if (!Property)
	{
		OutError = FString::Printf(TEXT("Property '%s' was not found."), *Segment);
		return false;
	}

	void* ValuePtr = Property->ContainerPtrToValuePtr<void>(Container);
	if (FStructProperty* StructProperty = CastField<FStructProperty>(Property))
	{
		Struct = StructProperty->Struct;
		Container = ValuePtr;
		return true;
	}

	if (FObjectPropertyBase* ObjectProperty = CastField<FObjectPropertyBase>(Property))
	{
		UObject* NestedObject = ObjectProperty->GetObjectPropertyValue(ValuePtr);
		if (!NestedObject)
		{
			OutError = FString::Printf(TEXT("Object property '%s' is null."), *Segment);
			return false;
		}

		Owner = NestedObject;
		Struct = NestedObject->GetClass();
		Container = NestedObject;
		return true;
	}

	OutError = FString::Printf(TEXT("Property '%s' is not a struct or object and cannot be traversed."), *Segment);
	return false;
}

bool SetPropertyByPath(UObject* Object, const FString& PropertyPath, const FString& ValueText, FString& OutError)
{
	if (!Object)
	{
		OutError = TEXT("Object is null.");
		return false;
	}

	UStruct* Struct = Object->GetClass();
	void* Container = Object;
	UObject* Owner = Object;
	return SetPropertyByPath(Struct, Container, Owner, PropertyPath, ValueText, OutError);
}

bool SetPropertyByPath(UStruct* Struct, void* Container, UObject* Owner, const FString& PropertyPath, const FString& ValueText, FString& OutError)
{
	if (!Struct || !Container)
	{
		OutError = TEXT("Struct or container is null.");
		return false;
	}

	TArray<FString> Segments;
	PropertyPath.ParseIntoArray(Segments, TEXT("."), true);
	if (Segments.IsEmpty())
	{
		OutError = TEXT("Property path is empty.");
		return false;
	}

	for (int32 SegmentIndex = 0; SegmentIndex < Segments.Num() - 1; ++SegmentIndex)
	{
		if (!ResolveNestedProperty(Struct, Container, Owner, Segments[SegmentIndex], OutError))
		{
			return false;
		}
	}

	FProperty* LeafProperty = Struct->FindPropertyByName(FName(*Segments.Last()));
	if (!LeafProperty)
	{
		OutError = FString::Printf(TEXT("Property '%s' was not found."), *Segments.Last());
		return false;
	}

	return SetPropertyValueFromText(LeafProperty, Container, Owner, ValueText, OutError);
}

void MarkObjectModified(UObject* Object)
{
	if (!Object)
	{
		return;
	}

	Object->Modify();
	if (UPackage* Package = Object->GetOutermost())
	{
		Package->MarkPackageDirty();
	}
}
}
