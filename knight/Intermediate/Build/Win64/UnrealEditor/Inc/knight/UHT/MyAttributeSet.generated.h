// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef KNIGHT_MyAttributeSet_generated_h
#error "MyAttributeSet.generated.h already included, missing '#pragma once' in MyAttributeSet.h"
#endif
#define KNIGHT_MyAttributeSet_generated_h

#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Private_MyAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Private_MyAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyAttributeSet(); \
	friend struct Z_Construct_UClass_UMyAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UMyAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/knight"), NO_API) \
	DECLARE_SERIALIZER(UMyAttributeSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		NETFIELD_REP_END=MaxHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UMyAttributeSet) \
public:


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Private_MyAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyAttributeSet(UMyAttributeSet&&); \
	UMyAttributeSet(const UMyAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyAttributeSet) \
	NO_API virtual ~UMyAttributeSet();


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Private_MyAttributeSet_h_18_PROLOG
#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Private_MyAttributeSet_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Private_MyAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Private_MyAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Private_MyAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KNIGHT_API UClass* StaticClass<class UMyAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Private_MyAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
