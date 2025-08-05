// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBermuda_Co_init() {}
	BERMUDA_CO_API UFunction* Z_Construct_UDelegateFunction_Bermuda_Co_BulletCountUpdatedDelegate__DelegateSignature();
	BERMUDA_CO_API UFunction* Z_Construct_UDelegateFunction_Bermuda_Co_PawnDeathDelegate__DelegateSignature();
	BERMUDA_CO_API UFunction* Z_Construct_UDelegateFunction_Bermuda_Co_SprintStateChangedDelegate__DelegateSignature();
	BERMUDA_CO_API UFunction* Z_Construct_UDelegateFunction_Bermuda_Co_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Bermuda_Co;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Bermuda_Co()
	{
		if (!Z_Registration_Info_UPackage__Script_Bermuda_Co.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Bermuda_Co_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Bermuda_Co_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Bermuda_Co_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Bermuda_Co_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Bermuda_Co",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5471F7C4,
				0x49A7D48C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Bermuda_Co.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Bermuda_Co.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Bermuda_Co(Z_Construct_UPackage__Script_Bermuda_Co, TEXT("/Script/Bermuda_Co"), Z_Registration_Info_UPackage__Script_Bermuda_Co, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5471F7C4, 0x49A7D48C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
