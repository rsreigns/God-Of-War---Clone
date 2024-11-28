// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/Warrior/Components/UI/HeroPawnUIComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroPawnUIComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UHeroPawnUIComponent();
KNIGHT_API UClass* Z_Construct_UClass_UHeroPawnUIComponent_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UPawnUIComponent();
KNIGHT_API UFunction* Z_Construct_UDelegateFunction_knight_OnEquipppedWeaponChanged__DelegateSignature();
KNIGHT_API UFunction* Z_Construct_UDelegateFunction_knight_OnPercentChangedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Delegate FOnEquipppedWeaponChanged
struct Z_Construct_UDelegateFunction_knight_OnEquipppedWeaponChanged__DelegateSignature_Statics
{
	struct _Script_knight_eventOnEquipppedWeaponChanged_Parms
	{
		TSoftObjectPtr<UTexture2D> SoftWeaponIcon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Warrior/Components/UI/HeroPawnUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftWeaponIcon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UDelegateFunction_knight_OnEquipppedWeaponChanged__DelegateSignature_Statics::NewProp_SoftWeaponIcon = { "SoftWeaponIcon", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_knight_eventOnEquipppedWeaponChanged_Parms, SoftWeaponIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_knight_OnEquipppedWeaponChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_knight_OnEquipppedWeaponChanged__DelegateSignature_Statics::NewProp_SoftWeaponIcon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_knight_OnEquipppedWeaponChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_knight_OnEquipppedWeaponChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_knight, nullptr, "OnEquipppedWeaponChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_knight_OnEquipppedWeaponChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_knight_OnEquipppedWeaponChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_knight_OnEquipppedWeaponChanged__DelegateSignature_Statics::_Script_knight_eventOnEquipppedWeaponChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_knight_OnEquipppedWeaponChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_knight_OnEquipppedWeaponChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_knight_OnEquipppedWeaponChanged__DelegateSignature_Statics::_Script_knight_eventOnEquipppedWeaponChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_knight_OnEquipppedWeaponChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_knight_OnEquipppedWeaponChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEquipppedWeaponChanged_DelegateWrapper(const FMulticastScriptDelegate& OnEquipppedWeaponChanged, const TSoftObjectPtr<UTexture2D>& SoftWeaponIcon)
{
	struct _Script_knight_eventOnEquipppedWeaponChanged_Parms
	{
		TSoftObjectPtr<UTexture2D> SoftWeaponIcon;
	};
	_Script_knight_eventOnEquipppedWeaponChanged_Parms Parms;
	Parms.SoftWeaponIcon=SoftWeaponIcon;
	OnEquipppedWeaponChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnEquipppedWeaponChanged

// Begin Class UHeroPawnUIComponent
void UHeroPawnUIComponent::StaticRegisterNativesUHeroPawnUIComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroPawnUIComponent);
UClass* Z_Construct_UClass_UHeroPawnUIComponent_NoRegister()
{
	return UHeroPawnUIComponent::StaticClass();
}
struct Z_Construct_UClass_UHeroPawnUIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Warrior/Components/UI/HeroPawnUIComponent.h" },
		{ "ModuleRelativePath", "Public/Warrior/Components/UI/HeroPawnUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCurrentRageChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Warrior/Components/UI/HeroPawnUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEquippedWeaponChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/Warrior/Components/UI/HeroPawnUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCurrentRageChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquippedWeaponChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroPawnUIComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHeroPawnUIComponent_Statics::NewProp_OnCurrentRageChanged = { "OnCurrentRageChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroPawnUIComponent, OnCurrentRageChanged), Z_Construct_UDelegateFunction_knight_OnPercentChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCurrentRageChanged_MetaData), NewProp_OnCurrentRageChanged_MetaData) }; // 683126905
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHeroPawnUIComponent_Statics::NewProp_OnEquippedWeaponChanged = { "OnEquippedWeaponChanged", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroPawnUIComponent, OnEquippedWeaponChanged), Z_Construct_UDelegateFunction_knight_OnEquipppedWeaponChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEquippedWeaponChanged_MetaData), NewProp_OnEquippedWeaponChanged_MetaData) }; // 2511283078
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroPawnUIComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroPawnUIComponent_Statics::NewProp_OnCurrentRageChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroPawnUIComponent_Statics::NewProp_OnEquippedWeaponChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPawnUIComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHeroPawnUIComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnUIComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPawnUIComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroPawnUIComponent_Statics::ClassParams = {
	&UHeroPawnUIComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHeroPawnUIComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPawnUIComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroPawnUIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroPawnUIComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroPawnUIComponent()
{
	if (!Z_Registration_Info_UClass_UHeroPawnUIComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroPawnUIComponent.OuterSingleton, Z_Construct_UClass_UHeroPawnUIComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroPawnUIComponent.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<UHeroPawnUIComponent>()
{
	return UHeroPawnUIComponent::StaticClass();
}
UHeroPawnUIComponent::UHeroPawnUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroPawnUIComponent);
UHeroPawnUIComponent::~UHeroPawnUIComponent() {}
// End Class UHeroPawnUIComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_UI_HeroPawnUIComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroPawnUIComponent, UHeroPawnUIComponent::StaticClass, TEXT("UHeroPawnUIComponent"), &Z_Registration_Info_UClass_UHeroPawnUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroPawnUIComponent), 3555656210U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_UI_HeroPawnUIComponent_h_2629644417(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_UI_HeroPawnUIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_UI_HeroPawnUIComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
