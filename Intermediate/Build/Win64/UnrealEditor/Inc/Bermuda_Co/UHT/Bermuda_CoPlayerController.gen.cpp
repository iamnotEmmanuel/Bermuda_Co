// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bermuda_Co/Bermuda_CoPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBermuda_CoPlayerController() {}

// ********** Begin Cross Module References ********************************************************
BERMUDA_CO_API UClass* Z_Construct_UClass_ABermuda_CoPlayerController();
BERMUDA_CO_API UClass* Z_Construct_UClass_ABermuda_CoPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bermuda_Co();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABermuda_CoPlayerController **********************************************
void ABermuda_CoPlayerController::StaticRegisterNativesABermuda_CoPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABermuda_CoPlayerController;
UClass* ABermuda_CoPlayerController::GetPrivateStaticClass()
{
	using TClass = ABermuda_CoPlayerController;
	if (!Z_Registration_Info_UClass_ABermuda_CoPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Bermuda_CoPlayerController"),
			Z_Registration_Info_UClass_ABermuda_CoPlayerController.InnerSingleton,
			StaticRegisterNativesABermuda_CoPlayerController,
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
	return Z_Registration_Info_UClass_ABermuda_CoPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ABermuda_CoPlayerController_NoRegister()
{
	return ABermuda_CoPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABermuda_CoPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple first person Player Controller\n *  Manages the input mapping context.\n *  Overrides the Player Camera Manager class.\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Bermuda_CoPlayerController.h" },
		{ "ModuleRelativePath", "Bermuda_CoPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple first person Player Controller\nManages the input mapping context.\nOverrides the Player Camera Manager class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "Bermuda_CoPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABermuda_CoPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABermuda_CoPlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABermuda_CoPlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABermuda_CoPlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABermuda_CoPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABermuda_CoPlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABermuda_CoPlayerController_Statics::NewProp_DefaultMappingContexts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABermuda_CoPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABermuda_CoPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Bermuda_Co,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABermuda_CoPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABermuda_CoPlayerController_Statics::ClassParams = {
	&ABermuda_CoPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABermuda_CoPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABermuda_CoPlayerController_Statics::PropPointers),
	0,
	0x009003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABermuda_CoPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABermuda_CoPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABermuda_CoPlayerController()
{
	if (!Z_Registration_Info_UClass_ABermuda_CoPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABermuda_CoPlayerController.OuterSingleton, Z_Construct_UClass_ABermuda_CoPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABermuda_CoPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABermuda_CoPlayerController);
ABermuda_CoPlayerController::~ABermuda_CoPlayerController() {}
// ********** End Class ABermuda_CoPlayerController ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoPlayerController_h__Script_Bermuda_Co_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABermuda_CoPlayerController, ABermuda_CoPlayerController::StaticClass, TEXT("ABermuda_CoPlayerController"), &Z_Registration_Info_UClass_ABermuda_CoPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABermuda_CoPlayerController), 754250788U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoPlayerController_h__Script_Bermuda_Co_3773767527(TEXT("/Script/Bermuda_Co"),
	Z_CompiledInDeferFile_FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoPlayerController_h__Script_Bermuda_Co_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_Bermuda_CoPlayerController_h__Script_Bermuda_Co_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
