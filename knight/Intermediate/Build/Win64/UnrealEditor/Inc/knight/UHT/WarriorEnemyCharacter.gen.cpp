// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/Warrior/WarriorEnemyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorEnemyCharacter() {}

// Begin Cross Module References
KNIGHT_API UClass* Z_Construct_UClass_AWarriorCharacter();
KNIGHT_API UClass* Z_Construct_UClass_AWarriorEnemyCharacter();
KNIGHT_API UClass* Z_Construct_UClass_AWarriorEnemyCharacter_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UEnemyPawnUIComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Class AWarriorEnemyCharacter Function InitEnemyStartupData
struct Z_Construct_UFunction_AWarriorEnemyCharacter_InitEnemyStartupData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Warrior/WarriorEnemyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWarriorEnemyCharacter_InitEnemyStartupData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWarriorEnemyCharacter, nullptr, "InitEnemyStartupData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWarriorEnemyCharacter_InitEnemyStartupData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWarriorEnemyCharacter_InitEnemyStartupData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AWarriorEnemyCharacter_InitEnemyStartupData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWarriorEnemyCharacter_InitEnemyStartupData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWarriorEnemyCharacter::execInitEnemyStartupData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitEnemyStartupData();
	P_NATIVE_END;
}
// End Class AWarriorEnemyCharacter Function InitEnemyStartupData

// Begin Class AWarriorEnemyCharacter
void AWarriorEnemyCharacter::StaticRegisterNativesAWarriorEnemyCharacter()
{
	UClass* Class = AWarriorEnemyCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitEnemyStartupData", &AWarriorEnemyCharacter::execInitEnemyStartupData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorEnemyCharacter);
UClass* Z_Construct_UClass_AWarriorEnemyCharacter_NoRegister()
{
	return AWarriorEnemyCharacter::StaticClass();
}
struct Z_Construct_UClass_AWarriorEnemyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Warrior/WarriorEnemyCharacter.h" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorEnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCombatComponent_MetaData[] = {
		{ "Category", "CombatComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End APawn Interface\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorEnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyPawnUIComponent_MetaData[] = {
		{ "Category", "EnemyPawnUIComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorEnemyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthWidgetComponent_MetaData[] = {
		{ "Category", "HealthWidgetComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Warrior/WarriorEnemyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCombatComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyPawnUIComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthWidgetComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWarriorEnemyCharacter_InitEnemyStartupData, "InitEnemyStartupData" }, // 2808161801
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorEnemyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_EnemyCombatComponent = { "EnemyCombatComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorEnemyCharacter, EnemyCombatComponent), Z_Construct_UClass_UEnemyCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyCombatComponent_MetaData), NewProp_EnemyCombatComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_EnemyPawnUIComponent = { "EnemyPawnUIComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorEnemyCharacter, EnemyPawnUIComponent), Z_Construct_UClass_UEnemyPawnUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyPawnUIComponent_MetaData), NewProp_EnemyPawnUIComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_HealthWidgetComponent = { "HealthWidgetComponent", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWarriorEnemyCharacter, HealthWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthWidgetComponent_MetaData), NewProp_HealthWidgetComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarriorEnemyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_EnemyCombatComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_EnemyPawnUIComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarriorEnemyCharacter_Statics::NewProp_HealthWidgetComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorEnemyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWarriorEnemyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWarriorCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorEnemyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorEnemyCharacter_Statics::ClassParams = {
	&AWarriorEnemyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWarriorEnemyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorEnemyCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorEnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorEnemyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorEnemyCharacter()
{
	if (!Z_Registration_Info_UClass_AWarriorEnemyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorEnemyCharacter.OuterSingleton, Z_Construct_UClass_AWarriorEnemyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorEnemyCharacter.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<AWarriorEnemyCharacter>()
{
	return AWarriorEnemyCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorEnemyCharacter);
AWarriorEnemyCharacter::~AWarriorEnemyCharacter() {}
// End Class AWarriorEnemyCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorEnemyCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorEnemyCharacter, AWarriorEnemyCharacter::StaticClass, TEXT("AWarriorEnemyCharacter"), &Z_Registration_Info_UClass_AWarriorEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorEnemyCharacter), 3961787077U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorEnemyCharacter_h_3643757061(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorEnemyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorEnemyCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
