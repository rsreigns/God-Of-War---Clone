// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeknight_init() {}
	KNIGHT_API UFunction* Z_Construct_UDelegateFunction_knight_OnEquipppedWeaponChanged__DelegateSignature();
	KNIGHT_API UFunction* Z_Construct_UDelegateFunction_knight_OnPercentChangedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_knight;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_knight()
	{
		if (!Z_Registration_Info_UPackage__Script_knight.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_knight_OnEquipppedWeaponChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_knight_OnPercentChangedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/knight",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x14E3CBDD,
				0xB5296861,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_knight.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_knight.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_knight(Z_Construct_UPackage__Script_knight, TEXT("/Script/knight"), Z_Registration_Info_UPackage__Script_knight, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x14E3CBDD, 0xB5296861));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
