// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h"
#include "knight/Public/Warrior/WarriorTypes/WarriorStructTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset_HeroStartUpData() {}

// Begin Cross Module References
KNIGHT_API UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData();
KNIGHT_API UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase();
KNIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FWarriorHeroAbilitySet();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Class UDataAsset_HeroStartUpData
void UDataAsset_HeroStartUpData::StaticRegisterNativesUDataAsset_HeroStartUpData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAsset_HeroStartUpData);
UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData_NoRegister()
{
	return UDataAsset_HeroStartUpData::StaticClass();
}
struct Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroStartUpAbilitySet_MetaData[] = {
		{ "Category", "StartUp Data" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_HeroStartUpData.h" },
		{ "TitleProperty", "InputTag" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeroStartUpAbilitySet_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HeroStartUpAbilitySet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_HeroStartUpData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::NewProp_HeroStartUpAbilitySet_Inner = { "HeroStartUpAbilitySet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWarriorHeroAbilitySet, METADATA_PARAMS(0, nullptr) }; // 3667214909
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::NewProp_HeroStartUpAbilitySet = { "HeroStartUpAbilitySet", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_HeroStartUpData, HeroStartUpAbilitySet), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroStartUpAbilitySet_MetaData), NewProp_HeroStartUpAbilitySet_MetaData) }; // 3667214909
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::NewProp_HeroStartUpAbilitySet_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::NewProp_HeroStartUpAbilitySet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset_StartUpDataBase,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::ClassParams = {
	&UDataAsset_HeroStartUpData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataAsset_HeroStartUpData()
{
	if (!Z_Registration_Info_UClass_UDataAsset_HeroStartUpData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_HeroStartUpData.OuterSingleton, Z_Construct_UClass_UDataAsset_HeroStartUpData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataAsset_HeroStartUpData.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<UDataAsset_HeroStartUpData>()
{
	return UDataAsset_HeroStartUpData::StaticClass();
}
UDataAsset_HeroStartUpData::UDataAsset_HeroStartUpData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_HeroStartUpData);
UDataAsset_HeroStartUpData::~UDataAsset_HeroStartUpData() {}
// End Class UDataAsset_HeroStartUpData

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_HeroStartUpData, UDataAsset_HeroStartUpData::StaticClass, TEXT("UDataAsset_HeroStartUpData"), &Z_Registration_Info_UClass_UDataAsset_HeroStartUpData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_HeroStartUpData), 904707064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_4071791433(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_DataAssets_StartUpData_DataAsset_HeroStartUpData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS