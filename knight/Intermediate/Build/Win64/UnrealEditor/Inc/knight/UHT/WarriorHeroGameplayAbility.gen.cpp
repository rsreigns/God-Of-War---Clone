// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/Warrior/AbilitySystem/Abilities/WarriorHeroGameplayAbility.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorHeroGameplayAbility() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
KNIGHT_API UClass* Z_Construct_UClass_AHeroCharacter_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_AHeroController_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UHeroCombatComponent_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorGameplayAbility();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorHeroGameplayAbility();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorHeroGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Class UWarriorHeroGameplayAbility Function GetHeroActorFromActorInfo
struct Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroActorFromActorInfo_Statics
{
	struct WarriorHeroGameplayAbility_eventGetHeroActorFromActorInfo_Parms
	{
		AHeroCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior | Ability" },
		{ "ModuleRelativePath", "Public/Warrior/AbilitySystem/Abilities/WarriorHeroGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroActorFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorHeroGameplayAbility_eventGetHeroActorFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AHeroCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroActorFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroActorFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroActorFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroActorFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorHeroGameplayAbility, nullptr, "GetHeroActorFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroActorFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroActorFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroActorFromActorInfo_Statics::WarriorHeroGameplayAbility_eventGetHeroActorFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroActorFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroActorFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroActorFromActorInfo_Statics::WarriorHeroGameplayAbility_eventGetHeroActorFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroActorFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroActorFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorHeroGameplayAbility::execGetHeroActorFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AHeroCharacter**)Z_Param__Result=P_THIS->GetHeroActorFromActorInfo();
	P_NATIVE_END;
}
// End Class UWarriorHeroGameplayAbility Function GetHeroActorFromActorInfo

// Begin Class UWarriorHeroGameplayAbility Function GetHeroCombatComponentFromActorInfo
struct Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics
{
	struct WarriorHeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms
	{
		UHeroCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior | Ability" },
		{ "ModuleRelativePath", "Public/Warrior/AbilitySystem/Abilities/WarriorHeroGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorHeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UHeroCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorHeroGameplayAbility, nullptr, "GetHeroCombatComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::WarriorHeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::WarriorHeroGameplayAbility_eventGetHeroCombatComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorHeroGameplayAbility::execGetHeroCombatComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHeroCombatComponent**)Z_Param__Result=P_THIS->GetHeroCombatComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UWarriorHeroGameplayAbility Function GetHeroCombatComponentFromActorInfo

// Begin Class UWarriorHeroGameplayAbility Function GetHeroControllerFromActorInfo
struct Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics
{
	struct WarriorHeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms
	{
		AHeroController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior | Ability" },
		{ "ModuleRelativePath", "Public/Warrior/AbilitySystem/Abilities/WarriorHeroGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorHeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AHeroController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorHeroGameplayAbility, nullptr, "GetHeroControllerFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::WarriorHeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::WarriorHeroGameplayAbility_eventGetHeroControllerFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorHeroGameplayAbility::execGetHeroControllerFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AHeroController**)Z_Param__Result=P_THIS->GetHeroControllerFromActorInfo();
	P_NATIVE_END;
}
// End Class UWarriorHeroGameplayAbility Function GetHeroControllerFromActorInfo

// Begin Class UWarriorHeroGameplayAbility Function MakeHeroDamageEffectSpecHandle
struct Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics
{
	struct WarriorHeroGameplayAbility_eventMakeHeroDamageEffectSpecHandle_Parms
	{
		TSubclassOf<UGameplayEffect> EffectClass;
		float WeaponBaseDamage;
		FGameplayTag InCurrentAttackTypeTag;
		int32 InCurrentComboCount;
		FGameplayEffectSpecHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior | Ability" },
		{ "ModuleRelativePath", "Public/Warrior/AbilitySystem/Abilities/WarriorHeroGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EffectClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponBaseDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InCurrentAttackTypeTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InCurrentComboCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_EffectClass = { "EffectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorHeroGameplayAbility_eventMakeHeroDamageEffectSpecHandle_Parms, EffectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_WeaponBaseDamage = { "WeaponBaseDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorHeroGameplayAbility_eventMakeHeroDamageEffectSpecHandle_Parms, WeaponBaseDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_InCurrentAttackTypeTag = { "InCurrentAttackTypeTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorHeroGameplayAbility_eventMakeHeroDamageEffectSpecHandle_Parms, InCurrentAttackTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_InCurrentComboCount = { "InCurrentComboCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorHeroGameplayAbility_eventMakeHeroDamageEffectSpecHandle_Parms, InCurrentComboCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorHeroGameplayAbility_eventMakeHeroDamageEffectSpecHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(0, nullptr) }; // 3383902265
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_EffectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_WeaponBaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_InCurrentAttackTypeTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_InCurrentComboCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorHeroGameplayAbility, nullptr, "MakeHeroDamageEffectSpecHandle", nullptr, nullptr, Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::WarriorHeroGameplayAbility_eventMakeHeroDamageEffectSpecHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::WarriorHeroGameplayAbility_eventMakeHeroDamageEffectSpecHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorHeroGameplayAbility::execMakeHeroDamageEffectSpecHandle)
{
	P_GET_OBJECT(UClass,Z_Param_EffectClass);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WeaponBaseDamage);
	P_GET_STRUCT(FGameplayTag,Z_Param_InCurrentAttackTypeTag);
	P_GET_PROPERTY(FIntProperty,Z_Param_InCurrentComboCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayEffectSpecHandle*)Z_Param__Result=P_THIS->MakeHeroDamageEffectSpecHandle(Z_Param_EffectClass,Z_Param_WeaponBaseDamage,Z_Param_InCurrentAttackTypeTag,Z_Param_InCurrentComboCount);
	P_NATIVE_END;
}
// End Class UWarriorHeroGameplayAbility Function MakeHeroDamageEffectSpecHandle

// Begin Class UWarriorHeroGameplayAbility
void UWarriorHeroGameplayAbility::StaticRegisterNativesUWarriorHeroGameplayAbility()
{
	UClass* Class = UWarriorHeroGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHeroActorFromActorInfo", &UWarriorHeroGameplayAbility::execGetHeroActorFromActorInfo },
		{ "GetHeroCombatComponentFromActorInfo", &UWarriorHeroGameplayAbility::execGetHeroCombatComponentFromActorInfo },
		{ "GetHeroControllerFromActorInfo", &UWarriorHeroGameplayAbility::execGetHeroControllerFromActorInfo },
		{ "MakeHeroDamageEffectSpecHandle", &UWarriorHeroGameplayAbility::execMakeHeroDamageEffectSpecHandle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorHeroGameplayAbility);
UClass* Z_Construct_UClass_UWarriorHeroGameplayAbility_NoRegister()
{
	return UWarriorHeroGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UWarriorHeroGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Warrior/AbilitySystem/Abilities/WarriorHeroGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/Warrior/AbilitySystem/Abilities/WarriorHeroGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroActorFromActorInfo, "GetHeroActorFromActorInfo" }, // 2920873993
		{ &Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroCombatComponentFromActorInfo, "GetHeroCombatComponentFromActorInfo" }, // 589810242
		{ &Z_Construct_UFunction_UWarriorHeroGameplayAbility_GetHeroControllerFromActorInfo, "GetHeroControllerFromActorInfo" }, // 3622984540
		{ &Z_Construct_UFunction_UWarriorHeroGameplayAbility_MakeHeroDamageEffectSpecHandle, "MakeHeroDamageEffectSpecHandle" }, // 1883863835
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorHeroGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorHeroGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWarriorGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorHeroGameplayAbility_Statics::ClassParams = {
	&UWarriorHeroGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorHeroGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorHeroGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorHeroGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UWarriorHeroGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorHeroGameplayAbility.OuterSingleton, Z_Construct_UClass_UWarriorHeroGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorHeroGameplayAbility.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<UWarriorHeroGameplayAbility>()
{
	return UWarriorHeroGameplayAbility::StaticClass();
}
UWarriorHeroGameplayAbility::UWarriorHeroGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorHeroGameplayAbility);
UWarriorHeroGameplayAbility::~UWarriorHeroGameplayAbility() {}
// End Class UWarriorHeroGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorHeroGameplayAbility, UWarriorHeroGameplayAbility::StaticClass, TEXT("UWarriorHeroGameplayAbility"), &Z_Registration_Info_UClass_UWarriorHeroGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorHeroGameplayAbility), 3044197609U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_1828457616(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AbilitySystem_Abilities_WarriorHeroGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
