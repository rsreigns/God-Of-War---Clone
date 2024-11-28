// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/Warrior/WarriorTypes/WarriorStructTypes.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorStructTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorHeroGameplayAbility_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_NoRegister();
KNIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FWarriorHeroAbilitySet();
KNIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FWarriorHeroWeaponData();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin ScriptStruct FWarriorHeroAbilitySet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WarriorHeroAbilitySet;
class UScriptStruct* FWarriorHeroAbilitySet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WarriorHeroAbilitySet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WarriorHeroAbilitySet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWarriorHeroAbilitySet, (UObject*)Z_Construct_UPackage__Script_knight(), TEXT("WarriorHeroAbilitySet"));
	}
	return Z_Registration_Info_UScriptStruct_WarriorHeroAbilitySet.OuterSingleton;
}
template<> KNIGHT_API UScriptStruct* StaticStruct<FWarriorHeroAbilitySet>()
{
	return FWarriorHeroAbilitySet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorTypes/WarriorStructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Category", "InputTag" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorTypes/WarriorStructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityToGrant_MetaData[] = {
		{ "Category", "WarriorHeroAbilitySet" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorTypes/WarriorStructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToGrant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWarriorHeroAbilitySet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroAbilitySet, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::NewProp_AbilityToGrant = { "AbilityToGrant", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroAbilitySet, AbilityToGrant), Z_Construct_UClass_UClass, Z_Construct_UClass_UWarriorHeroGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityToGrant_MetaData), NewProp_AbilityToGrant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::NewProp_AbilityToGrant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
	nullptr,
	&NewStructOps,
	"WarriorHeroAbilitySet",
	Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::PropPointers),
	sizeof(FWarriorHeroAbilitySet),
	alignof(FWarriorHeroAbilitySet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWarriorHeroAbilitySet()
{
	if (!Z_Registration_Info_UScriptStruct_WarriorHeroAbilitySet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WarriorHeroAbilitySet.InnerSingleton, Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WarriorHeroAbilitySet.InnerSingleton;
}
// End ScriptStruct FWarriorHeroAbilitySet

// Begin ScriptStruct FWarriorHeroWeaponData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WarriorHeroWeaponData;
class UScriptStruct* FWarriorHeroWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WarriorHeroWeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WarriorHeroWeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWarriorHeroWeaponData, (UObject*)Z_Construct_UPackage__Script_knight(), TEXT("WarriorHeroWeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_WarriorHeroWeaponData.OuterSingleton;
}
template<> KNIGHT_API UScriptStruct* StaticStruct<FWarriorHeroWeaponData>()
{
	return FWarriorHeroWeaponData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorTypes/WarriorStructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAnimLayerToLink_MetaData[] = {
		{ "Category", "WarriorHeroWeaponData" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorTypes/WarriorStructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponInputMappingContext_MetaData[] = {
		{ "Category", "WarriorHeroWeaponData" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorTypes/WarriorStructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeaponAbilities_MetaData[] = {
		{ "Category", "WarriorHeroWeaponData" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorTypes/WarriorStructTypes.h" },
		{ "TitleProperty", "InputTag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponBaseDamage_MetaData[] = {
		{ "Category", "WarriorHeroWeaponData" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorTypes/WarriorStructTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoftWeaponIconTexture_MetaData[] = {
		{ "Category", "WarriorHeroWeaponData" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorTypes/WarriorStructTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponAnimLayerToLink;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponInputMappingContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultWeaponAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultWeaponAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponBaseDamage;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftWeaponIconTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWarriorHeroWeaponData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_WeaponAnimLayerToLink = { "WeaponAnimLayerToLink", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroWeaponData, WeaponAnimLayerToLink), Z_Construct_UClass_UClass, Z_Construct_UClass_UWarriorHeroLinkedAnimLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAnimLayerToLink_MetaData), NewProp_WeaponAnimLayerToLink_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_WeaponInputMappingContext = { "WeaponInputMappingContext", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroWeaponData, WeaponInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponInputMappingContext_MetaData), NewProp_WeaponInputMappingContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_DefaultWeaponAbilities_Inner = { "DefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWarriorHeroAbilitySet, METADATA_PARAMS(0, nullptr) }; // 3667214909
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_DefaultWeaponAbilities = { "DefaultWeaponAbilities", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroWeaponData, DefaultWeaponAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWeaponAbilities_MetaData), NewProp_DefaultWeaponAbilities_MetaData) }; // 3667214909
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_WeaponBaseDamage = { "WeaponBaseDamage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroWeaponData, WeaponBaseDamage), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponBaseDamage_MetaData), NewProp_WeaponBaseDamage_MetaData) }; // 703790095
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_SoftWeaponIconTexture = { "SoftWeaponIconTexture", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorHeroWeaponData, SoftWeaponIconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoftWeaponIconTexture_MetaData), NewProp_SoftWeaponIconTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_WeaponAnimLayerToLink,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_WeaponInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_DefaultWeaponAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_DefaultWeaponAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_WeaponBaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewProp_SoftWeaponIconTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
	nullptr,
	&NewStructOps,
	"WarriorHeroWeaponData",
	Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::PropPointers),
	sizeof(FWarriorHeroWeaponData),
	alignof(FWarriorHeroWeaponData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWarriorHeroWeaponData()
{
	if (!Z_Registration_Info_UScriptStruct_WarriorHeroWeaponData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WarriorHeroWeaponData.InnerSingleton, Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WarriorHeroWeaponData.InnerSingleton;
}
// End ScriptStruct FWarriorHeroWeaponData

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorTypes_WarriorStructTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWarriorHeroAbilitySet::StaticStruct, Z_Construct_UScriptStruct_FWarriorHeroAbilitySet_Statics::NewStructOps, TEXT("WarriorHeroAbilitySet"), &Z_Registration_Info_UScriptStruct_WarriorHeroAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWarriorHeroAbilitySet), 3667214909U) },
		{ FWarriorHeroWeaponData::StaticStruct, Z_Construct_UScriptStruct_FWarriorHeroWeaponData_Statics::NewStructOps, TEXT("WarriorHeroWeaponData"), &Z_Registration_Info_UScriptStruct_WarriorHeroWeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWarriorHeroWeaponData), 1199287633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorTypes_WarriorStructTypes_h_1216395090(TEXT("/Script/knight"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorTypes_WarriorStructTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorTypes_WarriorStructTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
