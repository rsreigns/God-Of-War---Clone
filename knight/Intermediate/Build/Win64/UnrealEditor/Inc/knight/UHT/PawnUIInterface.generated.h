// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Warrior/Interfaces/PawnUIInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KNIGHT_PawnUIInterface_generated_h
#error "PawnUIInterface.generated.h already included, missing '#pragma once' in PawnUIInterface.h"
#endif
#define KNIGHT_PawnUIInterface_generated_h

#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Interfaces_PawnUIInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KNIGHT_API UPawnUIInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPawnUIInterface(UPawnUIInterface&&); \
	UPawnUIInterface(const UPawnUIInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KNIGHT_API, UPawnUIInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnUIInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnUIInterface) \
	KNIGHT_API virtual ~UPawnUIInterface();


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Interfaces_PawnUIInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPawnUIInterface(); \
	friend struct Z_Construct_UClass_UPawnUIInterface_Statics; \
public: \
	DECLARE_CLASS(UPawnUIInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/knight"), KNIGHT_API) \
	DECLARE_SERIALIZER(UPawnUIInterface)


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Interfaces_PawnUIInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Interfaces_PawnUIInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Interfaces_PawnUIInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Interfaces_PawnUIInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPawnUIInterface() {} \
public: \
	typedef UPawnUIInterface UClassType; \
	typedef IPawnUIInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Interfaces_PawnUIInterface_h_13_PROLOG
#define FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Interfaces_PawnUIInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Interfaces_PawnUIInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KNIGHT_API UClass* StaticClass<class UPawnUIInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_God_Of_War___Clone_knight_Source_knight_Public_Warrior_Interfaces_PawnUIInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
