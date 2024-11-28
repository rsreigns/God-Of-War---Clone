// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/DataAssets/Input/DataAsset_Config.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset_Config() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
KNIGHT_API UClass* Z_Construct_UClass_UDataAsset_Config();
KNIGHT_API UClass* Z_Construct_UClass_UDataAsset_Config_NoRegister();
KNIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FWarriorInputActionConfig();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin ScriptStruct FWarriorInputActionConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WarriorInputActionConfig;
class UScriptStruct* FWarriorInputActionConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WarriorInputActionConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WarriorInputActionConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWarriorInputActionConfig, (UObject*)Z_Construct_UPackage__Script_knight(), TEXT("WarriorInputActionConfig"));
	}
	return Z_Registration_Info_UScriptStruct_WarriorInputActionConfig.OuterSingleton;
}
template<> KNIGHT_API UScriptStruct* StaticStruct<FWarriorInputActionConfig>()
{
	return FWarriorInputActionConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/Input/DataAsset_Config.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Category", "InputTag" },
		{ "ModuleRelativePath", "Public/DataAssets/Input/DataAsset_Config.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "WarriorInputActionConfig" },
		{ "ModuleRelativePath", "Public/DataAssets/Input/DataAsset_Config.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWarriorInputActionConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorInputActionConfig, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWarriorInputActionConfig, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::NewProp_InputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
	nullptr,
	&NewStructOps,
	"WarriorInputActionConfig",
	Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::PropPointers),
	sizeof(FWarriorInputActionConfig),
	alignof(FWarriorInputActionConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWarriorInputActionConfig()
{
	if (!Z_Registration_Info_UScriptStruct_WarriorInputActionConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WarriorInputActionConfig.InnerSingleton, Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WarriorInputActionConfig.InnerSingleton;
}
// End ScriptStruct FWarriorInputActionConfig

// Begin Class UDataAsset_Config
void UDataAsset_Config::StaticRegisterNativesUDataAsset_Config()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAsset_Config);
UClass* Z_Construct_UClass_UDataAsset_Config_NoRegister()
{
	return UDataAsset_Config::StaticClass();
}
struct Z_Construct_UClass_UDataAsset_Config_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/Input/DataAsset_Config.h" },
		{ "ModuleRelativePath", "Public/DataAssets/Input/DataAsset_Config.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "DataAsset_Config" },
		{ "ModuleRelativePath", "Public/DataAssets/Input/DataAsset_Config.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeInputActions_MetaData[] = {
		{ "Category", "DataAsset_Config" },
		{ "ModuleRelativePath", "Public/DataAssets/Input/DataAsset_Config.h" },
		{ "TitleProperty", "InputTag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputActions_MetaData[] = {
		{ "Category", "DataAsset_Config" },
		{ "ModuleRelativePath", "Public/DataAssets/Input/DataAsset_Config.h" },
		{ "TitleProperty", "InputTag" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NativeInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NativeInputActions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInputActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_Config>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataAsset_Config_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_Config, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataAsset_Config_Statics::NewProp_NativeInputActions_Inner = { "NativeInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWarriorInputActionConfig, METADATA_PARAMS(0, nullptr) }; // 4289597014
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_Config_Statics::NewProp_NativeInputActions = { "NativeInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_Config, NativeInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeInputActions_MetaData), NewProp_NativeInputActions_MetaData) }; // 4289597014
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataAsset_Config_Statics::NewProp_AbilityInputActions_Inner = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWarriorInputActionConfig, METADATA_PARAMS(0, nullptr) }; // 4289597014
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_Config_Statics::NewProp_AbilityInputActions = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_Config, AbilityInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputActions_MetaData), NewProp_AbilityInputActions_MetaData) }; // 4289597014
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_Config_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_Config_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_Config_Statics::NewProp_NativeInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_Config_Statics::NewProp_NativeInputActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_Config_Statics::NewProp_AbilityInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_Config_Statics::NewProp_AbilityInputActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_Config_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataAsset_Config_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_Config_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_Config_Statics::ClassParams = {
	&UDataAsset_Config::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataAsset_Config_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_Config_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_Config_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_Config_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataAsset_Config()
{
	if (!Z_Registration_Info_UClass_UDataAsset_Config.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_Config.OuterSingleton, Z_Construct_UClass_UDataAsset_Config_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataAsset_Config.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<UDataAsset_Config>()
{
	return UDataAsset_Config::StaticClass();
}
UDataAsset_Config::UDataAsset_Config(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_Config);
UDataAsset_Config::~UDataAsset_Config() {}
// End Class UDataAsset_Config

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_DataAssets_Input_DataAsset_Config_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWarriorInputActionConfig::StaticStruct, Z_Construct_UScriptStruct_FWarriorInputActionConfig_Statics::NewStructOps, TEXT("WarriorInputActionConfig"), &Z_Registration_Info_UScriptStruct_WarriorInputActionConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWarriorInputActionConfig), 4289597014U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_Config, UDataAsset_Config::StaticClass, TEXT("UDataAsset_Config"), &Z_Registration_Info_UClass_UDataAsset_Config, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_Config), 2435074942U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_DataAssets_Input_DataAsset_Config_h_831041065(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_DataAssets_Input_DataAsset_Config_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_DataAssets_Input_DataAsset_Config_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_DataAssets_Input_DataAsset_Config_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_DataAssets_Input_DataAsset_Config_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
