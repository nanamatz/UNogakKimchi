// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RossiNante/MenuHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuHUD() {}
// Cross Module References
	ROSSINANTE_API UClass* Z_Construct_UClass_AMenuHUD_NoRegister();
	ROSSINANTE_API UClass* Z_Construct_UClass_AMenuHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_RossiNante();
// End Cross Module References
	void AMenuHUD::StaticRegisterNativesAMenuHUD()
	{
	}
	UClass* Z_Construct_UClass_AMenuHUD_NoRegister()
	{
		return AMenuHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMenuHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMenuHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_RossiNante,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMenuHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MenuHUD.h" },
		{ "ModuleRelativePath", "MenuHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMenuHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMenuHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMenuHUD_Statics::ClassParams = {
		&AMenuHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMenuHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMenuHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMenuHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMenuHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMenuHUD, 814812749);
	template<> ROSSINANTE_API UClass* StaticClass<AMenuHUD>()
	{
		return AMenuHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMenuHUD(Z_Construct_UClass_AMenuHUD, &AMenuHUD::StaticClass, TEXT("/Script/RossiNante"), TEXT("AMenuHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMenuHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
