// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROSSINANTE_StatMenuWidget_generated_h
#error "StatMenuWidget.generated.h already included, missing '#pragma once' in StatMenuWidget.h"
#endif
#define ROSSINANTE_StatMenuWidget_generated_h

#define RossiNante_Source_RossiNante_StatMenuWidget_h_17_SPARSE_DATA
#define RossiNante_Source_RossiNante_StatMenuWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnUpgrade1ButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUpgrade1ButtonClicked(); \
		P_NATIVE_END; \
	}


#define RossiNante_Source_RossiNante_StatMenuWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnUpgrade1ButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUpgrade1ButtonClicked(); \
		P_NATIVE_END; \
	}


#define RossiNante_Source_RossiNante_StatMenuWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatMenuWidget(); \
	friend struct Z_Construct_UClass_UStatMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UStatMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(UStatMenuWidget)


#define RossiNante_Source_RossiNante_StatMenuWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUStatMenuWidget(); \
	friend struct Z_Construct_UClass_UStatMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UStatMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(UStatMenuWidget)


#define RossiNante_Source_RossiNante_StatMenuWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatMenuWidget(UStatMenuWidget&&); \
	NO_API UStatMenuWidget(const UStatMenuWidget&); \
public:


#define RossiNante_Source_RossiNante_StatMenuWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStatMenuWidget(UStatMenuWidget&&); \
	NO_API UStatMenuWidget(const UStatMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatMenuWidget)


#define RossiNante_Source_RossiNante_StatMenuWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BT_Upgrade1() { return STRUCT_OFFSET(UStatMenuWidget, BT_Upgrade1); }


#define RossiNante_Source_RossiNante_StatMenuWidget_h_14_PROLOG
#define RossiNante_Source_RossiNante_StatMenuWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_StatMenuWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_StatMenuWidget_h_17_SPARSE_DATA \
	RossiNante_Source_RossiNante_StatMenuWidget_h_17_RPC_WRAPPERS \
	RossiNante_Source_RossiNante_StatMenuWidget_h_17_INCLASS \
	RossiNante_Source_RossiNante_StatMenuWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RossiNante_Source_RossiNante_StatMenuWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_StatMenuWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_StatMenuWidget_h_17_SPARSE_DATA \
	RossiNante_Source_RossiNante_StatMenuWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_StatMenuWidget_h_17_INCLASS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_StatMenuWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSSINANTE_API UClass* StaticClass<class UStatMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RossiNante_Source_RossiNante_StatMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
