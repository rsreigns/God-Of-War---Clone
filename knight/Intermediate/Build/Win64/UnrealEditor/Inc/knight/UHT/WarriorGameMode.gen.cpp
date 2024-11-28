// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/Warrior/GameMode/WarriorGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
KNIGHT_API UClass* Z_Construct_UClass_AWarriorGameMode();
KNIGHT_API UClass* Z_Construct_UClass_AWarriorGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Class AWarriorGameMode
void AWarriorGameMode::StaticRegisterNativesAWarriorGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorGameMode);
UClass* Z_Construct_UClass_AWarriorGameMode_NoRegister()
{
	return AWarriorGameMode::StaticClass();
}
struct Z_Construct_UClass_AWarriorGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Warrior/GameMode/WarriorGameMode.h" },
		{ "ModuleRelativePath", "Public/Warrior/GameMode/WarriorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWarriorGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorGameMode_Statics::ClassParams = {
	&AWarriorGameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorGameMode()
{
	if (!Z_Registration_Info_UClass_AWarriorGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorGameMode.OuterSingleton, Z_Construct_UClass_AWarriorGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorGameMode.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<AWarriorGameMode>()
{
	return AWarriorGameMode::StaticClass();
}
AWarriorGameMode::AWarriorGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorGameMode);
AWarriorGameMode::~AWarriorGameMode() {}
// End Class AWarriorGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_GameMode_WarriorGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorGameMode, AWarriorGameMode::StaticClass, TEXT("AWarriorGameMode"), &Z_Registration_Info_UClass_AWarriorGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorGameMode), 3404607270U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_GameMode_WarriorGameMode_h_3676714931(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_GameMode_WarriorGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_GameMode_WarriorGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
