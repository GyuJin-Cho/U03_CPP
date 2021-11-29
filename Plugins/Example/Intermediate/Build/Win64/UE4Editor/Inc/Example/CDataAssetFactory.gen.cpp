// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Example/03_CutomDataAsset/CDataAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDataAssetFactory() {}
// Cross Module References
	EXAMPLE_API UClass* Z_Construct_UClass_UCDataAssetFactory_NoRegister();
	EXAMPLE_API UClass* Z_Construct_UClass_UCDataAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_Example();
// End Cross Module References
	void UCDataAssetFactory::StaticRegisterNativesUCDataAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UCDataAssetFactory_NoRegister()
	{
		return UCDataAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCDataAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCDataAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Example,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCDataAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "03_CutomDataAsset/CDataAssetFactory.h" },
		{ "ModuleRelativePath", "03_CutomDataAsset/CDataAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCDataAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCDataAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCDataAssetFactory_Statics::ClassParams = {
		&UCDataAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCDataAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCDataAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCDataAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCDataAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCDataAssetFactory, 110826772);
	template<> EXAMPLE_API UClass* StaticClass<UCDataAssetFactory>()
	{
		return UCDataAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCDataAssetFactory(Z_Construct_UClass_UCDataAssetFactory, &UCDataAssetFactory::StaticClass, TEXT("/Script/Example"), TEXT("UCDataAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCDataAssetFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
