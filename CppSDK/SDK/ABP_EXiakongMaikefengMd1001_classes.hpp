﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_EXiakongMaikefengMd1001

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "KuroAnim_structs.hpp"
#include "KuroAnim_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_EXiakongMaikefengMd1001.ABP_EXiakongMaikefengMd1001_C
// 0x0AA0 (0x11F0 - 0x0750)
class UABP_EXiakongMaikefengMd1001_C final : public UKuroAnimInstance
{
public:
	uint8                                         Pad_748[0x8];                                      // 0x0748(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0750(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0758(0x0038)()
	struct FAnimNode_ExtraFollowAnims             AnimGraphNode_ExtraFollowAnims;                    // 0x0790(0x0A50)()
	class ATsBaseCharacter_C*                     当前角色;                                          // 0x11E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ABP_EXiakongMaikefengMd1001(int32 EntryPoint);
	void BlueprintInitializeAnimation();
	void OnComponentStart();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_EXiakongMaikefengMd1001_C">();
	}
	static class UABP_EXiakongMaikefengMd1001_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_EXiakongMaikefengMd1001_C>();
	}
};
static_assert(alignof(UABP_EXiakongMaikefengMd1001_C) == 0x000010, "Wrong alignment on UABP_EXiakongMaikefengMd1001_C");
static_assert(sizeof(UABP_EXiakongMaikefengMd1001_C) == 0x0011F0, "Wrong size on UABP_EXiakongMaikefengMd1001_C");
static_assert(offsetof(UABP_EXiakongMaikefengMd1001_C, UberGraphFrame) == 0x000750, "Member 'UABP_EXiakongMaikefengMd1001_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_EXiakongMaikefengMd1001_C, AnimGraphNode_Root) == 0x000758, "Member 'UABP_EXiakongMaikefengMd1001_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_EXiakongMaikefengMd1001_C, AnimGraphNode_ExtraFollowAnims) == 0x000790, "Member 'UABP_EXiakongMaikefengMd1001_C::AnimGraphNode_ExtraFollowAnims' has a wrong offset!");
static_assert(offsetof(UABP_EXiakongMaikefengMd1001_C, 当前角色) == 0x0011E0, "Member 'UABP_EXiakongMaikefengMd1001_C::当前角色' has a wrong offset!");

}

