// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Example/03_CutomDataAsset/CDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDataAsset() {}
// Cross Module References
	EXAMPLE_API UClass* Z_Construct_UClass_UCDataAsset_NoRegister();
	EXAMPLE_API UClass* Z_Construct_UClass_UCDataAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Example();
// End Cross Module References
	void UCDataAsset::StaticRegisterNativesUCDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UCDataAsset_NoRegister()
	{
		return UCDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UCDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Example,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "03_CutomDataAsset/CDataAsset.h" },
		{ "ModuleRelativePath", "03_CutomDataAsset/CDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDataAsset_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "CDataAsset" },
		{ "ModuleRelativePath", "03_CutomDataAsset/CDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCDataAsset_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCDataAsset, Value), METADATA_PARAMS(Z_Construct_UClass_UCDataAsset_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCDataAsset_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDataAsset_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CDataAsset" },
		{ "ModuleRelativePath", "03_CutomDataAsset/CDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCDataAsset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCDataAsset, Name), METADATA_PARAMS(Z_Construct_UClass_UCDataAsset_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCDataAsset_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDataAsset_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCDataAsset_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCDataAsset_Statics::ClassParams = {
		&UCDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCDataAsset, 539372896);
	template<> EXAMPLE_API UClass* StaticClass<UCDataAsset>()
	{
		return UCDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCDataAsset(Z_Construct_UClass_UCDataAsset, &UCDataAsset::StaticClass, TEXT("/Script/Example"), TEXT("UCDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
