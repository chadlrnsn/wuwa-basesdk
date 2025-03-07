﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_EndingPunchCall

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_EndingPunchCall.GA_EndingPunchCall_C.ExecuteUbergraph_GA_EndingPunchCall
// 0x0340 (0x0340 - 0x0000)
struct GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0028)(ZeroConstructor)
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x0038(0x00B8)()
	struct FGameplayEventData                     ___struct_Variable;                                // 0x00F0(0x00B8)()
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B1[0x7];                                      // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x01B8(0x0028)(ZeroConstructor)
	float                                         CallFunc__________SpeedRatio;                      // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E4[0x4];                                      // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________1;                              // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc______________;                            // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F1[0x7];                                      // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________2;                              // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________3;                              // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_______________1;                          // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_209[0x7];                                      // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_221[0x7];                                      // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0228(0x0028)(ZeroConstructor)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc___________4;                              // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0268(0x0028)(ZeroConstructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_291[0x7];                                      // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0298(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x02B8(0x0028)(ZeroConstructor)
	class FString                                 CallFunc_____GA______________;                     // 0x02E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x02F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0300(0x0028)(ZeroConstructor)
	class UAnimMontage*                           CallFunc___________5;                              // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0331(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_332[0x6];                                      // 0x0332(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________6;                              // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall) == 0x000008, "Wrong alignment on GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall");
static_assert(sizeof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall) == 0x000340, "Wrong size on GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, EntryPoint) == 0x000000, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc__________) == 0x000008, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, K2Node_CustomEvent_Payload) == 0x000038, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, ___struct_Variable) == 0x0000F0, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::___struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc_WaitGameplayEvent_ReturnValue) == 0x0001A8, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc_IsValid_ReturnValue) == 0x0001B0, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001B8, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc__________SpeedRatio) == 0x0001E0, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc__________SpeedRatio' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc___________1) == 0x0001E8, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc______________) == 0x0001F0, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc______________' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc___________2) == 0x0001F8, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc___________2' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc___________3) == 0x000200, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc___________3' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc_______________1) == 0x000208, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc_______________1' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000210, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, K2Node_DynamicCast_AsTs_Base_Character) == 0x000218, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, K2Node_DynamicCast_bSuccess) == 0x000220, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, K2Node_CreateDelegate_OutputDelegate_2) == 0x000228, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000250, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc___________4) == 0x000258, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc___________4' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000260, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, K2Node_CreateDelegate_OutputDelegate_3) == 0x000268, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc_IsValid_ReturnValue_1) == 0x000290, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc_GetDisplayName_ReturnValue) == 0x000298, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc_GetObjectClass_ReturnValue) == 0x0002A8, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x0002B0, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, K2Node_CreateDelegate_OutputDelegate_4) == 0x0002B8, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc_____GA______________) == 0x0002E0, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc_____GA______________' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc_Conv_NameToString_ReturnValue) == 0x0002F0, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, K2Node_CreateDelegate_OutputDelegate_5) == 0x000300, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc___________5) == 0x000328, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc___________5' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc_IsValid_ReturnValue_2) == 0x000330, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, K2Node_Event_bWasCancelled) == 0x000331, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall, CallFunc___________6) == 0x000338, "Member 'GA_EndingPunchCall_C_ExecuteUbergraph_GA_EndingPunchCall::CallFunc___________6' has a wrong offset!");

// Function GA_EndingPunchCall.GA_EndingPunchCall_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_EndingPunchCall_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_EndingPunchCall_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_EndingPunchCall_C_K2_OnEndAbility");
static_assert(sizeof(GA_EndingPunchCall_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_EndingPunchCall_C_K2_OnEndAbility");
static_assert(offsetof(GA_EndingPunchCall_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_EndingPunchCall_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_EndingPunchCall.GA_EndingPunchCall_C.EventReceived_7FAD63894494382B81C9228D74ED40E3
// 0x00B8 (0x00B8 - 0x0000)
struct GA_EndingPunchCall_C_EventReceived_7FAD63894494382B81C9228D74ED40E3 final
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B8)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_EndingPunchCall_C_EventReceived_7FAD63894494382B81C9228D74ED40E3) == 0x000008, "Wrong alignment on GA_EndingPunchCall_C_EventReceived_7FAD63894494382B81C9228D74ED40E3");
static_assert(sizeof(GA_EndingPunchCall_C_EventReceived_7FAD63894494382B81C9228D74ED40E3) == 0x0000B8, "Wrong size on GA_EndingPunchCall_C_EventReceived_7FAD63894494382B81C9228D74ED40E3");
static_assert(offsetof(GA_EndingPunchCall_C_EventReceived_7FAD63894494382B81C9228D74ED40E3, Payload) == 0x000000, "Member 'GA_EndingPunchCall_C_EventReceived_7FAD63894494382B81C9228D74ED40E3::Payload' has a wrong offset!");

}

