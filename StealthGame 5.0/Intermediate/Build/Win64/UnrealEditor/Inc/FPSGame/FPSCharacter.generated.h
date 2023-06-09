// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSGAME_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define FPSGAME_FPSCharacter_generated_h

#define StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_SPARSE_DATA
#define StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_RPC_WRAPPERS \
	virtual bool ServerFired_Validate(); \
	virtual void ServerFired_Implementation(); \
 \
	DECLARE_FUNCTION(execServerFired);


#define StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerFired_Validate(); \
	virtual void ServerFired_Implementation(); \
 \
	DECLARE_FUNCTION(execServerFired);


#define StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_EVENT_PARMS
#define StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_CALLBACK_WRAPPERS
#define StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsCarryingObjective=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsCarryingObjective	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsCarryingObjective=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsCarryingObjective	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public:


#define StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter)


#define StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1PComponent() { return STRUCT_OFFSET(AFPSCharacter, Mesh1PComponent); } \
	FORCEINLINE static uint32 __PPO__GunMeshComponent() { return STRUCT_OFFSET(AFPSCharacter, GunMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AFPSCharacter, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__NoiseEmitterComponent() { return STRUCT_OFFSET(AFPSCharacter, NoiseEmitterComponent); }


#define StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_17_PROLOG \
	StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_EVENT_PARMS


#define StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_SPARSE_DATA \
	StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_RPC_WRAPPERS \
	StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_CALLBACK_WRAPPERS \
	StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_INCLASS \
	StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_SPARSE_DATA \
	StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_CALLBACK_WRAPPERS \
	StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_INCLASS_NO_PURE_DECLS \
	StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSGAME_API UClass* StaticClass<class AFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_5_0_Source_FPSGame_Public_FPSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
