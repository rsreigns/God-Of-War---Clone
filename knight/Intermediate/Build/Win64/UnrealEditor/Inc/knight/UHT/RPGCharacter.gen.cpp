// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/RPG/RPGCharacter.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
KNIGHT_API UClass* Z_Construct_UClass_ARPGCharacter();
KNIGHT_API UClass* Z_Construct_UClass_ARPGCharacter_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_URPGAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Class ARPGCharacter Function OnHealthChanged
struct RPGCharacter_eventOnHealthChanged_Parms
{
	float DeltaValue;
	FGameplayTagContainer EventTags;
};
static const FName NAME_ARPGCharacter_OnHealthChanged = FName(TEXT("OnHealthChanged"));
void ARPGCharacter::OnHealthChanged(float DeltaValue, FGameplayTagContainer const& EventTags)
{
	RPGCharacter_eventOnHealthChanged_Parms Parms;
	Parms.DeltaValue=DeltaValue;
	Parms.EventTags=EventTags;
	UFunction* Func = FindFunctionChecked(NAME_ARPGCharacter_OnHealthChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "RPG/RPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGCharacter_eventOnHealthChanged_Parms, DeltaValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::NewProp_EventTags = { "EventTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGCharacter_eventOnHealthChanged_Parms, EventTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTags_MetaData), NewProp_EventTags_MetaData) }; // 3352185621
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::NewProp_DeltaValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::NewProp_EventTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGCharacter, nullptr, "OnHealthChanged", nullptr, nullptr, Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::PropPointers), sizeof(RPGCharacter_eventOnHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(RPGCharacter_eventOnHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPGCharacter_OnHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGCharacter_OnHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ARPGCharacter Function OnHealthChanged

// Begin Class ARPGCharacter
void ARPGCharacter::StaticRegisterNativesARPGCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPGCharacter);
UClass* Z_Construct_UClass_ARPGCharacter_NoRegister()
{
	return ARPGCharacter::StaticClass();
}
struct Z_Construct_UClass_ARPGCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RPG/RPGCharacter.h" },
		{ "ModuleRelativePath", "RPG/RPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RPG/RPGCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Attributes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RPG/RPGCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARPGCharacter_OnHealthChanged, "OnHealthChanged" }, // 751991576
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00200800000a003d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGCharacter_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x00200800000a003d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGCharacter, AttributeSet), Z_Construct_UClass_URPGAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacter_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGCharacter_Statics::NewProp_AttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARPGCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ARPGCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ARPGCharacter, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGCharacter_Statics::ClassParams = {
	&ARPGCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARPGCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPGCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARPGCharacter()
{
	if (!Z_Registration_Info_UClass_ARPGCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGCharacter.OuterSingleton, Z_Construct_UClass_ARPGCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARPGCharacter.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<ARPGCharacter>()
{
	return ARPGCharacter::StaticClass();
}
void ARPGCharacter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_AbilitySystemComponent(TEXT("AbilitySystemComponent"));
	static const FName Name_AttributeSet(TEXT("AttributeSet"));
	const bool bIsValid = true
		&& Name_AbilitySystemComponent == ClassReps[(int32)ENetFields_Private::AbilitySystemComponent].Property->GetFName()
		&& Name_AttributeSet == ClassReps[(int32)ENetFields_Private::AttributeSet].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ARPGCharacter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGCharacter);
ARPGCharacter::~ARPGCharacter() {}
// End Class ARPGCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARPGCharacter, ARPGCharacter::StaticClass, TEXT("ARPGCharacter"), &Z_Registration_Info_UClass_ARPGCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGCharacter), 1765722524U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGCharacter_h_3142850973(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
