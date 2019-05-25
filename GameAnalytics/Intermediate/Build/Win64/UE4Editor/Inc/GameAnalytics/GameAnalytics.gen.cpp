// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameAnalytics/Public/GameAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameAnalytics() {}
// Cross Module References
	GAMEANALYTICS_API UEnum* Z_Construct_UEnum_GameAnalytics_EGAGender();
	UPackage* Z_Construct_UPackage__Script_GameAnalytics();
	GAMEANALYTICS_API UEnum* Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity();
	GAMEANALYTICS_API UEnum* Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus();
	GAMEANALYTICS_API UEnum* Z_Construct_UEnum_GameAnalytics_EGAResourceFlowType();
	GAMEANALYTICS_API UClass* Z_Construct_UClass_UGameAnalytics_NoRegister();
	GAMEANALYTICS_API UClass* Z_Construct_UClass_UGameAnalytics();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_AddDesignEvent();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_AddErrorEvent();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_AddResourceEvent();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsString();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_GetConfigurationsContentAsString();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_IsCommandCenterReady();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_SetBirthYear();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_SetFacebookId();
	GAMEANALYTICS_API UFunction* Z_Construct_UFunction_UGameAnalytics_SetGender();
// End Cross Module References
	static UEnum* EGAGender_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameAnalytics_EGAGender, Z_Construct_UPackage__Script_GameAnalytics(), TEXT("EGAGender"));
		}
		return Singleton;
	}
	template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAGender>()
	{
		return EGAGender_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAGender(EGAGender_StaticEnum, TEXT("/Script/GameAnalytics"), TEXT("EGAGender"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAGender_Hash() { return 1785490612U; }
	UEnum* Z_Construct_UEnum_GameAnalytics_EGAGender()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameAnalytics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAGender"), 0, Get_Z_Construct_UEnum_GameAnalytics_EGAGender_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAGender::undefined", (int64)EGAGender::undefined },
				{ "EGAGender::male", (int64)EGAGender::male },
				{ "EGAGender::female", (int64)EGAGender::female },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameAnalytics.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameAnalytics,
				nullptr,
				"EGAGender",
				"EGAGender",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGAErrorSeverity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity, Z_Construct_UPackage__Script_GameAnalytics(), TEXT("EGAErrorSeverity"));
		}
		return Singleton;
	}
	template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAErrorSeverity>()
	{
		return EGAErrorSeverity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAErrorSeverity(EGAErrorSeverity_StaticEnum, TEXT("/Script/GameAnalytics"), TEXT("EGAErrorSeverity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity_Hash() { return 1873443448U; }
	UEnum* Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameAnalytics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAErrorSeverity"), 0, Get_Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAErrorSeverity::undefined", (int64)EGAErrorSeverity::undefined },
				{ "EGAErrorSeverity::debug", (int64)EGAErrorSeverity::debug },
				{ "EGAErrorSeverity::info", (int64)EGAErrorSeverity::info },
				{ "EGAErrorSeverity::warning", (int64)EGAErrorSeverity::warning },
				{ "EGAErrorSeverity::error", (int64)EGAErrorSeverity::error },
				{ "EGAErrorSeverity::critical", (int64)EGAErrorSeverity::critical },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameAnalytics.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameAnalytics,
				nullptr,
				"EGAErrorSeverity",
				"EGAErrorSeverity",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGAProgressionStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus, Z_Construct_UPackage__Script_GameAnalytics(), TEXT("EGAProgressionStatus"));
		}
		return Singleton;
	}
	template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAProgressionStatus>()
	{
		return EGAProgressionStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAProgressionStatus(EGAProgressionStatus_StaticEnum, TEXT("/Script/GameAnalytics"), TEXT("EGAProgressionStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus_Hash() { return 3439025781U; }
	UEnum* Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameAnalytics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAProgressionStatus"), 0, Get_Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAProgressionStatus::undefined", (int64)EGAProgressionStatus::undefined },
				{ "EGAProgressionStatus::start", (int64)EGAProgressionStatus::start },
				{ "EGAProgressionStatus::complete", (int64)EGAProgressionStatus::complete },
				{ "EGAProgressionStatus::fail", (int64)EGAProgressionStatus::fail },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameAnalytics.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameAnalytics,
				nullptr,
				"EGAProgressionStatus",
				"EGAProgressionStatus",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EGAResourceFlowType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GameAnalytics_EGAResourceFlowType, Z_Construct_UPackage__Script_GameAnalytics(), TEXT("EGAResourceFlowType"));
		}
		return Singleton;
	}
	template<> GAMEANALYTICS_API UEnum* StaticEnum<EGAResourceFlowType>()
	{
		return EGAResourceFlowType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGAResourceFlowType(EGAResourceFlowType_StaticEnum, TEXT("/Script/GameAnalytics"), TEXT("EGAResourceFlowType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GameAnalytics_EGAResourceFlowType_Hash() { return 925493522U; }
	UEnum* Z_Construct_UEnum_GameAnalytics_EGAResourceFlowType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GameAnalytics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGAResourceFlowType"), 0, Get_Z_Construct_UEnum_GameAnalytics_EGAResourceFlowType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGAResourceFlowType::undefined", (int64)EGAResourceFlowType::undefined },
				{ "EGAResourceFlowType::source", (int64)EGAResourceFlowType::source },
				{ "EGAResourceFlowType::sink", (int64)EGAResourceFlowType::sink },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/GameAnalytics.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GameAnalytics,
				nullptr,
				"EGAResourceFlowType",
				"EGAResourceFlowType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UGameAnalytics::StaticRegisterNativesUGameAnalytics()
	{
		UClass* Class = UGameAnalytics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBusinessEvent", &UGameAnalytics::execAddBusinessEvent },
			{ "AddBusinessEventAndAutoFetchReceipt", &UGameAnalytics::execAddBusinessEventAndAutoFetchReceipt },
			{ "AddBusinessEventAndroid", &UGameAnalytics::execAddBusinessEventAndroid },
			{ "AddBusinessEventIOS", &UGameAnalytics::execAddBusinessEventIOS },
			{ "AddDesignEvent", &UGameAnalytics::execAddDesignEvent },
			{ "AddDesignEventWithValue", &UGameAnalytics::execAddDesignEventWithValue },
			{ "AddErrorEvent", &UGameAnalytics::execAddErrorEvent },
			{ "AddProgressionEventWithOne", &UGameAnalytics::execAddProgressionEventWithOne },
			{ "AddProgressionEventWithOneAndScore", &UGameAnalytics::execAddProgressionEventWithOneAndScore },
			{ "AddProgressionEventWithOneAndTwo", &UGameAnalytics::execAddProgressionEventWithOneAndTwo },
			{ "AddProgressionEventWithOneTwoAndScore", &UGameAnalytics::execAddProgressionEventWithOneTwoAndScore },
			{ "AddProgressionEventWithOneTwoAndThree", &UGameAnalytics::execAddProgressionEventWithOneTwoAndThree },
			{ "AddProgressionEvenWithOneTwoThreeAndScore", &UGameAnalytics::execAddProgressionEvenWithOneTwoThreeAndScore },
			{ "AddResourceEvent", &UGameAnalytics::execAddResourceEvent },
			{ "GetCommandCenterValueAsString", &UGameAnalytics::execGetCommandCenterValueAsString },
			{ "GetCommandCenterValueAsStringWithDefaultValue", &UGameAnalytics::execGetCommandCenterValueAsStringWithDefaultValue },
			{ "GetConfigurationsContentAsString", &UGameAnalytics::execGetConfigurationsContentAsString },
			{ "IsCommandCenterReady", &UGameAnalytics::execIsCommandCenterReady },
			{ "SetBirthYear", &UGameAnalytics::execSetBirthYear },
			{ "SetCustomDimension01", &UGameAnalytics::execSetCustomDimension01 },
			{ "SetCustomDimension02", &UGameAnalytics::execSetCustomDimension02 },
			{ "SetCustomDimension03", &UGameAnalytics::execSetCustomDimension03 },
			{ "SetFacebookId", &UGameAnalytics::execSetFacebookId },
			{ "SetGender", &UGameAnalytics::execSetGender },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics
	{
		struct GameAnalytics_eventAddBusinessEvent_Parms
		{
			FString Currency;
			int32 Amount;
			FString ItemType;
			FString ItemId;
			FString CartType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CartType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CartType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_CartType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_CartType = { "CartType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEvent_Parms, CartType), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_CartType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_CartType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEvent_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEvent_Parms, ItemType), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEvent_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEvent_Parms, Currency), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_Currency_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_Currency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_CartType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::NewProp_Currency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddBusinessEvent", sizeof(GameAnalytics_eventAddBusinessEvent_Parms), Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics
	{
		struct GameAnalytics_eventAddBusinessEventAndAutoFetchReceipt_Parms
		{
			FString Currency;
			int32 Amount;
			FString ItemType;
			FString ItemId;
			FString CartType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CartType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CartType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_CartType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_CartType = { "CartType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndAutoFetchReceipt_Parms, CartType), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_CartType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_CartType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndAutoFetchReceipt_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndAutoFetchReceipt_Parms, ItemType), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndAutoFetchReceipt_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndAutoFetchReceipt_Parms, Currency), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_Currency_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_Currency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_CartType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::NewProp_Currency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddBusinessEventAndAutoFetchReceipt", sizeof(GameAnalytics_eventAddBusinessEventAndAutoFetchReceipt_Parms), Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics
	{
		struct GameAnalytics_eventAddBusinessEventAndroid_Parms
		{
			FString Currency;
			int32 Amount;
			FString ItemType;
			FString ItemId;
			FString CartType;
			FString Receipt;
			FString Signature;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Signature_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Signature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Receipt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Receipt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CartType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CartType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Signature_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Signature = { "Signature", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndroid_Parms, Signature), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Signature_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Signature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Receipt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Receipt = { "Receipt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndroid_Parms, Receipt), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Receipt_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Receipt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_CartType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_CartType = { "CartType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndroid_Parms, CartType), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_CartType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_CartType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndroid_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndroid_Parms, ItemType), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndroid_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventAndroid_Parms, Currency), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Currency_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Currency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Signature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Receipt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_CartType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::NewProp_Currency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddBusinessEventAndroid", sizeof(GameAnalytics_eventAddBusinessEventAndroid_Parms), Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics
	{
		struct GameAnalytics_eventAddBusinessEventIOS_Parms
		{
			FString Currency;
			int32 Amount;
			FString ItemType;
			FString ItemId;
			FString CartType;
			FString Receipt;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Receipt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Receipt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CartType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CartType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Receipt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Receipt = { "Receipt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventIOS_Parms, Receipt), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Receipt_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Receipt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_CartType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_CartType = { "CartType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventIOS_Parms, CartType), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_CartType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_CartType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventIOS_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventIOS_Parms, ItemType), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventIOS_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddBusinessEventIOS_Parms, Currency), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Currency_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Currency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Receipt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_CartType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::NewProp_Currency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddBusinessEventIOS", sizeof(GameAnalytics_eventAddBusinessEventIOS_Parms), Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics
	{
		struct GameAnalytics_eventAddDesignEvent_Parms
		{
			FString EventId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::NewProp_EventId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddDesignEvent_Parms, EventId), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::NewProp_EventId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::NewProp_EventId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::NewProp_EventId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddDesignEvent", sizeof(GameAnalytics_eventAddDesignEvent_Parms), Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddDesignEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddDesignEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics
	{
		struct GameAnalytics_eventAddDesignEventWithValue_Parms
		{
			FString EventId;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddDesignEventWithValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::NewProp_EventId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddDesignEventWithValue_Parms, EventId), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::NewProp_EventId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::NewProp_EventId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::NewProp_EventId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddDesignEventWithValue", sizeof(GameAnalytics_eventAddDesignEventWithValue_Parms), Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics
	{
		struct GameAnalytics_eventAddErrorEvent_Parms
		{
			EGAErrorSeverity Severity;
			FString Message;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Severity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Severity_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddErrorEvent_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::NewProp_Message_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddErrorEvent_Parms, Severity), Z_Construct_UEnum_GameAnalytics_EGAErrorSeverity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::NewProp_Severity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::NewProp_Severity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::NewProp_Severity_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddErrorEvent", sizeof(GameAnalytics_eventAddErrorEvent_Parms), Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddErrorEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddErrorEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics
	{
		struct GameAnalytics_eventAddProgressionEventWithOne_Parms
		{
			EGAProgressionStatus ProgressionStatus;
			FString Progression01;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression01_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression01;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProgressionStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgressionStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::NewProp_Progression01_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::NewProp_Progression01 = { "Progression01", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOne_Parms, Progression01), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::NewProp_Progression01_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::NewProp_Progression01_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::NewProp_ProgressionStatus = { "ProgressionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOne_Parms, ProgressionStatus), Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::NewProp_ProgressionStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::NewProp_Progression01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::NewProp_ProgressionStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::NewProp_ProgressionStatus_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddProgressionEventWithOne", sizeof(GameAnalytics_eventAddProgressionEventWithOne_Parms), Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics
	{
		struct GameAnalytics_eventAddProgressionEventWithOneAndScore_Parms
		{
			EGAProgressionStatus ProgressionStatus;
			FString Progression01;
			int32 Score;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression01_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression01;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProgressionStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgressionStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneAndScore_Parms, Score), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_Progression01_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_Progression01 = { "Progression01", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneAndScore_Parms, Progression01), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_Progression01_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_Progression01_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_ProgressionStatus = { "ProgressionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneAndScore_Parms, ProgressionStatus), Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_ProgressionStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_Progression01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_ProgressionStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::NewProp_ProgressionStatus_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddProgressionEventWithOneAndScore", sizeof(GameAnalytics_eventAddProgressionEventWithOneAndScore_Parms), Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics
	{
		struct GameAnalytics_eventAddProgressionEventWithOneAndTwo_Parms
		{
			EGAProgressionStatus ProgressionStatus;
			FString Progression01;
			FString Progression02;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression02_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression01_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression01;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProgressionStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgressionStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression02_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression02 = { "Progression02", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneAndTwo_Parms, Progression02), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression02_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression01_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression01 = { "Progression01", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneAndTwo_Parms, Progression01), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression01_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression01_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_ProgressionStatus = { "ProgressionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneAndTwo_Parms, ProgressionStatus), Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_ProgressionStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_Progression01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_ProgressionStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::NewProp_ProgressionStatus_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddProgressionEventWithOneAndTwo", sizeof(GameAnalytics_eventAddProgressionEventWithOneAndTwo_Parms), Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics
	{
		struct GameAnalytics_eventAddProgressionEventWithOneTwoAndScore_Parms
		{
			EGAProgressionStatus ProgressionStatus;
			FString Progression01;
			FString Progression02;
			int32 Score;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression02_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression01_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression01;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProgressionStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgressionStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoAndScore_Parms, Score), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression02_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression02 = { "Progression02", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoAndScore_Parms, Progression02), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression02_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression01_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression01 = { "Progression01", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoAndScore_Parms, Progression01), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression01_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression01_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_ProgressionStatus = { "ProgressionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoAndScore_Parms, ProgressionStatus), Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_ProgressionStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_Progression01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_ProgressionStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::NewProp_ProgressionStatus_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddProgressionEventWithOneTwoAndScore", sizeof(GameAnalytics_eventAddProgressionEventWithOneTwoAndScore_Parms), Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics
	{
		struct GameAnalytics_eventAddProgressionEventWithOneTwoAndThree_Parms
		{
			EGAProgressionStatus ProgressionStatus;
			FString Progression01;
			FString Progression02;
			FString Progression03;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression03_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression03;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression02_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression01_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression01;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProgressionStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgressionStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression03_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression03 = { "Progression03", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoAndThree_Parms, Progression03), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression03_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression03_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression02_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression02 = { "Progression02", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoAndThree_Parms, Progression02), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression02_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression01_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression01 = { "Progression01", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoAndThree_Parms, Progression01), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression01_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression01_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_ProgressionStatus = { "ProgressionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEventWithOneTwoAndThree_Parms, ProgressionStatus), Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_ProgressionStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression03,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_Progression01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_ProgressionStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::NewProp_ProgressionStatus_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddProgressionEventWithOneTwoAndThree", sizeof(GameAnalytics_eventAddProgressionEventWithOneTwoAndThree_Parms), Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics
	{
		struct GameAnalytics_eventAddProgressionEvenWithOneTwoThreeAndScore_Parms
		{
			EGAProgressionStatus ProgressionStatus;
			FString Progression01;
			FString Progression02;
			FString Progression03;
			int32 Score;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression03_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression03;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression02_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression02;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progression01_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Progression01;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProgressionStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgressionStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEvenWithOneTwoThreeAndScore_Parms, Score), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_Progression03_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_Progression03 = { "Progression03", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEvenWithOneTwoThreeAndScore_Parms, Progression03), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_Progression03_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_Progression03_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_Progression02_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_Progression02 = { "Progression02", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEvenWithOneTwoThreeAndScore_Parms, Progression02), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_Progression02_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_Progression02_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_Progression01_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_Progression01 = { "Progression01", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEvenWithOneTwoThreeAndScore_Parms, Progression01), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_Progression01_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_Progression01_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_ProgressionStatus = { "ProgressionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddProgressionEvenWithOneTwoThreeAndScore_Parms, ProgressionStatus), Z_Construct_UEnum_GameAnalytics_EGAProgressionStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_ProgressionStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_Progression03,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_Progression02,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_Progression01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_ProgressionStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::NewProp_ProgressionStatus_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddProgressionEvenWithOneTwoThreeAndScore", sizeof(GameAnalytics_eventAddProgressionEvenWithOneTwoThreeAndScore_Parms), Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics
	{
		struct GameAnalytics_eventAddResourceEvent_Parms
		{
			EGAResourceFlowType FlowType;
			FString Currency;
			float Amount;
			FString ItemType;
			FString ItemId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Currency;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FlowType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FlowType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddResourceEvent_Parms, ItemId), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddResourceEvent_Parms, ItemType), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddResourceEvent_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_Currency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddResourceEvent_Parms, Currency), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_Currency_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_Currency_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_FlowType = { "FlowType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventAddResourceEvent_Parms, FlowType), Z_Construct_UEnum_GameAnalytics_EGAResourceFlowType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_FlowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_Currency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_FlowType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::NewProp_FlowType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
		{ "ToolTip", ", const char *fields" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "AddResourceEvent", sizeof(GameAnalytics_eventAddResourceEvent_Parms), Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_AddResourceEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_AddResourceEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsString_Statics
	{
		struct GameAnalytics_eventGetCommandCenterValueAsString_Parms
		{
			FString Key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventGetCommandCenterValueAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventGetCommandCenterValueAsString_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsString_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsString_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsString_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "GetCommandCenterValueAsString", sizeof(GameAnalytics_eventGetCommandCenterValueAsString_Parms), Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics
	{
		struct GameAnalytics_eventGetCommandCenterValueAsStringWithDefaultValue_Parms
		{
			FString Key;
			FString DefaultValue;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventGetCommandCenterValueAsStringWithDefaultValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventGetCommandCenterValueAsStringWithDefaultValue_Parms, DefaultValue), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::NewProp_DefaultValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventGetCommandCenterValueAsStringWithDefaultValue_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "GetCommandCenterValueAsStringWithDefaultValue", sizeof(GameAnalytics_eventGetCommandCenterValueAsStringWithDefaultValue_Parms), Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_GetConfigurationsContentAsString_Statics
	{
		struct GameAnalytics_eventGetConfigurationsContentAsString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_GetConfigurationsContentAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventGetConfigurationsContentAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_GetConfigurationsContentAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_GetConfigurationsContentAsString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_GetConfigurationsContentAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_GetConfigurationsContentAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "GetConfigurationsContentAsString", sizeof(GameAnalytics_eventGetConfigurationsContentAsString_Parms), Z_Construct_UFunction_UGameAnalytics_GetConfigurationsContentAsString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetConfigurationsContentAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_GetConfigurationsContentAsString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_GetConfigurationsContentAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_GetConfigurationsContentAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_GetConfigurationsContentAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_IsCommandCenterReady_Statics
	{
		struct GameAnalytics_eventIsCommandCenterReady_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameAnalytics_IsCommandCenterReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameAnalytics_eventIsCommandCenterReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameAnalytics_IsCommandCenterReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameAnalytics_eventIsCommandCenterReady_Parms), &Z_Construct_UFunction_UGameAnalytics_IsCommandCenterReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_IsCommandCenterReady_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_IsCommandCenterReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_IsCommandCenterReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_IsCommandCenterReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "IsCommandCenterReady", sizeof(GameAnalytics_eventIsCommandCenterReady_Parms), Z_Construct_UFunction_UGameAnalytics_IsCommandCenterReady_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_IsCommandCenterReady_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_IsCommandCenterReady_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_IsCommandCenterReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_IsCommandCenterReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_IsCommandCenterReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_SetBirthYear_Statics
	{
		struct GameAnalytics_eventSetBirthYear_Parms
		{
			int32 BirthYear;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BirthYear;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameAnalytics_SetBirthYear_Statics::NewProp_BirthYear = { "BirthYear", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventSetBirthYear_Parms, BirthYear), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_SetBirthYear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_SetBirthYear_Statics::NewProp_BirthYear,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_SetBirthYear_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_SetBirthYear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "SetBirthYear", sizeof(GameAnalytics_eventSetBirthYear_Parms), Z_Construct_UFunction_UGameAnalytics_SetBirthYear_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetBirthYear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_SetBirthYear_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetBirthYear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_SetBirthYear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_SetBirthYear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics
	{
		struct GameAnalytics_eventSetCustomDimension01_Parms
		{
			FString CustomDimension;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDimension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomDimension;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::NewProp_CustomDimension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::NewProp_CustomDimension = { "CustomDimension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventSetCustomDimension01_Parms, CustomDimension), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::NewProp_CustomDimension_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::NewProp_CustomDimension_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::NewProp_CustomDimension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "SetCustomDimension01", sizeof(GameAnalytics_eventSetCustomDimension01_Parms), Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics
	{
		struct GameAnalytics_eventSetCustomDimension02_Parms
		{
			FString CustomDimension;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDimension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomDimension;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::NewProp_CustomDimension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::NewProp_CustomDimension = { "CustomDimension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventSetCustomDimension02_Parms, CustomDimension), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::NewProp_CustomDimension_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::NewProp_CustomDimension_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::NewProp_CustomDimension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "SetCustomDimension02", sizeof(GameAnalytics_eventSetCustomDimension02_Parms), Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics
	{
		struct GameAnalytics_eventSetCustomDimension03_Parms
		{
			FString CustomDimension;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDimension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomDimension;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::NewProp_CustomDimension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::NewProp_CustomDimension = { "CustomDimension", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventSetCustomDimension03_Parms, CustomDimension), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::NewProp_CustomDimension_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::NewProp_CustomDimension_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::NewProp_CustomDimension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "SetCustomDimension03", sizeof(GameAnalytics_eventSetCustomDimension03_Parms), Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_SetFacebookId_Statics
	{
		struct GameAnalytics_eventSetFacebookId_Parms
		{
			FString FacebookId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FacebookId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FacebookId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_SetFacebookId_Statics::NewProp_FacebookId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameAnalytics_SetFacebookId_Statics::NewProp_FacebookId = { "FacebookId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventSetFacebookId_Parms, FacebookId), METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_SetFacebookId_Statics::NewProp_FacebookId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetFacebookId_Statics::NewProp_FacebookId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_SetFacebookId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_SetFacebookId_Statics::NewProp_FacebookId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_SetFacebookId_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_SetFacebookId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "SetFacebookId", sizeof(GameAnalytics_eventSetFacebookId_Parms), Z_Construct_UFunction_UGameAnalytics_SetFacebookId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetFacebookId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_SetFacebookId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetFacebookId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_SetFacebookId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_SetFacebookId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameAnalytics_SetGender_Statics
	{
		struct GameAnalytics_eventSetGender_Parms
		{
			EGAGender Gender;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameAnalytics_SetGender_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameAnalytics_eventSetGender_Parms, Gender), Z_Construct_UEnum_GameAnalytics_EGAGender, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameAnalytics_SetGender_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameAnalytics_SetGender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_SetGender_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameAnalytics_SetGender_Statics::NewProp_Gender_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameAnalytics_SetGender_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameAnalytics" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameAnalytics_SetGender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameAnalytics, nullptr, "SetGender", sizeof(GameAnalytics_eventSetGender_Parms), Z_Construct_UFunction_UGameAnalytics_SetGender_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetGender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameAnalytics_SetGender_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UGameAnalytics_SetGender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameAnalytics_SetGender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameAnalytics_SetGender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameAnalytics_NoRegister()
	{
		return UGameAnalytics::StaticClass();
	}
	struct Z_Construct_UClass_UGameAnalytics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameAnalytics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameAnalytics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameAnalytics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameAnalytics_AddBusinessEvent, "AddBusinessEvent" }, // 2038023899
		{ &Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndAutoFetchReceipt, "AddBusinessEventAndAutoFetchReceipt" }, // 3568843913
		{ &Z_Construct_UFunction_UGameAnalytics_AddBusinessEventAndroid, "AddBusinessEventAndroid" }, // 1969799334
		{ &Z_Construct_UFunction_UGameAnalytics_AddBusinessEventIOS, "AddBusinessEventIOS" }, // 1752961627
		{ &Z_Construct_UFunction_UGameAnalytics_AddDesignEvent, "AddDesignEvent" }, // 1093928245
		{ &Z_Construct_UFunction_UGameAnalytics_AddDesignEventWithValue, "AddDesignEventWithValue" }, // 1838589339
		{ &Z_Construct_UFunction_UGameAnalytics_AddErrorEvent, "AddErrorEvent" }, // 2972811349
		{ &Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOne, "AddProgressionEventWithOne" }, // 260470188
		{ &Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndScore, "AddProgressionEventWithOneAndScore" }, // 3184502420
		{ &Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneAndTwo, "AddProgressionEventWithOneAndTwo" }, // 357529314
		{ &Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndScore, "AddProgressionEventWithOneTwoAndScore" }, // 783641452
		{ &Z_Construct_UFunction_UGameAnalytics_AddProgressionEventWithOneTwoAndThree, "AddProgressionEventWithOneTwoAndThree" }, // 2995415784
		{ &Z_Construct_UFunction_UGameAnalytics_AddProgressionEvenWithOneTwoThreeAndScore, "AddProgressionEvenWithOneTwoThreeAndScore" }, // 3842956396
		{ &Z_Construct_UFunction_UGameAnalytics_AddResourceEvent, "AddResourceEvent" }, // 1599780808
		{ &Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsString, "GetCommandCenterValueAsString" }, // 3974443805
		{ &Z_Construct_UFunction_UGameAnalytics_GetCommandCenterValueAsStringWithDefaultValue, "GetCommandCenterValueAsStringWithDefaultValue" }, // 2377561247
		{ &Z_Construct_UFunction_UGameAnalytics_GetConfigurationsContentAsString, "GetConfigurationsContentAsString" }, // 622109365
		{ &Z_Construct_UFunction_UGameAnalytics_IsCommandCenterReady, "IsCommandCenterReady" }, // 3737299767
		{ &Z_Construct_UFunction_UGameAnalytics_SetBirthYear, "SetBirthYear" }, // 3687305930
		{ &Z_Construct_UFunction_UGameAnalytics_SetCustomDimension01, "SetCustomDimension01" }, // 1368179598
		{ &Z_Construct_UFunction_UGameAnalytics_SetCustomDimension02, "SetCustomDimension02" }, // 133609412
		{ &Z_Construct_UFunction_UGameAnalytics_SetCustomDimension03, "SetCustomDimension03" }, // 3984410512
		{ &Z_Construct_UFunction_UGameAnalytics_SetFacebookId, "SetFacebookId" }, // 2559787474
		{ &Z_Construct_UFunction_UGameAnalytics_SetGender, "SetGender" }, // 1497340015
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameAnalytics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameAnalytics.h" },
		{ "ModuleRelativePath", "Public/GameAnalytics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameAnalytics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameAnalytics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameAnalytics_Statics::ClassParams = {
		&UGameAnalytics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameAnalytics_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGameAnalytics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameAnalytics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameAnalytics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameAnalytics, 92151657);
	template<> GAMEANALYTICS_API UClass* StaticClass<UGameAnalytics>()
	{
		return UGameAnalytics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameAnalytics(Z_Construct_UClass_UGameAnalytics, &UGameAnalytics::StaticClass, TEXT("/Script/GameAnalytics"), TEXT("UGameAnalytics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameAnalytics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
