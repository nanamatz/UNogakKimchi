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

<<<<<<< HEAD
#define RossiNante_Source_RossiNante_LoginWidget_h_18_SPARSE_DATA
#define RossiNante_Source_RossiNante_LoginWidget_h_18_RPC_WRAPPERS \
=======
#define RossiNante_Source_RossiNante_LoginWidget_h_19_SPARSE_DATA
#define RossiNante_Source_RossiNante_LoginWidget_h_19_RPC_WRAPPERS \
>>>>>>> jeonghoon
 \
	DECLARE_FUNCTION(execOnSignInButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSignInButtonClicked(); \
		P_NATIVE_END; \
	}


<<<<<<< HEAD
#define RossiNante_Source_RossiNante_LoginWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
=======
#define RossiNante_Source_RossiNante_LoginWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
>>>>>>> jeonghoon
 \
	DECLARE_FUNCTION(execOnSignInButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSignInButtonClicked(); \
		P_NATIVE_END; \
	}


<<<<<<< HEAD
#define RossiNante_Source_RossiNante_LoginWidget_h_18_INCLASS_NO_PURE_DECLS \
=======
#define RossiNante_Source_RossiNante_LoginWidget_h_19_INCLASS_NO_PURE_DECLS \
>>>>>>> jeonghoon
private: \
	static void StaticRegisterNativesULoginWidget(); \
	friend struct Z_Construct_UClass_ULoginWidget_Statics; \
public: \
	DECLARE_CLASS(ULoginWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(ULoginWidget)


<<<<<<< HEAD
#define RossiNante_Source_RossiNante_LoginWidget_h_18_INCLASS \
=======
#define RossiNante_Source_RossiNante_LoginWidget_h_19_INCLASS \
>>>>>>> jeonghoon
private: \
	static void StaticRegisterNativesULoginWidget(); \
	friend struct Z_Construct_UClass_ULoginWidget_Statics; \
public: \
	DECLARE_CLASS(ULoginWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(ULoginWidget)


<<<<<<< HEAD
#define RossiNante_Source_RossiNante_LoginWidget_h_18_STANDARD_CONSTRUCTORS \
=======
#define RossiNante_Source_RossiNante_LoginWidget_h_19_STANDARD_CONSTRUCTORS \
>>>>>>> jeonghoon
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


<<<<<<< HEAD
#define RossiNante_Source_RossiNante_LoginWidget_h_18_ENHANCED_CONSTRUCTORS \
=======
#define RossiNante_Source_RossiNante_LoginWidget_h_19_ENHANCED_CONSTRUCTORS \
>>>>>>> jeonghoon
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


<<<<<<< HEAD
#define RossiNante_Source_RossiNante_LoginWidget_h_18_PRIVATE_PROPERTY_OFFSET \
=======
#define RossiNante_Source_RossiNante_LoginWidget_h_19_PRIVATE_PROPERTY_OFFSET \
>>>>>>> jeonghoon
	FORCEINLINE static uint32 __PPO__ID() { return STRUCT_OFFSET(ULoginWidget, ID); } \
	FORCEINLINE static uint32 __PPO__PW() { return STRUCT_OFFSET(ULoginWidget, PW); } \
	FORCEINLINE static uint32 __PPO__BT_SignUp() { return STRUCT_OFFSET(ULoginWidget, BT_SignUp); } \
	FORCEINLINE static uint32 __PPO__BT_SignIn() { return STRUCT_OFFSET(ULoginWidget, BT_SignIn); }


<<<<<<< HEAD
#define RossiNante_Source_RossiNante_LoginWidget_h_15_PROLOG
#define RossiNante_Source_RossiNante_LoginWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_LoginWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_LoginWidget_h_18_SPARSE_DATA \
	RossiNante_Source_RossiNante_LoginWidget_h_18_RPC_WRAPPERS \
	RossiNante_Source_RossiNante_LoginWidget_h_18_INCLASS \
	RossiNante_Source_RossiNante_LoginWidget_h_18_STANDARD_CONSTRUCTORS \
=======
#define RossiNante_Source_RossiNante_LoginWidget_h_16_PROLOG
#define RossiNante_Source_RossiNante_LoginWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_LoginWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_LoginWidget_h_19_SPARSE_DATA \
	RossiNante_Source_RossiNante_LoginWidget_h_19_RPC_WRAPPERS \
	RossiNante_Source_RossiNante_LoginWidget_h_19_INCLASS \
	RossiNante_Source_RossiNante_LoginWidget_h_19_STANDARD_CONSTRUCTORS \
>>>>>>> jeonghoon
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


<<<<<<< HEAD
#define RossiNante_Source_RossiNante_LoginWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_LoginWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_LoginWidget_h_18_SPARSE_DATA \
	RossiNante_Source_RossiNante_LoginWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_LoginWidget_h_18_INCLASS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_LoginWidget_h_18_ENHANCED_CONSTRUCTORS \
=======
#define RossiNante_Source_RossiNante_LoginWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_LoginWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_LoginWidget_h_19_SPARSE_DATA \
	RossiNante_Source_RossiNante_LoginWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_LoginWidget_h_19_INCLASS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_LoginWidget_h_19_ENHANCED_CONSTRUCTORS \
>>>>>>> jeonghoon
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSSINANTE_API UClass* StaticClass<class ULoginWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RossiNante_Source_RossiNante_LoginWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
