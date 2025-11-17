// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/InventoryOwner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EItemCode : uint8;
#ifdef KSHUNREALCPP_InventoryOwner_generated_h
#error "InventoryOwner.generated.h already included, missing '#pragma once' in InventoryOwner.h"
#endif
#define KSHUNREALCPP_InventoryOwner_generated_h

#define FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_InventoryOwner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AddItem_Implementation(EItemCode Code) {}; \
	DECLARE_FUNCTION(execAddItem);


#define FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_InventoryOwner_h_14_CALLBACK_WRAPPERS
#define FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_InventoryOwner_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KSHUNREALCPP_API UInventoryOwner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryOwner(UInventoryOwner&&); \
	UInventoryOwner(const UInventoryOwner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KSHUNREALCPP_API, UInventoryOwner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryOwner); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryOwner) \
	KSHUNREALCPP_API virtual ~UInventoryOwner();


#define FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_InventoryOwner_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInventoryOwner(); \
	friend struct Z_Construct_UClass_UInventoryOwner_Statics; \
public: \
	DECLARE_CLASS(UInventoryOwner, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/KSHUnrealCPP"), KSHUNREALCPP_API) \
	DECLARE_SERIALIZER(UInventoryOwner)


#define FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_InventoryOwner_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_InventoryOwner_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_InventoryOwner_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_InventoryOwner_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInventoryOwner() {} \
public: \
	typedef UInventoryOwner UClassType; \
	typedef IInventoryOwner ThisClass; \
	static void Execute_AddItem(UObject* O, EItemCode Code); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_InventoryOwner_h_11_PROLOG
#define FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_InventoryOwner_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_InventoryOwner_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_InventoryOwner_h_14_CALLBACK_WRAPPERS \
	FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_InventoryOwner_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KSHUNREALCPP_API UClass* StaticClass<class UInventoryOwner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_KGA_Documents_Unreal_Projects_KSHUnrealCPP07_KSHUnrealCPP_KSHUnrealCPP_KSHUnrealCPP_Source_KSHUnrealCPP_Public_Player_InventoryOwner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
