// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RossiNante/RossiNanteGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRossiNanteGameModeBase() {}
// Cross Module References
	ROSSINANTE_API UClass* Z_Construct_UClass_ARossiNanteGameModeBase_NoRegister();
	ROSSINANTE_API UClass* Z_Construct_UClass_ARossiNanteGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RossiNante();
// End Cross Module References
	void ARossiNanteGameModeBase::StaticRegisterNativesARossiNanteGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARossiNanteGameModeBase_NoRegister()
	{
		return ARossiNanteGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARossiNanteGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARossiNanteGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RossiNante,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARossiNanteGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RossiNanteGameModeBase.h" },
		{ "ModuleRelativePath", "RossiNanteGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARossiNanteGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARossiNanteGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARossiNanteGameModeBase_Statics::ClassParams = {
		&ARossiNanteGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARossiNanteGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARossiNanteGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARossiNanteGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARossiNanteGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARossiNanteGameModeBase, 2401957582);
	template<> ROSSINANTE_API UClass* StaticClass<ARossiNanteGameModeBase>()
	{
		return ARossiNanteGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARossiNanteGameModeBase(Z_Construct_UClass_ARossiNanteGameModeBase, &ARossiNanteGameModeBase::StaticClass, TEXT("/Script/RossiNante"), TEXT("ARossiNanteGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARossiNanteGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
