// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RossiNante/Portal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortal() {}
// Cross Module References
	ROSSINANTE_API UClass* Z_Construct_UClass_APortal_NoRegister();
	ROSSINANTE_API UClass* Z_Construct_UClass_APortal();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RossiNante();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void APortal::StaticRegisterNativesAPortal()
	{
	}
	UClass* Z_Construct_UClass_APortal_NoRegister()
	{
		return APortal::StaticClass();
	}
	struct Z_Construct_UClass_APortal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PortalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootScene;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextLevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NextLevelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APortal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RossiNante,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Portal.h" },
		{ "ModuleRelativePath", "Portal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_PortalBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Portal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Portal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_PortalBox = { "PortalBox", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortal, PortalBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_PortalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_PortalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_RootScene_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Portal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Portal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortal, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_RootScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_RootScene_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_NextLevelName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Portal" },
		{ "ModuleRelativePath", "Portal.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_APortal_Statics::NewProp_NextLevelName = { "NextLevelName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APortal, NextLevelName), METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::NewProp_NextLevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_NextLevelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APortal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_PortalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_RootScene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_NextLevelName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APortal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APortal_Statics::ClassParams = {
		&APortal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APortal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APortal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APortal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APortal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APortal, 554078159);
	template<> ROSSINANTE_API UClass* StaticClass<APortal>()
	{
		return APortal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APortal(Z_Construct_UClass_APortal, &APortal::StaticClass, TEXT("/Script/RossiNante"), TEXT("APortal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APortal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
