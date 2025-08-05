// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Horror/HorrorCharacter.h"

#ifdef BERMUDA_CO_HorrorCharacter_generated_h
#error "HorrorCharacter.generated.h already included, missing '#pragma once' in HorrorCharacter.h"
#endif
#define BERMUDA_CO_HorrorCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FUpdateSprintMeterDelegate ********************************************
#define FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Variant_Horror_HorrorCharacter_h_12_DELEGATE \
BERMUDA_CO_API void FUpdateSprintMeterDelegate_DelegateWrapper(const FMulticastScriptDelegate& UpdateSprintMeterDelegate, float Percentage);


// ********** End Delegate FUpdateSprintMeterDelegate **********************************************

// ********** Begin Delegate FSprintStateChangedDelegate *******************************************
#define FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Variant_Horror_HorrorCharacter_h_13_DELEGATE \
BERMUDA_CO_API void FSprintStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SprintStateChangedDelegate, bool bSprinting);


// ********** End Delegate FSprintStateChangedDelegate *********************************************

// ********** Begin Class AHorrorCharacter *********************************************************
#define FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Variant_Horror_HorrorCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoEndSprint); \
	DECLARE_FUNCTION(execDoStartSprint);


BERMUDA_CO_API UClass* Z_Construct_UClass_AHorrorCharacter_NoRegister();

#define FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Variant_Horror_HorrorCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHorrorCharacter(); \
	friend struct Z_Construct_UClass_AHorrorCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BERMUDA_CO_API UClass* Z_Construct_UClass_AHorrorCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AHorrorCharacter, ABermuda_CoCharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bermuda_Co"), Z_Construct_UClass_AHorrorCharacter_NoRegister) \
	DECLARE_SERIALIZER(AHorrorCharacter)


#define FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Variant_Horror_HorrorCharacter_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHorrorCharacter(AHorrorCharacter&&) = delete; \
	AHorrorCharacter(const AHorrorCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHorrorCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHorrorCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AHorrorCharacter) \
	NO_API virtual ~AHorrorCharacter();


#define FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Variant_Horror_HorrorCharacter_h_19_PROLOG
#define FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Variant_Horror_HorrorCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Variant_Horror_HorrorCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Variant_Horror_HorrorCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Variant_Horror_HorrorCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHorrorCharacter;

// ********** End Class AHorrorCharacter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Variant_Horror_HorrorCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
