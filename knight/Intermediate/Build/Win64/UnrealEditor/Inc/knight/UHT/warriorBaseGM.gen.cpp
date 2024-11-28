// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Private/GameMode/warriorBaseGM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodewarriorBaseGM() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
KNIGHT_API UClass* Z_Construct_UClass_AwarriorBaseGM();
KNIGHT_API UClass* Z_Construct_UClass_AwarriorBaseGM_NoRegister();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Class AwarriorBaseGM
void AwarriorBaseGM::StaticRegisterNativesAwarriorBaseGM()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AwarriorBaseGM);
UClass* Z_Construct_UClass_AwarriorBaseGM_NoRegister()
{
	return AwarriorBaseGM::StaticClass();
}
struct Z_Construct_UClass_AwarriorBaseGM_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/warriorBaseGM.h" },
		{ "ModuleRelativePath", "Private/GameMode/warriorBaseGM.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AwarriorBaseGM>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AwarriorBaseGM_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AwarriorBaseGM_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AwarriorBaseGM_Statics::ClassParams = {
	&AwarriorBaseGM::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AwarriorBaseGM_Statics::Class_MetaDataParams), Z_Construct_UClass_AwarriorBaseGM_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AwarriorBaseGM()
{
	if (!Z_Registration_Info_UClass_AwarriorBaseGM.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AwarriorBaseGM.OuterSingleton, Z_Construct_UClass_AwarriorBaseGM_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AwarriorBaseGM.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<AwarriorBaseGM>()
{
	return AwarriorBaseGM::StaticClass();
}
AwarriorBaseGM::AwarriorBaseGM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AwarriorBaseGM);
AwarriorBaseGM::~AwarriorBaseGM() {}
// End Class AwarriorBaseGM

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Private_GameMode_warriorBaseGM_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AwarriorBaseGM, AwarriorBaseGM::StaticClass, TEXT("AwarriorBaseGM"), &Z_Registration_Info_UClass_AwarriorBaseGM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AwarriorBaseGM), 327325710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Private_GameMode_warriorBaseGM_h_724483731(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Private_GameMode_warriorBaseGM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Private_GameMode_warriorBaseGM_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
