#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_VM_Common

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SAiConditions_structs.hpp"
#include "AIC_AICommon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIC_VM_Common.AIC_VM_Common_C
// 0x0248 (0x09C8 - 0x0780)
class AAIC_VM_Common_C final : public AAIC_AICommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AIC_VM_Common_C;                    // 0x0780(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSAiConditions                         _K__;                                              // 0x0788(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         _____0;                                            // 0x0840(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38B4[0x4];                                     // 0x0844(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ___b__h;                                           // 0x0848(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSAiConditions                         ______h;                                           // 0x0850(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         __P9_Minus;                                        // 0x0908(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_BaseVision_C*                       As_BP_Base_Vision;                                 // 0x09C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void OnStart();
	void ____h_(bool bContent);
	void Func________0();
	void Func______0(bool bContent);
	void M_P9(bool bContent);
	void ExecuteUbergraph_AIC_VM_Common(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIC_VM_Common_C">();
	}
	static class AAIC_VM_Common_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIC_VM_Common_C>();
	}
};
static_assert(alignof(AAIC_VM_Common_C) == 0x000008, "Wrong alignment on AAIC_VM_Common_C");
static_assert(sizeof(AAIC_VM_Common_C) == 0x0009C8, "Wrong size on AAIC_VM_Common_C");
static_assert(offsetof(AAIC_VM_Common_C, UberGraphFrame_AIC_VM_Common_C) == 0x000780, "Member 'AAIC_VM_Common_C::UberGraphFrame_AIC_VM_Common_C' has a wrong offset!");
static_assert(offsetof(AAIC_VM_Common_C, _K__) == 0x000788, "Member 'AAIC_VM_Common_C::_K__' has a wrong offset!");
static_assert(offsetof(AAIC_VM_Common_C, _____0) == 0x000840, "Member 'AAIC_VM_Common_C::_____0' has a wrong offset!");
static_assert(offsetof(AAIC_VM_Common_C, ___b__h) == 0x000848, "Member 'AAIC_VM_Common_C::___b__h' has a wrong offset!");
static_assert(offsetof(AAIC_VM_Common_C, ______h) == 0x000850, "Member 'AAIC_VM_Common_C::______h' has a wrong offset!");
static_assert(offsetof(AAIC_VM_Common_C, __P9_Minus) == 0x000908, "Member 'AAIC_VM_Common_C::__P9_Minus' has a wrong offset!");
static_assert(offsetof(AAIC_VM_Common_C, As_BP_Base_Vision) == 0x0009C0, "Member 'AAIC_VM_Common_C::As_BP_Base_Vision' has a wrong offset!");

}

