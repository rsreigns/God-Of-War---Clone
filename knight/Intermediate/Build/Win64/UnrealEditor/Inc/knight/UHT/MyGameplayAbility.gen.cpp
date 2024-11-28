// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Private/MyGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameplayAbility() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
KNIGHT_API UClass* Z_Construct_UClass_UMyGameplayAbility();
KNIGHT_API UClass* Z_Construct_UClass_UMyGameplayAbility_NoRegister();
KNIGHT_API UEnum* Z_Construct_UEnum_knight_EAbilityInputID();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Class UMyGameplayAbility
void UMyGameplayAbility::StaticRegisterNativesUMyGameplayAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGameplayAbility);
UClass* Z_Construct_UClass_UMyGameplayAbility_NoRegister()
{
	return UMyGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UMyGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyGameplayAbility.h" },
		{ "ModuleRelativePath", "Private/MyGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputID_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Private/MyGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityInputID_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityInputID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMyGameplayAbility_Statics::NewProp_AbilityInputID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMyGameplayAbility_Statics::NewProp_AbilityInputID = { "AbilityInputID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameplayAbility, AbilityInputID), Z_Construct_UEnum_knight_EAbilityInputID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputID_MetaData), NewProp_AbilityInputID_MetaData) }; // 1470856724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameplayAbility_Statics::NewProp_AbilityInputID_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameplayAbility_Statics::NewProp_AbilityInputID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameplayAbility_Statics::ClassParams = {
	&UMyGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameplayAbility_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UMyGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameplayAbility.OuterSingleton, Z_Construct_UClass_UMyGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyGameplayAbility.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<UMyGameplayAbility>()
{
	return UMyGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameplayAbility);
UMyGameplayAbility::~UMyGameplayAbility() {}
// End Class UMyGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Private_MyGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameplayAbility, UMyGameplayAbility::StaticClass, TEXT("UMyGameplayAbility"), &Z_Registration_Info_UClass_UMyGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameplayAbility), 4047820397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Private_MyGameplayAbility_h_4116834290(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Private_MyGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Private_MyGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
