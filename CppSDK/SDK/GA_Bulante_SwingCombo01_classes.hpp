﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Bulante_SwingCombo01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Bulante_SwingCombo01.GA_Bulante_SwingCombo01_C
// 0x0078 (0x05E0 - 0x0568)
class UGA_Bulante_SwingCombo01_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Bulante_SwingCombo01_C;          // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAbilityTask_WaitGameplayTagAdded*      异步任务;                                          // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*      异步任务_0;                                        // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*      异步任务_1;                                        // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          落地攻击;                                          // 0x0588(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_589[0x3];                                      // 0x0589(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BlockTime;                                         // 0x058C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          正在Looping;                                       // 0x0590(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          正在主动Flerping;                                  // 0x0591(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          正在被动Flerping;                                  // 0x0592(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          正在动画1;                                         // 0x0593(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          正在动画5;                                         // 0x0594(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_595[0x3];                                      // 0x0595(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     施法角色;                                          // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     技能目标;                                          // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          飞燕触发了弹飞;                                    // 0x05A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A9[0x7];                                      // 0x05A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVectorDouble                          上一帧的位置;                                      // 0x05B0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      Object_Types;                                      // 0x05C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          射线检测开关;                                      // 0x05D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D9[0x3];                                      // 0x05D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Time;                                              // 0x05DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Bulante_SwingCombo01(int32 EntryPoint);
	void 飞燕触发弹飞();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E811DAF5403();
	void OnBlendOut_5D118C384AE61F1C80292E811DAF5403();
	void OnInterrupted_5D118C384AE61F1C80292E811DAF5403();
	void OnCancelled_5D118C384AE61F1C80292E811DAF5403();
	void OnTick_5D118C384AE61F1C80292E811DAF5403();
	void OnCompleted_5D118C384AE61F1C80292E8154943207();
	void OnBlendOut_5D118C384AE61F1C80292E8154943207();
	void OnInterrupted_5D118C384AE61F1C80292E8154943207();
	void OnCancelled_5D118C384AE61F1C80292E8154943207();
	void OnTick_5D118C384AE61F1C80292E8154943207();
	void OnFinish_3C631D5E46829A8BCC12ADAC8C31C0A5();
	void OnFinish_5AEC055B40D8709CE8BBB2B157F5CE6B();
	void Removed_DB9F64004F8908FEAD99D381199AA9CB(const struct FGameplayTag& Tag);
	void Removed_DB9F64004F8908FEAD99D381FB5E7E3F(const struct FGameplayTag& Tag);
	void OnCompleted_5D118C384AE61F1C80292E815DD21188();
	void OnBlendOut_5D118C384AE61F1C80292E815DD21188();
	void OnInterrupted_5D118C384AE61F1C80292E815DD21188();
	void OnCancelled_5D118C384AE61F1C80292E815DD21188();
	void OnTick_5D118C384AE61F1C80292E815DD21188();
	void Added_21071CB943CD992BF8EFD6A307B40980(const struct FGameplayTag& Tag);
	void OnCompleted_5D118C384AE61F1C80292E8159866D2F();
	void OnBlendOut_5D118C384AE61F1C80292E8159866D2F();
	void OnInterrupted_5D118C384AE61F1C80292E8159866D2F();
	void OnCancelled_5D118C384AE61F1C80292E8159866D2F();
	void OnTick_5D118C384AE61F1C80292E8159866D2F();
	void OnCompleted_5D118C384AE61F1C80292E812C30CAC7();
	void OnBlendOut_5D118C384AE61F1C80292E812C30CAC7();
	void OnInterrupted_5D118C384AE61F1C80292E812C30CAC7();
	void OnCancelled_5D118C384AE61F1C80292E812C30CAC7();
	void OnTick_5D118C384AE61F1C80292E812C30CAC7();
	void OnCompleted_5D118C384AE61F1C80292E812BD84E08();
	void OnBlendOut_5D118C384AE61F1C80292E812BD84E08();
	void OnInterrupted_5D118C384AE61F1C80292E812BD84E08();
	void OnCancelled_5D118C384AE61F1C80292E812BD84E08();
	void OnTick_5D118C384AE61F1C80292E812BD84E08();
	void Added_21071CB943CD992BF8EFD6A35C96AD38(const struct FGameplayTag& Tag);
	void OnCompleted_5D118C384AE61F1C80292E81C34F5A14();
	void OnBlendOut_5D118C384AE61F1C80292E81C34F5A14();
	void OnInterrupted_5D118C384AE61F1C80292E81C34F5A14();
	void OnCancelled_5D118C384AE61F1C80292E81C34F5A14();
	void OnTick_5D118C384AE61F1C80292E81C34F5A14();
	void Added_21071CB943CD992BF8EFD6A3E72EAEA4(const struct FGameplayTag& Tag);
	void Added_21071CB943CD992BF8EFD6A37AB9F9A0(const struct FGameplayTag& Tag);
	void 检测是否击中怪物(bool* NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Bulante_SwingCombo01_C">();
	}
	static class UGA_Bulante_SwingCombo01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Bulante_SwingCombo01_C>();
	}
};
static_assert(alignof(UGA_Bulante_SwingCombo01_C) == 0x000008, "Wrong alignment on UGA_Bulante_SwingCombo01_C");
static_assert(sizeof(UGA_Bulante_SwingCombo01_C) == 0x0005E0, "Wrong size on UGA_Bulante_SwingCombo01_C");
static_assert(offsetof(UGA_Bulante_SwingCombo01_C, UberGraphFrame_GA_Bulante_SwingCombo01_C) == 0x000568, "Member 'UGA_Bulante_SwingCombo01_C::UberGraphFrame_GA_Bulante_SwingCombo01_C' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo01_C, 异步任务) == 0x000570, "Member 'UGA_Bulante_SwingCombo01_C::异步任务' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo01_C, 异步任务_0) == 0x000578, "Member 'UGA_Bulante_SwingCombo01_C::异步任务_0' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo01_C, 异步任务_1) == 0x000580, "Member 'UGA_Bulante_SwingCombo01_C::异步任务_1' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo01_C, 落地攻击) == 0x000588, "Member 'UGA_Bulante_SwingCombo01_C::落地攻击' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo01_C, BlockTime) == 0x00058C, "Member 'UGA_Bulante_SwingCombo01_C::BlockTime' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo01_C, 正在Looping) == 0x000590, "Member 'UGA_Bulante_SwingCombo01_C::正在Looping' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo01_C, 正在主动Flerping) == 0x000591, "Member 'UGA_Bulante_SwingCombo01_C::正在主动Flerping' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo01_C, 正在被动Flerping) == 0x000592, "Member 'UGA_Bulante_SwingCombo01_C::正在被动Flerping' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo01_C, 正在动画1) == 0x000593, "Member 'UGA_Bulante_SwingCombo01_C::正在动画1' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo01_C, 正在动画5) == 0x000594, "Member 'UGA_Bulante_SwingCombo01_C::正在动画5' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo01_C, 施法角色) == 0x000598, "Member 'UGA_Bulante_SwingCombo01_C::施法角色' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo01_C, 技能目标) == 0x0005A0, "Member 'UGA_Bulante_SwingCombo01_C::技能目标' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo01_C, 飞燕触发了弹飞) == 0x0005A8, "Member 'UGA_Bulante_SwingCombo01_C::飞燕触发了弹飞' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo01_C, 上一帧的位置) == 0x0005B0, "Member 'UGA_Bulante_SwingCombo01_C::上一帧的位置' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo01_C, Object_Types) == 0x0005C8, "Member 'UGA_Bulante_SwingCombo01_C::Object_Types' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo01_C, 射线检测开关) == 0x0005D8, "Member 'UGA_Bulante_SwingCombo01_C::射线检测开关' has a wrong offset!");
static_assert(offsetof(UGA_Bulante_SwingCombo01_C, Time) == 0x0005DC, "Member 'UGA_Bulante_SwingCombo01_C::Time' has a wrong offset!");

}

