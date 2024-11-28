// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/Warrior/Components/UI/EnemyPawnUIComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyPawnUIComponent() {}

// Begin Cross Module References
KNIGHT_API UClass* Z_Construct_UClass_UEnemyPawnUIComponent();
KNIGHT_API UClass* Z_Construct_UClass_UEnemyPawnUIComponent_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UPawnUIComponent();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Class UEnemyPawnUIComponent
void UEnemyPawnUIComponent::StaticRegisterNativesUEnemyPawnUIComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyPawnUIComponent);
UClass* Z_Construct_UClass_UEnemyPawnUIComponent_NoRegister()
{
	return UEnemyPawnUIComponent::StaticClass();
}
struct Z_Construct_UClass_UEnemyPawnUIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Warrior/Components/UI/EnemyPawnUIComponent.h" },
		{ "ModuleRelativePath", "Public/Warrior/Components/UI/EnemyPawnUIComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyPawnUIComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnemyPawnUIComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnUIComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyPawnUIComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyPawnUIComponent_Statics::ClassParams = {
	&UEnemyPawnUIComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyPawnUIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyPawnUIComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyPawnUIComponent()
{
	if (!Z_Registration_Info_UClass_UEnemyPawnUIComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyPawnUIComponent.OuterSingleton, Z_Construct_UClass_UEnemyPawnUIComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyPawnUIComponent.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<UEnemyPawnUIComponent>()
{
	return UEnemyPawnUIComponent::StaticClass();
}
UEnemyPawnUIComponent::UEnemyPawnUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyPawnUIComponent);
UEnemyPawnUIComponent::~UEnemyPawnUIComponent() {}
// End Class UEnemyPawnUIComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_UI_EnemyPawnUIComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyPawnUIComponent, UEnemyPawnUIComponent::StaticClass, TEXT("UEnemyPawnUIComponent"), &Z_Registration_Info_UClass_UEnemyPawnUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyPawnUIComponent), 1339748011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_UI_EnemyPawnUIComponent_h_3256197651(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_UI_EnemyPawnUIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_UI_EnemyPawnUIComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
