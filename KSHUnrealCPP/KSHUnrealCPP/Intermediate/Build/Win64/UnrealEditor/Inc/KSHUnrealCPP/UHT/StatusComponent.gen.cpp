// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSHUnrealCPP/Public/Player/StatusComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UStatusComponent();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UStatusComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP();
// End Cross Module References

// Begin Class UStatusComponent
void UStatusComponent::StaticRegisterNativesUStatusComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatusComponent);
UClass* Z_Construct_UClass_UStatusComponent_NoRegister()
{
	return UStatusComponent::StaticClass();
}
struct Z_Construct_UClass_UStatusComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player/StatusComponent.h" },
		{ "ModuleRelativePath", "Public/Player/StatusComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Status" },
		{ "ClampMax", "20" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xed\x9e\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/StatusComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x9e\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Agility_MetaData[] = {
		{ "Category", "Status" },
		{ "ClampMax", "20" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\xaf\xbc\xec\xb2\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/StatusComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xaf\xbc\xec\xb2\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vitality_MetaData[] = {
		{ "Category", "Status" },
		{ "ClampMax", "20" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x83\x9d\xeb\xaa\x85\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/StatusComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x83\x9d\xeb\xaa\x85\xeb\xa0\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "Status" },
		{ "ClampMax", "20" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Player/StatusComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Status" },
		{ "ClampMax", "20" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Player/StatusComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackModifier_MetaData[] = {
		{ "Category", "Modifier" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xea\xb3\xb5\xea\xb2\xa9\xeb\xa0\xa5 \xeb\xaa\xa8\xeb\x94\x94\xed\x8c\x8c\xec\x9d\xb4\xec\x96\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/StatusComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb3\xb5\xea\xb2\xa9\xeb\xa0\xa5 \xeb\xaa\xa8\xeb\x94\x94\xed\x8c\x8c\xec\x9d\xb4\xec\x96\xb4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Agility;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Vitality;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackModifier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatusComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusComponent, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_Agility = { "Agility", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusComponent, Agility), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Agility_MetaData), NewProp_Agility_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_Vitality = { "Vitality", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusComponent, Vitality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vitality_MetaData), NewProp_Vitality_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusComponent, Stamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusComponent, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusComponent_Statics::NewProp_AttackModifier = { "AttackModifier", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusComponent, AttackModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackModifier_MetaData), NewProp_AttackModifier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatusComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_Agility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_Vitality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusComponent_Statics::NewProp_AttackModifier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatusComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_KSHUnrealCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatusComponent_Statics::ClassParams = {
	&UStatusComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStatusComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatusComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatusComponent()
{
	if (!Z_Registration_Info_UClass_UStatusComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatusComponent.OuterSingleton, Z_Construct_UClass_UStatusComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatusComponent.OuterSingleton;
}
template<> KSHUNREALCPP_API UClass* StaticClass<UStatusComponent>()
{
	return UStatusComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatusComponent);
UStatusComponent::~UStatusComponent() {}
// End Class UStatusComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_StatusComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatusComponent, UStatusComponent::StaticClass, TEXT("UStatusComponent"), &Z_Registration_Info_UClass_UStatusComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatusComponent), 3946636202U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_StatusComponent_h_2746089671(TEXT("/Script/KSHUnrealCPP"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_StatusComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_StatusComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
