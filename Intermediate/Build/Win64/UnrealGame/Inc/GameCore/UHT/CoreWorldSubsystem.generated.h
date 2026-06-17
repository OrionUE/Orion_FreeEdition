// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/CoreWorldSubsystem.h"

#ifdef GAMECORE_CoreWorldSubsystem_generated_h
#error "CoreWorldSubsystem.generated.h already included, missing '#pragma once' in CoreWorldSubsystem.h"
#endif
#define GAMECORE_CoreWorldSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCoreWorldSubsystem ******************************************************
struct Z_Construct_UClass_UCoreWorldSubsystem_Statics;
GAMECORE_API UClass* Z_Construct_UClass_UCoreWorldSubsystem(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreWorldSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCoreWorldSubsystem_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_UCoreWorldSubsystem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCoreWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCoreWorldSubsystem) \
	DECLARE_SERIALIZER(UCoreWorldSubsystem)


#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreWorldSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreWorldSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreWorldSubsystem(UCoreWorldSubsystem&&) = delete; \
	UCoreWorldSubsystem(const UCoreWorldSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreWorldSubsystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreWorldSubsystem) \
	NO_API virtual ~UCoreWorldSubsystem();


#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreWorldSubsystem_h_12_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreWorldSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreWorldSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreWorldSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreWorldSubsystem;

// ********** End Class UCoreWorldSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreWorldSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
