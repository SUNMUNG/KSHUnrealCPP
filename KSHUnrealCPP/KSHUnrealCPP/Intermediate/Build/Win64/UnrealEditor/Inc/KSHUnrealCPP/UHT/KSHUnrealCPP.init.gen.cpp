// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKSHUnrealCPP_init() {}
	KSHUNREALCPP_API UFunction* Z_Construct_UDelegateFunction_KSHUnrealCPP_OnDie__DelegateSignature();
	KSHUNREALCPP_API UFunction* Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature();
	KSHUNREALCPP_API UFunction* Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaEmpty__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_KSHUnrealCPP;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP()
	{
		if (!Z_Registration_Info_UPackage__Script_KSHUnrealCPP.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_KSHUnrealCPP_OnDie__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_KSHUnrealCPP_OnStaminaEmpty__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/KSHUnrealCPP",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFB5C6B69,
				0xAD5A03A5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_KSHUnrealCPP.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_KSHUnrealCPP.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_KSHUnrealCPP(Z_Construct_UPackage__Script_KSHUnrealCPP, TEXT("/Script/KSHUnrealCPP"), Z_Registration_Info_UPackage__Script_KSHUnrealCPP, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFB5C6B69, 0xAD5A03A5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
