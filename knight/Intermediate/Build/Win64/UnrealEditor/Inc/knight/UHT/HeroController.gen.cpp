// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/Warrior/Controller/HeroController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
KNIGHT_API UClass* Z_Construct_UClass_AHeroController();
KNIGHT_API UClass* Z_Construct_UClass_AHeroController_NoRegister();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Class AHeroController
void AHeroController::StaticRegisterNativesAHeroController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeroController);
UClass* Z_Construct_UClass_AHeroController_NoRegister()
{
	return AHeroController::StaticClass();
}
struct Z_Construct_UClass_AHeroController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Warrior/Controller/HeroController.h" },
		{ "ModuleRelativePath", "Public/Warrior/Controller/HeroController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeroController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHeroController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHeroController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AHeroController, IGenericTeamAgentInterface), false },  // 1380835789
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeroController_Statics::ClassParams = {
	&AHeroController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeroController_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeroController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHeroController()
{
	if (!Z_Registration_Info_UClass_AHeroController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeroController.OuterSingleton, Z_Construct_UClass_AHeroController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHeroController.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<AHeroController>()
{
	return AHeroController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroController);
AHeroController::~AHeroController() {}
// End Class AHeroController

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Controller_HeroController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHeroController, AHeroController::StaticClass, TEXT("AHeroController"), &Z_Registration_Info_UClass_AHeroController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeroController), 4165510126U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Controller_HeroController_h_1539370378(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Controller_HeroController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Controller_HeroController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
