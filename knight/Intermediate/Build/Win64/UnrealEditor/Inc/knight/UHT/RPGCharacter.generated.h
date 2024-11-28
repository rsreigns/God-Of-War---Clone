// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPG/RPGCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
#ifdef KNIGHT_RPGCharacter_generated_h
#error "RPGCharacter.generated.h already included, missing '#pragma once' in RPGCharacter.h"
#endif
#define KNIGHT_RPGCharacter_generated_h

#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGCharacter_h_17_CALLBACK_WRAPPERS
#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPGCharacter(); \
	friend struct Z_Construct_UClass_ARPGCharacter_Statics; \
public: \
	DECLARE_CLASS(ARPGCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/knight"), NO_API) \
	DECLARE_SERIALIZER(ARPGCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ARPGCharacter*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AbilitySystemComponent=NETFIELD_REP_START, \
		AttributeSet, \
		NETFIELD_REP_END=AttributeSet	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPGCharacter(ARPGCharacter&&); \
	ARPGCharacter(const ARPGCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARPGCharacter) \
	NO_API virtual ~ARPGCharacter();


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGCharacter_h_14_PROLOG
#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGCharacter_h_17_CALLBACK_WRAPPERS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KNIGHT_API UClass* StaticClass<class ARPGCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
