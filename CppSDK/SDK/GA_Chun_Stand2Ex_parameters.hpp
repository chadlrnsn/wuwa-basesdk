﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Chun_Stand2Ex

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Chun_Stand2Ex.GA_Chun_Stand2Ex_C.ExecuteUbergraph_GA_Chun_Stand2Ex
// 0x01E8 (0x01E8 - 0x0000)
struct GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0028)(ZeroConstructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0030(0x0028)(ZeroConstructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0058(0x0028)(ZeroConstructor)
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________1;                              // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc______________;                            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00B0(0x0028)(ZeroConstructor)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc___________2;                              // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0108(0x0028)(ZeroConstructor)
	class UAbilityTask_WaitGameplayTagAdded*      CallFunc_WaitGameplayTagAdd_ReturnValue;           // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_____GA______________;                     // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_149[0x3];                                      // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           ___struct_Variable;                                // 0x014C(0x000C)(NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0158(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FGameplayTag                           K2Node_CustomEvent_Tag;                            // 0x0168(0x000C)(ConstParm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_174[0x4];                                      // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc___________3;                              // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_181[0x3];                                      // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc__________SpeedRatio;                      // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayTag& Tag)>     K2Node_CreateDelegate_OutputDelegate_5;            // 0x0188(0x0028)(ZeroConstructor)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B9[0x7];                                      // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________4;                              // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_______________1;                          // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C9[0x7];                                      // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________5;                              // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc_________Actor_____;                       // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex) == 0x000008, "Wrong alignment on GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex");
static_assert(sizeof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex) == 0x0001E8, "Wrong size on GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, EntryPoint) == 0x000000, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, K2Node_CreateDelegate_OutputDelegate_1) == 0x000030, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, K2Node_CreateDelegate_OutputDelegate_2) == 0x000058, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc__________) == 0x000080, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc___________1) == 0x000088, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc______________) == 0x000090, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc______________' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000098, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, K2Node_DynamicCast_AsTs_Base_Character) == 0x0000A0, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000B0, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0000D8, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc___________2) == 0x0000E0, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc___________2' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc_GetDisplayName_ReturnValue) == 0x0000E8, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc_GetObjectClass_ReturnValue) == 0x0000F8, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x000100, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, K2Node_CreateDelegate_OutputDelegate_4) == 0x000108, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc_WaitGameplayTagAdd_ReturnValue) == 0x000130, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc_WaitGameplayTagAdd_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc_____GA______________) == 0x000138, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc_____GA______________' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc_IsValid_ReturnValue) == 0x000148, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, ___struct_Variable) == 0x00014C, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::___struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc_Conv_NameToString_ReturnValue) == 0x000158, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, K2Node_CustomEvent_Tag) == 0x000168, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::K2Node_CustomEvent_Tag' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc___________3) == 0x000178, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc___________3' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc_IsValid_ReturnValue_1) == 0x000180, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc__________SpeedRatio) == 0x000184, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc__________SpeedRatio' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, K2Node_CreateDelegate_OutputDelegate_5) == 0x000188, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x0001B0, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc_IsValid_ReturnValue_2) == 0x0001B8, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc___________4) == 0x0001C0, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc___________4' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc_______________1) == 0x0001C8, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc_______________1' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc___________5) == 0x0001D0, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc___________5' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc_________Actor_____) == 0x0001D8, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc_________Actor_____' has a wrong offset!");
static_assert(offsetof(GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0001E0, "Member 'GA_Chun_Stand2Ex_C_ExecuteUbergraph_GA_Chun_Stand2Ex::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function GA_Chun_Stand2Ex.GA_Chun_Stand2Ex_C.Added_21071CB943CD992BF8EFD6A3CB16661B
// 0x000C (0x000C - 0x0000)
struct GA_Chun_Stand2Ex_C_Added_21071CB943CD992BF8EFD6A3CB16661B final
{
public:
	struct FGameplayTag                           Tag;                                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Chun_Stand2Ex_C_Added_21071CB943CD992BF8EFD6A3CB16661B) == 0x000004, "Wrong alignment on GA_Chun_Stand2Ex_C_Added_21071CB943CD992BF8EFD6A3CB16661B");
static_assert(sizeof(GA_Chun_Stand2Ex_C_Added_21071CB943CD992BF8EFD6A3CB16661B) == 0x00000C, "Wrong size on GA_Chun_Stand2Ex_C_Added_21071CB943CD992BF8EFD6A3CB16661B");
static_assert(offsetof(GA_Chun_Stand2Ex_C_Added_21071CB943CD992BF8EFD6A3CB16661B, Tag) == 0x000000, "Member 'GA_Chun_Stand2Ex_C_Added_21071CB943CD992BF8EFD6A3CB16661B::Tag' has a wrong offset!");

}

