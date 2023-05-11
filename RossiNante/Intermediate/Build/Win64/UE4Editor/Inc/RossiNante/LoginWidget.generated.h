// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROSSINANTE_LoginWidget_generated_h
#error "LoginWidget.generated.h already included, missing '#pragma once' in LoginWidget.h"
#endif
#define ROSSINANTE_LoginWidget_generated_h

#define RossiNante_Source_RossiNante_LoginWidget_h_18_SPARSE_DATA
#define RossiNante_Source_RossiNante_LoginWidget_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSignInButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSignInButtonClicked(); \
		P_NATIVE_END; \
	}


#define RossiNante_Source_RossiNante_LoginWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSignInButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSignInButtonClicked(); \
		P_NATIVE_END; \
	}


#define RossiNante_Source_RossiNante_LoginWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoginWidget(); \
	friend struct Z_Construct_UClass_ULoginWidget_Statics; \
public: \
	DECLARE_CLASS(ULoginWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(ULoginWidget)


#define RossiNante_Source_RossiNante_LoginWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesULoginWidget(); \
	friend struct Z_Construct_UClass_ULoginWidget_Statics; \
public: \
	DECLARE_CLASS(ULoginWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(ULoginWidget)


#define RossiNante_Source_RossiNante_LoginWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoginWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoginWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoginWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoginWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoginWidget(ULoginWidget&&); \
	NO_API ULoginWidget(const ULoginWidget&); \
public:


#define RossiNante_Source_RossiNante_LoginWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoginWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoginWidget(ULoginWidget&&); \
	NO_API ULoginWidget(const ULoginWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoginWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoginWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoginWidget)


#define RossiNante_Source_RossiNante_LoginWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ID() { return STRUCT_OFFSET(ULoginWidget, ID); } \
	FORCEINLINE static uint32 __PPO__PW() { return STRUCT_OFFSET(ULoginWidget, PW); } \
	FORCEINLINE static uint32 __PPO__BT_SignUp() { return STRUCT_OFFSET(ULoginWidget, BT_SignUp); } \
	FORCEINLINE static uint32 __PPO__BT_SignIn() { return STRUCT_OFFSET(ULoginWidget, BT_SignIn); }


#define RossiNante_Source_RossiNante_LoginWidget_h_15_PROLOG
#define RossiNante_Source_RossiNante_LoginWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_LoginWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_LoginWidget_h_18_SPARSE_DATA \
	RossiNante_Source_RossiNante_LoginWidget_h_18_RPC_WRAPPERS \
	RossiNante_Source_RossiNante_LoginWidget_h_18_INCLASS \
	RossiNante_Source_RossiNante_LoginWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RossiNante_Source_RossiNante_LoginWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_LoginWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_LoginWidget_h_18_SPARSE_DATA \
	RossiNante_Source_RossiNante_LoginWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_LoginWidget_h_18_INCLASS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_LoginWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSSINANTE_API UClass* StaticClass<class ULoginWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RossiNante_Source_RossiNante_LoginWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
