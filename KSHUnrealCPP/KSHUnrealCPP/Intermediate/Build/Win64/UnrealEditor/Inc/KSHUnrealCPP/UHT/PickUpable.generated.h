// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/PickUpable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef KSHUNREALCPP_PickUpable_generated_h
#error "PickUpable.generated.h already included, missing '#pragma once' in PickUpable.h"
#endif
#define KSHUNREALCPP_PickUpable_generated_h

#define FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUpable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPickUp_Implementation(AActor* Target) {}; \
	DECLARE_FUNCTION(execOnPickUp);


#define FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUpable_h_13_CALLBACK_WRAPPERS
#define FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUpable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KSHUNREALCPP_API UPickUpable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPickUpable(UPickUpable&&); \
	UPickUpable(const UPickUpable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KSHUNREALCPP_API, UPickUpable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickUpable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickUpable) \
	KSHUNREALCPP_API virtual ~UPickUpable();


#define FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUpable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPickUpable(); \
	friend struct Z_Construct_UClass_UPickUpable_Statics; \
public: \
	DECLARE_CLASS(UPickUpable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/KSHUnrealCPP"), KSHUNREALCPP_API) \
	DECLARE_SERIALIZER(UPickUpable)


#define FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUpable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUpable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUpable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUpable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPickUpable() {} \
public: \
	typedef UPickUpable UClassType; \
	typedef IPickUpable ThisClass; \
	static void Execute_OnPickUp(UObject* O, AActor* Target); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUpable_h_10_PROLOG
#define FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUpable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUpable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUpable_h_13_CALLBACK_WRAPPERS \
	FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUpable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KSHUNREALCPP_API UClass* StaticClass<class UPickUpable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Item_PickUpable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
