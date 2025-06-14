﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_EffectUtil

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPL_EffectUtil.BPL_EffectUtil_C.InitializeWithPreview
// 0x0028 (0x0028 - 0x0000)
struct BPL_EffectUtil_C_InitializeWithPreview final
{
public:
	class UObject*                                WorldContext;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Refresh;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Length;                                            // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEffectSystemInEditorNoPIE_ReturnValue;  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPL_EffectUtil_C_InitializeWithPreview) == 0x000008, "Wrong alignment on BPL_EffectUtil_C_InitializeWithPreview");
static_assert(sizeof(BPL_EffectUtil_C_InitializeWithPreview) == 0x000028, "Wrong size on BPL_EffectUtil_C_InitializeWithPreview");
static_assert(offsetof(BPL_EffectUtil_C_InitializeWithPreview, WorldContext) == 0x000000, "Member 'BPL_EffectUtil_C_InitializeWithPreview::WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_EffectUtil_C_InitializeWithPreview, Refresh) == 0x000008, "Member 'BPL_EffectUtil_C_InitializeWithPreview::Refresh' has a wrong offset!");
static_assert(offsetof(BPL_EffectUtil_C_InitializeWithPreview, __WorldContext) == 0x000010, "Member 'BPL_EffectUtil_C_InitializeWithPreview::__WorldContext' has a wrong offset!");
static_assert(offsetof(BPL_EffectUtil_C_InitializeWithPreview, Success) == 0x000018, "Member 'BPL_EffectUtil_C_InitializeWithPreview::Success' has a wrong offset!");
static_assert(offsetof(BPL_EffectUtil_C_InitializeWithPreview, Length) == 0x00001C, "Member 'BPL_EffectUtil_C_InitializeWithPreview::Length' has a wrong offset!");
static_assert(offsetof(BPL_EffectUtil_C_InitializeWithPreview, CallFunc_IsEffectSystemInEditorNoPIE_ReturnValue) == 0x000020, "Member 'BPL_EffectUtil_C_InitializeWithPreview::CallFunc_IsEffectSystemInEditorNoPIE_ReturnValue' has a wrong offset!");

}

