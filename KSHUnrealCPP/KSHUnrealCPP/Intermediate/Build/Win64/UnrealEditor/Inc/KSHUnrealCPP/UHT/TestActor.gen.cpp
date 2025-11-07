// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KSHUnrealCPP/Public/Test/TestActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
KSHUNREALCPP_API UClass* Z_Construct_UClass_ATestActor();
KSHUNREALCPP_API UClass* Z_Construct_UClass_ATestActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_KSHUnrealCPP();
// End Cross Module References

// Begin Class ATestActor Function Test_BlueprintNativeEvent
static const FName NAME_ATestActor_Test_BlueprintNativeEvent = FName(TEXT("Test_BlueprintNativeEvent"));
void ATestActor::Test_BlueprintNativeEvent()
{
	UFunction* Func = FindFunctionChecked(NAME_ATestActor_Test_BlueprintNativeEvent);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Test_BlueprintNativeEvent_Implementation();
	}
}
struct Z_Construct_UFunction_ATestActor_Test_BlueprintNativeEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test/TestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestActor_Test_BlueprintNativeEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestActor, nullptr, "Test_BlueprintNativeEvent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestActor_Test_BlueprintNativeEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestActor_Test_BlueprintNativeEvent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATestActor_Test_BlueprintNativeEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestActor_Test_BlueprintNativeEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATestActor::execTest_BlueprintNativeEvent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Test_BlueprintNativeEvent_Implementation();
	P_NATIVE_END;
}
// End Class ATestActor Function Test_BlueprintNativeEvent

// Begin Class ATestActor Function Test_ImplementableFunction
static const FName NAME_ATestActor_Test_ImplementableFunction = FName(TEXT("Test_ImplementableFunction"));
void ATestActor::Test_ImplementableFunction()
{
	UFunction* Func = FindFunctionChecked(NAME_ATestActor_Test_ImplementableFunction);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ATestActor_Test_ImplementableFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test/TestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestActor_Test_ImplementableFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestActor, nullptr, "Test_ImplementableFunction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestActor_Test_ImplementableFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestActor_Test_ImplementableFunction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATestActor_Test_ImplementableFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestActor_Test_ImplementableFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATestActor Function Test_ImplementableFunction

// Begin Class ATestActor Function Test_UFunction
struct Z_Construct_UFunction_ATestActor_Test_UFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Test/TestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestActor_Test_UFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestActor, nullptr, "Test_UFunction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATestActor_Test_UFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATestActor_Test_UFunction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATestActor_Test_UFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestActor_Test_UFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATestActor::execTest_UFunction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Test_UFunction();
	P_NATIVE_END;
}
// End Class ATestActor Function Test_UFunction

// Begin Class ATestActor
void ATestActor::StaticRegisterNativesATestActor()
{
	UClass* Class = ATestActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Test_BlueprintNativeEvent", &ATestActor::execTest_BlueprintNativeEvent },
		{ "Test_UFunction", &ATestActor::execTest_UFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestActor);
UClass* Z_Construct_UClass_ATestActor_NoRegister()
{
	return ATestActor::StaticClass();
}
struct Z_Construct_UClass_ATestActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//#include \"TestActor.generated.h\"\n//UCLASS()\n//GENERATED_BODY()\n" },
#endif
		{ "IncludePath", "Test/TestActor.h" },
		{ "ModuleRelativePath", "Public/Test/TestActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "#include \"TestActor.generated.h\"\nUCLASS()\nGENERATED_BODY()" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data1_MetaData[] = {
		{ "Category", "Test\xeb\xb3\x80\xec\x88\x98" },
		{ "ModuleRelativePath", "Public/Test/TestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data2_MetaData[] = {
		{ "Category", "Test\xeb\xb3\x80\xec\x88\x98" },
		{ "ModuleRelativePath", "Public/Test/TestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data3_MetaData[] = {
		{ "Category", "Test\xeb\xb3\x80\xec\x88\x98" },
		{ "ModuleRelativePath", "Public/Test/TestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data5_MetaData[] = {
		{ "Category", "Test\xeb\xb3\x80\xec\x88\x98" },
		{ "ModuleRelativePath", "Public/Test/TestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data6_MetaData[] = {
		{ "Category", "Test\xeb\xb3\x80\xec\x88\x98" },
		{ "ModuleRelativePath", "Public/Test/TestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data7_MetaData[] = {
		{ "Category", "Test\xeb\xb3\x80\xec\x88\x98" },
		{ "ModuleRelativePath", "Public/Test/TestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data8_MetaData[] = {
		{ "Category", "Test\xeb\xb3\x80\xec\x88\x98" },
		{ "ModuleRelativePath", "Public/Test/TestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data9_MetaData[] = {
		{ "Category", "Test\xeb\xb3\x80\xec\x88\x98" },
		{ "ModuleRelativePath", "Public/Test/TestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data10_MetaData[] = {
		{ "Category", "Test\xeb\xb3\x80\xec\x88\x98" },
		{ "ModuleRelativePath", "Public/Test/TestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data2;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data3;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data5;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data6;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data7;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data8;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data9;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data10;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestActor_Test_BlueprintNativeEvent, "Test_BlueprintNativeEvent" }, // 4293173439
		{ &Z_Construct_UFunction_ATestActor_Test_ImplementableFunction, "Test_ImplementableFunction" }, // 2900941158
		{ &Z_Construct_UFunction_ATestActor_Test_UFunction, "Test_UFunction" }, // 2156767427
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_Data1 = { "Data1", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActor, Data1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data1_MetaData), NewProp_Data1_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_Data2 = { "Data2", nullptr, (EPropertyFlags)0x0020080000030001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActor, Data2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data2_MetaData), NewProp_Data2_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_Data3 = { "Data3", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActor, Data3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data3_MetaData), NewProp_Data3_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_Data5 = { "Data5", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActor, Data5), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data5_MetaData), NewProp_Data5_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_Data6 = { "Data6", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActor, Data6), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data6_MetaData), NewProp_Data6_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_Data7 = { "Data7", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActor, Data7), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data7_MetaData), NewProp_Data7_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_Data8 = { "Data8", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActor, Data8), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data8_MetaData), NewProp_Data8_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_Data9 = { "Data9", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActor, Data9), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data9_MetaData), NewProp_Data9_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestActor_Statics::NewProp_Data10 = { "Data10", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATestActor, Data10), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data10_MetaData), NewProp_Data10_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_Data1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_Data2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_Data3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_Data5,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_Data6,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_Data7,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_Data8,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_Data9,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestActor_Statics::NewProp_Data10,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATestActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_KSHUnrealCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestActor_Statics::ClassParams = {
	&ATestActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATestActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATestActor()
{
	if (!Z_Registration_Info_UClass_ATestActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestActor.OuterSingleton, Z_Construct_UClass_ATestActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestActor.OuterSingleton;
}
template<> KSHUNREALCPP_API UClass* StaticClass<ATestActor>()
{
	return ATestActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATestActor);
ATestActor::~ATestActor() {}
// End Class ATestActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Test_TestActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestActor, ATestActor::StaticClass, TEXT("ATestActor"), &Z_Registration_Info_UClass_ATestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestActor), 892329443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Test_TestActor_h_2050074631(TEXT("/Script/KSHUnrealCPP"),
	Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Test_TestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Test_TestActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
