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
struct FVector;
struct FHitResult;
#ifdef ANDWHENWEADVANCE_AndWhenWeAdvanceProjectile_generated_h
#error "AndWhenWeAdvanceProjectile.generated.h already included, missing '#pragma once' in AndWhenWeAdvanceProjectile.h"
#endif
#define ANDWHENWEADVANCE_AndWhenWeAdvanceProjectile_generated_h

#define AndWhenWeAdvance_Source_AndWhenWeAdvance_AndWhenWeAdvanceProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define AndWhenWeAdvance_Source_AndWhenWeAdvance_AndWhenWeAdvanceProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define AndWhenWeAdvance_Source_AndWhenWeAdvance_AndWhenWeAdvanceProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAndWhenWeAdvanceProjectile(); \
	friend ANDWHENWEADVANCE_API class UClass* Z_Construct_UClass_AAndWhenWeAdvanceProjectile(); \
public: \
	DECLARE_CLASS(AAndWhenWeAdvanceProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AndWhenWeAdvance"), NO_API) \
	DECLARE_SERIALIZER(AAndWhenWeAdvanceProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AndWhenWeAdvance_Source_AndWhenWeAdvance_AndWhenWeAdvanceProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAndWhenWeAdvanceProjectile(); \
	friend ANDWHENWEADVANCE_API class UClass* Z_Construct_UClass_AAndWhenWeAdvanceProjectile(); \
public: \
	DECLARE_CLASS(AAndWhenWeAdvanceProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AndWhenWeAdvance"), NO_API) \
	DECLARE_SERIALIZER(AAndWhenWeAdvanceProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AndWhenWeAdvance_Source_AndWhenWeAdvance_AndWhenWeAdvanceProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAndWhenWeAdvanceProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAndWhenWeAdvanceProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAndWhenWeAdvanceProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAndWhenWeAdvanceProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAndWhenWeAdvanceProjectile(AAndWhenWeAdvanceProjectile&&); \
	NO_API AAndWhenWeAdvanceProjectile(const AAndWhenWeAdvanceProjectile&); \
public:


#define AndWhenWeAdvance_Source_AndWhenWeAdvance_AndWhenWeAdvanceProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAndWhenWeAdvanceProjectile(AAndWhenWeAdvanceProjectile&&); \
	NO_API AAndWhenWeAdvanceProjectile(const AAndWhenWeAdvanceProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAndWhenWeAdvanceProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAndWhenWeAdvanceProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAndWhenWeAdvanceProjectile)


#define AndWhenWeAdvance_Source_AndWhenWeAdvance_AndWhenWeAdvanceProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AAndWhenWeAdvanceProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AAndWhenWeAdvanceProjectile, ProjectileMovement); }


#define AndWhenWeAdvance_Source_AndWhenWeAdvance_AndWhenWeAdvanceProjectile_h_9_PROLOG
#define AndWhenWeAdvance_Source_AndWhenWeAdvance_AndWhenWeAdvanceProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AndWhenWeAdvance_Source_AndWhenWeAdvance_AndWhenWeAdvanceProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	AndWhenWeAdvance_Source_AndWhenWeAdvance_AndWhenWeAdvanceProjectile_h_12_RPC_WRAPPERS \
	AndWhenWeAdvance_Source_AndWhenWeAdvance_AndWhenWeAdvanceProjectile_h_12_INCLASS \
	AndWhenWeAdvance_Source_AndWhenWeAdvance_AndWhenWeAdvanceProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AndWhenWeAdvance_Source_AndWhenWeAdvance_AndWhenWeAdvanceProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AndWhenWeAdvance_Source_AndWhenWeAdvance_AndWhenWeAdvanceProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	AndWhenWeAdvance_Source_AndWhenWeAdvance_AndWhenWeAdvanceProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AndWhenWeAdvance_Source_AndWhenWeAdvance_AndWhenWeAdvanceProjectile_h_12_INCLASS_NO_PURE_DECLS \
	AndWhenWeAdvance_Source_AndWhenWeAdvance_AndWhenWeAdvanceProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AndWhenWeAdvance_Source_AndWhenWeAdvance_AndWhenWeAdvanceProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
