// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSHUnrealCPP/Public/Player/UW_PlayerHud.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUW_PlayerHud() {}

// Begin Cross Module References
KSHUNREALCPP_API UClass* Z_Construct_UClass_UUW_PlayerHud();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UUW_PlayerHud_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP();
// End Cross Module References

// Begin Class UUW_PlayerHud
void UUW_PlayerHud::StaticRegisterNativesUUW_PlayerHud()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUW_PlayerHud);
UClass* Z_Construct_UClass_UUW_PlayerHud_NoRegister()
{
	return UUW_PlayerHud::StaticClass();
}
struct Z_Construct_UClass_UUW_PlayerHud_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Player/UW_PlayerHud.h" },
		{ "ModuleRelativePath", "Public/Player/UW_PlayerHud.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUW_PlayerHud>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUW_PlayerHud_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_KSHUnrealCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_PlayerHud_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUW_PlayerHud_Statics::ClassParams = {
	&UUW_PlayerHud::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUW_PlayerHud_Statics::Class_MetaDataParams), Z_Construct_UClass_UUW_PlayerHud_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUW_PlayerHud()
{
	if (!Z_Registration_Info_UClass_UUW_PlayerHud.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUW_PlayerHud.OuterSingleton, Z_Construct_UClass_UUW_PlayerHud_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUW_PlayerHud.OuterSingleton;
}
template<> KSHUNREALCPP_API UClass* StaticClass<UUW_PlayerHud>()
{
	return UUW_PlayerHud::StaticClass();
}
UUW_PlayerHud::UUW_PlayerHud(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUW_PlayerHud);
UUW_PlayerHud::~UUW_PlayerHud() {}
// End Class UUW_PlayerHud

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_UW_PlayerHud_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUW_PlayerHud, UUW_PlayerHud::StaticClass, TEXT("UUW_PlayerHud"), &Z_Registration_Info_UClass_UUW_PlayerHud, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUW_PlayerHud), 1783758503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_UW_PlayerHud_h_3842977024(TEXT("/Script/KSHUnrealCPP"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_UW_PlayerHud_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_UW_PlayerHud_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
