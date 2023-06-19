// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROSSINANTE_PlayMenuWidget_generated_h
#error "PlayMenuWidget.generated.h already included, missing '#pragma once' in PlayMenuWidget.h"
#endif
#define ROSSINANTE_PlayMenuWidget_generated_h

#define RossiNante_Source_RossiNante_PlayMenuWidget_h_18_SPARSE_DATA
#define RossiNante_Source_RossiNante_PlayMenuWidget_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPlayButtonClicked(); \
		P_NATIVE_END; \
	}


#define RossiNante_Source_RossiNante_PlayMenuWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnPlayButtonClicked(); \
		P_NATIVE_END; \
	}


#define RossiNante_Source_RossiNante_PlayMenuWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayMenuWidget(); \
	friend struct Z_Construct_UClass_UPlayMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(UPlayMenuWidget)


#define RossiNante_Source_RossiNante_PlayMenuWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUPlayMenuWidget(); \
	friend struct Z_Construct_UClass_UPlayMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(UPlayMenuWidget)


#define RossiNante_Source_RossiNante_PlayMenuWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayMenuWidget(UPlayMenuWidget&&); \
	NO_API UPlayMenuWidget(const UPlayMenuWidget&); \
public:


#define RossiNante_Source_RossiNante_PlayMenuWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayMenuWidget(UPlayMenuWidget&&); \
	NO_API UPlayMenuWidget(const UPlayMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayMenuWidget)


#define RossiNante_Source_RossiNante_PlayMenuWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BT_Play() { return STRUCT_OFFSET(UPlayMenuWidget, BT_Play); } \
	FORCEINLINE static uint32 __PPO__TB_LevelValue() { return STRUCT_OFFSET(UPlayMenuWidget, TB_LevelValue); } \
	FORCEINLINE static uint32 __PPO__TB_ExpValue() { return STRUCT_OFFSET(UPlayMenuWidget, TB_ExpValue); }


#define RossiNante_Source_RossiNante_PlayMenuWidget_h_15_PROLOG
#define RossiNante_Source_RossiNante_PlayMenuWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_PlayMenuWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_PlayMenuWidget_h_18_SPARSE_DATA \
	RossiNante_Source_RossiNante_PlayMenuWidget_h_18_RPC_WRAPPERS \
	RossiNante_Source_RossiNante_PlayMenuWidget_h_18_INCLASS \
	RossiNante_Source_RossiNante_PlayMenuWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RossiNante_Source_RossiNante_PlayMenuWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_PlayMenuWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_PlayMenuWidget_h_18_SPARSE_DATA \
	RossiNante_Source_RossiNante_PlayMenuWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_PlayMenuWidget_h_18_INCLASS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_PlayMenuWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSSINANTE_API UClass* StaticClass<class UPlayMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RossiNante_Source_RossiNante_PlayMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
