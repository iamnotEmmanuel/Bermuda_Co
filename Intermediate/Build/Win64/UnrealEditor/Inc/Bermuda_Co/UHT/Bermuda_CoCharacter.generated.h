// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bermuda_CoCharacter.h"

#ifdef BERMUDA_CO_Bermuda_CoCharacter_generated_h
#error "Bermuda_CoCharacter.generated.h already included, missing '#pragma once' in Bermuda_CoCharacter.h"
#endif
#define BERMUDA_CO_Bermuda_CoCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABermuda_CoCharacter *****************************************************
#define FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


BERMUDA_CO_API UClass* Z_Construct_UClass_ABermuda_CoCharacter_NoRegister();

#define FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABermuda_CoCharacter(); \
	friend struct Z_Construct_UClass_ABermuda_CoCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BERMUDA_CO_API UClass* Z_Construct_UClass_ABermuda_CoCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ABermuda_CoCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bermuda_Co"), Z_Construct_UClass_ABermuda_CoCharacter_NoRegister) \
	DECLARE_SERIALIZER(ABermuda_CoCharacter)


#define FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABermuda_CoCharacter(ABermuda_CoCharacter&&) = delete; \
	ABermuda_CoCharacter(const ABermuda_CoCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABermuda_CoCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABermuda_CoCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ABermuda_CoCharacter) \
	NO_API virtual ~ABermuda_CoCharacter();


#define FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoCharacter_h_21_PROLOG
#define FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABermuda_CoCharacter;

// ********** End Class ABermuda_CoCharacter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
