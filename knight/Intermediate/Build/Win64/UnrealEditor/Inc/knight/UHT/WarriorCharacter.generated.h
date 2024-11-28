// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Warrior/WarriorCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KNIGHT_WarriorCharacter_generated_h
#error "WarriorCharacter.generated.h already included, missing '#pragma once' in WarriorCharacter.h"
#endif
#define KNIGHT_WarriorCharacter_generated_h

#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorCharacter(); \
	friend struct Z_Construct_UClass_AWarriorCharacter_Statics; \
public: \
	DECLARE_CLASS(AWarriorCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/knight"), NO_API) \
	DECLARE_SERIALIZER(AWarriorCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AWarriorCharacter*>(this); }


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWarriorCharacter(AWarriorCharacter&&); \
	AWarriorCharacter(const AWarriorCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWarriorCharacter) \
	NO_API virtual ~AWarriorCharacter();


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorCharacter_h_18_PROLOG
#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KNIGHT_API UClass* StaticClass<class AWarriorCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
