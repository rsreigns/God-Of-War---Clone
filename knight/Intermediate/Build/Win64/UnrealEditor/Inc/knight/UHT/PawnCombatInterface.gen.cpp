// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/Warrior/Interfaces/PawnCombatInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnCombatInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
KNIGHT_API UClass* Z_Construct_UClass_UPawnCombatInterface();
KNIGHT_API UClass* Z_Construct_UClass_UPawnCombatInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Interface UPawnCombatInterface
void UPawnCombatInterface::StaticRegisterNativesUPawnCombatInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnCombatInterface);
UClass* Z_Construct_UClass_UPawnCombatInterface_NoRegister()
{
	return UPawnCombatInterface::StaticClass();
}
struct Z_Construct_UClass_UPawnCombatInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Warrior/Interfaces/PawnCombatInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPawnCombatInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPawnCombatInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnCombatInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnCombatInterface_Statics::ClassParams = {
	&UPawnCombatInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnCombatInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPawnCombatInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPawnCombatInterface()
{
	if (!Z_Registration_Info_UClass_UPawnCombatInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnCombatInterface.OuterSingleton, Z_Construct_UClass_UPawnCombatInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPawnCombatInterface.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<UPawnCombatInterface>()
{
	return UPawnCombatInterface::StaticClass();
}
UPawnCombatInterface::UPawnCombatInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnCombatInterface);
UPawnCombatInterface::~UPawnCombatInterface() {}
// End Interface UPawnCombatInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Interfaces_PawnCombatInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPawnCombatInterface, UPawnCombatInterface::StaticClass, TEXT("UPawnCombatInterface"), &Z_Registration_Info_UClass_UPawnCombatInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnCombatInterface), 3173424528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Interfaces_PawnCombatInterface_h_2147128964(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Interfaces_PawnCombatInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Interfaces_PawnCombatInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS