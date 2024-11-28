// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/DataAssets/StartUpData/DataAsset_EnemyStartUpDataBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset_EnemyStartUpDataBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
KNIGHT_API UClass* Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase();
KNIGHT_API UClass* Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorEnemyGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Class UDataAsset_EnemyStartUpDataBase
void UDataAsset_EnemyStartUpDataBase::StaticRegisterNativesUDataAsset_EnemyStartUpDataBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAsset_EnemyStartUpDataBase);
UClass* Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase_NoRegister()
{
	return UDataAsset_EnemyStartUpDataBase::StaticClass();
}
struct Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/StartUpData/DataAsset_EnemyStartUpDataBase.h" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_EnemyStartUpDataBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCombatAbilities_MetaData[] = {
		{ "Category", "StartUp Data" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_EnemyStartUpDataBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyCombatAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnemyCombatAbilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_EnemyStartUpDataBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase_Statics::NewProp_EnemyCombatAbilities_Inner = { "EnemyCombatAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UWarriorEnemyGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase_Statics::NewProp_EnemyCombatAbilities = { "EnemyCombatAbilities", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_EnemyStartUpDataBase, EnemyCombatAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyCombatAbilities_MetaData), NewProp_EnemyCombatAbilities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase_Statics::NewProp_EnemyCombatAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase_Statics::NewProp_EnemyCombatAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset_StartUpDataBase,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase_Statics::ClassParams = {
	&UDataAsset_EnemyStartUpDataBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase()
{
	if (!Z_Registration_Info_UClass_UDataAsset_EnemyStartUpDataBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_EnemyStartUpDataBase.OuterSingleton, Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataAsset_EnemyStartUpDataBase.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<UDataAsset_EnemyStartUpDataBase>()
{
	return UDataAsset_EnemyStartUpDataBase::StaticClass();
}
UDataAsset_EnemyStartUpDataBase::UDataAsset_EnemyStartUpDataBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_EnemyStartUpDataBase);
UDataAsset_EnemyStartUpDataBase::~UDataAsset_EnemyStartUpDataBase() {}
// End Class UDataAsset_EnemyStartUpDataBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_DataAssets_StartUpData_DataAsset_EnemyStartUpDataBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_EnemyStartUpDataBase, UDataAsset_EnemyStartUpDataBase::StaticClass, TEXT("UDataAsset_EnemyStartUpDataBase"), &Z_Registration_Info_UClass_UDataAsset_EnemyStartUpDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_EnemyStartUpDataBase), 2606305494U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_DataAssets_StartUpData_DataAsset_EnemyStartUpDataBase_h_3422539484(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_DataAssets_StartUpData_DataAsset_EnemyStartUpDataBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_DataAssets_StartUpData_DataAsset_EnemyStartUpDataBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
