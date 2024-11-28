// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/Warrior/AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorGameplayAbility() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
KNIGHT_API UClass* Z_Construct_UClass_UPawnCombatComponent_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorAbilitySystemComponent_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorGameplayAbility();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorGameplayAbility_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorHeroGameplayAbility_NoRegister();
KNIGHT_API UEnum* Z_Construct_UEnum_knight_EWarriorAbilityActivationPolicy();
KNIGHT_API UEnum* Z_Construct_UEnum_knight_EWarriorSuccessType();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Enum EWarriorAbilityActivationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy;
static UEnum* EWarriorAbilityActivationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_knight_EWarriorAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_knight(), TEXT("EWarriorAbilityActivationPolicy"));
	}
	return Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy.OuterSingleton;
}
template<> KNIGHT_API UEnum* StaticEnum<EWarriorAbilityActivationPolicy>()
{
	return EWarriorAbilityActivationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_knight_EWarriorAbilityActivationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Warrior/AbilitySystem/Abilities/WarriorGameplayAbility.h" },
		{ "OnGiven.Name", "EWarriorAbilityActivationPolicy::OnGiven" },
		{ "OnTriggered.Name", "EWarriorAbilityActivationPolicy::OnTriggered" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWarriorAbilityActivationPolicy::OnTriggered", (int64)EWarriorAbilityActivationPolicy::OnTriggered },
		{ "EWarriorAbilityActivationPolicy::OnGiven", (int64)EWarriorAbilityActivationPolicy::OnGiven },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_knight_EWarriorAbilityActivationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_knight,
	nullptr,
	"EWarriorAbilityActivationPolicy",
	"EWarriorAbilityActivationPolicy",
	Z_Construct_UEnum_knight_EWarriorAbilityActivationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_knight_EWarriorAbilityActivationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_knight_EWarriorAbilityActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_knight_EWarriorAbilityActivationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_knight_EWarriorAbilityActivationPolicy()
{
	if (!Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_knight_EWarriorAbilityActivationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy.InnerSingleton;
}
// End Enum EWarriorAbilityActivationPolicy

// Begin Class UWarriorGameplayAbility Function BP_ApplyEffectSpecHandleToTarget
struct Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics
{
	struct WarriorGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms
	{
		AActor* TargetActor;
		FGameplayEffectSpecHandle InSpecHandle;
		EWarriorSuccessType OutSuccessType;
		FActiveGameplayEffectHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior | Ability" },
		{ "ExpandEnumAsExecs", "OutSuccessType" },
		{ "ModuleRelativePath", "Public/Warrior/AbilitySystem/Abilities/WarriorGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSpecHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSpecHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutSuccessType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutSuccessType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_InSpecHandle = { "InSpecHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, InSpecHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSpecHandle_MetaData), NewProp_InSpecHandle_MetaData) }; // 3383902265
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType = { "OutSuccessType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, OutSuccessType), Z_Construct_UEnum_knight_EWarriorSuccessType, METADATA_PARAMS(0, nullptr) }; // 1171486549
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_InSpecHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorGameplayAbility, nullptr, "BP_ApplyEffectSpecHandleToTarget", nullptr, nullptr, Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::WarriorGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::WarriorGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorGameplayAbility::execBP_ApplyEffectSpecHandleToTarget)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_STRUCT_REF(FGameplayEffectSpecHandle,Z_Param_Out_InSpecHandle);
	P_GET_ENUM_REF(EWarriorSuccessType,Z_Param_Out_OutSuccessType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FActiveGameplayEffectHandle*)Z_Param__Result=P_THIS->BP_ApplyEffectSpecHandleToTarget(Z_Param_TargetActor,Z_Param_Out_InSpecHandle,(EWarriorSuccessType&)(Z_Param_Out_OutSuccessType));
	P_NATIVE_END;
}
// End Class UWarriorGameplayAbility Function BP_ApplyEffectSpecHandleToTarget

// Begin Class UWarriorGameplayAbility Function GetPawnCombatComponentFromActorInfo
struct Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics
{
	struct WarriorGameplayAbility_eventGetPawnCombatComponentFromActorInfo_Parms
	{
		UPawnCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior | Ability" },
		{ "ModuleRelativePath", "Public/Warrior/AbilitySystem/Abilities/WarriorGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorGameplayAbility_eventGetPawnCombatComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UPawnCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorGameplayAbility, nullptr, "GetPawnCombatComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::WarriorGameplayAbility_eventGetPawnCombatComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::WarriorGameplayAbility_eventGetPawnCombatComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorGameplayAbility::execGetPawnCombatComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPawnCombatComponent**)Z_Param__Result=P_THIS->GetPawnCombatComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UWarriorGameplayAbility Function GetPawnCombatComponentFromActorInfo

// Begin Class UWarriorGameplayAbility Function GetWarriorAbilitySystemComponentFromActorInfo
struct Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics
{
	struct WarriorGameplayAbility_eventGetWarriorAbilitySystemComponentFromActorInfo_Parms
	{
		UWarriorAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior | Ability" },
		{ "ModuleRelativePath", "Public/Warrior/AbilitySystem/Abilities/WarriorGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorGameplayAbility_eventGetWarriorAbilitySystemComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UWarriorAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorGameplayAbility, nullptr, "GetWarriorAbilitySystemComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::WarriorGameplayAbility_eventGetWarriorAbilitySystemComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::WarriorGameplayAbility_eventGetWarriorAbilitySystemComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorGameplayAbility::execGetWarriorAbilitySystemComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWarriorAbilitySystemComponent**)Z_Param__Result=P_THIS->GetWarriorAbilitySystemComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UWarriorGameplayAbility Function GetWarriorAbilitySystemComponentFromActorInfo

// Begin Class UWarriorGameplayAbility Function GetWarriorGameplayAbilityFromActorInfo
struct Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorGameplayAbilityFromActorInfo_Statics
{
	struct WarriorGameplayAbility_eventGetWarriorGameplayAbilityFromActorInfo_Parms
	{
		UWarriorHeroGameplayAbility* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior | Ability" },
		{ "ModuleRelativePath", "Public/Warrior/AbilitySystem/Abilities/WarriorGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorGameplayAbilityFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorGameplayAbility_eventGetWarriorGameplayAbilityFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UWarriorHeroGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorGameplayAbilityFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorGameplayAbilityFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorGameplayAbilityFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorGameplayAbilityFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorGameplayAbility, nullptr, "GetWarriorGameplayAbilityFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorGameplayAbilityFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorGameplayAbilityFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorGameplayAbilityFromActorInfo_Statics::WarriorGameplayAbility_eventGetWarriorGameplayAbilityFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorGameplayAbilityFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorGameplayAbilityFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorGameplayAbilityFromActorInfo_Statics::WarriorGameplayAbility_eventGetWarriorGameplayAbilityFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorGameplayAbilityFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorGameplayAbilityFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorGameplayAbility::execGetWarriorGameplayAbilityFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWarriorHeroGameplayAbility**)Z_Param__Result=P_THIS->GetWarriorGameplayAbilityFromActorInfo();
	P_NATIVE_END;
}
// End Class UWarriorGameplayAbility Function GetWarriorGameplayAbilityFromActorInfo

// Begin Class UWarriorGameplayAbility
void UWarriorGameplayAbility::StaticRegisterNativesUWarriorGameplayAbility()
{
	UClass* Class = UWarriorGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BP_ApplyEffectSpecHandleToTarget", &UWarriorGameplayAbility::execBP_ApplyEffectSpecHandleToTarget },
		{ "GetPawnCombatComponentFromActorInfo", &UWarriorGameplayAbility::execGetPawnCombatComponentFromActorInfo },
		{ "GetWarriorAbilitySystemComponentFromActorInfo", &UWarriorGameplayAbility::execGetWarriorAbilitySystemComponentFromActorInfo },
		{ "GetWarriorGameplayAbilityFromActorInfo", &UWarriorGameplayAbility::execGetWarriorGameplayAbilityFromActorInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorGameplayAbility);
UClass* Z_Construct_UClass_UWarriorGameplayAbility_NoRegister()
{
	return UWarriorGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UWarriorGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Warrior/AbilitySystem/Abilities/WarriorGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/Warrior/AbilitySystem/Abilities/WarriorGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationPolicy_MetaData[] = {
		{ "Category", "Warrior | Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// End GameplayAbility  Interface\n" },
#endif
		{ "ModuleRelativePath", "Public/Warrior/AbilitySystem/Abilities/WarriorGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End GameplayAbility  Interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWarriorGameplayAbility_BP_ApplyEffectSpecHandleToTarget, "BP_ApplyEffectSpecHandleToTarget" }, // 805529052
		{ &Z_Construct_UFunction_UWarriorGameplayAbility_GetPawnCombatComponentFromActorInfo, "GetPawnCombatComponentFromActorInfo" }, // 875754023
		{ &Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorAbilitySystemComponentFromActorInfo, "GetWarriorAbilitySystemComponentFromActorInfo" }, // 3741618304
		{ &Z_Construct_UFunction_UWarriorGameplayAbility_GetWarriorGameplayAbilityFromActorInfo, "GetWarriorGameplayAbilityFromActorInfo" }, // 2748766108
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWarriorGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWarriorGameplayAbility_Statics::NewProp_ActivationPolicy = { "ActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorGameplayAbility, ActivationPolicy), Z_Construct_UEnum_knight_EWarriorAbilityActivationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationPolicy_MetaData), NewProp_ActivationPolicy_MetaData) }; // 902620716
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWarriorGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorGameplayAbility_Statics::NewProp_ActivationPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWarriorGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorGameplayAbility_Statics::ClassParams = {
	&UWarriorGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWarriorGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameplayAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UWarriorGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorGameplayAbility.OuterSingleton, Z_Construct_UClass_UWarriorGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorGameplayAbility.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<UWarriorGameplayAbility>()
{
	return UWarriorGameplayAbility::StaticClass();
}
UWarriorGameplayAbility::UWarriorGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorGameplayAbility);
UWarriorGameplayAbility::~UWarriorGameplayAbility() {}
// End Class UWarriorGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AbilitySystem_Abilities_WarriorGameplayAbility_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWarriorAbilityActivationPolicy_StaticEnum, TEXT("EWarriorAbilityActivationPolicy"), &Z_Registration_Info_UEnum_EWarriorAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 902620716U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorGameplayAbility, UWarriorGameplayAbility::StaticClass, TEXT("UWarriorGameplayAbility"), &Z_Registration_Info_UClass_UWarriorGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorGameplayAbility), 3692568700U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AbilitySystem_Abilities_WarriorGameplayAbility_h_2585102334(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AbilitySystem_Abilities_WarriorGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AbilitySystem_Abilities_WarriorGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AbilitySystem_Abilities_WarriorGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AbilitySystem_Abilities_WarriorGameplayAbility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
