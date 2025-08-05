// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bermuda_Co/Bermuda_CoGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBermuda_CoGameMode() {}

// ********** Begin Cross Module References ********************************************************
BERMUDA_CO_API UClass* Z_Construct_UClass_ABermuda_CoGameMode();
BERMUDA_CO_API UClass* Z_Construct_UClass_ABermuda_CoGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Bermuda_Co();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABermuda_CoGameMode ******************************************************
void ABermuda_CoGameMode::StaticRegisterNativesABermuda_CoGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABermuda_CoGameMode;
UClass* ABermuda_CoGameMode::GetPrivateStaticClass()
{
	using TClass = ABermuda_CoGameMode;
	if (!Z_Registration_Info_UClass_ABermuda_CoGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Bermuda_CoGameMode"),
			Z_Registration_Info_UClass_ABermuda_CoGameMode.InnerSingleton,
			StaticRegisterNativesABermuda_CoGameMode,
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
	return Z_Registration_Info_UClass_ABermuda_CoGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ABermuda_CoGameMode_NoRegister()
{
	return ABermuda_CoGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABermuda_CoGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Bermuda_CoGameMode.h" },
		{ "ModuleRelativePath", "Bermuda_CoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABermuda_CoGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABermuda_CoGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Bermuda_Co,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABermuda_CoGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABermuda_CoGameMode_Statics::ClassParams = {
	&ABermuda_CoGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABermuda_CoGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABermuda_CoGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABermuda_CoGameMode()
{
	if (!Z_Registration_Info_UClass_ABermuda_CoGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABermuda_CoGameMode.OuterSingleton, Z_Construct_UClass_ABermuda_CoGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABermuda_CoGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABermuda_CoGameMode);
ABermuda_CoGameMode::~ABermuda_CoGameMode() {}
// ********** End Class ABermuda_CoGameMode ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoGameMode_h__Script_Bermuda_Co_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABermuda_CoGameMode, ABermuda_CoGameMode::StaticClass, TEXT("ABermuda_CoGameMode"), &Z_Registration_Info_UClass_ABermuda_CoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABermuda_CoGameMode), 1632786645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoGameMode_h__Script_Bermuda_Co_832302253(TEXT("/Script/Bermuda_Co"),
	Z_CompiledInDeferFile_FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoGameMode_h__Script_Bermuda_Co_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoGameMode_h__Script_Bermuda_Co_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
