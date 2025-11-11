// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSHUnrealCPP/Public/Player/ActionAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UActionAnimInstance();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UActionAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP();
// End Cross Module References

// Begin Class UActionAnimInstance
void UActionAnimInstance::StaticRegisterNativesUActionAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActionAnimInstance);
UClass* Z_Construct_UClass_UActionAnimInstance_NoRegister()
{
	return UActionAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UActionAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Player/ActionAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Player/ActionAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Player/ActionAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActionAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActionAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionAnimInstance_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActionAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_KSHUnrealCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActionAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActionAnimInstance_Statics::ClassParams = {
	&UActionAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActionAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActionAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActionAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UActionAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActionAnimInstance()
{
	if (!Z_Registration_Info_UClass_UActionAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActionAnimInstance.OuterSingleton, Z_Construct_UClass_UActionAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActionAnimInstance.OuterSingleton;
}
template<> KSHUNREALCPP_API UClass* StaticClass<UActionAnimInstance>()
{
	return UActionAnimInstance::StaticClass();
}
UActionAnimInstance::UActionAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActionAnimInstance);
UActionAnimInstance::~UActionAnimInstance() {}
// End Class UActionAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_ActionAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActionAnimInstance, UActionAnimInstance::StaticClass, TEXT("UActionAnimInstance"), &Z_Registration_Info_UClass_UActionAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActionAnimInstance), 638294261U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_ActionAnimInstance_h_369534311(TEXT("/Script/KSHUnrealCPP"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_ActionAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_ActionAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
