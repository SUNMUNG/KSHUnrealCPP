// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSHUnrealCPP/Public/Item/PickUpable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUpable() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UPickUpable();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UPickUpable_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP();
// End Cross Module References

// Begin Interface UPickUpable Function OnPickUp
struct PickUpable_eventOnPickUp_Parms
{
	AActor* Target;
};
void IPickUpable::OnPickUp(AActor* Target)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPickUp instead.");
}
static FName NAME_UPickUpable_OnPickUp = FName(TEXT("OnPickUp"));
void IPickUpable::Execute_OnPickUp(UObject* O, AActor* Target)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPickUpable::StaticClass()));
	PickUpable_eventOnPickUp_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPickUpable_OnPickUp);
	if (Func)
	{
		Parms.Target=Target;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IPickUpable*)(O->GetNativeInterfaceAddress(UPickUpable::StaticClass())))
	{
		I->OnPickUp_Implementation(Target);
	}
}
struct Z_Construct_UFunction_UPickUpable_OnPickUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PickUp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c\xec\x9d\x84 \xec\xa3\xbc\xec\x9b\xa0\xec\x9d\x84 \xeb\x95\x8c  \xed\x98\xb8\xec\xb6\x9c\xed\x95\xa0 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/Item/PickUpable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c\xec\x9d\x84 \xec\xa3\xbc\xec\x9b\xa0\xec\x9d\x84 \xeb\x95\x8c  \xed\x98\xb8\xec\xb6\x9c\xed\x95\xa0 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPickUpable_OnPickUp_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickUpable_eventOnPickUp_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPickUpable_OnPickUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPickUpable_OnPickUp_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPickUpable_OnPickUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPickUpable_OnPickUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPickUpable, nullptr, "OnPickUp", nullptr, nullptr, Z_Construct_UFunction_UPickUpable_OnPickUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickUpable_OnPickUp_Statics::PropPointers), sizeof(PickUpable_eventOnPickUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPickUpable_OnPickUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPickUpable_OnPickUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(PickUpable_eventOnPickUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPickUpable_OnPickUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPickUpable_OnPickUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPickUpable::execOnPickUp)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPickUp_Implementation(Z_Param_Target);
	P_NATIVE_END;
}
// End Interface UPickUpable Function OnPickUp

// Begin Interface UPickUpable
void UPickUpable::StaticRegisterNativesUPickUpable()
{
	UClass* Class = UPickUpable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPickUp", &IPickUpable::execOnPickUp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPickUpable);
UClass* Z_Construct_UClass_UPickUpable_NoRegister()
{
	return UPickUpable::StaticClass();
}
struct Z_Construct_UClass_UPickUpable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item/PickUpable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPickUpable_OnPickUp, "OnPickUp" }, // 2924040281
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPickUpable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPickUpable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_KSHUnrealCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPickUpable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPickUpable_Statics::ClassParams = {
	&UPickUpable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPickUpable_Statics::Class_MetaDataParams), Z_Construct_UClass_UPickUpable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPickUpable()
{
	if (!Z_Registration_Info_UClass_UPickUpable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPickUpable.OuterSingleton, Z_Construct_UClass_UPickUpable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPickUpable.OuterSingleton;
}
template<> KSHUNREALCPP_API UClass* StaticClass<UPickUpable>()
{
	return UPickUpable::StaticClass();
}
UPickUpable::UPickUpable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPickUpable);
UPickUpable::~UPickUpable() {}
// End Interface UPickUpable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUpable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPickUpable, UPickUpable::StaticClass, TEXT("UPickUpable"), &Z_Registration_Info_UClass_UPickUpable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPickUpable), 1686627259U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUpable_h_999423454(TEXT("/Script/KSHUnrealCPP"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUpable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUpable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
