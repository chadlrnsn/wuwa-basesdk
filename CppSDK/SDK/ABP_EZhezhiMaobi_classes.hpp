#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_EZhezhiMaobi

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "KawaiiPhysics_structs.hpp"
#include "KuroAnim_structs.hpp"
#include "KuroAnim_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_EZhezhiMaobi.ABP_EZhezhiMaobi_C
// 0x0D90 (0x1380 - 0x05F0)
class UABP_EZhezhiMaobi_C final : public UKuroAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x05F8(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0618(0x0020)()
	uint8                                         Pad_3615[0x8];                                     // 0x0638(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_KawaiiPhysics                AnimGraphNode_KawaiiPhysics;                       // 0x0640(0x0280)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x08C0(0x0038)()
	uint8                                         Pad_3616[0x8];                                     // 0x08F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_ExtraFollowAnims             AnimGraphNode_ExtraFollowAnims;                    // 0x0900(0x0A50)()
	class ATsBaseCharacter_C*                     _r__;                                              // 0x1350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          AnimInstance;                                      // 0x1358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 DaMaobi;                                           // 0x1360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ____Minus;                                         // 0x1368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3617[0x7];                                     // 0x1369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimaryDataAsset*                      HideEffect;                                        // 0x1370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     SM_r;                                              // 0x1378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ___();
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void OnComponentStart();
	void ExecuteUbergraph_ABP_EZhezhiMaobi(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_EZhezhiMaobi_C">();
	}
	static class UABP_EZhezhiMaobi_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_EZhezhiMaobi_C>();
	}
};
static_assert(alignof(UABP_EZhezhiMaobi_C) == 0x000010, "Wrong alignment on UABP_EZhezhiMaobi_C");
static_assert(sizeof(UABP_EZhezhiMaobi_C) == 0x001380, "Wrong size on UABP_EZhezhiMaobi_C");
static_assert(offsetof(UABP_EZhezhiMaobi_C, UberGraphFrame) == 0x0005F0, "Member 'UABP_EZhezhiMaobi_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_EZhezhiMaobi_C, AnimGraphNode_ComponentToLocalSpace) == 0x0005F8, "Member 'UABP_EZhezhiMaobi_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UABP_EZhezhiMaobi_C, AnimGraphNode_LocalToComponentSpace) == 0x000618, "Member 'UABP_EZhezhiMaobi_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UABP_EZhezhiMaobi_C, AnimGraphNode_KawaiiPhysics) == 0x000640, "Member 'UABP_EZhezhiMaobi_C::AnimGraphNode_KawaiiPhysics' has a wrong offset!");
static_assert(offsetof(UABP_EZhezhiMaobi_C, AnimGraphNode_Root) == 0x0008C0, "Member 'UABP_EZhezhiMaobi_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_EZhezhiMaobi_C, AnimGraphNode_ExtraFollowAnims) == 0x000900, "Member 'UABP_EZhezhiMaobi_C::AnimGraphNode_ExtraFollowAnims' has a wrong offset!");
static_assert(offsetof(UABP_EZhezhiMaobi_C, _r__) == 0x001350, "Member 'UABP_EZhezhiMaobi_C::_r__' has a wrong offset!");
static_assert(offsetof(UABP_EZhezhiMaobi_C, AnimInstance) == 0x001358, "Member 'UABP_EZhezhiMaobi_C::AnimInstance' has a wrong offset!");
static_assert(offsetof(UABP_EZhezhiMaobi_C, DaMaobi) == 0x001360, "Member 'UABP_EZhezhiMaobi_C::DaMaobi' has a wrong offset!");
static_assert(offsetof(UABP_EZhezhiMaobi_C, ____Minus) == 0x001368, "Member 'UABP_EZhezhiMaobi_C::____Minus' has a wrong offset!");
static_assert(offsetof(UABP_EZhezhiMaobi_C, HideEffect) == 0x001370, "Member 'UABP_EZhezhiMaobi_C::HideEffect' has a wrong offset!");
static_assert(offsetof(UABP_EZhezhiMaobi_C, SM_r) == 0x001378, "Member 'UABP_EZhezhiMaobi_C::SM_r' has a wrong offset!");

}

