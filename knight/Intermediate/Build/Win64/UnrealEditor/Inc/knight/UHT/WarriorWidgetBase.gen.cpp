// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/Public/Warrior/Widgets/WarriorWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorWidgetBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UEnemyPawnUIComponent_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UHeroPawnUIComponent_NoRegister();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorWidgetBase();
KNIGHT_API UClass* Z_Construct_UClass_UWarriorWidgetBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Class UWarriorWidgetBase Function BP_OnOwningEnemyUIComponentInitialized
struct WarriorWidgetBase_eventBP_OnOwningEnemyUIComponentInitialized_Parms
{
	UEnemyPawnUIComponent* OwninEnemyPawnUIComponent;
};
static const FName NAME_UWarriorWidgetBase_BP_OnOwningEnemyUIComponentInitialized = FName(TEXT("BP_OnOwningEnemyUIComponentInitialized"));
void UWarriorWidgetBase::BP_OnOwningEnemyUIComponentInitialized(UEnemyPawnUIComponent* OwninEnemyPawnUIComponent)
{
	WarriorWidgetBase_eventBP_OnOwningEnemyUIComponentInitialized_Parms Parms;
	Parms.OwninEnemyPawnUIComponent=OwninEnemyPawnUIComponent;
	UFunction* Func = FindFunctionChecked(NAME_UWarriorWidgetBase_BP_OnOwningEnemyUIComponentInitialized);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Owning Enemy UI Component Initialized" },
		{ "ModuleRelativePath", "Public/Warrior/Widgets/WarriorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwninEnemyPawnUIComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwninEnemyPawnUIComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::NewProp_OwninEnemyPawnUIComponent = { "OwninEnemyPawnUIComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorWidgetBase_eventBP_OnOwningEnemyUIComponentInitialized_Parms, OwninEnemyPawnUIComponent), Z_Construct_UClass_UEnemyPawnUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwninEnemyPawnUIComponent_MetaData), NewProp_OwninEnemyPawnUIComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::NewProp_OwninEnemyPawnUIComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorWidgetBase, nullptr, "BP_OnOwningEnemyUIComponentInitialized", nullptr, nullptr, Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::PropPointers), sizeof(WarriorWidgetBase_eventBP_OnOwningEnemyUIComponentInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::Function_MetaDataParams) };
static_assert(sizeof(WarriorWidgetBase_eventBP_OnOwningEnemyUIComponentInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningEnemyUIComponentInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningEnemyUIComponentInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UWarriorWidgetBase Function BP_OnOwningEnemyUIComponentInitialized

// Begin Class UWarriorWidgetBase Function BP_OnOwningHeroUIComponentInitialized
struct WarriorWidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms
{
	UHeroPawnUIComponent* OwningHeroPawnUIComponent;
};
static const FName NAME_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized = FName(TEXT("BP_OnOwningHeroUIComponentInitialized"));
void UWarriorWidgetBase::BP_OnOwningHeroUIComponentInitialized(UHeroPawnUIComponent* OwningHeroPawnUIComponent)
{
	WarriorWidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms Parms;
	Parms.OwningHeroPawnUIComponent=OwningHeroPawnUIComponent;
	UFunction* Func = FindFunctionChecked(NAME_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DisplayName", "On Owning Hero UI Component Initialized" },
		{ "ModuleRelativePath", "Public/Warrior/Widgets/WarriorWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningHeroPawnUIComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningHeroPawnUIComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::NewProp_OwningHeroPawnUIComponent = { "OwningHeroPawnUIComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorWidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms, OwningHeroPawnUIComponent), Z_Construct_UClass_UHeroPawnUIComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningHeroPawnUIComponent_MetaData), NewProp_OwningHeroPawnUIComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::NewProp_OwningHeroPawnUIComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorWidgetBase, nullptr, "BP_OnOwningHeroUIComponentInitialized", nullptr, nullptr, Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::PropPointers), sizeof(WarriorWidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::Function_MetaDataParams) };
static_assert(sizeof(WarriorWidgetBase_eventBP_OnOwningHeroUIComponentInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UWarriorWidgetBase Function BP_OnOwningHeroUIComponentInitialized

// Begin Class UWarriorWidgetBase Function InitEnemyCreatedWidget
struct Z_Construct_UFunction_UWarriorWidgetBase_InitEnemyCreatedWidget_Statics
{
	struct WarriorWidgetBase_eventInitEnemyCreatedWidget_Parms
	{
		AActor* OwningEnemyActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Warrior/Widgets/WarriorWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningEnemyActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarriorWidgetBase_InitEnemyCreatedWidget_Statics::NewProp_OwningEnemyActor = { "OwningEnemyActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WarriorWidgetBase_eventInitEnemyCreatedWidget_Parms, OwningEnemyActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarriorWidgetBase_InitEnemyCreatedWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarriorWidgetBase_InitEnemyCreatedWidget_Statics::NewProp_OwningEnemyActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorWidgetBase_InitEnemyCreatedWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarriorWidgetBase_InitEnemyCreatedWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarriorWidgetBase, nullptr, "InitEnemyCreatedWidget", nullptr, nullptr, Z_Construct_UFunction_UWarriorWidgetBase_InitEnemyCreatedWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorWidgetBase_InitEnemyCreatedWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWarriorWidgetBase_InitEnemyCreatedWidget_Statics::WarriorWidgetBase_eventInitEnemyCreatedWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWarriorWidgetBase_InitEnemyCreatedWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWarriorWidgetBase_InitEnemyCreatedWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWarriorWidgetBase_InitEnemyCreatedWidget_Statics::WarriorWidgetBase_eventInitEnemyCreatedWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWarriorWidgetBase_InitEnemyCreatedWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarriorWidgetBase_InitEnemyCreatedWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWarriorWidgetBase::execInitEnemyCreatedWidget)
{
	P_GET_OBJECT(AActor,Z_Param_OwningEnemyActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitEnemyCreatedWidget(Z_Param_OwningEnemyActor);
	P_NATIVE_END;
}
// End Class UWarriorWidgetBase Function InitEnemyCreatedWidget

// Begin Class UWarriorWidgetBase
void UWarriorWidgetBase::StaticRegisterNativesUWarriorWidgetBase()
{
	UClass* Class = UWarriorWidgetBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitEnemyCreatedWidget", &UWarriorWidgetBase::execInitEnemyCreatedWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorWidgetBase);
UClass* Z_Construct_UClass_UWarriorWidgetBase_NoRegister()
{
	return UWarriorWidgetBase::StaticClass();
}
struct Z_Construct_UClass_UWarriorWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Warrior/Widgets/WarriorWidgetBase.h" },
		{ "ModuleRelativePath", "Public/Warrior/Widgets/WarriorWidgetBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningEnemyUIComponentInitialized, "BP_OnOwningEnemyUIComponentInitialized" }, // 2214401109
		{ &Z_Construct_UFunction_UWarriorWidgetBase_BP_OnOwningHeroUIComponentInitialized, "BP_OnOwningHeroUIComponentInitialized" }, // 2390409339
		{ &Z_Construct_UFunction_UWarriorWidgetBase_InitEnemyCreatedWidget, "InitEnemyCreatedWidget" }, // 1388489340
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWarriorWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_knight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorWidgetBase_Statics::ClassParams = {
	&UWarriorWidgetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorWidgetBase()
{
	if (!Z_Registration_Info_UClass_UWarriorWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorWidgetBase.OuterSingleton, Z_Construct_UClass_UWarriorWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorWidgetBase.OuterSingleton;
}
template<> KNIGHT_API UClass* StaticClass<UWarriorWidgetBase>()
{
	return UWarriorWidgetBase::StaticClass();
}
UWarriorWidgetBase::UWarriorWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorWidgetBase);
UWarriorWidgetBase::~UWarriorWidgetBase() {}
// End Class UWarriorWidgetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Widgets_WarriorWidgetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorWidgetBase, UWarriorWidgetBase::StaticClass, TEXT("UWarriorWidgetBase"), &Z_Registration_Info_UClass_UWarriorWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorWidgetBase), 3441822878U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Widgets_WarriorWidgetBase_h_2212051262(TEXT("/Script/knight"),
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Widgets_WarriorWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Widgets_WarriorWidgetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
