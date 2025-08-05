// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bermuda_Co/Bermuda_CoCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBermuda_CoCameraManager() {}

// ********** Begin Cross Module References ********************************************************
BERMUDA_CO_API UClass* Z_Construct_UClass_ABermuda_CoCameraManager();
BERMUDA_CO_API UClass* Z_Construct_UClass_ABermuda_CoCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
UPackage* Z_Construct_UPackage__Script_Bermuda_Co();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABermuda_CoCameraManager *************************************************
void ABermuda_CoCameraManager::StaticRegisterNativesABermuda_CoCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABermuda_CoCameraManager;
UClass* ABermuda_CoCameraManager::GetPrivateStaticClass()
{
	using TClass = ABermuda_CoCameraManager;
	if (!Z_Registration_Info_UClass_ABermuda_CoCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Bermuda_CoCameraManager"),
			Z_Registration_Info_UClass_ABermuda_CoCameraManager.InnerSingleton,
			StaticRegisterNativesABermuda_CoCameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ABermuda_CoCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ABermuda_CoCameraManager_NoRegister()
{
	return ABermuda_CoCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABermuda_CoCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "Bermuda_CoCameraManager.h" },
		{ "ModuleRelativePath", "Bermuda_CoCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABermuda_CoCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABermuda_CoCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_Bermuda_Co,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABermuda_CoCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABermuda_CoCameraManager_Statics::ClassParams = {
	&ABermuda_CoCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABermuda_CoCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ABermuda_CoCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABermuda_CoCameraManager()
{
	if (!Z_Registration_Info_UClass_ABermuda_CoCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABermuda_CoCameraManager.OuterSingleton, Z_Construct_UClass_ABermuda_CoCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABermuda_CoCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABermuda_CoCameraManager);
ABermuda_CoCameraManager::~ABermuda_CoCameraManager() {}
// ********** End Class ABermuda_CoCameraManager ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoCameraManager_h__Script_Bermuda_Co_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABermuda_CoCameraManager, ABermuda_CoCameraManager::StaticClass, TEXT("ABermuda_CoCameraManager"), &Z_Registration_Info_UClass_ABermuda_CoCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABermuda_CoCameraManager), 4129666523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoCameraManager_h__Script_Bermuda_Co_373677511(TEXT("/Script/Bermuda_Co"),
	Z_CompiledInDeferFile_FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoCameraManager_h__Script_Bermuda_Co_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoCameraManager_h__Script_Bermuda_Co_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
