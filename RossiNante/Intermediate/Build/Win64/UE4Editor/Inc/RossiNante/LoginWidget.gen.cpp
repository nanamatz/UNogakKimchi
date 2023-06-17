// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RossiNante/LoginWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoginWidget() {}
// Cross Module References
	ROSSINANTE_API UClass* Z_Construct_UClass_ULoginWidget_NoRegister();
	ROSSINANTE_API UClass* Z_Construct_UClass_ULoginWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_RossiNante();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_ULoginWidget_OnSignInButtonClicked();
	ROSSINANTE_API UFunction* Z_Construct_UFunction_ULoginWidget_OnSignUpButtonClicked();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableText_NoRegister();
// End Cross Module References
	void ULoginWidget::StaticRegisterNativesULoginWidget()
	{
		UClass* Class = ULoginWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSignInButtonClicked", &ULoginWidget::execOnSignInButtonClicked },
			{ "OnSignUpButtonClicked", &ULoginWidget::execOnSignUpButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoginWidget_OnSignInButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoginWidget_OnSignInButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LoginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoginWidget_OnSignInButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoginWidget, nullptr, "OnSignInButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoginWidget_OnSignInButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoginWidget_OnSignInButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoginWidget_OnSignInButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoginWidget_OnSignInButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoginWidget_OnSignUpButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoginWidget_OnSignUpButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// BT_SignIn ??\xc6\xb0 \xc5\xac?? ?\xcc\xba?\xc6\xae ?\xda\xb5\xe9\xb7\xaf ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "LoginWidget.h" },
		{ "ToolTip", "BT_SignIn ??\xc6\xb0 \xc5\xac?? ?\xcc\xba?\xc6\xae ?\xda\xb5\xe9\xb7\xaf ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoginWidget_OnSignUpButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoginWidget, nullptr, "OnSignUpButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoginWidget_OnSignUpButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoginWidget_OnSignUpButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoginWidget_OnSignUpButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULoginWidget_OnSignUpButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULoginWidget_NoRegister()
	{
		return ULoginWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULoginWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BT_SignIn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BT_SignIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BT_SignUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BT_SignUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PW_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PW;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoginWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_RossiNante,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoginWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoginWidget_OnSignInButtonClicked, "OnSignInButtonClicked" }, // 54625080
		{ &Z_Construct_UFunction_ULoginWidget_OnSignUpButtonClicked, "OnSignUpButtonClicked" }, // 207070071
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoginWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "LoginWidget.h" },
		{ "ModuleRelativePath", "LoginWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoginWidget_Statics::NewProp_BT_SignIn_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoginWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LoginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoginWidget_Statics::NewProp_BT_SignIn = { "BT_SignIn", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoginWidget, BT_SignIn), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoginWidget_Statics::NewProp_BT_SignIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoginWidget_Statics::NewProp_BT_SignIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoginWidget_Statics::NewProp_BT_SignUp_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoginWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LoginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoginWidget_Statics::NewProp_BT_SignUp = { "BT_SignUp", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoginWidget, BT_SignUp), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoginWidget_Statics::NewProp_BT_SignUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoginWidget_Statics::NewProp_BT_SignUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoginWidget_Statics::NewProp_PW_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoginWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LoginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoginWidget_Statics::NewProp_PW = { "PW", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoginWidget, PW), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoginWidget_Statics::NewProp_PW_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoginWidget_Statics::NewProp_PW_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoginWidget_Statics::NewProp_ID_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "LoginWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LoginWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoginWidget_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoginWidget, ID), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoginWidget_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoginWidget_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoginWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoginWidget_Statics::NewProp_BT_SignIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoginWidget_Statics::NewProp_BT_SignUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoginWidget_Statics::NewProp_PW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoginWidget_Statics::NewProp_ID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoginWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoginWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoginWidget_Statics::ClassParams = {
		&ULoginWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULoginWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoginWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoginWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoginWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoginWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoginWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoginWidget, 98913841);
	template<> ROSSINANTE_API UClass* StaticClass<ULoginWidget>()
	{
		return ULoginWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoginWidget(Z_Construct_UClass_ULoginWidget, &ULoginWidget::StaticClass, TEXT("/Script/RossiNante"), TEXT("ULoginWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoginWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
