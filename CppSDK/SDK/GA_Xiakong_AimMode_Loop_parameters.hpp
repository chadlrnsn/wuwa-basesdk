﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Xiakong_AimMode_Loop

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Xiakong_AimMode_Loop.GA_Xiakong_AimMode_Loop_C.ExecuteUbergraph_GA_Xiakong_AimMode_Loop
// 0x08B0 (0x08B0 - 0x0000)
struct GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_CustomEvent_Payload_2;                      // 0x0008(0x00B8)()
	struct FGameplayEventData                     ___struct_Variable;                                // 0x00C0(0x00B8)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_181[0x7];                                      // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;  // 0x0188(0x0028)(ZeroConstructor)
	struct FGameplayEventData                     K2Node_CustomEvent_Payload_1;                      // 0x01B0(0x00B8)()
	struct FGameplayEventData                     ___struct_Variable_1;                              // 0x0268(0x00B8)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue_1;          // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0328(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_329[0x7];                                      // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_1; // 0x0330(0x0028)(ZeroConstructor)
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0358(0x00B8)()
	struct FGameplayEventData                     ___struct_Variable_2;                              // 0x0410(0x00B8)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue_2;          // 0x04C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x04D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D1[0x7];                                      // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayTag& Tag)> K2Node_CreateDelegate_OutputDelegate_2;          // 0x04D8(0x0028)(ZeroConstructor)
	struct FGameplayTag                           K2Node_CustomEvent_Tag_5;                          // 0x0500(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ___struct_Variable_3;                              // 0x050C(0x000C)(NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x0518(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0520(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_521[0x7];                                      // 0x0521(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayTag& Tag)> K2Node_CreateDelegate_OutputDelegate_3;          // 0x0528(0x0028)(ZeroConstructor)
	struct FGameplayTag                           K2Node_CustomEvent_Tag_4;                          // 0x0550(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ___struct_Variable_4;                              // 0x055C(0x000C)(NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_1;         // 0x0568(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0570(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_571[0x7];                                      // 0x0571(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayTag& Tag)> K2Node_CreateDelegate_OutputDelegate_4;          // 0x0578(0x0028)(ZeroConstructor)
	struct FGameplayTag                           K2Node_CustomEvent_Tag_3;                          // 0x05A0(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ___struct_Variable_5;                              // 0x05AC(0x000C)(NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagRemoved*    CallFunc_WaitGameplayTagRemove_ReturnValue;        // 0x05B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x05C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C1[0x7];                                      // 0x05C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayTag& Tag)> K2Node_CreateDelegate_OutputDelegate_5;          // 0x05C8(0x0028)(ZeroConstructor)
	struct FGameplayTag                           K2Node_CustomEvent_Tag_2;                          // 0x05F0(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ___struct_Variable_6;                              // 0x05FC(0x000C)(NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_2;         // 0x0608(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0610(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_611[0x7];                                      // 0x0611(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayTag& Tag)> K2Node_CreateDelegate_OutputDelegate_6;          // 0x0618(0x0028)(ZeroConstructor)
	struct FGameplayTag                           K2Node_CustomEvent_Tag_1;                          // 0x0640(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ___struct_Variable_7;                              // 0x064C(0x000C)(NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_3;         // 0x0658(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0660(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_661[0x7];                                      // 0x0661(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayTag& Tag)> K2Node_CreateDelegate_OutputDelegate_7;          // 0x0668(0x0028)(ZeroConstructor)
	struct FGameplayTag                           K2Node_CustomEvent_Tag;                            // 0x0690(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ___struct_Variable_8;                              // 0x069C(0x000C)(NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue_4;         // 0x06A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x06B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B1[0x7];                                      // 0x06B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_8; // 0x06B8(0x0028)(ZeroConstructor)
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue_3;          // 0x06E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x06E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc______________;                            // 0x06F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x06F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F2[0x6];                                      // 0x06F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     ___struct_Variable_9;                              // 0x06F8(0x00B8)()
	struct FGameplayEventData                     K2Node_CustomEvent_Payload_3;                      // 0x07B0(0x00B8)()
	class ATsBaseCharacter_C*                     CallFunc___________1;                              // 0x0868(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0870(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_871[0x7];                                      // 0x0871(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_9; // 0x0878(0x0028)(ZeroConstructor)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x08A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop) == 0x000008, "Wrong alignment on GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop");
static_assert(sizeof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop) == 0x0008B0, "Wrong size on GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, EntryPoint) == 0x000000, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CustomEvent_Payload_2) == 0x000008, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CustomEvent_Payload_2' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, ___struct_Variable) == 0x0000C0, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::___struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000178, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_IsValid_ReturnValue) == 0x000180, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CreateDelegate_OutputDelegate) == 0x000188, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CustomEvent_Payload_1) == 0x0001B0, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CustomEvent_Payload_1' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, ___struct_Variable_1) == 0x000268, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::___struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_WaitGameplayEvent_ReturnValue_1) == 0x000320, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_WaitGameplayEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_IsValid_ReturnValue_1) == 0x000328, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CreateDelegate_OutputDelegate_1) == 0x000330, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CustomEvent_Payload) == 0x000358, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, ___struct_Variable_2) == 0x000410, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::___struct_Variable_2' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_WaitGameplayEvent_ReturnValue_2) == 0x0004C8, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_WaitGameplayEvent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_IsValid_ReturnValue_2) == 0x0004D0, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CreateDelegate_OutputDelegate_2) == 0x0004D8, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CustomEvent_Tag_5) == 0x000500, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CustomEvent_Tag_5' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, ___struct_Variable_3) == 0x00050C, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::___struct_Variable_3' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x000518, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_IsValid_ReturnValue_3) == 0x000520, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CreateDelegate_OutputDelegate_3) == 0x000528, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CustomEvent_Tag_4) == 0x000550, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CustomEvent_Tag_4' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, ___struct_Variable_4) == 0x00055C, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::___struct_Variable_4' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_WaitGameplayTagAdd_ReturnValue_1) == 0x000568, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_WaitGameplayTagAdd_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_IsValid_ReturnValue_4) == 0x000570, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CreateDelegate_OutputDelegate_4) == 0x000578, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CustomEvent_Tag_3) == 0x0005A0, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CustomEvent_Tag_3' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, ___struct_Variable_5) == 0x0005AC, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::___struct_Variable_5' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_WaitGameplayTagRemove_ReturnValue) == 0x0005B8, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_WaitGameplayTagRemove_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_IsValid_ReturnValue_5) == 0x0005C0, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CreateDelegate_OutputDelegate_5) == 0x0005C8, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CustomEvent_Tag_2) == 0x0005F0, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CustomEvent_Tag_2' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, ___struct_Variable_6) == 0x0005FC, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::___struct_Variable_6' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_WaitGameplayTagAdd_ReturnValue_2) == 0x000608, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_WaitGameplayTagAdd_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_IsValid_ReturnValue_6) == 0x000610, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CreateDelegate_OutputDelegate_6) == 0x000618, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CustomEvent_Tag_1) == 0x000640, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CustomEvent_Tag_1' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, ___struct_Variable_7) == 0x00064C, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::___struct_Variable_7' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_WaitGameplayTagAdd_ReturnValue_3) == 0x000658, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_WaitGameplayTagAdd_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_IsValid_ReturnValue_7) == 0x000660, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CreateDelegate_OutputDelegate_7) == 0x000668, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CustomEvent_Tag) == 0x000690, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CustomEvent_Tag' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, ___struct_Variable_8) == 0x00069C, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::___struct_Variable_8' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_WaitGameplayTagAdd_ReturnValue_4) == 0x0006A8, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_WaitGameplayTagAdd_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_IsValid_ReturnValue_8) == 0x0006B0, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CreateDelegate_OutputDelegate_8) == 0x0006B8, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_WaitGameplayEvent_ReturnValue_3) == 0x0006E0, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_WaitGameplayEvent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc__________) == 0x0006E8, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc______________) == 0x0006F0, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc______________' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_IsValid_ReturnValue_9) == 0x0006F1, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, ___struct_Variable_9) == 0x0006F8, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::___struct_Variable_9' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CustomEvent_Payload_3) == 0x0007B0, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CustomEvent_Payload_3' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc___________1) == 0x000868, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_Event_bWasCancelled) == 0x000870, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, K2Node_CreateDelegate_OutputDelegate_9) == 0x000878, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop, CallFunc_Conv_IntToString_ReturnValue) == 0x0008A0, "Member 'GA_Xiakong_AimMode_Loop_C_ExecuteUbergraph_GA_Xiakong_AimMode_Loop::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");

// Function GA_Xiakong_AimMode_Loop.GA_Xiakong_AimMode_Loop_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Xiakong_AimMode_Loop_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Xiakong_AimMode_Loop_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_Xiakong_AimMode_Loop_C_K2_OnEndAbility");
static_assert(sizeof(GA_Xiakong_AimMode_Loop_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Xiakong_AimMode_Loop_C_K2_OnEndAbility");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Xiakong_AimMode_Loop_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Xiakong_AimMode_Loop.GA_Xiakong_AimMode_Loop_C.Added_C0BE7E5F4A9AE32F87DB0D81FEC47FAE
// 0x000C (0x000C - 0x0000)
struct GA_Xiakong_AimMode_Loop_C_Added_C0BE7E5F4A9AE32F87DB0D81FEC47FAE final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Xiakong_AimMode_Loop_C_Added_C0BE7E5F4A9AE32F87DB0D81FEC47FAE) == 0x000004, "Wrong alignment on GA_Xiakong_AimMode_Loop_C_Added_C0BE7E5F4A9AE32F87DB0D81FEC47FAE");
static_assert(sizeof(GA_Xiakong_AimMode_Loop_C_Added_C0BE7E5F4A9AE32F87DB0D81FEC47FAE) == 0x00000C, "Wrong size on GA_Xiakong_AimMode_Loop_C_Added_C0BE7E5F4A9AE32F87DB0D81FEC47FAE");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_Added_C0BE7E5F4A9AE32F87DB0D81FEC47FAE, Tag) == 0x000000, "Member 'GA_Xiakong_AimMode_Loop_C_Added_C0BE7E5F4A9AE32F87DB0D81FEC47FAE::Tag' has a wrong offset!");

// Function GA_Xiakong_AimMode_Loop.GA_Xiakong_AimMode_Loop_C.Added_2589ACF74A590F0F626F869EE7AC3F52
// 0x000C (0x000C - 0x0000)
struct GA_Xiakong_AimMode_Loop_C_Added_2589ACF74A590F0F626F869EE7AC3F52 final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Xiakong_AimMode_Loop_C_Added_2589ACF74A590F0F626F869EE7AC3F52) == 0x000004, "Wrong alignment on GA_Xiakong_AimMode_Loop_C_Added_2589ACF74A590F0F626F869EE7AC3F52");
static_assert(sizeof(GA_Xiakong_AimMode_Loop_C_Added_2589ACF74A590F0F626F869EE7AC3F52) == 0x00000C, "Wrong size on GA_Xiakong_AimMode_Loop_C_Added_2589ACF74A590F0F626F869EE7AC3F52");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_Added_2589ACF74A590F0F626F869EE7AC3F52, Tag) == 0x000000, "Member 'GA_Xiakong_AimMode_Loop_C_Added_2589ACF74A590F0F626F869EE7AC3F52::Tag' has a wrong offset!");

// Function GA_Xiakong_AimMode_Loop.GA_Xiakong_AimMode_Loop_C.Added_7B5E4C3A42485221C7D9CBB492F09385
// 0x000C (0x000C - 0x0000)
struct GA_Xiakong_AimMode_Loop_C_Added_7B5E4C3A42485221C7D9CBB492F09385 final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Xiakong_AimMode_Loop_C_Added_7B5E4C3A42485221C7D9CBB492F09385) == 0x000004, "Wrong alignment on GA_Xiakong_AimMode_Loop_C_Added_7B5E4C3A42485221C7D9CBB492F09385");
static_assert(sizeof(GA_Xiakong_AimMode_Loop_C_Added_7B5E4C3A42485221C7D9CBB492F09385) == 0x00000C, "Wrong size on GA_Xiakong_AimMode_Loop_C_Added_7B5E4C3A42485221C7D9CBB492F09385");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_Added_7B5E4C3A42485221C7D9CBB492F09385, Tag) == 0x000000, "Member 'GA_Xiakong_AimMode_Loop_C_Added_7B5E4C3A42485221C7D9CBB492F09385::Tag' has a wrong offset!");

// Function GA_Xiakong_AimMode_Loop.GA_Xiakong_AimMode_Loop_C.Removed_616C166F4CA09888E9D279A9E32E1A8B
// 0x000C (0x000C - 0x0000)
struct GA_Xiakong_AimMode_Loop_C_Removed_616C166F4CA09888E9D279A9E32E1A8B final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Xiakong_AimMode_Loop_C_Removed_616C166F4CA09888E9D279A9E32E1A8B) == 0x000004, "Wrong alignment on GA_Xiakong_AimMode_Loop_C_Removed_616C166F4CA09888E9D279A9E32E1A8B");
static_assert(sizeof(GA_Xiakong_AimMode_Loop_C_Removed_616C166F4CA09888E9D279A9E32E1A8B) == 0x00000C, "Wrong size on GA_Xiakong_AimMode_Loop_C_Removed_616C166F4CA09888E9D279A9E32E1A8B");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_Removed_616C166F4CA09888E9D279A9E32E1A8B, Tag) == 0x000000, "Member 'GA_Xiakong_AimMode_Loop_C_Removed_616C166F4CA09888E9D279A9E32E1A8B::Tag' has a wrong offset!");

// Function GA_Xiakong_AimMode_Loop.GA_Xiakong_AimMode_Loop_C.Added_1A816C074BCA3B69D4953AAAD9695949
// 0x000C (0x000C - 0x0000)
struct GA_Xiakong_AimMode_Loop_C_Added_1A816C074BCA3B69D4953AAAD9695949 final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Xiakong_AimMode_Loop_C_Added_1A816C074BCA3B69D4953AAAD9695949) == 0x000004, "Wrong alignment on GA_Xiakong_AimMode_Loop_C_Added_1A816C074BCA3B69D4953AAAD9695949");
static_assert(sizeof(GA_Xiakong_AimMode_Loop_C_Added_1A816C074BCA3B69D4953AAAD9695949) == 0x00000C, "Wrong size on GA_Xiakong_AimMode_Loop_C_Added_1A816C074BCA3B69D4953AAAD9695949");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_Added_1A816C074BCA3B69D4953AAAD9695949, Tag) == 0x000000, "Member 'GA_Xiakong_AimMode_Loop_C_Added_1A816C074BCA3B69D4953AAAD9695949::Tag' has a wrong offset!");

// Function GA_Xiakong_AimMode_Loop.GA_Xiakong_AimMode_Loop_C.Added_54A09F124A8BE957E33AAB91DE1058BC
// 0x000C (0x000C - 0x0000)
struct GA_Xiakong_AimMode_Loop_C_Added_54A09F124A8BE957E33AAB91DE1058BC final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Xiakong_AimMode_Loop_C_Added_54A09F124A8BE957E33AAB91DE1058BC) == 0x000004, "Wrong alignment on GA_Xiakong_AimMode_Loop_C_Added_54A09F124A8BE957E33AAB91DE1058BC");
static_assert(sizeof(GA_Xiakong_AimMode_Loop_C_Added_54A09F124A8BE957E33AAB91DE1058BC) == 0x00000C, "Wrong size on GA_Xiakong_AimMode_Loop_C_Added_54A09F124A8BE957E33AAB91DE1058BC");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_Added_54A09F124A8BE957E33AAB91DE1058BC, Tag) == 0x000000, "Member 'GA_Xiakong_AimMode_Loop_C_Added_54A09F124A8BE957E33AAB91DE1058BC::Tag' has a wrong offset!");

// Function GA_Xiakong_AimMode_Loop.GA_Xiakong_AimMode_Loop_C.EventReceived_18B59F5945020DB23C42FD88CFE77C27
// 0x00B8 (0x00B8 - 0x0000)
struct GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88CFE77C27 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88CFE77C27) == 0x000008, "Wrong alignment on GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88CFE77C27");
static_assert(sizeof(GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88CFE77C27) == 0x0000B8, "Wrong size on GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88CFE77C27");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88CFE77C27, Payload) == 0x000000, "Member 'GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88CFE77C27::Payload' has a wrong offset!");

// Function GA_Xiakong_AimMode_Loop.GA_Xiakong_AimMode_Loop_C.EventReceived_18B59F5945020DB23C42FD88B3D9C9A0
// 0x00B8 (0x00B8 - 0x0000)
struct GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88B3D9C9A0 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88B3D9C9A0) == 0x000008, "Wrong alignment on GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88B3D9C9A0");
static_assert(sizeof(GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88B3D9C9A0) == 0x0000B8, "Wrong size on GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88B3D9C9A0");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88B3D9C9A0, Payload) == 0x000000, "Member 'GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88B3D9C9A0::Payload' has a wrong offset!");

// Function GA_Xiakong_AimMode_Loop.GA_Xiakong_AimMode_Loop_C.EventReceived_18B59F5945020DB23C42FD88F21195F6
// 0x00B8 (0x00B8 - 0x0000)
struct GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88F21195F6 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88F21195F6) == 0x000008, "Wrong alignment on GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88F21195F6");
static_assert(sizeof(GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88F21195F6) == 0x0000B8, "Wrong size on GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88F21195F6");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88F21195F6, Payload) == 0x000000, "Member 'GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88F21195F6::Payload' has a wrong offset!");

// Function GA_Xiakong_AimMode_Loop.GA_Xiakong_AimMode_Loop_C.EventReceived_18B59F5945020DB23C42FD88865E0992
// 0x00B8 (0x00B8 - 0x0000)
struct GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88865E0992 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88865E0992) == 0x000008, "Wrong alignment on GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88865E0992");
static_assert(sizeof(GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88865E0992) == 0x0000B8, "Wrong size on GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88865E0992");
static_assert(offsetof(GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88865E0992, Payload) == 0x000000, "Member 'GA_Xiakong_AimMode_Loop_C_EventReceived_18B59F5945020DB23C42FD88865E0992::Payload' has a wrong offset!");

}

