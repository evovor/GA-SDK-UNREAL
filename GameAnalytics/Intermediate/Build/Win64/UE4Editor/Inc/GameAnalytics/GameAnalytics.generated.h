// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGAGender : uint8;
enum class EGAErrorSeverity : uint8;
enum class EGAProgressionStatus : uint8;
enum class EGAResourceFlowType : uint8;
#ifdef GAMEANALYTICS_GameAnalytics_generated_h
#error "GameAnalytics.generated.h already included, missing '#pragma once' in GameAnalytics.h"
#endif
#define GAMEANALYTICS_GameAnalytics_generated_h

#define evofashion_Plugins_GA_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_55_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetConfigurationsContentAsString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UGameAnalytics::GetConfigurationsContentAsString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCommandCenterReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameAnalytics::IsCommandCenterReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCommandCenterValueAsStringWithDefaultValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DefaultValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UGameAnalytics::GetCommandCenterValueAsStringWithDefaultValue(Z_Param_Key,Z_Param_DefaultValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCommandCenterValueAsString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UGameAnalytics::GetCommandCenterValueAsString(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBirthYear) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BirthYear); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::SetBirthYear(Z_Param_BirthYear); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGender) \
	{ \
		P_GET_ENUM(EGAGender,Z_Param_Gender); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::SetGender(EGAGender(Z_Param_Gender)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFacebookId) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FacebookId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::SetFacebookId(Z_Param_FacebookId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomDimension03) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CustomDimension); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::SetCustomDimension03(Z_Param_CustomDimension); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomDimension02) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CustomDimension); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::SetCustomDimension02(Z_Param_CustomDimension); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomDimension01) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CustomDimension); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::SetCustomDimension01(Z_Param_CustomDimension); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddErrorEvent) \
	{ \
		P_GET_ENUM(EGAErrorSeverity,Z_Param_Severity); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddErrorEvent(EGAErrorSeverity(Z_Param_Severity),Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddDesignEventWithValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventId); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddDesignEventWithValue(Z_Param_EventId,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddDesignEvent) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddDesignEvent(Z_Param_EventId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddProgressionEvenWithOneTwoThreeAndScore) \
	{ \
		P_GET_ENUM(EGAProgressionStatus,Z_Param_ProgressionStatus); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression01); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression02); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression03); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Score); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddProgressionEvenWithOneTwoThreeAndScore(EGAProgressionStatus(Z_Param_ProgressionStatus),Z_Param_Progression01,Z_Param_Progression02,Z_Param_Progression03,Z_Param_Score); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddProgressionEventWithOneTwoAndThree) \
	{ \
		P_GET_ENUM(EGAProgressionStatus,Z_Param_ProgressionStatus); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression01); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression02); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression03); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddProgressionEventWithOneTwoAndThree(EGAProgressionStatus(Z_Param_ProgressionStatus),Z_Param_Progression01,Z_Param_Progression02,Z_Param_Progression03); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddProgressionEventWithOneTwoAndScore) \
	{ \
		P_GET_ENUM(EGAProgressionStatus,Z_Param_ProgressionStatus); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression01); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression02); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Score); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddProgressionEventWithOneTwoAndScore(EGAProgressionStatus(Z_Param_ProgressionStatus),Z_Param_Progression01,Z_Param_Progression02,Z_Param_Score); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddProgressionEventWithOneAndTwo) \
	{ \
		P_GET_ENUM(EGAProgressionStatus,Z_Param_ProgressionStatus); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression01); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression02); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddProgressionEventWithOneAndTwo(EGAProgressionStatus(Z_Param_ProgressionStatus),Z_Param_Progression01,Z_Param_Progression02); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddProgressionEventWithOneAndScore) \
	{ \
		P_GET_ENUM(EGAProgressionStatus,Z_Param_ProgressionStatus); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression01); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Score); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddProgressionEventWithOneAndScore(EGAProgressionStatus(Z_Param_ProgressionStatus),Z_Param_Progression01,Z_Param_Score); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddProgressionEventWithOne) \
	{ \
		P_GET_ENUM(EGAProgressionStatus,Z_Param_ProgressionStatus); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression01); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddProgressionEventWithOne(EGAProgressionStatus(Z_Param_ProgressionStatus),Z_Param_Progression01); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddResourceEvent) \
	{ \
		P_GET_ENUM(EGAResourceFlowType,Z_Param_FlowType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Currency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddResourceEvent(EGAResourceFlowType(Z_Param_FlowType),Z_Param_Currency,Z_Param_Amount,Z_Param_ItemType,Z_Param_ItemId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBusinessEvent) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Currency); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CartType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddBusinessEvent(Z_Param_Currency,Z_Param_Amount,Z_Param_ItemType,Z_Param_ItemId,Z_Param_CartType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBusinessEventAndroid) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Currency); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CartType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Receipt); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Signature); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddBusinessEventAndroid(Z_Param_Currency,Z_Param_Amount,Z_Param_ItemType,Z_Param_ItemId,Z_Param_CartType,Z_Param_Receipt,Z_Param_Signature); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBusinessEventAndAutoFetchReceipt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Currency); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CartType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddBusinessEventAndAutoFetchReceipt(Z_Param_Currency,Z_Param_Amount,Z_Param_ItemType,Z_Param_ItemId,Z_Param_CartType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBusinessEventIOS) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Currency); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CartType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Receipt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddBusinessEventIOS(Z_Param_Currency,Z_Param_Amount,Z_Param_ItemType,Z_Param_ItemId,Z_Param_CartType,Z_Param_Receipt); \
		P_NATIVE_END; \
	}


#define evofashion_Plugins_GA_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetConfigurationsContentAsString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UGameAnalytics::GetConfigurationsContentAsString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCommandCenterReady) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UGameAnalytics::IsCommandCenterReady(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCommandCenterValueAsStringWithDefaultValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DefaultValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UGameAnalytics::GetCommandCenterValueAsStringWithDefaultValue(Z_Param_Key,Z_Param_DefaultValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCommandCenterValueAsString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UGameAnalytics::GetCommandCenterValueAsString(Z_Param_Key); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBirthYear) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_BirthYear); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::SetBirthYear(Z_Param_BirthYear); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGender) \
	{ \
		P_GET_ENUM(EGAGender,Z_Param_Gender); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::SetGender(EGAGender(Z_Param_Gender)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFacebookId) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FacebookId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::SetFacebookId(Z_Param_FacebookId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomDimension03) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CustomDimension); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::SetCustomDimension03(Z_Param_CustomDimension); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomDimension02) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CustomDimension); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::SetCustomDimension02(Z_Param_CustomDimension); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomDimension01) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CustomDimension); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::SetCustomDimension01(Z_Param_CustomDimension); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddErrorEvent) \
	{ \
		P_GET_ENUM(EGAErrorSeverity,Z_Param_Severity); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddErrorEvent(EGAErrorSeverity(Z_Param_Severity),Z_Param_Message); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddDesignEventWithValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventId); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddDesignEventWithValue(Z_Param_EventId,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddDesignEvent) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddDesignEvent(Z_Param_EventId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddProgressionEvenWithOneTwoThreeAndScore) \
	{ \
		P_GET_ENUM(EGAProgressionStatus,Z_Param_ProgressionStatus); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression01); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression02); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression03); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Score); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddProgressionEvenWithOneTwoThreeAndScore(EGAProgressionStatus(Z_Param_ProgressionStatus),Z_Param_Progression01,Z_Param_Progression02,Z_Param_Progression03,Z_Param_Score); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddProgressionEventWithOneTwoAndThree) \
	{ \
		P_GET_ENUM(EGAProgressionStatus,Z_Param_ProgressionStatus); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression01); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression02); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression03); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddProgressionEventWithOneTwoAndThree(EGAProgressionStatus(Z_Param_ProgressionStatus),Z_Param_Progression01,Z_Param_Progression02,Z_Param_Progression03); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddProgressionEventWithOneTwoAndScore) \
	{ \
		P_GET_ENUM(EGAProgressionStatus,Z_Param_ProgressionStatus); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression01); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression02); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Score); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddProgressionEventWithOneTwoAndScore(EGAProgressionStatus(Z_Param_ProgressionStatus),Z_Param_Progression01,Z_Param_Progression02,Z_Param_Score); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddProgressionEventWithOneAndTwo) \
	{ \
		P_GET_ENUM(EGAProgressionStatus,Z_Param_ProgressionStatus); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression01); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression02); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddProgressionEventWithOneAndTwo(EGAProgressionStatus(Z_Param_ProgressionStatus),Z_Param_Progression01,Z_Param_Progression02); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddProgressionEventWithOneAndScore) \
	{ \
		P_GET_ENUM(EGAProgressionStatus,Z_Param_ProgressionStatus); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression01); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Score); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddProgressionEventWithOneAndScore(EGAProgressionStatus(Z_Param_ProgressionStatus),Z_Param_Progression01,Z_Param_Score); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddProgressionEventWithOne) \
	{ \
		P_GET_ENUM(EGAProgressionStatus,Z_Param_ProgressionStatus); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Progression01); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddProgressionEventWithOne(EGAProgressionStatus(Z_Param_ProgressionStatus),Z_Param_Progression01); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddResourceEvent) \
	{ \
		P_GET_ENUM(EGAResourceFlowType,Z_Param_FlowType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Currency); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddResourceEvent(EGAResourceFlowType(Z_Param_FlowType),Z_Param_Currency,Z_Param_Amount,Z_Param_ItemType,Z_Param_ItemId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBusinessEvent) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Currency); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CartType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddBusinessEvent(Z_Param_Currency,Z_Param_Amount,Z_Param_ItemType,Z_Param_ItemId,Z_Param_CartType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBusinessEventAndroid) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Currency); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CartType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Receipt); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Signature); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddBusinessEventAndroid(Z_Param_Currency,Z_Param_Amount,Z_Param_ItemType,Z_Param_ItemId,Z_Param_CartType,Z_Param_Receipt,Z_Param_Signature); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBusinessEventAndAutoFetchReceipt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Currency); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CartType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddBusinessEventAndAutoFetchReceipt(Z_Param_Currency,Z_Param_Amount,Z_Param_ItemType,Z_Param_ItemId,Z_Param_CartType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBusinessEventIOS) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Currency); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ItemId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CartType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Receipt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UGameAnalytics::AddBusinessEventIOS(Z_Param_Currency,Z_Param_Amount,Z_Param_ItemType,Z_Param_ItemId,Z_Param_CartType,Z_Param_Receipt); \
		P_NATIVE_END; \
	}


#define evofashion_Plugins_GA_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameAnalytics(); \
	friend struct Z_Construct_UClass_UGameAnalytics_Statics; \
public: \
	DECLARE_CLASS(UGameAnalytics, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameAnalytics"), NO_API) \
	DECLARE_SERIALIZER(UGameAnalytics)


#define evofashion_Plugins_GA_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUGameAnalytics(); \
	friend struct Z_Construct_UClass_UGameAnalytics_Statics; \
public: \
	DECLARE_CLASS(UGameAnalytics, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameAnalytics"), NO_API) \
	DECLARE_SERIALIZER(UGameAnalytics)


#define evofashion_Plugins_GA_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameAnalytics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameAnalytics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameAnalytics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameAnalytics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameAnalytics(UGameAnalytics&&); \
	NO_API UGameAnalytics(const UGameAnalytics&); \
public:


#define evofashion_Plugins_GA_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameAnalytics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameAnalytics(UGameAnalytics&&); \
	NO_API UGameAnalytics(const UGameAnalytics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameAnalytics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameAnalytics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameAnalytics)


#define evofashion_Plugins_GA_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_55_PRIVATE_PROPERTY_OFFSET
#define evofashion_Plugins_GA_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_52_PROLOG
#define evofashion_Plugins_GA_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	evofashion_Plugins_GA_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_55_PRIVATE_PROPERTY_OFFSET \
	evofashion_Plugins_GA_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_55_RPC_WRAPPERS \
	evofashion_Plugins_GA_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_55_INCLASS \
	evofashion_Plugins_GA_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define evofashion_Plugins_GA_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	evofashion_Plugins_GA_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_55_PRIVATE_PROPERTY_OFFSET \
	evofashion_Plugins_GA_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	evofashion_Plugins_GA_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_55_INCLASS_NO_PURE_DECLS \
	evofashion_Plugins_GA_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h_55_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameAnalytics."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEANALYTICS_API UClass* StaticClass<class UGameAnalytics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID evofashion_Plugins_GA_GameAnalytics_Source_GameAnalytics_Public_GameAnalytics_h


#define FOREACH_ENUM_EGAGENDER(op) \
	op(EGAGender::undefined) \
	op(EGAGender::male) \
	op(EGAGender::female) 

enum class EGAGender : uint8;
template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAGender>();

#define FOREACH_ENUM_EGAERRORSEVERITY(op) \
	op(EGAErrorSeverity::undefined) \
	op(EGAErrorSeverity::debug) \
	op(EGAErrorSeverity::info) \
	op(EGAErrorSeverity::warning) \
	op(EGAErrorSeverity::error) \
	op(EGAErrorSeverity::critical) 

enum class EGAErrorSeverity : uint8;
template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAErrorSeverity>();

#define FOREACH_ENUM_EGAPROGRESSIONSTATUS(op) \
	op(EGAProgressionStatus::undefined) \
	op(EGAProgressionStatus::start) \
	op(EGAProgressionStatus::complete) \
	op(EGAProgressionStatus::fail) 

enum class EGAProgressionStatus : uint8;
template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAProgressionStatus>();

#define FOREACH_ENUM_EGARESOURCEFLOWTYPE(op) \
	op(EGAResourceFlowType::undefined) \
	op(EGAResourceFlowType::source) \
	op(EGAResourceFlowType::sink) 

enum class EGAResourceFlowType : uint8;
template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAResourceFlowType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
