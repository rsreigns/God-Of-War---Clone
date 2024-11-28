// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/Warrior/WarriorCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_AWarriorCharacter();
KNIGHT_API UClass* Z_Construct_UClass_AWarriorCharacter_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UPawnCombatInterface_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UPawnUIInterface_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorAbilitySystemComponent_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorAttributeSet_NoRegister();
MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Class AWarriorCharacter
void AWarriorCharacter::StaticRegisterNativesAWarriorCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorCharacter);
UClass* Z_Construct_UClass_AWarriorCharacter_NoRegister()
{
	return AWarriorCharacter::StaticClass();
}
struct Z_Construct_UClass_AWarriorCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Warrior/WarriorCharacter.h" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarriorAbilitySystemComponent_MetaData[] = {
		{ "Category", "AbilitySystem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End APawn Interface\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WarriorAttributeSet_MetaData[] = {
		{ "Category", "AbilitySystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterStartupData_MetaData[] = {
		{ "Category", "AbilitySystem" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WarriorAbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WarriorAttributeSet;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CharacterStartupData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorCharacter_Statics::NewProp_WarriorAbilitySystemComponent = { "WarriorAbilitySystemComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorCharacter, WarriorAbilitySystemComponent), Z_Construct_UClass_UWarriorAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarriorAbilitySystemComponent_MetaData), NewProp_WarriorAbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorCharacter_Statics::NewProp_MotionWarpingComponent = { "MotionWarpingComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorCharacter, MotionWarpingComponent), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionWarpingComponent_MetaData), NewProp_MotionWarpingComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorCharacter_Statics::NewProp_WarriorAttributeSet = { "WarriorAttributeSet", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorCharacter, WarriorAttributeSet), Z_Construct_UClass_UWarriorAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WarriorAttributeSet_MetaData), NewProp_WarriorAttributeSet_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AWarriorCharacter_Statics::NewProp_CharacterStartupData = { "CharacterStartupData", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorCharacter, CharacterStartupData), Z_Construct_UClass_UDataAsset_StartUpDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterStartupData_MetaData), NewProp_CharacterStartupData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarriorCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorCharacter_Statics::NewProp_WarriorAbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorCharacter_Statics::NewProp_MotionWarpingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorCharacter_Statics::NewProp_WarriorAttributeSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorCharacter_Statics::NewProp_CharacterStartupData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWarriorCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWarriorCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AWarriorCharacter, IAbilitySystemInterface), false },  // 2272790346
	{ Z_Construct_UClass_UPawnCombatInterface_NoRegister, (int32)VTABLE_OFFSET(AWarriorCharacter, IPawnCombatInterface), false },  // 3173424528
	{ Z_Construct_UClass_UPawnUIInterface_NoRegister, (int32)VTABLE_OFFSET(AWarriorCharacter, IPawnUIInterface), false },  // 2336636621
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorCharacter_Statics::ClassParams = {
	&AWarriorCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWarriorCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorCharacter()
{
	if (!Z_Registration_Info_UClass_AWarriorCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorCharacter.OuterSingleton, Z_Construct_UClass_AWarriorCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorCharacter.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<AWarriorCharacter>()
{
	return AWarriorCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorCharacter);
AWarriorCharacter::~AWarriorCharacter() {}
// End Class AWarriorCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorCharacter, AWarriorCharacter::StaticClass, TEXT("AWarriorCharacter"), &Z_Registration_Info_UClass_AWarriorCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorCharacter), 3348485244U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorCharacter_h_3702803542(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
