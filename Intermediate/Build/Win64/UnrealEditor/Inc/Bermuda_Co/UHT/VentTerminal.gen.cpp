// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bermuda_Co/VentTerminal.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVentTerminal() {}

// ********** Begin Cross Module References ********************************************************
BERMUDA_CO_API UClass* Z_Construct_UClass_AVentTerminal();
BERMUDA_CO_API UClass* Z_Construct_UClass_AVentTerminal_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bermuda_Co();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AVentTerminal Function StartFlush ****************************************
struct Z_Construct_UFunction_AVentTerminal_StartFlush_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VentTerminal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVentTerminal_StartFlush_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AVentTerminal, nullptr, "StartFlush", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVentTerminal_StartFlush_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVentTerminal_StartFlush_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AVentTerminal_StartFlush()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVentTerminal_StartFlush_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVentTerminal::execStartFlush)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartFlush();
	P_NATIVE_END;
}
// ********** End Class AVentTerminal Function StartFlush ******************************************

// ********** Begin Class AVentTerminal ************************************************************
void AVentTerminal::StaticRegisterNativesAVentTerminal()
{
	UClass* Class = AVentTerminal::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartFlush", &AVentTerminal::execStartFlush },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVentTerminal;
UClass* AVentTerminal::GetPrivateStaticClass()
{
	using TClass = AVentTerminal;
	if (!Z_Registration_Info_UClass_AVentTerminal.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VentTerminal"),
			Z_Registration_Info_UClass_AVentTerminal.InnerSingleton,
			StaticRegisterNativesAVentTerminal,
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
	return Z_Registration_Info_UClass_AVentTerminal.InnerSingleton;
}
UClass* Z_Construct_UClass_AVentTerminal_NoRegister()
{
	return AVentTerminal::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVentTerminal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VentTerminal.h" },
		{ "ModuleRelativePath", "VentTerminal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TerminalMesh_MetaData[] = {
		{ "Category", "VentTerminal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VentTerminal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlushDuration_MetaData[] = {
		{ "Category", "Vent" },
		{ "ModuleRelativePath", "VentTerminal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlushWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UI and effects (optional at this stage)\n" },
#endif
		{ "ModuleRelativePath", "VentTerminal.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI and effects (optional at this stage)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlushEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "VentTerminal.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlushSound_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "VentTerminal.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TerminalMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlushDuration;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FlushWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlushEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlushSound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVentTerminal_StartFlush, "StartFlush" }, // 1718134315
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVentTerminal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVentTerminal_Statics::NewProp_TerminalMesh = { "TerminalMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVentTerminal, TerminalMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TerminalMesh_MetaData), NewProp_TerminalMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVentTerminal_Statics::NewProp_FlushDuration = { "FlushDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVentTerminal, FlushDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlushDuration_MetaData), NewProp_FlushDuration_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVentTerminal_Statics::NewProp_FlushWidgetClass = { "FlushWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVentTerminal, FlushWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlushWidgetClass_MetaData), NewProp_FlushWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVentTerminal_Statics::NewProp_FlushEffect = { "FlushEffect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVentTerminal, FlushEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlushEffect_MetaData), NewProp_FlushEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVentTerminal_Statics::NewProp_FlushSound = { "FlushSound", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVentTerminal, FlushSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlushSound_MetaData), NewProp_FlushSound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVentTerminal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVentTerminal_Statics::NewProp_TerminalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVentTerminal_Statics::NewProp_FlushDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVentTerminal_Statics::NewProp_FlushWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVentTerminal_Statics::NewProp_FlushEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVentTerminal_Statics::NewProp_FlushSound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVentTerminal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVentTerminal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Bermuda_Co,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVentTerminal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVentTerminal_Statics::ClassParams = {
	&AVentTerminal::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AVentTerminal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AVentTerminal_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVentTerminal_Statics::Class_MetaDataParams), Z_Construct_UClass_AVentTerminal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVentTerminal()
{
	if (!Z_Registration_Info_UClass_AVentTerminal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVentTerminal.OuterSingleton, Z_Construct_UClass_AVentTerminal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVentTerminal.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVentTerminal);
AVentTerminal::~AVentTerminal() {}
// ********** End Class AVentTerminal **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_VentTerminal_h__Script_Bermuda_Co_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVentTerminal, AVentTerminal::StaticClass, TEXT("AVentTerminal"), &Z_Registration_Info_UClass_AVentTerminal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVentTerminal), 2219666630U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_VentTerminal_h__Script_Bermuda_Co_2050008528(TEXT("/Script/Bermuda_Co"),
	Z_CompiledInDeferFile_FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_VentTerminal_h__Script_Bermuda_Co_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Emmanuel_Documents_Unreal_Projects_Bermuda_Co_Source_Bermuda_Co_VentTerminal_h__Script_Bermuda_Co_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
