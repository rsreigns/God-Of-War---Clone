// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/Warrior/Components/PawnExtension/Combat/EnemyCombatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCombatComponent() {}

// Begin Cross Module References
KNIGHT_API UClass* Z_Construct_UClass_UEnemyCombatComponent();
KNIGHT_API UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UPawnCombatComponent();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Class UEnemyCombatComponent
void UEnemyCombatComponent::StaticRegisterNativesUEnemyCombatComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyCombatComponent);
UClass* Z_Construct_UClass_UEnemyCombatComponent_NoRegister()
{
	return UEnemyCombatComponent::StaticClass();
}
struct Z_Construct_UClass_UEnemyCombatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Warrior/Components/PawnExtension/Combat/EnemyCombatComponent.h" },
		{ "ModuleRelativePath", "Public/Warrior/Components/PawnExtension/Combat/EnemyCombatComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyCombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnemyCombatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnCombatComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCombatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyCombatComponent_Statics::ClassParams = {
	&UEnemyCombatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyCombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyCombatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyCombatComponent()
{
	if (!Z_Registration_Info_UClass_UEnemyCombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyCombatComponent.OuterSingleton, Z_Construct_UClass_UEnemyCombatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyCombatComponent.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<UEnemyCombatComponent>()
{
	return UEnemyCombatComponent::StaticClass();
}
UEnemyCombatComponent::UEnemyCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyCombatComponent);
UEnemyCombatComponent::~UEnemyCombatComponent() {}
// End Class UEnemyCombatComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_Combat_EnemyCombatComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyCombatComponent, UEnemyCombatComponent::StaticClass, TEXT("UEnemyCombatComponent"), &Z_Registration_Info_UClass_UEnemyCombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyCombatComponent), 3173061313U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_Combat_EnemyCombatComponent_h_4289805578(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_Combat_EnemyCombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_PawnExtension_Combat_EnemyCombatComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
