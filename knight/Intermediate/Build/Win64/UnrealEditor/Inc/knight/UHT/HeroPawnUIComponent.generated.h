// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Warrior/Components/UI/HeroPawnUIComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef KNIGHT_HeroPawnUIComponent_generated_h
#error "HeroPawnUIComponent.generated.h already included, missing '#pragma once' in HeroPawnUIComponent.h"
#endif
#define KNIGHT_HeroPawnUIComponent_generated_h

#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_UI_HeroPawnUIComponent_h_8_DELEGATE \
KNIGHT_API void FOnEquipppedWeaponChanged_DelegateWrapper(const FMulticastScriptDelegate& OnEquipppedWeaponChanged, const TSoftObjectPtr<UTexture2D>& SoftWeaponIcon);


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_UI_HeroPawnUIComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroPawnUIComponent(); \
	friend struct Z_Construct_UClass_UHeroPawnUIComponent_Statics; \
public: \
	DECLARE_CLASS(UHeroPawnUIComponent, UPawnUIComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/knight"), NO_API) \
	DECLARE_SERIALIZER(UHeroPawnUIComponent)


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_UI_HeroPawnUIComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroPawnUIComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHeroPawnUIComponent(UHeroPawnUIComponent&&); \
	UHeroPawnUIComponent(const UHeroPawnUIComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroPawnUIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroPawnUIComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroPawnUIComponent) \
	NO_API virtual ~UHeroPawnUIComponent();


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_UI_HeroPawnUIComponent_h_12_PROLOG
#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_UI_HeroPawnUIComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_UI_HeroPawnUIComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_UI_HeroPawnUIComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KNIGHT_API UClass* StaticClass<class UHeroPawnUIComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Components_UI_HeroPawnUIComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
