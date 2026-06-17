/*
 * Copyright (c) 2026 Orion. All Rights Reserved.
 * https://orionue.com
 */

#include "OrionExperienceToolset.h"

#include "AbilitySystem/CoreAbilityTagRelationshipMapping.h"
#include "AbilitySystem/CoreAbilitySet.h"
#include "AbilitySystem/Abilities/CoreGameplayAbility.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Character/CorePawnData.h"
#include "Engine/Blueprint.h"
#include "Engine/DataAsset.h"
#include "Engine/World.h"
#include "FileHelpers.h"
#include "GameFeatureAction.h"
#include "GameFeatureAction_AddComponents.h"
#include "GameFeatures/GameFeatureAction_AddAbilities.h"
#include "GameFeatures/GameFeatureAction_AddInputBinding.h"
#include "GameFeatures/GameFeatureAction_AddInputContextMapping.h"
#include "GameFeatures/GameFeatureAction_AddWidgets.h"
#include "GameModes/CoreExperienceActionSet.h"
#include "GameModes/CoreExperienceDefinition.h"
#include "GameFramework/Pawn.h"
#include "GameplayTagContainer.h"
#include "InputAction.h"
#include "InputCoreTypes.h"
#include "InputMappingContext.h"
#include "InputSystemConfig.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Misc/PackageName.h"
#include "Modules/ModuleManager.h"
#include "OrionProjectToolsetUtils.h"
#include "Engine/SCS_Node.h"
#include "Engine/SimpleConstructionScript.h"
#include "ScopedTransaction.h"
#include "UObject/SoftObjectPath.h"
#include "UObject/UnrealType.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(OrionExperienceToolset)

namespace UE::OrionProjectToolsets::Experience
{
static FString NormalizeLongPackageName(const FString& AssetPath)
{
	FString Path = AssetPath;
	Path.TrimStartAndEndInline();
	Path.ReplaceInline(TEXT("\\"), TEXT("/"));

	if (Path.StartsWith(TEXT("Content/")))
	{
		Path = TEXT("/Game/") + Path.RightChop(8);
	}

	int32 ObjectPathSeparator = INDEX_NONE;
	if (Path.FindChar(TEXT('.'), ObjectPathSeparator))
	{
		Path.LeftInline(ObjectPathSeparator);
	}

	return Path;
}

static FString MakeObjectPathFromPackageName(const FString& PackageName)
{
	const FString AssetName = FPackageName::GetLongPackageAssetName(PackageName);
	return AssetName.IsEmpty() ? FString() : PackageName + TEXT(".") + AssetName;
}

static FString NormalizeAssetObjectPath(const FString& AssetPath)
{
	const FString TrimmedPath = AssetPath.TrimStartAndEnd();
	if (TrimmedPath.IsEmpty() || TrimmedPath.Contains(TEXT(".")) || TrimmedPath.StartsWith(TEXT("/Script/")))
	{
		return TrimmedPath;
	}

	const FString PackageName = NormalizeLongPackageName(TrimmedPath);
	if (FPackageName::IsValidLongPackageName(PackageName, true))
	{
		const FString ObjectPath = MakeObjectPathFromPackageName(PackageName);
		if (!ObjectPath.IsEmpty())
		{
			return ObjectPath;
		}
	}

	return TrimmedPath;
}

static bool SplitNewAssetPath(const FString& AssetPath, FString& OutPackageName, FString& OutAssetName, FString& OutError)
{
	OutPackageName = NormalizeLongPackageName(AssetPath);
	OutAssetName = FPackageName::GetLongPackageAssetName(OutPackageName);

	FText Reason;
	if (!FPackageName::IsValidLongPackageName(OutPackageName, true, &Reason))
	{
		OutError = FString::Printf(TEXT("Asset path '%s' is not a valid long package name: %s"), *AssetPath, *Reason.ToString());
		return false;
	}

	if (OutAssetName.IsEmpty())
	{
		OutError = FString::Printf(TEXT("Asset path '%s' does not contain an asset name."), *AssetPath);
		return false;
	}

	const FString ExistingObjectPath = MakeObjectPathFromPackageName(OutPackageName);
	if (StaticLoadObject(UObject::StaticClass(), nullptr, *ExistingObjectPath))
	{
		OutError = FString::Printf(TEXT("Asset '%s' already exists."), *ExistingObjectPath);
		return false;
	}

	return true;
}

static FOrionToolResult FinishCreatedAsset(UObject* Asset, bool bSave)
{
	using namespace UE::OrionProjectToolsets;

	if (!Asset)
	{
		return MakeResult(false, TEXT("Created asset is null."));
	}

	FAssetRegistryModule::AssetCreated(Asset);
	if (UPackage* Package = Asset->GetOutermost())
	{
		Package->MarkPackageDirty();
	}

	if (bSave)
	{
		FString SaveError;
		if (!SaveLoadedAsset(Asset, false, SaveError))
		{
			return MakeResult(false, SaveError, Asset->GetPathName());
		}
	}

	return MakeResult(true, TEXT("Asset created."), Asset->GetPathName());
}

static UBlueprint* CreateBlueprintAssetInternal(const FString& AssetPath, UClass* ParentClass, FString& OutError)
{
	if (!ParentClass)
	{
		OutError = TEXT("Parent class is null.");
		return nullptr;
	}

	if (ParentClass->HasAnyClassFlags(CLASS_Deprecated | CLASS_NewerVersionExists))
	{
		OutError = FString::Printf(TEXT("Parent class '%s' is deprecated or superseded."), *ParentClass->GetPathName());
		return nullptr;
	}

	if (!FKismetEditorUtilities::CanCreateBlueprintOfClass(ParentClass))
	{
		OutError = FString::Printf(TEXT("Cannot create a Blueprint from parent class '%s'."), *ParentClass->GetPathName());
		return nullptr;
	}

	FString PackageName;
	FString AssetName;
	if (!SplitNewAssetPath(AssetPath, PackageName, AssetName, OutError))
	{
		return nullptr;
	}

	UPackage* Package = CreatePackage(*PackageName);
	if (!Package)
	{
		OutError = FString::Printf(TEXT("Failed to create package '%s'."), *PackageName);
		return nullptr;
	}

	UBlueprint* Blueprint = FKismetEditorUtilities::CreateBlueprint(
		ParentClass,
		Package,
		FName(*AssetName),
		BPTYPE_Normal,
		UBlueprint::StaticClass(),
		UBlueprintGeneratedClass::StaticClass(),
		TEXT("OrionExperienceToolset"));

	if (!Blueprint)
	{
		OutError = FString::Printf(TEXT("Failed to create Blueprint '%s'."), *PackageName);
		return nullptr;
	}

	FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
	FKismetEditorUtilities::CompileBlueprint(Blueprint);
	return Blueprint;
}

static bool ResolveInputKey(const FString& KeyName, FKey& OutKey, FString& OutError)
{
	const FString NormalizedKeyName = KeyName.TrimStartAndEnd();
	if (NormalizedKeyName.IsEmpty())
	{
		OutError = TEXT("Key name is empty.");
		return false;
	}

	const FKey DirectKey{ FName(*NormalizedKeyName) };
	if (EKeys::GetKeyDetails(DirectKey).IsValid())
	{
		OutKey = DirectKey;
		return true;
	}

	TArray<FKey> AllKeys;
	EKeys::GetAllKeys(AllKeys);
	for (const FKey& CandidateKey : AllKeys)
	{
		if (CandidateKey.GetFName().ToString().Equals(NormalizedKeyName, ESearchCase::IgnoreCase) ||
			CandidateKey.GetDisplayName(false).ToString().Equals(NormalizedKeyName, ESearchCase::IgnoreCase))
		{
			OutKey = CandidateKey;
			return true;
		}
	}

	OutError = FString::Printf(TEXT("Input key '%s' was not found."), *KeyName);
	return false;
}

template<typename AssetType>
static AssetType* CreateDataAsset(const FString& AssetPath, UClass* AssetClass, FString& OutError)
{
	if (!AssetClass)
	{
		OutError = TEXT("Asset class is null.");
		return nullptr;
	}

	if (!AssetClass->IsChildOf(AssetType::StaticClass()))
	{
		OutError = FString::Printf(TEXT("Class '%s' is not a '%s'."), *AssetClass->GetPathName(), *AssetType::StaticClass()->GetName());
		return nullptr;
	}

	if (AssetClass->HasAnyClassFlags(CLASS_Abstract | CLASS_Deprecated | CLASS_NewerVersionExists))
	{
		OutError = FString::Printf(TEXT("Class '%s' cannot be used to create an asset."), *AssetClass->GetPathName());
		return nullptr;
	}

	FString PackageName;
	FString AssetName;
	if (!SplitNewAssetPath(AssetPath, PackageName, AssetName, OutError))
	{
		return nullptr;
	}

	UPackage* Package = CreatePackage(*PackageName);
	if (!Package)
	{
		OutError = FString::Printf(TEXT("Failed to create package '%s'."), *PackageName);
		return nullptr;
	}

	return NewObject<AssetType>(Package, AssetClass, FName(*AssetName), RF_Public | RF_Standalone | RF_Transactional);
}

static bool ParseInputActionValueType(const FString& ValueTypeText, EInputActionValueType& OutValueType, FString& OutError)
{
	const FString Normalized = ValueTypeText.TrimStartAndEnd().ToLower();
	if (Normalized.IsEmpty() || Normalized == TEXT("boolean") || Normalized == TEXT("bool"))
	{
		OutValueType = EInputActionValueType::Boolean;
		return true;
	}
	if (Normalized == TEXT("axis1d") || Normalized == TEXT("float"))
	{
		OutValueType = EInputActionValueType::Axis1D;
		return true;
	}
	if (Normalized == TEXT("axis2d") || Normalized == TEXT("vector2d"))
	{
		OutValueType = EInputActionValueType::Axis2D;
		return true;
	}
	if (Normalized == TEXT("axis3d") || Normalized == TEXT("vector"))
	{
		OutValueType = EInputActionValueType::Axis3D;
		return true;
	}

	OutError = FString::Printf(TEXT("Unsupported input action value type '%s'. Use Boolean, Axis1D, Axis2D, or Axis3D."), *ValueTypeText);
	return false;
}

static FGameplayTag ResolveGameplayTag(const FString& TagName, FString& OutError)
{
	const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(FName(*TagName), false);
	if (!Tag.IsValid())
	{
		OutError = FString::Printf(TEXT("GameplayTag '%s' does not exist. Add it with GameplayTagsToolset before assigning it."), *TagName);
	}
	return Tag;
}

template<typename ObjectType>
static ObjectType* LoadTypedObject(const FString& AssetPath, FString& OutError)
{
	UObject* Object = LoadObjectFromPath(AssetPath, OutError);
	ObjectType* TypedObject = Cast<ObjectType>(Object);
	if (!TypedObject && Object)
	{
		OutError = FString::Printf(TEXT("Object '%s' is not a '%s'."), *Object->GetPathName(), *ObjectType::StaticClass()->GetName());
	}
	return TypedObject;
}

static bool IsExperienceObject(UObject* Object)
{
	return Object && (Object->IsA<UCoreExperienceDefinition>() || Object->IsA<UCoreExperienceActionSet>());
}

static UBlueprint* GetOwningBlueprint(UObject* Object)
{
	return Object && Object->HasAnyFlags(RF_ClassDefaultObject) ?
		Cast<UBlueprint>(Object->GetClass()->ClassGeneratedBy) : nullptr;
}

static UObject* GetSaveTarget(UObject* Object)
{
	if (UBlueprint* Blueprint = GetOwningBlueprint(Object))
	{
		return Blueprint;
	}
	return Object;
}

static FString GetDisplayPath(UObject* Object)
{
	if (UObject* SaveTarget = GetSaveTarget(Object))
	{
		return SaveTarget->GetPathName();
	}
	return FString();
}

static UObject* LoadExperienceAsset(const FString& AssetPath, FString& OutError)
{
	UObject* Asset = LoadObjectFromPath(AssetPath, OutError);
	if (!Asset)
	{
		return nullptr;
	}

	if (IsExperienceObject(Asset))
	{
		return Asset;
	}

	if (UBlueprint* Blueprint = Cast<UBlueprint>(Asset))
	{
		UObject* DefaultObject = Blueprint->GeneratedClass ? Blueprint->GeneratedClass->GetDefaultObject() : nullptr;
		if (IsExperienceObject(DefaultObject))
		{
			return DefaultObject;
		}
	}

	if (UClass* Class = Cast<UClass>(Asset))
	{
		UObject* DefaultObject = Class->GetDefaultObject();
		if (IsExperienceObject(DefaultObject))
		{
			return DefaultObject;
		}
	}

	if (UBlueprint* Blueprint = Cast<UBlueprint>(Asset->GetClass()->ClassGeneratedBy))
	{
		UObject* DefaultObject = Blueprint->GeneratedClass ? Blueprint->GeneratedClass->GetDefaultObject() : nullptr;
		if (IsExperienceObject(DefaultObject))
		{
			return DefaultObject;
		}
	}

	if (!IsExperienceObject(Asset))
	{
		OutError = FString::Printf(
			TEXT("Asset '%s' is not a UCoreExperienceDefinition, UCoreExperienceActionSet, or Blueprint generated from one."),
			*Asset->GetPathName());
		return nullptr;
	}

	return Asset;
}

static TArray<FString>* GetGameFeatureDependencies(UObject* Asset)
{
	if (UCoreExperienceDefinition* Experience = Cast<UCoreExperienceDefinition>(Asset))
	{
		return &Experience->GameFeaturesToEnable;
	}
	if (UCoreExperienceActionSet* ActionSet = Cast<UCoreExperienceActionSet>(Asset))
	{
		return &ActionSet->GameFeaturesToEnable;
	}
	return nullptr;
}

static TArray<TObjectPtr<UGameFeatureAction>>* GetActions(UObject* Asset)
{
	if (UCoreExperienceDefinition* Experience = Cast<UCoreExperienceDefinition>(Asset))
	{
		return &Experience->Actions;
	}
	if (UCoreExperienceActionSet* ActionSet = Cast<UCoreExperienceActionSet>(Asset))
	{
		return &ActionSet->Actions;
	}
	return nullptr;
}

static void UpdateBundleData(UObject* Asset)
{
#if WITH_EDITORONLY_DATA
	if (UPrimaryDataAsset* PrimaryDataAsset = Cast<UPrimaryDataAsset>(Asset))
	{
		PrimaryDataAsset->UpdateAssetBundleData();
	}
#endif
}

static FOrionToolResult FinishExperienceMutation(UObject* Asset, const FString& Message, bool bSave)
{
	MarkObjectModified(Asset);
	if (UBlueprint* Blueprint = GetOwningBlueprint(Asset))
	{
		Blueprint->Modify();
		FBlueprintEditorUtils::MarkBlueprintAsModified(Blueprint);
	}
	UpdateBundleData(Asset);

	if (bSave)
	{
		FString SaveError;
		UObject* SaveTarget = GetSaveTarget(Asset);
		if (!SaveLoadedAsset(SaveTarget, false, SaveError))
		{
			return MakeResult(false, SaveError, GetDisplayPath(Asset));
		}
	}

	return MakeResult(true, Message, GetDisplayPath(Asset));
}

static FOrionToolResult FinishPawnDataMutation(UCorePawnData* PawnData, const FString& Message, bool bSave)
{
	if (!PawnData)
	{
		return MakeResult(false, TEXT("PawnData is null."));
	}

	MarkObjectModified(PawnData);

	if (bSave)
	{
		FString SaveError;
		if (!SaveLoadedAsset(PawnData, false, SaveError))
		{
			return MakeResult(false, SaveError, PawnData->GetPathName());
		}
	}

	return MakeResult(true, Message, PawnData->GetPathName());
}

static FString SummarizeAction(UGameFeatureAction* Action)
{
	if (!Action)
	{
		return FString();
	}

	TArray<FString> PropertySummaries;
	for (TFieldIterator<FProperty> PropertyIt(Action->GetClass(), EFieldIteratorFlags::IncludeSuper); PropertyIt; ++PropertyIt)
	{
		FProperty* Property = *PropertyIt;
		if (!Property || !Property->HasAnyPropertyFlags(CPF_Edit))
		{
			continue;
		}

		FString Value = ExportPropertyValue(Property, Action);
		if (Value.Len() > 240)
		{
			Value.LeftInline(240);
			Value += TEXT("...");
		}
		PropertySummaries.Add(FString::Printf(TEXT("%s=%s"), *Property->GetName(), *Value));
	}

	return FString::Join(PropertySummaries, TEXT("; "));
}

static FOrionExperienceActionInfo MakeActionInfo(int32 Index, UGameFeatureAction* Action)
{
	FOrionExperienceActionInfo Info;
	Info.Index = Index;
	if (Action)
	{
		Info.ObjectName = Action->GetName();
		Info.ClassPath = Action->GetClass()->GetPathName();
		Info.Summary = SummarizeAction(Action);
	}
	return Info;
}

static UClass* ResolveActionClass(const FString& ActionClassPath, FString& OutError)
{
	UClass* ActionClass = LoadClassFromPath(ActionClassPath, OutError);
	if (!ActionClass)
	{
		return nullptr;
	}
	if (!ActionClass->IsChildOf(UGameFeatureAction::StaticClass()))
	{
		OutError = FString::Printf(TEXT("Class '%s' is not a UGameFeatureAction."), *ActionClass->GetPathName());
		return nullptr;
	}
	if (ActionClass->HasAnyClassFlags(CLASS_Abstract))
	{
		OutError = FString::Printf(TEXT("Class '%s' is abstract."), *ActionClass->GetPathName());
		return nullptr;
	}
	return ActionClass;
}

static UGameFeatureAction* AddActionInstance(UObject* Asset, UClass* ActionClass, FString& OutError)
{
	TArray<TObjectPtr<UGameFeatureAction>>* Actions = GetActions(Asset);
	if (!Actions)
	{
		OutError = TEXT("Asset has no Actions array.");
		return nullptr;
	}

	UGameFeatureAction* Action = NewObject<UGameFeatureAction>(Asset, ActionClass, NAME_None, RF_Transactional);
	if (!Action)
	{
		OutError = FString::Printf(TEXT("Failed to create action '%s'."), *ActionClass->GetPathName());
		return nullptr;
	}

	Asset->Modify();
	Action->Modify();
	Actions->Add(Action);
	return Action;
}

template<typename ActionType>
static ActionType* FindOrAddAction(UObject* Asset, int32 ActionIndex, FString& OutError)
{
	TArray<TObjectPtr<UGameFeatureAction>>* Actions = GetActions(Asset);
	if (!Actions)
	{
		OutError = TEXT("Asset has no Actions array.");
		return nullptr;
	}

	if (Actions->IsValidIndex(ActionIndex))
	{
		ActionType* ExistingAction = Cast<ActionType>((*Actions)[ActionIndex]);
		if (!ExistingAction)
		{
			OutError = FString::Printf(TEXT("Action at index %d is not '%s'."), ActionIndex, *ActionType::StaticClass()->GetName());
		}
		return ExistingAction;
	}

	if (ActionIndex >= 0)
	{
		OutError = FString::Printf(TEXT("Action index %d is invalid."), ActionIndex);
		return nullptr;
	}

	for (TObjectPtr<UGameFeatureAction>& Action : *Actions)
	{
		if (ActionType* ExistingAction = Cast<ActionType>(Action.Get()))
		{
			return ExistingAction;
		}
	}

	return Cast<ActionType>(AddActionInstance(Asset, ActionType::StaticClass(), OutError));
}

static bool AddStructEntryByReflection(UObject* Action, const FString& ArrayName, const TMap<FString, FString>& Values, FString& OutError)
{
	if (!Action)
	{
		OutError = TEXT("Action is null.");
		return false;
	}

	FArrayProperty* ArrayProperty = FindFProperty<FArrayProperty>(Action->GetClass(), FName(*ArrayName));
	if (!ArrayProperty)
	{
		OutError = FString::Printf(TEXT("Array property '%s' was not found on '%s'."), *ArrayName, *Action->GetClass()->GetPathName());
		return false;
	}

	FStructProperty* StructProperty = CastField<FStructProperty>(ArrayProperty->Inner);
	if (!StructProperty)
	{
		OutError = FString::Printf(TEXT("Array property '%s' does not contain structs."), *ArrayName);
		return false;
	}

	Action->Modify();
	FScriptArrayHelper Helper(ArrayProperty, ArrayProperty->ContainerPtrToValuePtr<void>(Action));
	const int32 NewIndex = Helper.AddValue();
	void* EntryPtr = Helper.GetRawPtr(NewIndex);

	for (const TPair<FString, FString>& Pair : Values)
	{
		FProperty* FieldProperty = StructProperty->Struct->FindPropertyByName(FName(*Pair.Key));
		if (!FieldProperty)
		{
			OutError = FString::Printf(TEXT("Struct field '%s' was not found."), *Pair.Key);
			return false;
		}

		if (FStructProperty* FieldStructProperty = CastField<FStructProperty>(FieldProperty))
		{
			if (FieldStructProperty->Struct == FGameplayTag::StaticStruct())
			{
				FGameplayTag* TagPtr = FieldStructProperty->ContainerPtrToValuePtr<FGameplayTag>(EntryPtr);
				*TagPtr = FGameplayTag::RequestGameplayTag(FName(*Pair.Value), false);
				continue;
			}
		}

		if (!SetPropertyValueFromText(FieldProperty, EntryPtr, Action, Pair.Value, OutError))
		{
			return false;
		}
	}

	return true;
}

static bool AddGameplayAbilityEntry(UCoreAbilitySet* AbilitySet, UClass* AbilityClass, FGameplayTag InputTag, int32 AbilityLevel, FString& OutError)
{
	if (!AbilitySet)
	{
		OutError = TEXT("AbilitySet is null.");
		return false;
	}

	FArrayProperty* ArrayProperty = FindFProperty<FArrayProperty>(AbilitySet->GetClass(), FName(TEXT("GrantedGameplayAbilities")));
	if (!ArrayProperty)
	{
		OutError = FString::Printf(TEXT("GrantedGameplayAbilities was not found on '%s'."), *AbilitySet->GetClass()->GetPathName());
		return false;
	}

	FStructProperty* StructProperty = CastField<FStructProperty>(ArrayProperty->Inner);
	if (!StructProperty)
	{
		OutError = TEXT("GrantedGameplayAbilities is not a struct array.");
		return false;
	}

	AbilitySet->Modify();
	FScriptArrayHelper Helper(ArrayProperty, ArrayProperty->ContainerPtrToValuePtr<void>(AbilitySet));
	const int32 NewIndex = Helper.AddValue();
	void* EntryPtr = Helper.GetRawPtr(NewIndex);

	if (FClassProperty* AbilityProperty = CastField<FClassProperty>(StructProperty->Struct->FindPropertyByName(FName(TEXT("Ability")))))
	{
		AbilityProperty->SetObjectPropertyValue(AbilityProperty->ContainerPtrToValuePtr<void>(EntryPtr), AbilityClass);
	}
	else
	{
		OutError = TEXT("Ability field was not found on GrantedGameplayAbilities entry.");
		return false;
	}

	if (FNumericProperty* LevelProperty = CastField<FNumericProperty>(StructProperty->Struct->FindPropertyByName(FName(TEXT("AbilityLevel")))))
	{
		LevelProperty->SetIntPropertyValue(LevelProperty->ContainerPtrToValuePtr<void>(EntryPtr), static_cast<int64>(FMath::Max(1, AbilityLevel)));
	}
	else
	{
		OutError = TEXT("AbilityLevel field was not found on GrantedGameplayAbilities entry.");
		return false;
	}

	if (FStructProperty* TagProperty = CastField<FStructProperty>(StructProperty->Struct->FindPropertyByName(FName(TEXT("InputTag")))))
	{
		if (TagProperty->Struct == FGameplayTag::StaticStruct())
		{
			*TagProperty->ContainerPtrToValuePtr<FGameplayTag>(EntryPtr) = InputTag;
			return true;
		}
	}

	OutError = TEXT("InputTag field was not found on GrantedGameplayAbilities entry.");
	return false;
}

static FOrionToolResult AddInputActionToConfigArray(const FString& InputConfigPath, const FString& InputActionPath, const FString& InputTagName, bool bAddToAbilityInputs, bool bSave)
{
	using namespace UE::OrionProjectToolsets;

	FString Error;
	UInputSystemConfig* InputConfig = LoadTypedObject<UInputSystemConfig>(InputConfigPath, Error);
	if (!InputConfig)
	{
		return MakeResult(false, Error, InputConfigPath);
	}

	const UInputAction* InputAction = LoadTypedObject<UInputAction>(InputActionPath, Error);
	if (!InputAction)
	{
		return MakeResult(false, Error, InputConfigPath);
	}

	const FGameplayTag InputTag = ResolveGameplayTag(InputTagName, Error);
	if (!InputTag.IsValid())
	{
		return MakeResult(false, Error, InputConfigPath);
	}

	InputConfig->Modify();
	FInputSystemAction Entry;
	Entry.InputAction = InputAction;
	Entry.InputTag = InputTag;

	TArray<FInputSystemAction>& TargetArray = bAddToAbilityInputs ? InputConfig->AbilityInputActions : InputConfig->NativeInputActions;
	TargetArray.Add(Entry);

	MarkObjectModified(InputConfig);
	if (bSave)
	{
		FString SaveError;
		if (!SaveLoadedAsset(InputConfig, false, SaveError))
		{
			return MakeResult(false, SaveError, InputConfigPath);
		}
	}

	return MakeResult(true, bAddToAbilityInputs ? TEXT("Ability input action added.") : TEXT("Native input action added."), InputConfig->GetPathName());
}
}

FOrionToolResult UOrionExperienceToolset::CreateExperienceBlueprintAsset(const FString& AssetPath, const FString& ParentClassPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UClass* ParentClass = LoadClassFromPath(ParentClassPath, Error);
	if (!ParentClass)
	{
		return MakeResult(false, Error, AssetPath);
	}

	if (!ParentClass->IsChildOf(UCoreExperienceDefinition::StaticClass()))
	{
		return MakeResult(false, FString::Printf(TEXT("Class '%s' is not an ExperienceDefinition class."), *ParentClass->GetPathName()), AssetPath);
	}

	UBlueprint* Blueprint = CreateBlueprintAssetInternal(AssetPath, ParentClass, Error);
	if (!Blueprint)
	{
		return MakeResult(false, Error, AssetPath);
	}

	return FinishCreatedAsset(Blueprint, bSave);
}

FOrionToolResult UOrionExperienceToolset::CreateExperienceActionSetAsset(const FString& AssetPath, const FString& AssetClassPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UClass* AssetClass = LoadClassFromPath(AssetClassPath, Error);
	if (!AssetClass)
	{
		return MakeResult(false, Error, AssetPath);
	}

	UCoreExperienceActionSet* ActionSet = CreateDataAsset<UCoreExperienceActionSet>(AssetPath, AssetClass, Error);
	if (!ActionSet)
	{
		return MakeResult(false, Error, AssetPath);
	}

	return FinishCreatedAsset(ActionSet, bSave);
}

FOrionToolResult UOrionExperienceToolset::CreateAbilitySetAsset(const FString& AssetPath, const FString& AssetClassPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UClass* AssetClass = AssetClassPath.IsEmpty() ? UCoreAbilitySet::StaticClass() : LoadClassFromPath(AssetClassPath, Error);
	if (!AssetClass)
	{
		return MakeResult(false, Error, AssetPath);
	}

	UCoreAbilitySet* AbilitySet = CreateDataAsset<UCoreAbilitySet>(AssetPath, AssetClass, Error);
	if (!AbilitySet)
	{
		return MakeResult(false, Error, AssetPath);
	}

	return FinishCreatedAsset(AbilitySet, bSave);
}

FOrionToolResult UOrionExperienceToolset::CreateInputSystemConfigAsset(const FString& AssetPath, const FString& AssetClassPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UClass* AssetClass = AssetClassPath.IsEmpty() ? UInputSystemConfig::StaticClass() : LoadClassFromPath(AssetClassPath, Error);
	if (!AssetClass)
	{
		return MakeResult(false, Error, AssetPath);
	}

	UInputSystemConfig* InputConfig = CreateDataAsset<UInputSystemConfig>(AssetPath, AssetClass, Error);
	if (!InputConfig)
	{
		return MakeResult(false, Error, AssetPath);
	}

	return FinishCreatedAsset(InputConfig, bSave);
}

FOrionToolResult UOrionExperienceToolset::CreateInputMappingContextAsset(const FString& AssetPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UInputMappingContext* InputMappingContext = CreateDataAsset<UInputMappingContext>(AssetPath, UInputMappingContext::StaticClass(), Error);
	if (!InputMappingContext)
	{
		return MakeResult(false, Error, AssetPath);
	}

	return FinishCreatedAsset(InputMappingContext, bSave);
}

FOrionToolResult UOrionExperienceToolset::CreateInputActionAsset(const FString& AssetPath, const FString& ValueType, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UInputAction* InputAction = CreateDataAsset<UInputAction>(AssetPath, UInputAction::StaticClass(), Error);
	if (!InputAction)
	{
		return MakeResult(false, Error, AssetPath);
	}

	EInputActionValueType ParsedValueType = EInputActionValueType::Boolean;
	if (!ParseInputActionValueType(ValueType, ParsedValueType, Error))
	{
		return MakeResult(false, Error, AssetPath);
	}

	InputAction->Modify();
	InputAction->ValueType = ParsedValueType;
	return FinishCreatedAsset(InputAction, bSave);
}

FOrionToolResult UOrionExperienceToolset::CreatePawnDataAsset(const FString& AssetPath, const FString& AssetClassPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UClass* AssetClass = AssetClassPath.IsEmpty() ? UCorePawnData::StaticClass() : LoadClassFromPath(AssetClassPath, Error);
	if (!AssetClass)
	{
		return MakeResult(false, Error, AssetPath);
	}

	UCorePawnData* PawnData = CreateDataAsset<UCorePawnData>(AssetPath, AssetClass, Error);
	if (!PawnData)
	{
		return MakeResult(false, Error, AssetPath);
	}

	return FinishCreatedAsset(PawnData, bSave);
}

FOrionToolResult UOrionExperienceToolset::CreateBlueprintAsset(const FString& AssetPath, const FString& ParentClassOrBlueprintPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UClass* ParentClass = LoadClassFromPath(ParentClassOrBlueprintPath, Error);
	if (!ParentClass)
	{
		return MakeResult(false, Error, AssetPath);
	}

	UBlueprint* Blueprint = CreateBlueprintAssetInternal(AssetPath, ParentClass, Error);
	if (!Blueprint)
	{
		return MakeResult(false, Error, AssetPath);
	}

	return FinishCreatedAsset(Blueprint, bSave);
}

FOrionToolResult UOrionExperienceToolset::ReparentBlueprintAsset(const FString& BlueprintPath, const FString& ParentClassOrBlueprintPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;

	FString Error;
	UBlueprint* Blueprint = LoadBlueprintFromPath(BlueprintPath, Error);
	if (!Blueprint)
	{
		return MakeResult(false, Error, BlueprintPath);
	}

	UClass* ParentClass = LoadClassFromPath(ParentClassOrBlueprintPath, Error);
	if (!ParentClass)
	{
		return MakeResult(false, Error, BlueprintPath);
	}

	if (!FKismetEditorUtilities::CanCreateBlueprintOfClass(ParentClass))
	{
		return MakeResult(false, FString::Printf(TEXT("Cannot use '%s' as a Blueprint parent class."), *ParentClass->GetPathName()), BlueprintPath);
	}

	if (Blueprint->ParentClass == ParentClass)
	{
		return MakeResult(true, TEXT("Blueprint already uses the requested parent class."), Blueprint->GetPathName());
	}

	Blueprint->Modify();
	if (USimpleConstructionScript* SimpleConstructionScript = Blueprint->SimpleConstructionScript)
	{
		SimpleConstructionScript->Modify();
		for (USCS_Node* Node : SimpleConstructionScript->GetAllNodes())
		{
			if (Node)
			{
				Node->Modify();
			}
		}
	}

	Blueprint->ParentClass = ParentClass;
	FBlueprintEditorUtils::RefreshAllNodes(Blueprint);
	FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
	FKismetEditorUtilities::CompileBlueprint(Blueprint);

	if (bSave)
	{
		FString SaveError;
		if (!SaveLoadedAsset(Blueprint, false, SaveError))
		{
			return MakeResult(false, SaveError, BlueprintPath);
		}
	}

	return MakeResult(true, TEXT("Blueprint reparented."), Blueprint->GetPathName());
}

FOrionToolResult UOrionExperienceToolset::CreatePawnBlueprintAsset(const FString& AssetPath, const FString& ParentClassOrBlueprintPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UClass* ParentClass = LoadClassFromPath(ParentClassOrBlueprintPath, Error);
	if (!ParentClass)
	{
		return MakeResult(false, Error, AssetPath);
	}

	if (!ParentClass->IsChildOf(APawn::StaticClass()))
	{
		return MakeResult(false, FString::Printf(TEXT("Class '%s' is not a Pawn class."), *ParentClass->GetPathName()), AssetPath);
	}

	UBlueprint* Blueprint = CreateBlueprintAssetInternal(AssetPath, ParentClass, Error);
	if (!Blueprint)
	{
		return MakeResult(false, Error, AssetPath);
	}

	return FinishCreatedAsset(Blueprint, bSave);
}

FOrionExperienceDescription UOrionExperienceToolset::DescribeExperienceAsset(const FString& AssetPath)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FOrionExperienceDescription Description;
	Description.AssetPath = AssetPath;

	FString Error;
	UObject* Asset = LoadExperienceAsset(AssetPath, Error);
	if (!Asset)
	{
		Description.Message = Error;
		return Description;
	}

	Description.bSuccess = true;
	Description.Message = TEXT("Experience asset described.");
	Description.AssetPath = GetDisplayPath(Asset);
	Description.AssetClassPath = Asset->GetClass()->GetPathName();

	if (TArray<FString>* Dependencies = GetGameFeatureDependencies(Asset))
	{
		Description.GameFeaturesToEnable = *Dependencies;
	}

	if (UCoreExperienceDefinition* Experience = Cast<UCoreExperienceDefinition>(Asset))
	{
		for (const TObjectPtr<UCoreExperienceActionSet>& ActionSet : Experience->ActionSets)
		{
			Description.ActionSetPaths.Add(ActionSet ? ActionSet->GetPathName() : FString());
		}
	}

	if (TArray<TObjectPtr<UGameFeatureAction>>* Actions = GetActions(Asset))
	{
		for (int32 Index = 0; Index < Actions->Num(); ++Index)
		{
			Description.Actions.Add(MakeActionInfo(Index, (*Actions)[Index]));
		}
	}

	return Description;
}

FOrionToolResult UOrionExperienceToolset::SetExperienceProperty(const FString& AssetPath, const FString& PropertyPath, const FString& ValueText, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UObject* Asset = LoadExperienceAsset(AssetPath, Error);
	if (!Asset)
	{
		return MakeResult(false, Error, AssetPath);
	}

	Asset->Modify();
	if (!SetPropertyByPath(Asset, PropertyPath, ValueText, Error))
	{
		return MakeResult(false, Error, AssetPath);
	}

	return FinishExperienceMutation(Asset, TEXT("Experience property set."), bSave);
}

FOrionToolResult UOrionExperienceToolset::SetExperienceDefaultPawnData(const FString& ExperiencePath, const FString& PawnDataPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UObject* Asset = LoadExperienceAsset(ExperiencePath, Error);
	UCoreExperienceDefinition* Experience = Cast<UCoreExperienceDefinition>(Asset);
	if (!Experience)
	{
		return MakeResult(false, Error.IsEmpty() ? TEXT("Asset is not an ExperienceDefinition.") : Error, ExperiencePath);
	}

	const UCorePawnData* PawnData = LoadTypedObject<UCorePawnData>(PawnDataPath, Error);
	if (!PawnData)
	{
		return MakeResult(false, Error, ExperiencePath);
	}

	Experience->Modify();
	Experience->DefaultPawnData = PawnData;
	return FinishExperienceMutation(Experience, TEXT("Experience DefaultPawnData set."), bSave);
}

FOrionToolResult UOrionExperienceToolset::SetExperiencePlayerAccountClass(const FString& ExperiencePath, const FString& PlayerAccountClassPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UObject* Asset = LoadExperienceAsset(ExperiencePath, Error);
	if (!Asset)
	{
		return MakeResult(false, Error, ExperiencePath);
	}

	UClass* PlayerAccountClass = LoadClassFromPath(PlayerAccountClassPath, Error);
	if (!PlayerAccountClass)
	{
		return MakeResult(false, Error, ExperiencePath);
	}

	Asset->Modify();
	if (!SetPropertyByPath(Asset, TEXT("PlayerAccountClass"), PlayerAccountClass->GetPathName(), Error))
	{
		return MakeResult(false, Error, ExperiencePath);
	}

	return FinishExperienceMutation(Asset, TEXT("Experience PlayerAccountClass set."), bSave);
}

FOrionToolResult UOrionExperienceToolset::SetWorldDefaultGameplayExperience(const FString& MapPath, const FString& ExperienceClassPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	const FString MapPackageName = NormalizeLongPackageName(MapPath);

	FText Reason;
	if (!FPackageName::IsValidLongPackageName(MapPackageName, true, &Reason))
	{
		return MakeResult(false, FString::Printf(TEXT("Map path '%s' is invalid: %s"), *MapPath, *Reason.ToString()), MapPath);
	}

	FString MapFilename;
	if (!FPackageName::TryConvertLongPackageNameToFilename(MapPackageName, MapFilename, FPackageName::GetMapPackageExtension()))
	{
		return MakeResult(false, FString::Printf(TEXT("Failed to convert map path '%s' to a filename."), *MapPackageName), MapPath);
	}

	UClass* ExperienceClass = LoadClassFromPath(ExperienceClassPath, Error);
	if (!ExperienceClass)
	{
		return MakeResult(false, Error, MapPath);
	}

	if (!ExperienceClass->IsChildOf(UCoreExperienceDefinition::StaticClass()))
	{
		return MakeResult(false, FString::Printf(TEXT("Class '%s' is not an ExperienceDefinition class."), *ExperienceClass->GetPathName()), MapPath);
	}

	UWorld* World = UEditorLoadingAndSavingUtils::LoadMap(MapFilename);
	if (!World)
	{
		return MakeResult(false, FString::Printf(TEXT("Failed to load map '%s'."), *MapPackageName), MapPath);
	}

	AWorldSettings* WorldSettings = World->GetWorldSettings();
	if (!WorldSettings)
	{
		return MakeResult(false, FString::Printf(TEXT("Map '%s' has no WorldSettings."), *MapPackageName), MapPath);
	}

	WorldSettings->Modify();
	if (!SetPropertyByPath(WorldSettings, TEXT("DefaultGameplayExperience"), ExperienceClass->GetPathName(), Error))
	{
		return MakeResult(false, Error, MapPath);
	}

	MarkObjectModified(WorldSettings);
	MarkObjectModified(World);

	if (bSave && !UEditorLoadingAndSavingUtils::SaveMap(World, MapPackageName))
	{
		return MakeResult(false, FString::Printf(TEXT("Failed to save map '%s'."), *MapPackageName), MapPath);
	}

	return MakeResult(true, TEXT("World default gameplay experience set."), MapPackageName);
}

FOrionToolResult UOrionExperienceToolset::AddGameFeatureDependency(const FString& AssetPath, const FString& GameFeatureName, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UObject* Asset = LoadExperienceAsset(AssetPath, Error);
	if (!Asset)
	{
		return MakeResult(false, Error, AssetPath);
	}

	TArray<FString>* Dependencies = GetGameFeatureDependencies(Asset);
	if (!Dependencies)
	{
		return MakeResult(false, TEXT("Asset has no GameFeaturesToEnable array."), AssetPath);
	}

	Asset->Modify();
	Dependencies->AddUnique(GameFeatureName);
	return FinishExperienceMutation(Asset, TEXT("GameFeature dependency added."), bSave);
}

FOrionToolResult UOrionExperienceToolset::RemoveGameFeatureDependency(const FString& AssetPath, const FString& GameFeatureName, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UObject* Asset = LoadExperienceAsset(AssetPath, Error);
	if (!Asset)
	{
		return MakeResult(false, Error, AssetPath);
	}

	TArray<FString>* Dependencies = GetGameFeatureDependencies(Asset);
	if (!Dependencies)
	{
		return MakeResult(false, TEXT("Asset has no GameFeaturesToEnable array."), AssetPath);
	}

	Asset->Modify();
	Dependencies->Remove(GameFeatureName);
	return FinishExperienceMutation(Asset, TEXT("GameFeature dependency removed."), bSave);
}

FOrionToolResult UOrionExperienceToolset::AddActionSetToExperience(const FString& ExperiencePath, const FString& ActionSetPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UObject* Asset = LoadExperienceAsset(ExperiencePath, Error);
	UCoreExperienceDefinition* Experience = Cast<UCoreExperienceDefinition>(Asset);
	if (!Experience)
	{
		return MakeResult(false, Error.IsEmpty() ? TEXT("Asset is not an ExperienceDefinition.") : Error, ExperiencePath);
	}

	UObject* LoadedActionSet = LoadExperienceAsset(ActionSetPath, Error);
	UCoreExperienceActionSet* ActionSet = Cast<UCoreExperienceActionSet>(LoadedActionSet);
	if (!ActionSet)
	{
		return MakeResult(false, Error.IsEmpty() ? TEXT("ActionSet asset is invalid.") : Error, ExperiencePath);
	}

	Experience->Modify();
	Experience->ActionSets.AddUnique(ActionSet);
	return FinishExperienceMutation(Experience, TEXT("ActionSet added to Experience."), bSave);
}

FOrionToolResult UOrionExperienceToolset::AddAbilitySetToPawnData(const FString& PawnDataPath, const FString& AbilitySetPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UCorePawnData* PawnData = LoadTypedObject<UCorePawnData>(PawnDataPath, Error);
	if (!PawnData)
	{
		return MakeResult(false, Error, PawnDataPath);
	}

	UCoreAbilitySet* AbilitySet = LoadTypedObject<UCoreAbilitySet>(AbilitySetPath, Error);
	if (!AbilitySet)
	{
		return MakeResult(false, Error, PawnDataPath);
	}

	PawnData->Modify();
	PawnData->AbilitySets.AddUnique(AbilitySet);
	MarkObjectModified(PawnData);

	if (bSave)
	{
		FString SaveError;
		if (!SaveLoadedAsset(PawnData, false, SaveError))
		{
			return MakeResult(false, SaveError, PawnDataPath);
		}
	}

	return MakeResult(true, TEXT("AbilitySet added to PawnData."), PawnData->GetPathName());
}

FOrionToolResult UOrionExperienceToolset::SetPawnDataProperty(const FString& PawnDataPath, const FString& PropertyPath, const FString& ValueText, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UCorePawnData* PawnData = LoadTypedObject<UCorePawnData>(PawnDataPath, Error);
	if (!PawnData)
	{
		return MakeResult(false, Error, PawnDataPath);
	}

	PawnData->Modify();
	if (!SetPropertyByPath(PawnData, PropertyPath, ValueText, Error))
	{
		return MakeResult(false, Error, PawnDataPath);
	}

	return FinishPawnDataMutation(PawnData, TEXT("PawnData property set."), bSave);
}

FOrionToolResult UOrionExperienceToolset::SetPawnDataPawnClass(const FString& PawnDataPath, const FString& PawnClassOrBlueprintPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UCorePawnData* PawnData = LoadTypedObject<UCorePawnData>(PawnDataPath, Error);
	if (!PawnData)
	{
		return MakeResult(false, Error, PawnDataPath);
	}

	UClass* PawnClass = LoadClassFromPath(PawnClassOrBlueprintPath, Error);
	if (!PawnClass)
	{
		return MakeResult(false, Error, PawnDataPath);
	}

	if (!PawnClass->IsChildOf(APawn::StaticClass()))
	{
		return MakeResult(false, FString::Printf(TEXT("Class '%s' is not a Pawn class."), *PawnClass->GetPathName()), PawnDataPath);
	}

	PawnData->Modify();
	PawnData->PawnClass = PawnClass;
	return FinishPawnDataMutation(PawnData, TEXT("PawnData PawnClass set."), bSave);
}

FOrionToolResult UOrionExperienceToolset::SetPawnDataInputConfig(const FString& PawnDataPath, const FString& InputConfigPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UCorePawnData* PawnData = LoadTypedObject<UCorePawnData>(PawnDataPath, Error);
	if (!PawnData)
	{
		return MakeResult(false, Error, PawnDataPath);
	}

	UInputSystemConfig* InputConfig = LoadTypedObject<UInputSystemConfig>(InputConfigPath, Error);
	if (!InputConfig)
	{
		return MakeResult(false, Error, PawnDataPath);
	}

	PawnData->Modify();
	PawnData->InputConfig = InputConfig;
	return FinishPawnDataMutation(PawnData, TEXT("PawnData InputConfig set."), bSave);
}

FOrionToolResult UOrionExperienceToolset::SetPawnDataTagRelationshipMapping(const FString& PawnDataPath, const FString& TagRelationshipMappingPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UCorePawnData* PawnData = LoadTypedObject<UCorePawnData>(PawnDataPath, Error);
	if (!PawnData)
	{
		return MakeResult(false, Error, PawnDataPath);
	}

	UCoreAbilityTagRelationshipMapping* TagRelationshipMapping = LoadTypedObject<UCoreAbilityTagRelationshipMapping>(TagRelationshipMappingPath, Error);
	if (!TagRelationshipMapping)
	{
		return MakeResult(false, Error, PawnDataPath);
	}

	PawnData->Modify();
	PawnData->TagRelationshipMapping = TagRelationshipMapping;
	return FinishPawnDataMutation(PawnData, TEXT("PawnData TagRelationshipMapping set."), bSave);
}

FOrionToolResult UOrionExperienceToolset::AddGameplayAbilityToAbilitySet(const FString& AbilitySetPath, const FString& AbilityClassPath, const FString& InputTag, int32 AbilityLevel, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UCoreAbilitySet* AbilitySet = LoadTypedObject<UCoreAbilitySet>(AbilitySetPath, Error);
	if (!AbilitySet)
	{
		return MakeResult(false, Error, AbilitySetPath);
	}

	UClass* AbilityClass = LoadClassFromPath(AbilityClassPath, Error);
	if (!AbilityClass)
	{
		return MakeResult(false, Error, AbilitySetPath);
	}

	if (!AbilityClass->IsChildOf(UCoreGameplayAbility::StaticClass()))
	{
		return MakeResult(false, FString::Printf(TEXT("Class '%s' is not a CoreGameplayAbility."), *AbilityClass->GetPathName()), AbilitySetPath);
	}

	const FGameplayTag ResolvedInputTag = ResolveGameplayTag(InputTag, Error);
	if (!ResolvedInputTag.IsValid())
	{
		return MakeResult(false, Error, AbilitySetPath);
	}

	if (!AddGameplayAbilityEntry(AbilitySet, AbilityClass, ResolvedInputTag, AbilityLevel, Error))
	{
		return MakeResult(false, Error, AbilitySetPath);
	}

	MarkObjectModified(AbilitySet);

	if (bSave)
	{
		FString SaveError;
		if (!SaveLoadedAsset(AbilitySet, false, SaveError))
		{
			return MakeResult(false, SaveError, AbilitySetPath);
		}
	}

	return MakeResult(true, TEXT("GameplayAbility added to AbilitySet."), AbilitySet->GetPathName());
}

FOrionToolResult UOrionExperienceToolset::ClearGameplayAbilitiesFromAbilitySet(const FString& AbilitySetPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UCoreAbilitySet* AbilitySet = LoadTypedObject<UCoreAbilitySet>(AbilitySetPath, Error);
	if (!AbilitySet)
	{
		return MakeResult(false, Error, AbilitySetPath);
	}

	FArrayProperty* ArrayProperty = FindFProperty<FArrayProperty>(AbilitySet->GetClass(), FName(TEXT("GrantedGameplayAbilities")));
	if (!ArrayProperty)
	{
		return MakeResult(false, FString::Printf(TEXT("GrantedGameplayAbilities was not found on '%s'."), *AbilitySet->GetClass()->GetPathName()), AbilitySetPath);
	}

	AbilitySet->Modify();
	FScriptArrayHelper Helper(ArrayProperty, ArrayProperty->ContainerPtrToValuePtr<void>(AbilitySet));
	Helper.EmptyValues();
	MarkObjectModified(AbilitySet);

	if (bSave)
	{
		FString SaveError;
		if (!SaveLoadedAsset(AbilitySet, false, SaveError))
		{
			return MakeResult(false, SaveError, AbilitySetPath);
		}
	}

	return MakeResult(true, TEXT("AbilitySet gameplay abilities cleared."), AbilitySet->GetPathName());
}

FOrionToolResult UOrionExperienceToolset::AddAbilityInputActionToInputConfig(const FString& InputConfigPath, const FString& InputActionPath, const FString& InputTag, bool bSave)
{
	using namespace UE::OrionProjectToolsets::Experience;

	return AddInputActionToConfigArray(InputConfigPath, InputActionPath, InputTag, true, bSave);
}

FOrionToolResult UOrionExperienceToolset::AddNativeInputActionToInputConfig(const FString& InputConfigPath, const FString& InputActionPath, const FString& InputTag, bool bSave)
{
	using namespace UE::OrionProjectToolsets::Experience;

	return AddInputActionToConfigArray(InputConfigPath, InputActionPath, InputTag, false, bSave);
}

FOrionToolResult UOrionExperienceToolset::AddKeyMappingToInputMappingContext(const FString& InputMappingContextPath, const FString& InputActionPath, const FString& KeyName, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UInputMappingContext* InputMappingContext = LoadTypedObject<UInputMappingContext>(InputMappingContextPath, Error);
	if (!InputMappingContext)
	{
		return MakeResult(false, Error, InputMappingContextPath);
	}

	UInputAction* InputAction = LoadTypedObject<UInputAction>(InputActionPath, Error);
	if (!InputAction)
	{
		return MakeResult(false, Error, InputMappingContextPath);
	}

	FKey Key;
	if (!ResolveInputKey(KeyName, Key, Error))
	{
		return MakeResult(false, Error, InputMappingContextPath);
	}

	InputMappingContext->Modify();
	InputMappingContext->MapKey(InputAction, Key);
	MarkObjectModified(InputMappingContext);

	if (bSave)
	{
		FString SaveError;
		if (!SaveLoadedAsset(InputMappingContext, false, SaveError))
		{
			return MakeResult(false, SaveError, InputMappingContextPath);
		}
	}

	return MakeResult(true, TEXT("Input mapping key added."), InputMappingContext->GetPathName());
}

FOrionToolResult UOrionExperienceToolset::RemoveActionSetFromExperience(const FString& ExperiencePath, const FString& ActionSetPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UObject* Asset = LoadExperienceAsset(ExperiencePath, Error);
	UCoreExperienceDefinition* Experience = Cast<UCoreExperienceDefinition>(Asset);
	if (!Experience)
	{
		return MakeResult(false, Error.IsEmpty() ? TEXT("Asset is not an ExperienceDefinition.") : Error, ExperiencePath);
	}

	UObject* LoadedActionSet = LoadExperienceAsset(ActionSetPath, Error);
	UCoreExperienceActionSet* ActionSet = Cast<UCoreExperienceActionSet>(LoadedActionSet);
	if (!ActionSet)
	{
		return MakeResult(false, Error.IsEmpty() ? TEXT("ActionSet asset is invalid.") : Error, ExperiencePath);
	}

	Experience->Modify();
	Experience->ActionSets.Remove(ActionSet);
	return FinishExperienceMutation(Experience, TEXT("ActionSet removed from Experience."), bSave);
}

FOrionToolResult UOrionExperienceToolset::AddAction(const FString& AssetPath, const FString& ActionClassPath, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UObject* Asset = LoadExperienceAsset(AssetPath, Error);
	if (!Asset)
	{
		return MakeResult(false, Error, AssetPath);
	}

	UClass* ActionClass = ResolveActionClass(ActionClassPath, Error);
	if (!ActionClass)
	{
		return MakeResult(false, Error, AssetPath);
	}

	UGameFeatureAction* Action = AddActionInstance(Asset, ActionClass, Error);
	if (!Action)
	{
		return MakeResult(false, Error, AssetPath);
	}

	return FinishExperienceMutation(Asset, FString::Printf(TEXT("Action '%s' added."), *Action->GetClass()->GetName()), bSave);
}

FOrionToolResult UOrionExperienceToolset::RemoveAction(const FString& AssetPath, int32 ActionIndex, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UObject* Asset = LoadExperienceAsset(AssetPath, Error);
	if (!Asset)
	{
		return MakeResult(false, Error, AssetPath);
	}

	TArray<TObjectPtr<UGameFeatureAction>>* Actions = GetActions(Asset);
	if (!Actions || !Actions->IsValidIndex(ActionIndex))
	{
		return MakeResult(false, FString::Printf(TEXT("Action index %d is invalid."), ActionIndex), AssetPath);
	}

	Asset->Modify();
	Actions->RemoveAt(ActionIndex);
	return FinishExperienceMutation(Asset, TEXT("Action removed."), bSave);
}

FOrionToolResult UOrionExperienceToolset::MoveAction(const FString& AssetPath, int32 FromIndex, int32 ToIndex, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UObject* Asset = LoadExperienceAsset(AssetPath, Error);
	if (!Asset)
	{
		return MakeResult(false, Error, AssetPath);
	}

	TArray<TObjectPtr<UGameFeatureAction>>* Actions = GetActions(Asset);
	if (!Actions || !Actions->IsValidIndex(FromIndex) || !Actions->IsValidIndex(ToIndex))
	{
		return MakeResult(false, TEXT("Action source or target index is invalid."), AssetPath);
	}

	Asset->Modify();
	Actions->Swap(FromIndex, ToIndex);
	return FinishExperienceMutation(Asset, TEXT("Action moved."), bSave);
}

FOrionToolResult UOrionExperienceToolset::SetActionProperty(const FString& AssetPath, int32 ActionIndex, const FString& PropertyPath, const FString& ValueText, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UObject* Asset = LoadExperienceAsset(AssetPath, Error);
	if (!Asset)
	{
		return MakeResult(false, Error, AssetPath);
	}

	TArray<TObjectPtr<UGameFeatureAction>>* Actions = GetActions(Asset);
	if (!Actions || !Actions->IsValidIndex(ActionIndex))
	{
		return MakeResult(false, FString::Printf(TEXT("Action index %d is invalid."), ActionIndex), AssetPath);
	}

	UGameFeatureAction* Action = (*Actions)[ActionIndex];
	if (!Action)
	{
		return MakeResult(false, TEXT("Action is null."), AssetPath);
	}

	Action->Modify();
	if (!SetPropertyByPath(Action, PropertyPath, ValueText, Error))
	{
		return MakeResult(false, Error, AssetPath);
	}

	return FinishExperienceMutation(Asset, TEXT("Action property set."), bSave);
}

FOrionToolResult UOrionExperienceToolset::AddComponentActionEntry(const FString& AssetPath, const FString& ActorClassPath, const FString& ComponentClassPath, bool bClientComponent, bool bServerComponent, int32 AdditionFlags, int32 ActionIndex, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UObject* Asset = LoadExperienceAsset(AssetPath, Error);
	if (!Asset)
	{
		return MakeResult(false, Error, AssetPath);
	}

	UGameFeatureAction_AddComponents* Action = FindOrAddAction<UGameFeatureAction_AddComponents>(Asset, ActionIndex, Error);
	if (!Action)
	{
		return MakeResult(false, Error, AssetPath);
	}

	Action->Modify();
	FGameFeatureComponentEntry Entry;
	Entry.ActorClass = TSoftClassPtr<AActor>(FSoftObjectPath(ActorClassPath));
	Entry.ComponentClass = TSoftClassPtr<UActorComponent>(FSoftObjectPath(ComponentClassPath));
	Entry.bClientComponent = bClientComponent;
	Entry.bServerComponent = bServerComponent;
	Entry.AdditionFlags = static_cast<uint8>(FMath::Clamp(AdditionFlags, 0, 255));
	Action->ComponentList.Add(Entry);

	return FinishExperienceMutation(Asset, TEXT("Add Components entry added."), bSave);
}

FOrionToolResult UOrionExperienceToolset::AddAbilitiesActionEntry(const FString& AssetPath, const FString& ActorClassPath, const TArray<FString>& AbilityClassPaths, const TArray<FString>& AttributeSetClassPaths, const TArray<FString>& AttributeInitializationDataPaths, const TArray<FString>& CoreAbilitySetPaths, int32 ActionIndex, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UObject* Asset = LoadExperienceAsset(AssetPath, Error);
	if (!Asset)
	{
		return MakeResult(false, Error, AssetPath);
	}

	UGameFeatureAction_AddAbilities* Action = FindOrAddAction<UGameFeatureAction_AddAbilities>(Asset, ActionIndex, Error);
	if (!Action)
	{
		return MakeResult(false, Error, AssetPath);
	}

	Action->Modify();
	FGameFeatureAbilitiesEntry Entry;
	Entry.ActorClass = TSoftClassPtr<AActor>(FSoftObjectPath(ActorClassPath));

	for (const FString& AbilityClassPath : AbilityClassPaths)
	{
		FCoreAbilityGrant Grant;
		Grant.AbilityType = TSoftClassPtr<UGameplayAbility>(FSoftObjectPath(AbilityClassPath));
		Entry.GrantedAbilities.Add(Grant);
	}

	for (int32 Index = 0; Index < AttributeSetClassPaths.Num(); ++Index)
	{
		FCoreAttributeSetGrant Grant;
		Grant.AttributeSetType = TSoftClassPtr<UAttributeSet>(FSoftObjectPath(AttributeSetClassPaths[Index]));
		if (AttributeInitializationDataPaths.IsValidIndex(Index) && !AttributeInitializationDataPaths[Index].IsEmpty())
		{
			Grant.InitializationData = TSoftObjectPtr<UDataTable>(FSoftObjectPath(NormalizeAssetObjectPath(AttributeInitializationDataPaths[Index])));
		}
		Entry.GrantedAttributes.Add(Grant);
	}

	for (const FString& AbilitySetPath : CoreAbilitySetPaths)
	{
		Entry.GrantedAbilitySets.Add(TSoftObjectPtr<const UCoreAbilitySet>(FSoftObjectPath(NormalizeAssetObjectPath(AbilitySetPath))));
	}

	Action->AbilitiesList.Add(Entry);
	return FinishExperienceMutation(Asset, TEXT("Add Abilities entry added."), bSave);
}

FOrionToolResult UOrionExperienceToolset::AddInputBindingActionEntry(const FString& AssetPath, const TArray<FString>& InputConfigPaths, int32 ActionIndex, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UObject* Asset = LoadExperienceAsset(AssetPath, Error);
	if (!Asset)
	{
		return MakeResult(false, Error, AssetPath);
	}

	UGameFeatureAction_AddInputBinding* Action = FindOrAddAction<UGameFeatureAction_AddInputBinding>(Asset, ActionIndex, Error);
	if (!Action)
	{
		return MakeResult(false, Error, AssetPath);
	}

	Action->Modify();
	for (const FString& InputConfigPath : InputConfigPaths)
	{
		Action->InputConfigs.Add(TSoftObjectPtr<const UInputSystemConfig>(FSoftObjectPath(NormalizeAssetObjectPath(InputConfigPath))));
	}

	return FinishExperienceMutation(Asset, TEXT("Add Input Binding entry added."), bSave);
}

FOrionToolResult UOrionExperienceToolset::AddInputMappingActionEntry(const FString& AssetPath, const FString& InputMappingContextPath, int32 Priority, bool bRegisterWithSettings, int32 ActionIndex, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UObject* Asset = LoadExperienceAsset(AssetPath, Error);
	if (!Asset)
	{
		return MakeResult(false, Error, AssetPath);
	}

	UGameFeatureAction_AddInputContextMapping* Action = FindOrAddAction<UGameFeatureAction_AddInputContextMapping>(Asset, ActionIndex, Error);
	if (!Action)
	{
		return MakeResult(false, Error, AssetPath);
	}

	Action->Modify();
	FInputMappingContextAndPriority Entry;
	Entry.InputMapping = TSoftObjectPtr<UInputMappingContext>(FSoftObjectPath(NormalizeAssetObjectPath(InputMappingContextPath)));
	Entry.Priority = Priority;
	Entry.bRegisterWithSettings = bRegisterWithSettings;
	Action->InputMappings.Add(Entry);

	return FinishExperienceMutation(Asset, TEXT("Add Input Mapping entry added."), bSave);
}

FOrionToolResult UOrionExperienceToolset::AddWidgetLayoutEntry(const FString& AssetPath, const FString& LayoutClassPath, const FString& LayerTag, int32 ActionIndex, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UObject* Asset = LoadExperienceAsset(AssetPath, Error);
	if (!Asset)
	{
		return MakeResult(false, Error, AssetPath);
	}

	UGameFeatureAction_AddWidgets* Action = FindOrAddAction<UGameFeatureAction_AddWidgets>(Asset, ActionIndex, Error);
	if (!Action)
	{
		return MakeResult(false, Error, AssetPath);
	}

	TMap<FString, FString> Values;
	Values.Add(TEXT("LayoutClass"), LayoutClassPath);
	Values.Add(TEXT("LayerID"), LayerTag);
	if (!AddStructEntryByReflection(Action, TEXT("Layout"), Values, Error))
	{
		return MakeResult(false, Error, AssetPath);
	}

	return FinishExperienceMutation(Asset, TEXT("Widget layout entry added."), bSave);
}

FOrionToolResult UOrionExperienceToolset::AddWidgetEntry(const FString& AssetPath, const FString& WidgetClassPath, const FString& SlotTag, int32 ActionIndex, bool bSave)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UObject* Asset = LoadExperienceAsset(AssetPath, Error);
	if (!Asset)
	{
		return MakeResult(false, Error, AssetPath);
	}

	UGameFeatureAction_AddWidgets* Action = FindOrAddAction<UGameFeatureAction_AddWidgets>(Asset, ActionIndex, Error);
	if (!Action)
	{
		return MakeResult(false, Error, AssetPath);
	}

	TMap<FString, FString> Values;
	Values.Add(TEXT("WidgetClass"), WidgetClassPath);
	Values.Add(TEXT("SlotID"), SlotTag);
	if (!AddStructEntryByReflection(Action, TEXT("Widgets"), Values, Error))
	{
		return MakeResult(false, Error, AssetPath);
	}

	return FinishExperienceMutation(Asset, TEXT("Widget entry added."), bSave);
}

FOrionToolResult UOrionExperienceToolset::SaveExperienceAsset(const FString& AssetPath, bool bOnlyIfIsDirty)
{
	using namespace UE::OrionProjectToolsets;
	using namespace UE::OrionProjectToolsets::Experience;

	FString Error;
	UObject* Asset = LoadExperienceAsset(AssetPath, Error);
	if (!Asset)
	{
		return MakeResult(false, Error, AssetPath);
	}

	UpdateBundleData(Asset);
	UObject* SaveTarget = GetSaveTarget(Asset);
	if (!SaveLoadedAsset(SaveTarget, bOnlyIfIsDirty, Error))
	{
		return MakeResult(false, Error, AssetPath);
	}

	return MakeResult(true, TEXT("Experience asset saved."), GetDisplayPath(Asset));
}
