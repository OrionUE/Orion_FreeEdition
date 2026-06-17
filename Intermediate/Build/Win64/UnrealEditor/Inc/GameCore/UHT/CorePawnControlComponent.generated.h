// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/CorePawnControlComponent.h"

#ifdef GAMECORE_CorePawnControlComponent_generated_h
#error "CorePawnControlComponent.generated.h already included, missing '#pragma once' in CorePawnControlComponent.h"
#endif
#define GAMECORE_CorePawnControlComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UCorePawnControlComponent;

// ********** Begin Class UCorePawnControlComponent ************************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnControlComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindControlComponent);


struct Z_Construct_UClass_UCorePawnControlComponent_Statics;
GAMECORE_API UClass* Z_Construct_UClass_UCorePawnControlComponent(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnControlComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCorePawnControlComponent_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_UCorePawnControlComponent(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCorePawnControlComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCorePawnControlComponent) \
	DECLARE_SERIALIZER(UCorePawnControlComponent) \
	[[deprecated("Do not call _getUObject(), use Cast.")]] virtual UObject* _getUObject() const override { return const_cast<UCorePawnControlComponent*>(this); }


#define FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnControlComponent_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCorePawnControlComponent(UCorePawnControlComponent&&) = delete; \
	UCorePawnControlComponent(const UCorePawnControlComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorePawnControlComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorePawnControlComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCorePawnControlComponent) \
	NO_API virtual ~UCorePawnControlComponent();


#define FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnControlComponent_h_26_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnControlComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnControlComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnControlComponent_h_29_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnControlComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCorePawnControlComponent;

// ********** End Class UCorePawnControlComponent **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_Character_CorePawnControlComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
