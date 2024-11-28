// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "knight/knight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeknight() {}

// Begin Cross Module References
KNIGHT_API UEnum* Z_Construct_UEnum_knight_EAbilityInputID();
UPackage* Z_Construct_UPackage__Script_knight();
// End Cross Module References

// Begin Enum EAbilityInputID
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAbilityInputID;
static UEnum* EAbilityInputID_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAbilityInputID.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAbilityInputID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_knight_EAbilityInputID, (UObject*)Z_Construct_UPackage__Script_knight(), TEXT("EAbilityInputID"));
	}
	return Z_Registration_Info_UEnum_EAbilityInputID.OuterSingleton;
}
template<> KNIGHT_API UEnum* StaticEnum<EAbilityInputID>()
{
	return EAbilityInputID_StaticEnum();
}
struct Z_Construct_UEnum_knight_EAbilityInputID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancel.Name", "EAbilityInputID::Cancel" },
		{ "Confirm.Name", "EAbilityInputID::Confirm" },
		{ "ModuleRelativePath", "knight.h" },
		{ "None.Name", "EAbilityInputID::None" },
		{ "Punch.Name", "EAbilityInputID::Punch" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAbilityInputID::None", (int64)EAbilityInputID::None },
		{ "EAbilityInputID::Confirm", (int64)EAbilityInputID::Confirm },
		{ "EAbilityInputID::Cancel", (int64)EAbilityInputID::Cancel },
		{ "EAbilityInputID::Punch", (int64)EAbilityInputID::Punch },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_knight_EAbilityInputID_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_knight,
	nullptr,
	"EAbilityInputID",
	"EAbilityInputID",
	Z_Construct_UEnum_knight_EAbilityInputID_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_knight_EAbilityInputID_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_knight_EAbilityInputID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_knight_EAbilityInputID_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_knight_EAbilityInputID()
{
	if (!Z_Registration_Info_UEnum_EAbilityInputID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAbilityInputID.InnerSingleton, Z_Construct_UEnum_knight_EAbilityInputID_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAbilityInputID.InnerSingleton;
}
// End Enum EAbilityInputID

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_knight_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAbilityInputID_StaticEnum, TEXT("EAbilityInputID"), &Z_Registration_Info_UEnum_EAbilityInputID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1470856724U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_knight_h_2918361889(TEXT("/Script/knight"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_knight_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_God_Of_War___Clone_knight_Source_knight_knight_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
