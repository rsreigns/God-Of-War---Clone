// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/Warrior/Items/Weapons/WarriorHeroWeapon.h"
#include "GameplayAbilities/Public/GameplayAbilitySpecHandle.h"
#include "knight/Public/Warrior/WarriorTypes/WarriorStructTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorHeroWeapon() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
KNIGHT_API UClass* Z_Construct_UClass_AWarriorHeroWeapon();
KNIGHT_API UClass* Z_Construct_UClass_AWarriorHeroWeapon_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_AWarriorWeaponBase();
KNIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FWarriorHeroWeaponData();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Class AWarriorHeroWeapon Function AssignGrantedAbilitySpecHandles
struct Z_Construct_UFunction_AWarriorHeroWeapon_AssignGrantedAbilitySpecHandles_Statics
{
	struct WarriorHeroWeapon_eventAssignGrantedAbilitySpecHandles_Parms
	{
		TArray<FGameplayAbilitySpecHandle> InSpecHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Warrior/Items/Weapons/WarriorHeroWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSpecHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSpecHandle_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InSpecHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWarriorHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandle_Inner = { "InSpecHandle", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWarriorHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandle = { "InSpecHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorHeroWeapon_eventAssignGrantedAbilitySpecHandles_Parms, InSpecHandle), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSpecHandle_MetaData), NewProp_InSpecHandle_MetaData) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarriorHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandle_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::NewProp_InSpecHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarriorHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarriorHeroWeapon, nullptr, "AssignGrantedAbilitySpecHandles", nullptr, nullptr, Z_Construct_UFunction_AWarriorHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWarriorHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::WarriorHeroWeapon_eventAssignGrantedAbilitySpecHandles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWarriorHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWarriorHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::WarriorHeroWeapon_eventAssignGrantedAbilitySpecHandles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWarriorHeroWeapon_AssignGrantedAbilitySpecHandles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWarriorHeroWeapon_AssignGrantedAbilitySpecHandles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWarriorHeroWeapon::execAssignGrantedAbilitySpecHandles)
{
	P_GET_TARRAY_REF(FGameplayAbilitySpecHandle,Z_Param_Out_InSpecHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssignGrantedAbilitySpecHandles(Z_Param_Out_InSpecHandle);
	P_NATIVE_END;
}
// End Class AWarriorHeroWeapon Function AssignGrantedAbilitySpecHandles

// Begin Class AWarriorHeroWeapon Function GetGrantedAbilitySpecHandles
struct Z_Construct_UFunction_AWarriorHeroWeapon_GetGrantedAbilitySpecHandles_Statics
{
	struct WarriorHeroWeapon_eventGetGrantedAbilitySpecHandles_Parms
	{
		TArray<FGameplayAbilitySpecHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Warrior/Items/Weapons/WarriorHeroWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWarriorHeroWeapon_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWarriorHeroWeapon_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorHeroWeapon_eventGetGrantedAbilitySpecHandles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3490030742
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarriorHeroWeapon_GetGrantedAbilitySpecHandles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorHeroWeapon_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorHeroWeapon_GetGrantedAbilitySpecHandles_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorHeroWeapon_GetGrantedAbilitySpecHandles_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarriorHeroWeapon_GetGrantedAbilitySpecHandles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarriorHeroWeapon, nullptr, "GetGrantedAbilitySpecHandles", nullptr, nullptr, Z_Construct_UFunction_AWarriorHeroWeapon_GetGrantedAbilitySpecHandles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorHeroWeapon_GetGrantedAbilitySpecHandles_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWarriorHeroWeapon_GetGrantedAbilitySpecHandles_Statics::WarriorHeroWeapon_eventGetGrantedAbilitySpecHandles_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorHeroWeapon_GetGrantedAbilitySpecHandles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWarriorHeroWeapon_GetGrantedAbilitySpecHandles_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWarriorHeroWeapon_GetGrantedAbilitySpecHandles_Statics::WarriorHeroWeapon_eventGetGrantedAbilitySpecHandles_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWarriorHeroWeapon_GetGrantedAbilitySpecHandles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWarriorHeroWeapon_GetGrantedAbilitySpecHandles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWarriorHeroWeapon::execGetGrantedAbilitySpecHandles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FGameplayAbilitySpecHandle>*)Z_Param__Result=P_THIS->GetGrantedAbilitySpecHandles();
	P_NATIVE_END;
}
// End Class AWarriorHeroWeapon Function GetGrantedAbilitySpecHandles

// Begin Class AWarriorHeroWeapon
void AWarriorHeroWeapon::StaticRegisterNativesAWarriorHeroWeapon()
{
	UClass* Class = AWarriorHeroWeapon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AssignGrantedAbilitySpecHandles", &AWarriorHeroWeapon::execAssignGrantedAbilitySpecHandles },
		{ "GetGrantedAbilitySpecHandles", &AWarriorHeroWeapon::execGetGrantedAbilitySpecHandles },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorHeroWeapon);
UClass* Z_Construct_UClass_AWarriorHeroWeapon_NoRegister()
{
	return AWarriorHeroWeapon::StaticClass();
}
struct Z_Construct_UClass_AWarriorHeroWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Warrior/Items/Weapons/WarriorHeroWeapon.h" },
		{ "ModuleRelativePath", "Public/Warrior/Items/Weapons/WarriorHeroWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroWeaponData_MetaData[] = {
		{ "Category", "WeaponData" },
		{ "ModuleRelativePath", "Public/Warrior/Items/Weapons/WarriorHeroWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeroWeaponData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWarriorHeroWeapon_AssignGrantedAbilitySpecHandles, "AssignGrantedAbilitySpecHandles" }, // 2595019052
		{ &Z_Construct_UFunction_AWarriorHeroWeapon_GetGrantedAbilitySpecHandles, "GetGrantedAbilitySpecHandles" }, // 4294183972
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorHeroWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWarriorHeroWeapon_Statics::NewProp_HeroWeaponData = { "HeroWeaponData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorHeroWeapon, HeroWeaponData), Z_Construct_UScriptStruct_FWarriorHeroWeaponData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroWeaponData_MetaData), NewProp_HeroWeaponData_MetaData) }; // 1199287633
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarriorHeroWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorHeroWeapon_Statics::NewProp_HeroWeaponData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWarriorHeroWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWarriorWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorHeroWeapon_Statics::ClassParams = {
	&AWarriorHeroWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWarriorHeroWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroWeapon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorHeroWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorHeroWeapon()
{
	if (!Z_Registration_Info_UClass_AWarriorHeroWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorHeroWeapon.OuterSingleton, Z_Construct_UClass_AWarriorHeroWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorHeroWeapon.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<AWarriorHeroWeapon>()
{
	return AWarriorHeroWeapon::StaticClass();
}
AWarriorHeroWeapon::AWarriorHeroWeapon() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorHeroWeapon);
AWarriorHeroWeapon::~AWarriorHeroWeapon() {}
// End Class AWarriorHeroWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Items_Weapons_WarriorHeroWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorHeroWeapon, AWarriorHeroWeapon::StaticClass, TEXT("AWarriorHeroWeapon"), &Z_Registration_Info_UClass_AWarriorHeroWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorHeroWeapon), 710903239U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Items_Weapons_WarriorHeroWeapon_h_1704705759(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Items_Weapons_WarriorHeroWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Items_Weapons_WarriorHeroWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
