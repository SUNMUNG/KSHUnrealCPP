// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSHUnrealCPP/Public/Player/InventoryOwner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryOwner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UInventoryOwner();
KSHUNREALCPP_API UClass* Z_Construct_UClass_UInventoryOwner_NoRegister();
KSHUNREALCPP_API UEnum* Z_Construct_UEnum_KSHUnrealCPP_EItemCode();
UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP();
// End Cross Module References

// Begin Interface UInventoryOwner Function AddItem
struct InventoryOwner_eventAddItem_Parms
{
	EItemCode Code;
};
void IInventoryOwner::AddItem(EItemCode Code)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddItem instead.");
}
static FName NAME_UInventoryOwner_AddItem = FName(TEXT("AddItem"));
void IInventoryOwner::Execute_AddItem(UObject* O, EItemCode Code)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryOwner::StaticClass()));
	InventoryOwner_eventAddItem_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryOwner_AddItem);
	if (Func)
	{
		Parms.Code=Code;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IInventoryOwner*)(O->GetNativeInterfaceAddress(UInventoryOwner::StaticClass())))
	{
		I->AddItem_Implementation(Code);
	}
}
struct Z_Construct_UFunction_UInventoryOwner_AddItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "Public/Player/InventoryOwner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Code_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Code;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventoryOwner_AddItem_Statics::NewProp_Code_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInventoryOwner_AddItem_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryOwner_eventAddItem_Parms, Code), Z_Construct_UEnum_KSHUnrealCPP_EItemCode, METADATA_PARAMS(0, nullptr) }; // 3628415129
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryOwner_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryOwner_AddItem_Statics::NewProp_Code_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryOwner_AddItem_Statics::NewProp_Code,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryOwner_AddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryOwner_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryOwner, nullptr, "AddItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryOwner_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryOwner_AddItem_Statics::PropPointers), sizeof(InventoryOwner_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryOwner_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryOwner_AddItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryOwner_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryOwner_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryOwner_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IInventoryOwner::execAddItem)
{
	P_GET_ENUM(EItemCode,Z_Param_Code);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItem_Implementation(EItemCode(Z_Param_Code));
	P_NATIVE_END;
}
// End Interface UInventoryOwner Function AddItem

// Begin Interface UInventoryOwner
void UInventoryOwner::StaticRegisterNativesUInventoryOwner()
{
	UClass* Class = UInventoryOwner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItem", &IInventoryOwner::execAddItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryOwner);
UClass* Z_Construct_UClass_UInventoryOwner_NoRegister()
{
	return UInventoryOwner::StaticClass();
}
struct Z_Construct_UClass_UInventoryOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/InventoryOwner.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryOwner_AddItem, "AddItem" }, // 666519338
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInventoryOwner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryOwner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_KSHUnrealCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryOwner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryOwner_Statics::ClassParams = {
	&UInventoryOwner::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryOwner_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryOwner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryOwner()
{
	if (!Z_Registration_Info_UClass_UInventoryOwner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryOwner.OuterSingleton, Z_Construct_UClass_UInventoryOwner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryOwner.OuterSingleton;
}
template<> KSHUNREALCPP_API UClass* StaticClass<UInventoryOwner>()
{
	return UInventoryOwner::StaticClass();
}
UInventoryOwner::UInventoryOwner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryOwner);
UInventoryOwner::~UInventoryOwner() {}
// End Interface UInventoryOwner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_InventoryOwner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryOwner, UInventoryOwner::StaticClass, TEXT("UInventoryOwner"), &Z_Registration_Info_UClass_UInventoryOwner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryOwner), 401072001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_InventoryOwner_h_243777287(TEXT("/Script/KSHUnrealCPP"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_InventoryOwner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_InventoryOwner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
