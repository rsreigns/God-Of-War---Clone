// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset_StartUpDataBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase();
KNIGHT_API UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Class UDataAsset_StartUpDataBase
void UDataAsset_StartUpDataBase::StaticRegisterNativesUDataAsset_StartUpDataBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAsset_StartUpDataBase);
UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase_NoRegister()
{
	return UDataAsset_StartUpDataBase::StaticClass();
}
struct Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/StartUpData/DataAsset_StartUpDataBase.h" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_StartUpDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GivenAbilities_MetaData[] = {
		{ "Category", "StartUp Data" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_StartUpDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReactiveAbilities_MetaData[] = {
		{ "Category", "StartUp Data" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_StartUpDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupGameplayEffects_MetaData[] = {
		{ "Category", "StartUp Data" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_StartUpDataBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GivenAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GivenAbilities;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReactiveAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReactiveAbilities;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartupGameplayEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupGameplayEffects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_StartUpDataBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_GivenAbilities_Inner = { "GivenAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UWarriorGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_GivenAbilities = { "GivenAbilities", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_StartUpDataBase, GivenAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GivenAbilities_MetaData), NewProp_GivenAbilities_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_ReactiveAbilities_Inner = { "ReactiveAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UWarriorGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_ReactiveAbilities = { "ReactiveAbilities", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_StartUpDataBase, ReactiveAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReactiveAbilities_MetaData), NewProp_ReactiveAbilities_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_StartupGameplayEffects_Inner = { "StartupGameplayEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_StartupGameplayEffects = { "StartupGameplayEffects", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_StartUpDataBase, StartupGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupGameplayEffects_MetaData), NewProp_StartupGameplayEffects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_GivenAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_GivenAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_ReactiveAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_ReactiveAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_StartupGameplayEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::NewProp_StartupGameplayEffects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::ClassParams = {
	&UDataAsset_StartUpDataBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase()
{
	if (!Z_Registration_Info_UClass_UDataAsset_StartUpDataBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_StartUpDataBase.OuterSingleton, Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataAsset_StartUpDataBase.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<UDataAsset_StartUpDataBase>()
{
	return UDataAsset_StartUpDataBase::StaticClass();
}
UDataAsset_StartUpDataBase::UDataAsset_StartUpDataBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_StartUpDataBase);
UDataAsset_StartUpDataBase::~UDataAsset_StartUpDataBase() {}
// End Class UDataAsset_StartUpDataBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_DataAssets_StartUpData_DataAsset_StartUpDataBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_StartUpDataBase, UDataAsset_StartUpDataBase::StaticClass, TEXT("UDataAsset_StartUpDataBase"), &Z_Registration_Info_UClass_UDataAsset_StartUpDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_StartUpDataBase), 161598485U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_DataAssets_StartUpData_DataAsset_StartUpDataBase_h_667883239(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_DataAssets_StartUpData_DataAsset_StartUpDataBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_DataAssets_StartUpData_DataAsset_StartUpDataBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
