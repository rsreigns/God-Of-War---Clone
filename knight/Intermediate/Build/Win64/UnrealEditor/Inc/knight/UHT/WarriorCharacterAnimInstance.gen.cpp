// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/Warrior/AnimInstances/WarriorCharacterAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorCharacterAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_AWarriorCharacter_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorBaseAnimInstance();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorCharacterAnimInstance();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorCharacterAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Class UWarriorCharacterAnimInstance
void UWarriorCharacterAnimInstance::StaticRegisterNativesUWarriorCharacterAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorCharacterAnimInstance);
UClass* Z_Construct_UClass_UWarriorCharacterAnimInstance_NoRegister()
{
	return UWarriorCharacterAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Warrior/AnimInstances/WarriorCharacterAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Warrior/AnimInstances/WarriorCharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Warrior/AnimInstances/WarriorCharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningMovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Warrior/AnimInstances/WarriorCharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "AnimData|LocomotionData" },
		{ "ModuleRelativePath", "Public/Warrior/AnimInstances/WarriorCharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasAcceleration_MetaData[] = {
		{ "Category", "AnimData|LocomotionData" },
		{ "ModuleRelativePath", "Public/Warrior/AnimInstances/WarriorCharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionDirection_MetaData[] = {
		{ "Category", "AnimData|LocomotionData" },
		{ "ModuleRelativePath", "Public/Warrior/AnimInstances/WarriorCharacterAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningMovementComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
	static void NewProp_bHasAcceleration_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocomotionDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorCharacterAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::NewProp_OwningCharacter = { "OwningCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorCharacterAnimInstance, OwningCharacter), Z_Construct_UClass_AWarriorCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningCharacter_MetaData), NewProp_OwningCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::NewProp_OwningMovementComponent = { "OwningMovementComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorCharacterAnimInstance, OwningMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningMovementComponent_MetaData), NewProp_OwningMovementComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorCharacterAnimInstance, GroundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSpeed_MetaData), NewProp_GroundSpeed_MetaData) };
void Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::NewProp_bHasAcceleration_SetBit(void* Obj)
{
	((UWarriorCharacterAnimInstance*)Obj)->bHasAcceleration = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::NewProp_bHasAcceleration = { "bHasAcceleration", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWarriorCharacterAnimInstance), &Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::NewProp_bHasAcceleration_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasAcceleration_MetaData), NewProp_bHasAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::NewProp_LocomotionDirection = { "LocomotionDirection", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorCharacterAnimInstance, LocomotionDirection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocomotionDirection_MetaData), NewProp_LocomotionDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::NewProp_OwningCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::NewProp_OwningMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::NewProp_GroundSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::NewProp_bHasAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::NewProp_LocomotionDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWarriorBaseAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::ClassParams = {
	&UWarriorCharacterAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorCharacterAnimInstance()
{
	if (!Z_Registration_Info_UClass_UWarriorCharacterAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorCharacterAnimInstance.OuterSingleton, Z_Construct_UClass_UWarriorCharacterAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorCharacterAnimInstance.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<UWarriorCharacterAnimInstance>()
{
	return UWarriorCharacterAnimInstance::StaticClass();
}
UWarriorCharacterAnimInstance::UWarriorCharacterAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorCharacterAnimInstance);
UWarriorCharacterAnimInstance::~UWarriorCharacterAnimInstance() {}
// End Class UWarriorCharacterAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AnimInstances_WarriorCharacterAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorCharacterAnimInstance, UWarriorCharacterAnimInstance::StaticClass, TEXT("UWarriorCharacterAnimInstance"), &Z_Registration_Info_UClass_UWarriorCharacterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorCharacterAnimInstance), 947604180U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AnimInstances_WarriorCharacterAnimInstance_h_2940102807(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AnimInstances_WarriorCharacterAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_AnimInstances_WarriorCharacterAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
