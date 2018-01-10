// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FPSGAME_FPSExtractionPoint_generated_h
#error "FPSExtractionPoint.generated.h already included, missing '#pragma once' in FPSExtractionPoint.h"
#endif
#define FPSGAME_FPSExtractionPoint_generated_h

#define StealthGame_Source_FPSGame_Public_FPSExtractionPoint_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->HandleOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define StealthGame_Source_FPSGame_Public_FPSExtractionPoint_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->HandleOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define StealthGame_Source_FPSGame_Public_FPSExtractionPoint_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSExtractionPoint(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFPSExtractionPoint(); \
public: \
	DECLARE_CLASS(AFPSExtractionPoint, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSExtractionPoint) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_Source_FPSGame_Public_FPSExtractionPoint_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFPSExtractionPoint(); \
	friend FPSGAME_API class UClass* Z_Construct_UClass_AFPSExtractionPoint(); \
public: \
	DECLARE_CLASS(AFPSExtractionPoint, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPSGame"), NO_API) \
	DECLARE_SERIALIZER(AFPSExtractionPoint) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define StealthGame_Source_FPSGame_Public_FPSExtractionPoint_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSExtractionPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSExtractionPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSExtractionPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSExtractionPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSExtractionPoint(AFPSExtractionPoint&&); \
	NO_API AFPSExtractionPoint(const AFPSExtractionPoint&); \
public:


#define StealthGame_Source_FPSGame_Public_FPSExtractionPoint_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSExtractionPoint(AFPSExtractionPoint&&); \
	NO_API AFPSExtractionPoint(const AFPSExtractionPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSExtractionPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSExtractionPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSExtractionPoint)


#define StealthGame_Source_FPSGame_Public_FPSExtractionPoint_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OverlapComp() { return STRUCT_OFFSET(AFPSExtractionPoint, OverlapComp); } \
	FORCEINLINE static uint32 __PPO__DecalComp() { return STRUCT_OFFSET(AFPSExtractionPoint, DecalComp); } \
	FORCEINLINE static uint32 __PPO__ObjectiveMissingSound() { return STRUCT_OFFSET(AFPSExtractionPoint, ObjectiveMissingSound); }


#define StealthGame_Source_FPSGame_Public_FPSExtractionPoint_h_12_PROLOG
#define StealthGame_Source_FPSGame_Public_FPSExtractionPoint_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSExtractionPoint_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSExtractionPoint_h_15_RPC_WRAPPERS \
	StealthGame_Source_FPSGame_Public_FPSExtractionPoint_h_15_INCLASS \
	StealthGame_Source_FPSGame_Public_FPSExtractionPoint_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StealthGame_Source_FPSGame_Public_FPSExtractionPoint_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StealthGame_Source_FPSGame_Public_FPSExtractionPoint_h_15_PRIVATE_PROPERTY_OFFSET \
	StealthGame_Source_FPSGame_Public_FPSExtractionPoint_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSExtractionPoint_h_15_INCLASS_NO_PURE_DECLS \
	StealthGame_Source_FPSGame_Public_FPSExtractionPoint_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StealthGame_Source_FPSGame_Public_FPSExtractionPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
