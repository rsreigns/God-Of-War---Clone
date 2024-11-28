// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/Warrior/WarriorFunctionLibrary.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
KNIGHT_API UClass* Z_Construct_UClass_UPawnCombatComponent_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorFunctionLibrary();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorFunctionLibrary_NoRegister();
KNIGHT_API UEnum* Z_Construct_UEnum_knight_EWarriorConfirmType();
KNIGHT_API UEnum* Z_Construct_UEnum_knight_EWarriorValidType();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Class UWarriorFunctionLibrary Function AddGameplayTagToActorIfNone
struct Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics
{
	struct WarriorFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms
	{
		AActor* InActor;
		FGameplayTag TagToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior | FunctionLibrary" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_TagToAdd = { "TagToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms, TagToAdd), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::NewProp_TagToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "AddGameplayTagToActorIfNone", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::WarriorFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::WarriorFunctionLibrary_eventAddGameplayTagToActorIfNone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execAddGameplayTagToActorIfNone)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWarriorFunctionLibrary::AddGameplayTagToActorIfNone(Z_Param_InActor,Z_Param_TagToAdd);
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function AddGameplayTagToActorIfNone

// Begin Class UWarriorFunctionLibrary Function BP_DoesActorHaveTag
struct Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics
{
	struct WarriorFunctionLibrary_eventBP_DoesActorHaveTag_Parms
	{
		AActor* InActor;
		FGameplayTag ToFindTag;
		EWarriorConfirmType OutConfirmType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior | FunctionLibrary" },
		{ "DisplayName", "Does Actor Have Tag" },
		{ "ExpandEnumAsExecs", "OutConfirmType" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToFindTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutConfirmType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutConfirmType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventBP_DoesActorHaveTag_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_ToFindTag = { "ToFindTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventBP_DoesActorHaveTag_Parms, ToFindTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType = { "OutConfirmType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventBP_DoesActorHaveTag_Parms, OutConfirmType), Z_Construct_UEnum_knight_EWarriorConfirmType, METADATA_PARAMS(0, nullptr) }; // 338276739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_ToFindTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::NewProp_OutConfirmType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "BP_DoesActorHaveTag", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::WarriorFunctionLibrary_eventBP_DoesActorHaveTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::WarriorFunctionLibrary_eventBP_DoesActorHaveTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execBP_DoesActorHaveTag)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_ToFindTag);
	P_GET_ENUM_REF(EWarriorConfirmType,Z_Param_Out_OutConfirmType);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWarriorFunctionLibrary::BP_DoesActorHaveTag(Z_Param_InActor,Z_Param_ToFindTag,(EWarriorConfirmType&)(Z_Param_Out_OutConfirmType));
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function BP_DoesActorHaveTag

// Begin Class UWarriorFunctionLibrary Function BP_GetPawnCombatComponentFromActor
struct Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics
{
	struct WarriorFunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms
	{
		AActor* InActor;
		EWarriorValidType OutValidType;
		UPawnCombatComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior | FunctionLibrary" },
		{ "DisplayName", "Get Combat Component" },
		{ "ExpandEnumAsExecs", "OutValidType" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutValidType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutValidType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_OutValidType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_OutValidType = { "OutValidType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms, OutValidType), Z_Construct_UEnum_knight_EWarriorValidType, METADATA_PARAMS(0, nullptr) }; // 2986856698
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms, ReturnValue), Z_Construct_UClass_UPawnCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_OutValidType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_OutValidType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "BP_GetPawnCombatComponentFromActor", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::WarriorFunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::WarriorFunctionLibrary_eventBP_GetPawnCombatComponentFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execBP_GetPawnCombatComponentFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_ENUM_REF(EWarriorValidType,Z_Param_Out_OutValidType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPawnCombatComponent**)Z_Param__Result=UWarriorFunctionLibrary::BP_GetPawnCombatComponentFromActor(Z_Param_InActor,(EWarriorValidType&)(Z_Param_Out_OutValidType));
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function BP_GetPawnCombatComponentFromActor

// Begin Class UWarriorFunctionLibrary Function IsTargetPawnHostile
struct Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics
{
	struct WarriorFunctionLibrary_eventIsTargetPawnHostile_Parms
	{
		APawn* QueryPawn;
		APawn* TargetPawn;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior | FunctionLibrary" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QueryPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetPawn;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_QueryPawn = { "QueryPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventIsTargetPawnHostile_Parms, QueryPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_TargetPawn = { "TargetPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventIsTargetPawnHostile_Parms, TargetPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WarriorFunctionLibrary_eventIsTargetPawnHostile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WarriorFunctionLibrary_eventIsTargetPawnHostile_Parms), &Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_QueryPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_TargetPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "IsTargetPawnHostile", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::WarriorFunctionLibrary_eventIsTargetPawnHostile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::WarriorFunctionLibrary_eventIsTargetPawnHostile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execIsTargetPawnHostile)
{
	P_GET_OBJECT(APawn,Z_Param_QueryPawn);
	P_GET_OBJECT(APawn,Z_Param_TargetPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWarriorFunctionLibrary::IsTargetPawnHostile(Z_Param_QueryPawn,Z_Param_TargetPawn);
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function IsTargetPawnHostile

// Begin Class UWarriorFunctionLibrary Function RemoveGameplayTagFromActorIfFound
struct Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics
{
	struct WarriorFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms
	{
		AActor* InActor;
		FGameplayTag TagToRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Warrior | FunctionLibrary" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_TagToRemove = { "TagToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms, TagToRemove), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::NewProp_TagToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorFunctionLibrary, nullptr, "RemoveGameplayTagFromActorIfFound", nullptr, nullptr, Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::WarriorFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::WarriorFunctionLibrary_eventRemoveGameplayTagFromActorIfFound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorFunctionLibrary::execRemoveGameplayTagFromActorIfFound)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_TagToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	UWarriorFunctionLibrary::RemoveGameplayTagFromActorIfFound(Z_Param_InActor,Z_Param_TagToRemove);
	P_NATIVE_END;
}
// End Class UWarriorFunctionLibrary Function RemoveGameplayTagFromActorIfFound

// Begin Class UWarriorFunctionLibrary
void UWarriorFunctionLibrary::StaticRegisterNativesUWarriorFunctionLibrary()
{
	UClass* Class = UWarriorFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGameplayTagToActorIfNone", &UWarriorFunctionLibrary::execAddGameplayTagToActorIfNone },
		{ "BP_DoesActorHaveTag", &UWarriorFunctionLibrary::execBP_DoesActorHaveTag },
		{ "BP_GetPawnCombatComponentFromActor", &UWarriorFunctionLibrary::execBP_GetPawnCombatComponentFromActor },
		{ "IsTargetPawnHostile", &UWarriorFunctionLibrary::execIsTargetPawnHostile },
		{ "RemoveGameplayTagFromActorIfFound", &UWarriorFunctionLibrary::execRemoveGameplayTagFromActorIfFound },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorFunctionLibrary);
UClass* Z_Construct_UClass_UWarriorFunctionLibrary_NoRegister()
{
	return UWarriorFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UWarriorFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Warrior/WarriorFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_AddGameplayTagToActorIfNone, "AddGameplayTagToActorIfNone" }, // 2439888237
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_BP_DoesActorHaveTag, "BP_DoesActorHaveTag" }, // 561014078
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_BP_GetPawnCombatComponentFromActor, "BP_GetPawnCombatComponentFromActor" }, // 1087566416
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_IsTargetPawnHostile, "IsTargetPawnHostile" }, // 2782212414
		{ &Z_Construct_UFunction_UWarriorFunctionLibrary_RemoveGameplayTagFromActorIfFound, "RemoveGameplayTagFromActorIfFound" }, // 1331230746
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorFunctionLibrary_Statics::ClassParams = {
	&UWarriorFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UWarriorFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorFunctionLibrary.OuterSingleton, Z_Construct_UClass_UWarriorFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorFunctionLibrary.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<UWarriorFunctionLibrary>()
{
	return UWarriorFunctionLibrary::StaticClass();
}
UWarriorFunctionLibrary::UWarriorFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorFunctionLibrary);
UWarriorFunctionLibrary::~UWarriorFunctionLibrary() {}
// End Class UWarriorFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorFunctionLibrary, UWarriorFunctionLibrary::StaticClass, TEXT("UWarriorFunctionLibrary"), &Z_Registration_Info_UClass_UWarriorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorFunctionLibrary), 3193717250U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorFunctionLibrary_h_3989324311(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
