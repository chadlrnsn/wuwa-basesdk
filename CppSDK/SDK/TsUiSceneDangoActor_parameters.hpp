﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsUiSceneDangoActor

#include "Basic.hpp"


namespace SDK::Params
{

// Function TsUiSceneDangoActor.TsUiSceneDangoActor_C.ExecuteUbergraph_TsUiSceneDangoActor
// 0x0008 (0x0008 - 0x0000)
struct TsUiSceneDangoActor_C_ExecuteUbergraph_TsUiSceneDangoActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsUiSceneDangoActor_C_ExecuteUbergraph_TsUiSceneDangoActor) == 0x000004, "Wrong alignment on TsUiSceneDangoActor_C_ExecuteUbergraph_TsUiSceneDangoActor");
static_assert(sizeof(TsUiSceneDangoActor_C_ExecuteUbergraph_TsUiSceneDangoActor) == 0x000008, "Wrong size on TsUiSceneDangoActor_C_ExecuteUbergraph_TsUiSceneDangoActor");
static_assert(offsetof(TsUiSceneDangoActor_C_ExecuteUbergraph_TsUiSceneDangoActor, EntryPoint) == 0x000000, "Member 'TsUiSceneDangoActor_C_ExecuteUbergraph_TsUiSceneDangoActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(TsUiSceneDangoActor_C_ExecuteUbergraph_TsUiSceneDangoActor, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'TsUiSceneDangoActor_C_ExecuteUbergraph_TsUiSceneDangoActor::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function TsUiSceneDangoActor.TsUiSceneDangoActor_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct TsUiSceneDangoActor_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TsUiSceneDangoActor_C_ReceiveTick) == 0x000004, "Wrong alignment on TsUiSceneDangoActor_C_ReceiveTick");
static_assert(sizeof(TsUiSceneDangoActor_C_ReceiveTick) == 0x000004, "Wrong size on TsUiSceneDangoActor_C_ReceiveTick");
static_assert(offsetof(TsUiSceneDangoActor_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'TsUiSceneDangoActor_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

