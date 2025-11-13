// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSHUnrealCPP/Public/AnimNotify/AnimNotifyState_SectionJump.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_SectionJump() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
KSHUNREALCPP_API UClass* Z_Construct_UClass_AActionCharacter_NoRegister();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UAnimNotifyState_SectionJump();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UAnimNotifyState_SectionJump_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP();
// End Cross Module References

// Begin Class UAnimNotifyState_SectionJump
void UAnimNotifyState_SectionJump::StaticRegisterNativesUAnimNotifyState_SectionJump()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_SectionJump);
UClass* Z_Construct_UClass_UAnimNotifyState_SectionJump_NoRegister()
{
	return UAnimNotifyState_SectionJump::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_SectionJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotifyState_SectionJump.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotifyState_SectionJump.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextSectionName_MetaData[] = {
		{ "Category", "SectionJump" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotifyState_SectionJump.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotifyState_SectionJump.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NextSectionName;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_SectionJump>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_SectionJump_Statics::NewProp_NextSectionName = { "NextSectionName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_SectionJump, NextSectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextSectionName_MetaData), NewProp_NextSectionName_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimNotifyState_SectionJump_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0044000000000010, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_SectionJump, OwnerCharacter), Z_Construct_UClass_AActionCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_SectionJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_SectionJump_Statics::NewProp_NextSectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_SectionJump_Statics::NewProp_OwnerCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_SectionJump_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_SectionJump_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_KSHUnrealCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_SectionJump_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_SectionJump_Statics::ClassParams = {
	&UAnimNotifyState_SectionJump::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_SectionJump_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_SectionJump_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_SectionJump_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_SectionJump_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_SectionJump()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_SectionJump.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_SectionJump.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_SectionJump_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_SectionJump.OuterSingleton;
}
template<> KSHUNREALCPP_API UClass* StaticClass<UAnimNotifyState_SectionJump>()
{
	return UAnimNotifyState_SectionJump::StaticClass();
}
UAnimNotifyState_SectionJump::UAnimNotifyState_SectionJump(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_SectionJump);
UAnimNotifyState_SectionJump::~UAnimNotifyState_SectionJump() {}
// End Class UAnimNotifyState_SectionJump

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_AnimNotify_AnimNotifyState_SectionJump_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_SectionJump, UAnimNotifyState_SectionJump::StaticClass, TEXT("UAnimNotifyState_SectionJump"), &Z_Registration_Info_UClass_UAnimNotifyState_SectionJump, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_SectionJump), 3550277719U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_AnimNotify_AnimNotifyState_SectionJump_h_2088129554(TEXT("/Script/KSHUnrealCPP"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_AnimNotify_AnimNotifyState_SectionJump_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_AnimNotify_AnimNotifyState_SectionJump_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
