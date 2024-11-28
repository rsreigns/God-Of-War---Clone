// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Warrior/WarriorFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UPawnCombatComponent;
enum class EWarriorConfirmType : uint8;
enum class EWarriorValidType : uint8;
struct FGameplayTag;
#ifdef KNIGHT_WarriorFunctionLibrary_generated_h
#error "WarriorFunctionLibrary.generated.h already included, missing '#pragma once' in WarriorFunctionLibrary.h"
#endif
#define KNIGHT_WarriorFunctionLibrary_generated_h

#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsTargetPawnHostile); \
	DECLARE_FUNCTION(execBP_GetPawnCombatComponentFromActor); \
	DECLARE_FUNCTION(execBP_DoesActorHaveTag); \
	DECLARE_FUNCTION(execRemoveGameplayTagFromActorIfFound); \
	DECLARE_FUNCTION(execAddGameplayTagToActorIfNone);


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UWarriorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UWarriorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/knight"), NO_API) \
	DECLARE_SERIALIZER(UWarriorFunctionLibrary)


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWarriorFunctionLibrary(UWarriorFunctionLibrary&&); \
	UWarriorFunctionLibrary(const UWarriorFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorFunctionLibrary) \
	NO_API virtual ~UWarriorFunctionLibrary();


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorFunctionLibrary_h_15_PROLOG
#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorFunctionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KNIGHT_API UClass* StaticClass<class UWarriorFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_WarriorFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
