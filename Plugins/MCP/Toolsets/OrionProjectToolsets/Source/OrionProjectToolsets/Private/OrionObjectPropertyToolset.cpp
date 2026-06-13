/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionObjectPropertyToolset.h"

#include "Engine/Blueprint.h"
#include "OrionProjectToolsetUtils.h"
#include "UObject/UnrealType.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionObjectPropertyToolset)

namespace UE::OrionProjectToolsets::ObjectProperties
{
static UObject* ResolveInspectionObject(const FString& ObjectPath, bool bInspectBlueprintCDO, FString& OutError)
{
	UObject* Object = LoadObjectFromPath(ObjectPath, OutError);
	if (!Object)
	{
		return nullptr;
	}

	if (!bInspectBlueprintCDO)
	{
		return Object;
	}

	if (UBlueprint* Blueprint = Cast<UBlueprint>(Object))
	{
		if (!Blueprint->GeneratedClass)
		{
			OutError = FString::Printf(TEXT("Blueprint '%s' has no GeneratedClass."), *Blueprint->GetPathName());
			return nullptr;
		}

		return Blueprint->GeneratedClass->GetDefaultObject();
	}

	if (UClass* Class = Cast<UClass>(Object))
	{
		return Class->GetDefaultObject();
	}

	return Object;
}

static FString LimitValueLength(FString Value, int32 MaxValueLength)
{
	if (MaxValueLength > 0 && Value.Len() > MaxValueLength)
	{
		Value.LeftInline(MaxValueLength);
		Value += TEXT("...");
	}

	return Value;
}

static bool ResolvePropertyByPath(UObject* Object, const FString& PropertyPath, FProperty*& OutProperty, void*& OutContainer, FString& OutError)
{
	if (!Object)
	{
		OutError = TEXT("Object is null.");
		return false;
	}

	TArray<FString> Segments;
	PropertyPath.ParseIntoArray(Segments, TEXT("."), true);
	if (Segments.IsEmpty())
	{
		OutError = TEXT("PropertyPath is empty.");
		return false;
	}

	UStruct* Struct = Object->GetClass();
	void* Container = Object;
	UObject* CurrentObject = Object;

	for (int32 SegmentIndex = 0; SegmentIndex < Segments.Num(); ++SegmentIndex)
	{
		FProperty* Property = Struct ? Struct->FindPropertyByName(FName(*Segments[SegmentIndex])) : nullptr;
		if (!Property)
		{
			OutError = FString::Printf(TEXT("Property '%s' was not found."), *Segments[SegmentIndex]);
			return false;
		}

		if (SegmentIndex == Segments.Num() - 1)
		{
			OutProperty = Property;
			OutContainer = Container;
			return true;
		}

		void* ValuePtr = Property->ContainerPtrToValuePtr<void>(Container);
		if (FStructProperty* StructProperty = CastField<FStructProperty>(Property))
		{
			Struct = StructProperty->Struct;
			Container = ValuePtr;
			continue;
		}

		if (FObjectPropertyBase* ObjectProperty = CastField<FObjectPropertyBase>(Property))
		{
			CurrentObject = ObjectProperty->GetObjectPropertyValue(ValuePtr);
			if (!CurrentObject)
			{
				OutError = FString::Printf(TEXT("Object property '%s' is null."), *Segments[SegmentIndex]);
				return false;
			}

			Struct = CurrentObject->GetClass();
			Container = CurrentObject;
			continue;
		}

		OutError = FString::Printf(TEXT("Property '%s' is not a struct or object and cannot be traversed."), *Segments[SegmentIndex]);
		return false;
	}

	OutError = TEXT("PropertyPath could not be resolved.");
	return false;
}

static FOrionObjectPropertyInfo DescribeProperty(FProperty* Property, UObject* Object, int32 MaxValueLength)
{
	FOrionObjectPropertyInfo Info;
	Info.Name = Property->GetName();
	Info.Path = Property->GetName();
	Info.Type = Property->GetCPPType();
	Info.Category = Property->GetMetaData(TEXT("Category"));
	Info.OwnerClassPath = Property->GetOwnerClass() ? Property->GetOwnerClass()->GetPathName() : FString();
	Info.bEditable = Property->HasAnyPropertyFlags(CPF_Edit);
	Info.bBlueprintVisible = Property->HasAnyPropertyFlags(CPF_BlueprintVisible);
	Info.bArray = Property->IsA<FArrayProperty>();
	Info.Value = LimitValueLength(ExportPropertyValue(Property, Object), MaxValueLength);
	return Info;
}
}

FOrionObjectPropertyDescription UOrionObjectPropertyToolset::DescribeLoadedAssetProperties(
	const FString& ObjectPath,
	bool bInspectBlueprintCDO,
	bool bIncludeInherited,
	bool bIncludeNonEditable,
	int32 MaxValueLength)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::ObjectProperties;

	FOrionObjectPropertyDescription Description;
	Description.RequestedPath = ObjectPath;

	FString Error;
	UObject* Object = ResolveInspectionObject(ObjectPath, bInspectBlueprintCDO, Error);
	if (!Object)
	{
		Description.Message = Error;
		return Description;
	}

	Description.bSuccess = true;
	Description.Message = TEXT("Properties described.");
	Description.InspectedObjectPath = Object->GetPathName();
	Description.InspectedClassPath = Object->GetClass() ? Object->GetClass()->GetPathName() : FString();

	const EFieldIteratorFlags::SuperClassFlags SuperClassFlags = bIncludeInherited ?
		EFieldIteratorFlags::IncludeSuper :
		EFieldIteratorFlags::ExcludeSuper;

	for (TFieldIterator<FProperty> PropertyIt(Object->GetClass(), SuperClassFlags); PropertyIt; ++PropertyIt)
	{
		FProperty* Property = *PropertyIt;
		if (!bIncludeNonEditable && !Property->HasAnyPropertyFlags(CPF_Edit))
		{
			continue;
		}

		Description.Properties.Add(DescribeProperty(Property, Object, MaxValueLength));
	}

	return Description;
}

FOrionObjectPropertyValueResult UOrionObjectPropertyToolset::GetObjectPropertyValue(
	const FString& ObjectPath,
	const FString& PropertyPath,
	bool bInspectBlueprintCDO)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::ObjectProperties;

	FOrionObjectPropertyValueResult Result;
	Result.RequestedPath = ObjectPath;
	Result.PropertyPath = PropertyPath;

	FString Error;
	UObject* Object = ResolveInspectionObject(ObjectPath, bInspectBlueprintCDO, Error);
	if (!Object)
	{
		Result.Message = Error;
		return Result;
	}

	FProperty* Property = nullptr;
	void* Container = nullptr;
	if (!ResolvePropertyByPath(Object, PropertyPath, Property, Container, Error))
	{
		Result.Message = Error;
		Result.InspectedObjectPath = Object->GetPathName();
		return Result;
	}

	Result.bSuccess = true;
	Result.Message = TEXT("Property value read.");
	Result.InspectedObjectPath = Object->GetPathName();
	Result.Type = Property->GetCPPType();
	Result.Value = ExportPropertyValue(Property, Container);
	return Result;
}

