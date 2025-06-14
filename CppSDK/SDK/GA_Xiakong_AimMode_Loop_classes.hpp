﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Xiakong_AimMode_Loop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Xiakong_AimMode_Loop.GA_Xiakong_AimMode_Loop_C
// 0x0020 (0x0588 - 0x0568)
class UGA_Xiakong_AimMode_Loop_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Xiakong_AimMode_Loop_C;          // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGameplayTask_WaitDelay*                Async_Task;                                        // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          蓄力开始;                                          // 0x0578(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          射击中;                                            // 0x0579(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_57A[0x2];                                      // 0x057A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         蓄力特效子弹;                                      // 0x057C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          按键抬起;                                          // 0x0580(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_Xiakong_AimMode_Loop(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void Added_C0BE7E5F4A9AE32F87DB0D81FEC47FAE(const struct FGameplayTag& Tag);
	void Added_2589ACF74A590F0F626F869EE7AC3F52(const struct FGameplayTag& Tag);
	void Added_7B5E4C3A42485221C7D9CBB492F09385(const struct FGameplayTag& Tag);
	void Removed_616C166F4CA09888E9D279A9E32E1A8B(const struct FGameplayTag& Tag);
	void Added_1A816C074BCA3B69D4953AAAD9695949(const struct FGameplayTag& Tag);
	void Added_54A09F124A8BE957E33AAB91DE1058BC(const struct FGameplayTag& Tag);
	void EventReceived_18B59F5945020DB23C42FD88CFE77C27(const struct FGameplayEventData& Payload);
	void EventReceived_18B59F5945020DB23C42FD88B3D9C9A0(const struct FGameplayEventData& Payload);
	void EventReceived_18B59F5945020DB23C42FD88F21195F6(const struct FGameplayEventData& Payload);
	void EventReceived_18B59F5945020DB23C42FD88865E0992(const struct FGameplayEventData& Payload);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Xiakong_AimMode_Loop_C">();
	}
	static class UGA_Xiakong_AimMode_Loop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Xiakong_AimMode_Loop_C>();
	}
};
static_assert(alignof(UGA_Xiakong_AimMode_Loop_C) == 0x000008, "Wrong alignment on UGA_Xiakong_AimMode_Loop_C");
static_assert(sizeof(UGA_Xiakong_AimMode_Loop_C) == 0x000588, "Wrong size on UGA_Xiakong_AimMode_Loop_C");
static_assert(offsetof(UGA_Xiakong_AimMode_Loop_C, UberGraphFrame_GA_Xiakong_AimMode_Loop_C) == 0x000568, "Member 'UGA_Xiakong_AimMode_Loop_C::UberGraphFrame_GA_Xiakong_AimMode_Loop_C' has a wrong offset!");
static_assert(offsetof(UGA_Xiakong_AimMode_Loop_C, Async_Task) == 0x000570, "Member 'UGA_Xiakong_AimMode_Loop_C::Async_Task' has a wrong offset!");
static_assert(offsetof(UGA_Xiakong_AimMode_Loop_C, 蓄力开始) == 0x000578, "Member 'UGA_Xiakong_AimMode_Loop_C::蓄力开始' has a wrong offset!");
static_assert(offsetof(UGA_Xiakong_AimMode_Loop_C, 射击中) == 0x000579, "Member 'UGA_Xiakong_AimMode_Loop_C::射击中' has a wrong offset!");
static_assert(offsetof(UGA_Xiakong_AimMode_Loop_C, 蓄力特效子弹) == 0x00057C, "Member 'UGA_Xiakong_AimMode_Loop_C::蓄力特效子弹' has a wrong offset!");
static_assert(offsetof(UGA_Xiakong_AimMode_Loop_C, 按键抬起) == 0x000580, "Member 'UGA_Xiakong_AimMode_Loop_C::按键抬起' has a wrong offset!");

}

