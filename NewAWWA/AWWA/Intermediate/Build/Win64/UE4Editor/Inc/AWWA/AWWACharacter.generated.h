// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AWWA_AWWACharacter_generated_h
#error "AWWACharacter.generated.h already included, missing '#pragma once' in AWWACharacter.h"
#endif
#define AWWA_AWWACharacter_generated_h

#define AWWA_Source_AWWA_AWWACharacter_h_12_RPC_WRAPPERS
#define AWWA_Source_AWWA_AWWACharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define AWWA_Source_AWWA_AWWACharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAWWACharacter(); \
	friend AWWA_API class UClass* Z_Construct_UClass_AAWWACharacter(); \
public: \
	DECLARE_CLASS(AAWWACharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AWWA"), NO_API) \
	DECLARE_SERIALIZER(AAWWACharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AWWA_Source_AWWA_AWWACharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAWWACharacter(); \
	friend AWWA_API class UClass* Z_Construct_UClass_AAWWACharacter(); \
public: \
	DECLARE_CLASS(AAWWACharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AWWA"), NO_API) \
	DECLARE_SERIALIZER(AAWWACharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AWWA_Source_AWWA_AWWACharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAWWACharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAWWACharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAWWACharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAWWACharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAWWACharacter(AAWWACharacter&&); \
	NO_API AAWWACharacter(const AAWWACharacter&); \
public:


#define AWWA_Source_AWWA_AWWACharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAWWACharacter(AAWWACharacter&&); \
	NO_API AAWWACharacter(const AAWWACharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAWWACharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAWWACharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAWWACharacter)


#define AWWA_Source_AWWA_AWWACharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AAWWACharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AAWWACharacter, FollowCamera); }


#define AWWA_Source_AWWA_AWWACharacter_h_9_PROLOG
#define AWWA_Source_AWWA_AWWACharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AWWA_Source_AWWA_AWWACharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	AWWA_Source_AWWA_AWWACharacter_h_12_RPC_WRAPPERS \
	AWWA_Source_AWWA_AWWACharacter_h_12_INCLASS \
	AWWA_Source_AWWA_AWWACharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AWWA_Source_AWWA_AWWACharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AWWA_Source_AWWA_AWWACharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	AWWA_Source_AWWA_AWWACharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AWWA_Source_AWWA_AWWACharacter_h_12_INCLASS_NO_PURE_DECLS \
	AWWA_Source_AWWA_AWWACharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AWWA_Source_AWWA_AWWACharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
