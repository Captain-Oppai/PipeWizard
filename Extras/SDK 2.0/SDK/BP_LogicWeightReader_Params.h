﻿#pragma once

/**
 * Name: Hydroneer
 * Version: 2.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverridePlacedDown
	 */
	struct ABP_LogicWeightReader_C_OverridePlacedDown_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverrideLoaded
	 */
	struct ABP_LogicWeightReader_C_OverrideLoaded_Params
	{
	};

	/**
	 * Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverrideStartPlacing
	 */
	struct ABP_LogicWeightReader_C_OverrideStartPlacing_Params
	{
	};

	/**
	 * Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverrideDroppedItem
	 */
	struct ABP_LogicWeightReader_C_OverrideDroppedItem_Params
	{
	public:
		class ABP_GameCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverridePickedup
	 */
	struct ABP_LogicWeightReader_C_OverridePickedup_Params
	{
	};

	/**
	 * Function BP_LogicWeightReader.BP_LogicWeightReader_C.BndEvt__BP_LogicWeightReader_WeightDetectBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_LogicWeightReader_C_BndEvt__BP_LogicWeightReader_WeightDetectBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_LogicWeightReader.BP_LogicWeightReader_C.OverrideLogicIn
	 */
	struct ABP_LogicWeightReader_C_OverrideLogicIn_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_LogicWeightReader.BP_LogicWeightReader_C.ExecuteUbergraph_BP_LogicWeightReader
	 */
	struct ABP_LogicWeightReader_C_ExecuteUbergraph_BP_LogicWeightReader_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
