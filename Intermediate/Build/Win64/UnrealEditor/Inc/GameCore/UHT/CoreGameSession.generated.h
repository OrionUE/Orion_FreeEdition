// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/CoreGameSession.h"

#ifdef GAMECORE_CoreGameSession_generated_h
#error "CoreGameSession.generated.h already included, missing '#pragma once' in CoreGameSession.h"
#endif
#define GAMECORE_CoreGameSession_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACoreGameSession *********************************************************
struct Z_Construct_UClass_ACoreGameSession_Statics;
GAMECORE_API UClass* Z_Construct_UClass_ACoreGameSession(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameSession_h_15_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ACoreGameSession_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_ACoreGameSession(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ACoreGameSession, AGameSession, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_ACoreGameSession) \
	DECLARE_SERIALIZER(ACoreGameSession)


#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameSession_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACoreGameSession(ACoreGameSession&&) = delete; \
	ACoreGameSession(const ACoreGameSession&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoreGameSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoreGameSession); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoreGameSession) \
	NO_API virtual ~ACoreGameSession();


#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameSession_h_12_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameSession_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameSession_h_15_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameSession_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACoreGameSession;

// ********** End Class ACoreGameSession ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameSession_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
