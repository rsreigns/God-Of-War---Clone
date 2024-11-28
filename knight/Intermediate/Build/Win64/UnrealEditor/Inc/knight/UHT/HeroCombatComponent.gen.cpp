// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/Warrior/Components/PawnExtension/Combat/HeroCombatComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroCombatComponent() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
KNIGHT_API UClass* Z_Construct_UClass_AWarriorHeroWeapon_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UHeroCombatComponent();
KNIGHT_API UClass* Z_Construct_UClass_UHeroCombatComponent_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UPawnCombatComponent();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Class UHeroCombatComponent Function GetHeroCarriedWeaponByTag
struct Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics
{
	struct HeroCombatComponent_eventGetHeroCarriedWeaponByTag_Parms
	{
		FGameplayTag InGameplayTag;
		AWarriorHeroWeapon* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior | Combat" },
		{ "ModuleRelativePath", "Public/Warrior/Components/PawnExtension/Combat/HeroCombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InGameplayTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::NewProp_InGameplayTag = { "InGameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCombatComponent_eventGetHeroCarriedWeaponByTag_Parms, InGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCombatComponent_eventGetHeroCarriedWeaponByTag_Parms, ReturnValue), Z_Construct_UClass_AWarriorHeroWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::NewProp_InGameplayTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroCombatComponent, nullptr, "GetHeroCarriedWeaponByTag", nullptr, nullptr, Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::HeroCombatComponent_eventGetHeroCarriedWeaponByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::HeroCombatComponent_eventGetHeroCarriedWeaponByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroCombatComponent::execGetHeroCarriedWeaponByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_InGameplayTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWarriorHeroWeapon**)Z_Param__Result=P_THIS->GetHeroCarriedWeaponByTag(Z_Param_InGameplayTag);
	P_NATIVE_END;
}
// End Class UHeroCombatComponent Function GetHeroCarriedWeaponByTag

// Begin Class UHeroCombatComponent Function GetHeroCurrentEquippedWeapon
struct Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics
{
	struct HeroCombatComponent_eventGetHeroCurrentEquippedWeapon_Parms
	{
		AWarriorHeroWeapon* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior | Combat" },
		{ "ModuleRelativePath", "Public/Warrior/Components/PawnExtension/Combat/HeroCombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCombatComponent_eventGetHeroCurrentEquippedWeapon_Parms, ReturnValue), Z_Construct_UClass_AWarriorHeroWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroCombatComponent, nullptr, "GetHeroCurrentEquippedWeapon", nullptr, nullptr, Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::HeroCombatComponent_eventGetHeroCurrentEquippedWeapon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::HeroCombatComponent_eventGetHeroCurrentEquippedWeapon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroCombatComponent::execGetHeroCurrentEquippedWeapon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AWarriorHeroWeapon**)Z_Param__Result=P_THIS->GetHeroCurrentEquippedWeapon();
	P_NATIVE_END;
}
// End Class UHeroCombatComponent Function GetHeroCurrentEquippedWeapon

// Begin Class UHeroCombatComponent Function GetHeroCurrentWeaponDamageAtLevel
struct Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentWeaponDamageAtLevel_Statics
{
	struct HeroCombatComponent_eventGetHeroCurrentWeaponDamageAtLevel_Parms
	{
		float InLevel;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior | Combat" },
		{ "ModuleRelativePath", "Public/Warrior/Components/PawnExtension/Combat/HeroCombatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentWeaponDamageAtLevel_Statics::NewProp_InLevel = { "InLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCombatComponent_eventGetHeroCurrentWeaponDamageAtLevel_Parms, InLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentWeaponDamageAtLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroCombatComponent_eventGetHeroCurrentWeaponDamageAtLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentWeaponDamageAtLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentWeaponDamageAtLevel_Statics::NewProp_InLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentWeaponDamageAtLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentWeaponDamageAtLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentWeaponDamageAtLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroCombatComponent, nullptr, "GetHeroCurrentWeaponDamageAtLevel", nullptr, nullptr, Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentWeaponDamageAtLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentWeaponDamageAtLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentWeaponDamageAtLevel_Statics::HeroCombatComponent_eventGetHeroCurrentWeaponDamageAtLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentWeaponDamageAtLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentWeaponDamageAtLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentWeaponDamageAtLevel_Statics::HeroCombatComponent_eventGetHeroCurrentWeaponDamageAtLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentWeaponDamageAtLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentWeaponDamageAtLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroCombatComponent::execGetHeroCurrentWeaponDamageAtLevel)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHeroCurrentWeaponDamageAtLevel(Z_Param_InLevel);
	P_NATIVE_END;
}
// End Class UHeroCombatComponent Function GetHeroCurrentWeaponDamageAtLevel

// Begin Class UHeroCombatComponent
void UHeroCombatComponent::StaticRegisterNativesUHeroCombatComponent()
{
	UClass* Class = UHeroCombatComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHeroCarriedWeaponByTag", &UHeroCombatComponent::execGetHeroCarriedWeaponByTag },
		{ "GetHeroCurrentEquippedWeapon", &UHeroCombatComponent::execGetHeroCurrentEquippedWeapon },
		{ "GetHeroCurrentWeaponDamageAtLevel", &UHeroCombatComponent::execGetHeroCurrentWeaponDamageAtLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroCombatComponent);
UClass* Z_Construct_UClass_UHeroCombatComponent_NoRegister()
{
	return UHeroCombatComponent::StaticClass();
}
struct Z_Construct_UClass_UHeroCombatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Warrior/Components/PawnExtension/Combat/HeroCombatComponent.h" },
		{ "ModuleRelativePath", "Public/Warrior/Components/PawnExtension/Combat/HeroCombatComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroCombatComponent_GetHeroCarriedWeaponByTag, "GetHeroCarriedWeaponByTag" }, // 1087736256
		{ &Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentEquippedWeapon, "GetHeroCurrentEquippedWeapon" }, // 3611506876
		{ &Z_Construct_UFunction_UHeroCombatComponent_GetHeroCurrentWeaponDamageAtLevel, "GetHeroCurrentWeaponDamageAtLevel" }, // 3797859381
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHeroCombatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnCombatComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroCombatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroCombatComponent_Statics::ClassParams = {
	&UHeroCombatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroCombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroCombatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroCombatComponent()
{
	if (!Z_Registration_Info_UClass_UHeroCombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroCombatComponent.OuterSingleton, Z_Construct_UClass_UHeroCombatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroCombatComponent.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<UHeroCombatComponent>()
{
	return UHeroCombatComponent::StaticClass();
}
UHeroCombatComponent::UHeroCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroCombatComponent);
UHeroCombatComponent::~UHeroCombatComponent() {}
// End Class UHeroCombatComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_Combat_HeroCombatComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroCombatComponent, UHeroCombatComponent::StaticClass, TEXT("UHeroCombatComponent"), &Z_Registration_Info_UClass_UHeroCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroCombatComponent), 1865698309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_Combat_HeroCombatComponent_h_3481953273(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_Combat_HeroCombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_Combat_HeroCombatComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
