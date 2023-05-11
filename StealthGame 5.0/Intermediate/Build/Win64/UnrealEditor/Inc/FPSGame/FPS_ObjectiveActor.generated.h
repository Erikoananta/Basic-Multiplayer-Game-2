// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_FPS_ObjectiveActor_generated_h
#error "FPS_ObjectiveActor.generated.h already included, missing '#pragma once' in FPS_ObjectiveActor.h"
#endif
#define FPSGAME_FPS_ObjectiveActor_generated_h

#define StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_SPARSE_DATA
#define StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_RPC_WRAPPERS
#define StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_ObjectiveActor(); \
	friend struct Z_Construct_UClass_AFPS_ObjectiveActor_Statics; \
public: \
	DECLARE_CLASS(AFPS_ObjectiveActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPS_ObjectiveActor)


#define StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPS_ObjectiveActor(); \
	friend struct Z_Construct_UClass_AFPS_ObjectiveActor_Statics; \
public: \
	DECLARE_CLASS(AFPS_ObjectiveActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPS_ObjectiveActor)


#define StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPS_ObjectiveActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPS_ObjectiveActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_ObjectiveActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_ObjectiveActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_ObjectiveActor(AFPS_ObjectiveActor&&); \
	NO_API AFPS_ObjectiveActor(const AFPS_ObjectiveActor&); \
public:


#define StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_ObjectiveActor(AFPS_ObjectiveActor&&); \
	NO_API AFPS_ObjectiveActor(const AFPS_ObjectiveActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_ObjectiveActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_ObjectiveActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPS_ObjectiveActor)


#define StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AFPS_ObjectiveActor, MeshComp); } \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(AFPS_ObjectiveActor, SphereComp); } \
	FORCEINLINE static uint32 __PPO__PickupFX() { return STRUCT_OFFSET(AFPS_ObjectiveActor, PickupFX); }


#define StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_12_PROLOG
#define StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_SPARSE_DATA \
	StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_RPC_WRAPPERS \
	StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_INCLASS \
	StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_SPARSE_DATA \
	StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_INCLASS_NO_PURE_DECLS \
	StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPS_ObjectiveActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_5_0_Source_FPSGame_Public_FPS_ObjectiveActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
