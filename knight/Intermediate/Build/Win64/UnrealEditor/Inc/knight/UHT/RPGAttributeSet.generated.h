// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPG/RPGAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef KNIGHT_RPGAttributeSet_generated_h
#error "RPGAttributeSet.generated.h already included, missing '#pragma once' in RPGAttributeSet.h"
#endif
#define KNIGHT_RPGAttributeSet_generated_h

#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGAttributeSet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth);


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGAttributeSet_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGAttributeSet(); \
	friend struct Z_Construct_UClass_URPGAttributeSet_Statics; \
public: \
	DECLARE_CLASS(URPGAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/knight"), NO_API) \
	DECLARE_SERIALIZER(URPGAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		MaxHealth, \
		NETFIELD_REP_END=MaxHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(URPGAttributeSet) \
public:


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGAttributeSet_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URPGAttributeSet(URPGAttributeSet&&); \
	URPGAttributeSet(const URPGAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGAttributeSet) \
	NO_API virtual ~URPGAttributeSet();


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGAttributeSet_h_16_PROLOG
#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGAttributeSet_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGAttributeSet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGAttributeSet_h_19_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGAttributeSet_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KNIGHT_API UClass* StaticClass<class URPGAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_God_Of_War___Clone_knight_Source_knight_RPG_RPGAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
