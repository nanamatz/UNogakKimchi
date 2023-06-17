// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROSSINANTE_MenuWidget_generated_h
#error "MenuWidget.generated.h already included, missing '#pragma once' in MenuWidget.h"
#endif
#define ROSSINANTE_MenuWidget_generated_h

#define RossiNante_Source_RossiNante_MenuWidget_h_16_SPARSE_DATA
#define RossiNante_Source_RossiNante_MenuWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnStatMenuButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStatMenuButtonClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPlayMenuButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPlayMenuButtonClicked(); \
		P_NATIVE_END; \
	}


#define RossiNante_Source_RossiNante_MenuWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnStatMenuButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStatMenuButtonClicked(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnPlayMenuButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPlayMenuButtonClicked(); \
		P_NATIVE_END; \
	}


#define RossiNante_Source_RossiNante_MenuWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenuWidget(); \
	friend struct Z_Construct_UClass_UMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(UMenuWidget)


#define RossiNante_Source_RossiNante_MenuWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMenuWidget(); \
	friend struct Z_Construct_UClass_UMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(UMenuWidget)


#define RossiNante_Source_RossiNante_MenuWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMenuWidget(UMenuWidget&&); \
	NO_API UMenuWidget(const UMenuWidget&); \
public:


#define RossiNante_Source_RossiNante_MenuWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMenuWidget(UMenuWidget&&); \
	NO_API UMenuWidget(const UMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuWidget)


#define RossiNante_Source_RossiNante_MenuWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BT_PlayMenu() { return STRUCT_OFFSET(UMenuWidget, BT_PlayMenu); } \
	FORCEINLINE static uint32 __PPO__BT_StatMenu() { return STRUCT_OFFSET(UMenuWidget, BT_StatMenu); }


#define RossiNante_Source_RossiNante_MenuWidget_h_13_PROLOG
#define RossiNante_Source_RossiNante_MenuWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_MenuWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_MenuWidget_h_16_SPARSE_DATA \
	RossiNante_Source_RossiNante_MenuWidget_h_16_RPC_WRAPPERS \
	RossiNante_Source_RossiNante_MenuWidget_h_16_INCLASS \
	RossiNante_Source_RossiNante_MenuWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RossiNante_Source_RossiNante_MenuWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_MenuWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_MenuWidget_h_16_SPARSE_DATA \
	RossiNante_Source_RossiNante_MenuWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_MenuWidget_h_16_INCLASS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_MenuWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSSINANTE_API UClass* StaticClass<class UMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RossiNante_Source_RossiNante_MenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
