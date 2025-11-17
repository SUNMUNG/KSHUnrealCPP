// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSHUnrealCPP/Public/Common/CommonEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonEnums() {}

// Begin Cross Module References
KSHUNREALCPP_API UEnum* Z_Construct_UEnum_KSHUnrealCPP_EBitFlag();
KSHUNREALCPP_API UEnum* Z_Construct_UEnum_KSHUnrealCPP_EItemCode();
UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP();
// End Cross Module References

// Begin Enum EItemCode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemCode;
static UEnum* EItemCode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemCode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemCode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KSHUnrealCPP_EItemCode, (UObject*)Z_Construct_UPackage__Script_KSHUnrealCPP(), TEXT("EItemCode"));
	}
	return Z_Registration_Info_UEnum_EItemCode.OuterSingleton;
}
template<> KSHUNREALCPP_API UEnum* StaticEnum<EItemCode>()
{
	return EItemCode_StaticEnum();
}
struct Z_Construct_UEnum_KSHUnrealCPP_EItemCode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BasicWeapon.Comment", "/**\n * \n */" },
		{ "BasicWeapon.DisplayName", "\xea\xb8\xb0\xeb\xb3\xb8\xeb\xac\xb4\xea\xb8\xb0(\xeb\x8f\x84\xeb\x81\xbc)" },
		{ "BasicWeapon.Name", "EItemCode::BasicWeapon" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "Hammer.Comment", "/**\n * \n */" },
		{ "Hammer.DisplayName", "\xeb\xa7\x9d\xec\xb9\x98" },
		{ "Hammer.Name", "EItemCode::Hammer" },
		{ "ModuleRelativePath", "Public/Common/CommonEnums.h" },
		{ "Sword.Comment", "/**\n * \n */" },
		{ "Sword.DisplayName", "\xeb\x8c\x80\xea\xb2\x80" },
		{ "Sword.Name", "EItemCode::Sword" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemCode::BasicWeapon", (int64)EItemCode::BasicWeapon },
		{ "EItemCode::Sword", (int64)EItemCode::Sword },
		{ "EItemCode::Hammer", (int64)EItemCode::Hammer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KSHUnrealCPP_EItemCode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KSHUnrealCPP,
	nullptr,
	"EItemCode",
	"EItemCode",
	Z_Construct_UEnum_KSHUnrealCPP_EItemCode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KSHUnrealCPP_EItemCode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KSHUnrealCPP_EItemCode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KSHUnrealCPP_EItemCode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KSHUnrealCPP_EItemCode()
{
	if (!Z_Registration_Info_UEnum_EItemCode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemCode.InnerSingleton, Z_Construct_UEnum_KSHUnrealCPP_EItemCode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemCode.InnerSingleton;
}
// End Enum EItemCode

// Begin Enum EBitFlag
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBitFlag;
static UEnum* EBitFlag_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBitFlag.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBitFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KSHUnrealCPP_EBitFlag, (UObject*)Z_Construct_UPackage__Script_KSHUnrealCPP(), TEXT("EBitFlag"));
	}
	return Z_Registration_Info_UEnum_EBitFlag.OuterSingleton;
}
template<> KSHUNREALCPP_API UEnum* StaticEnum<EBitFlag>()
{
	return EBitFlag_StaticEnum();
}
struct Z_Construct_UEnum_KSHUnrealCPP_EBitFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb9\x84\xed\x8a\xb8\xed\x94\x8c\xeb\x9e\x98\xea\xb7\xb8\xec\x9a\xa9 enum. \xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90\xec\x84\x9c \xed\x8e\xb8\xec\xa7\x91 \xea\xb0\x80\xeb\x8a\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/Common/CommonEnums.h" },
		{ "None.Name", "EBitFlag::None" },
		{ "Test1.Name", "EBitFlag::Test1" },
		{ "Test2.Name", "EBitFlag::Test2" },
		{ "Test3.Name", "EBitFlag::Test3" },
		{ "Test4.Name", "EBitFlag::Test4" },
		{ "Test5.Name", "EBitFlag::Test5" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb9\x84\xed\x8a\xb8\xed\x94\x8c\xeb\x9e\x98\xea\xb7\xb8\xec\x9a\xa9 enum. \xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90\xec\x84\x9c \xed\x8e\xb8\xec\xa7\x91 \xea\xb0\x80\xeb\x8a\xa5" },
#endif
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBitFlag::None", (int64)EBitFlag::None },
		{ "EBitFlag::Test1", (int64)EBitFlag::Test1 },
		{ "EBitFlag::Test2", (int64)EBitFlag::Test2 },
		{ "EBitFlag::Test3", (int64)EBitFlag::Test3 },
		{ "EBitFlag::Test4", (int64)EBitFlag::Test4 },
		{ "EBitFlag::Test5", (int64)EBitFlag::Test5 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KSHUnrealCPP_EBitFlag_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KSHUnrealCPP,
	nullptr,
	"EBitFlag",
	"EBitFlag",
	Z_Construct_UEnum_KSHUnrealCPP_EBitFlag_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KSHUnrealCPP_EBitFlag_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KSHUnrealCPP_EBitFlag_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KSHUnrealCPP_EBitFlag_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KSHUnrealCPP_EBitFlag()
{
	if (!Z_Registration_Info_UEnum_EBitFlag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBitFlag.InnerSingleton, Z_Construct_UEnum_KSHUnrealCPP_EBitFlag_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBitFlag.InnerSingleton;
}
// End Enum EBitFlag

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Common_CommonEnums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemCode_StaticEnum, TEXT("EItemCode"), &Z_Registration_Info_UEnum_EItemCode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3628415129U) },
		{ EBitFlag_StaticEnum, TEXT("EBitFlag"), &Z_Registration_Info_UEnum_EBitFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1936764234U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Common_CommonEnums_h_2091241444(TEXT("/Script/KSHUnrealCPP"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Common_CommonEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Common_CommonEnums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
