// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Warrior/Controller/WarriorAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef KNIGHT_WarriorAIController_generated_h
#error "WarriorAIController.generated.h already included, missing '#pragma once' in WarriorAIController.h"
#endif
#define KNIGHT_WarriorAIController_generated_h

#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Controller_WarriorAIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEnemyPerceptionUpdated);


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Controller_WarriorAIController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorAIController(); \
	friend struct Z_Construct_UClass_AWarriorAIController_Statics; \
public: \
	DECLARE_CLASS(AWarriorAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/knight"), NO_API) \
	DECLARE_SERIALIZER(AWarriorAIController)


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Controller_WarriorAIController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWarriorAIController(AWarriorAIController&&); \
	AWarriorAIController(const AWarriorAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWarriorAIController) \
	NO_API virtual ~AWarriorAIController();


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Controller_WarriorAIController_h_14_PROLOG
#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Controller_WarriorAIController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Controller_WarriorAIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Controller_WarriorAIController_h_17_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Controller_WarriorAIController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KNIGHT_API UClass* StaticClass<class AWarriorAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Controller_WarriorAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
