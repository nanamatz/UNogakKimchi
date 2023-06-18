// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROSSINANTE_MyStatComponent_generated_h
#error "MyStatComponent.generated.h already included, missing '#pragma once' in MyStatComponent.h"
#endif
#define ROSSINANTE_MyStatComponent_generated_h

#define RossiNante_Source_RossiNante_MyStatComponent_h_13_SPARSE_DATA
#define RossiNante_Source_RossiNante_MyStatComponent_h_13_RPC_WRAPPERS
#define RossiNante_Source_RossiNante_MyStatComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define RossiNante_Source_RossiNante_MyStatComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyStatComponent(); \
	friend struct Z_Construct_UClass_UMyStatComponent_Statics; \
public: \
	DECLARE_CLASS(UMyStatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(UMyStatComponent)


#define RossiNante_Source_RossiNante_MyStatComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMyStatComponent(); \
	friend struct Z_Construct_UClass_UMyStatComponent_Statics; \
public: \
	DECLARE_CLASS(UMyStatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RossiNante"), NO_API) \
	DECLARE_SERIALIZER(UMyStatComponent)


#define RossiNante_Source_RossiNante_MyStatComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyStatComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyStatComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyStatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyStatComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyStatComponent(UMyStatComponent&&); \
	NO_API UMyStatComponent(const UMyStatComponent&); \
public:


#define RossiNante_Source_RossiNante_MyStatComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyStatComponent(UMyStatComponent&&); \
	NO_API UMyStatComponent(const UMyStatComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyStatComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyStatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyStatComponent)


#define RossiNante_Source_RossiNante_MyStatComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Level() { return STRUCT_OFFSET(UMyStatComponent, Level); } \
	FORCEINLINE static uint32 __PPO__Attack() { return STRUCT_OFFSET(UMyStatComponent, Attack); } \
	FORCEINLINE static uint32 __PPO__Hp() { return STRUCT_OFFSET(UMyStatComponent, Hp); }


#define RossiNante_Source_RossiNante_MyStatComponent_h_10_PROLOG
#define RossiNante_Source_RossiNante_MyStatComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_MyStatComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_MyStatComponent_h_13_SPARSE_DATA \
	RossiNante_Source_RossiNante_MyStatComponent_h_13_RPC_WRAPPERS \
	RossiNante_Source_RossiNante_MyStatComponent_h_13_INCLASS \
	RossiNante_Source_RossiNante_MyStatComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RossiNante_Source_RossiNante_MyStatComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RossiNante_Source_RossiNante_MyStatComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	RossiNante_Source_RossiNante_MyStatComponent_h_13_SPARSE_DATA \
	RossiNante_Source_RossiNante_MyStatComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_MyStatComponent_h_13_INCLASS_NO_PURE_DECLS \
	RossiNante_Source_RossiNante_MyStatComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROSSINANTE_API UClass* StaticClass<class UMyStatComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RossiNante_Source_RossiNante_MyStatComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
