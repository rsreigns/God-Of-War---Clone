// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/Warrior/Items/Weapons/WarriorWeaponBase.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorWeaponBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
KNIGHT_API UClass* Z_Construct_UClass_AWarriorWeaponBase();
KNIGHT_API UClass* Z_Construct_UClass_AWarriorWeaponBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Class AWarriorWeaponBase Function OnWeaponBoxBeginOverlap
struct Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics
{
	struct WarriorWeaponBase_eventOnWeaponBoxBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Warrior/Items/Weapons/WarriorWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorWeaponBase_eventOnWeaponBoxBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorWeaponBase_eventOnWeaponBoxBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorWeaponBase_eventOnWeaponBoxBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorWeaponBase_eventOnWeaponBoxBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((WarriorWeaponBase_eventOnWeaponBoxBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WarriorWeaponBase_eventOnWeaponBoxBeginOverlap_Parms), &Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorWeaponBase_eventOnWeaponBoxBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarriorWeaponBase, nullptr, "OnWeaponBoxBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::WarriorWeaponBase_eventOnWeaponBoxBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::WarriorWeaponBase_eventOnWeaponBoxBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWarriorWeaponBase::execOnWeaponBoxBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponBoxBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AWarriorWeaponBase Function OnWeaponBoxBeginOverlap

// Begin Class AWarriorWeaponBase Function OnWeaponBoxEndOverlap
struct Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap_Statics
{
	struct WarriorWeaponBase_eventOnWeaponBoxEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Warrior/Items/Weapons/WarriorWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorWeaponBase_eventOnWeaponBoxEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorWeaponBase_eventOnWeaponBoxEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorWeaponBase_eventOnWeaponBoxEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorWeaponBase_eventOnWeaponBoxEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarriorWeaponBase, nullptr, "OnWeaponBoxEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap_Statics::WarriorWeaponBase_eventOnWeaponBoxEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap_Statics::WarriorWeaponBase_eventOnWeaponBoxEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWarriorWeaponBase::execOnWeaponBoxEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeaponBoxEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AWarriorWeaponBase Function OnWeaponBoxEndOverlap

// Begin Class AWarriorWeaponBase
void AWarriorWeaponBase::StaticRegisterNativesAWarriorWeaponBase()
{
	UClass* Class = AWarriorWeaponBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnWeaponBoxBeginOverlap", &AWarriorWeaponBase::execOnWeaponBoxBeginOverlap },
		{ "OnWeaponBoxEndOverlap", &AWarriorWeaponBase::execOnWeaponBoxEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorWeaponBase);
UClass* Z_Construct_UClass_AWarriorWeaponBase_NoRegister()
{
	return AWarriorWeaponBase::StaticClass();
}
struct Z_Construct_UClass_AWarriorWeaponBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Warrior/Items/Weapons/WarriorWeaponBase.h" },
		{ "ModuleRelativePath", "Public/Warrior/Items/Weapons/WarriorWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "Weapons" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Warrior/Items/Weapons/WarriorWeaponBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponCollisionBox_MetaData[] = {
		{ "Category", "Weapons" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Warrior/Items/Weapons/WarriorWeaponBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponCollisionBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxBeginOverlap, "OnWeaponBoxBeginOverlap" }, // 1580469126
		{ &Z_Construct_UFunction_AWarriorWeaponBase_OnWeaponBoxEndOverlap, "OnWeaponBoxEndOverlap" }, // 63355176
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorWeaponBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorWeaponBase_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorWeaponBase, WeaponMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMesh_MetaData), NewProp_WeaponMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorWeaponBase_Statics::NewProp_WeaponCollisionBox = { "WeaponCollisionBox", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorWeaponBase, WeaponCollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponCollisionBox_MetaData), NewProp_WeaponCollisionBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarriorWeaponBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorWeaponBase_Statics::NewProp_WeaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorWeaponBase_Statics::NewProp_WeaponCollisionBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorWeaponBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWarriorWeaponBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorWeaponBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorWeaponBase_Statics::ClassParams = {
	&AWarriorWeaponBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWarriorWeaponBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorWeaponBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorWeaponBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorWeaponBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorWeaponBase()
{
	if (!Z_Registration_Info_UClass_AWarriorWeaponBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorWeaponBase.OuterSingleton, Z_Construct_UClass_AWarriorWeaponBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorWeaponBase.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<AWarriorWeaponBase>()
{
	return AWarriorWeaponBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorWeaponBase);
AWarriorWeaponBase::~AWarriorWeaponBase() {}
// End Class AWarriorWeaponBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Items_Weapons_WarriorWeaponBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorWeaponBase, AWarriorWeaponBase::StaticClass, TEXT("AWarriorWeaponBase"), &Z_Registration_Info_UClass_AWarriorWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorWeaponBase), 3798688034U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Items_Weapons_WarriorWeaponBase_h_274507856(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Items_Weapons_WarriorWeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Items_Weapons_WarriorWeaponBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS