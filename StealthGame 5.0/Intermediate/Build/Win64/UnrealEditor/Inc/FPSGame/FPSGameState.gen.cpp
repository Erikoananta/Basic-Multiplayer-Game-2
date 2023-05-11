// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGame/Public/FPSGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSGameState() {}
// Cross Module References
	FPSGAME_API UClass* Z_Construct_UClass_AFPSGameState_NoRegister();
	FPSGAME_API UClass* Z_Construct_UClass_AFPSGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_FPSGame();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSGameState::execMulticastOnMissionComplete)
	{
		P_GET_OBJECT(APawn,Z_Param_InstigatorPawn);
		P_GET_UBOOL(Z_Param_bMissionSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastOnMissionComplete_Implementation(Z_Param_InstigatorPawn,Z_Param_bMissionSuccess);
		P_NATIVE_END;
	}
	static FName NAME_AFPSGameState_MulticastOnMissionComplete = FName(TEXT("MulticastOnMissionComplete"));
	void AFPSGameState::MulticastOnMissionComplete(APawn* InstigatorPawn, bool bMissionSuccess)
	{
		FPSGameState_eventMulticastOnMissionComplete_Parms Parms;
		Parms.InstigatorPawn=InstigatorPawn;
		Parms.bMissionSuccess=bMissionSuccess ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AFPSGameState_MulticastOnMissionComplete),&Parms);
	}
	void AFPSGameState::StaticRegisterNativesAFPSGameState()
	{
		UClass* Class = AFPSGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MulticastOnMissionComplete", &AFPSGameState::execMulticastOnMissionComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSGameState_MulticastOnMissionComplete_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
		static void NewProp_bMissionSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMissionSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSGameState_MulticastOnMissionComplete_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSGameState_eventMulticastOnMissionComplete_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AFPSGameState_MulticastOnMissionComplete_Statics::NewProp_bMissionSuccess_SetBit(void* Obj)
	{
		((FPSGameState_eventMulticastOnMissionComplete_Parms*)Obj)->bMissionSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSGameState_MulticastOnMissionComplete_Statics::NewProp_bMissionSuccess = { "bMissionSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSGameState_eventMulticastOnMissionComplete_Parms), &Z_Construct_UFunction_AFPSGameState_MulticastOnMissionComplete_Statics::NewProp_bMissionSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSGameState_MulticastOnMissionComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameState_MulticastOnMissionComplete_Statics::NewProp_InstigatorPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSGameState_MulticastOnMissionComplete_Statics::NewProp_bMissionSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSGameState_MulticastOnMissionComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FPSGameState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSGameState_MulticastOnMissionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSGameState, nullptr, "MulticastOnMissionComplete", nullptr, nullptr, sizeof(FPSGameState_eventMulticastOnMissionComplete_Parms), Z_Construct_UFunction_AFPSGameState_MulticastOnMissionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameState_MulticastOnMissionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSGameState_MulticastOnMissionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSGameState_MulticastOnMissionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSGameState_MulticastOnMissionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSGameState_MulticastOnMissionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSGameState_NoRegister()
	{
		return AFPSGameState::StaticClass();
	}
	struct Z_Construct_UClass_AFPSGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSGameState_MulticastOnMissionComplete, "MulticastOnMissionComplete" }, // 1752194198
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSGameState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "FPSGameState.h" },
		{ "ModuleRelativePath", "Public/FPSGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSGameState_Statics::ClassParams = {
		&AFPSGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSGameState, 3567882501);
	template<> FPSGAME_API UClass* StaticClass<AFPSGameState>()
	{
		return AFPSGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSGameState(Z_Construct_UClass_AFPSGameState, &AFPSGameState::StaticClass, TEXT("/Script/FPSGame"), TEXT("AFPSGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
