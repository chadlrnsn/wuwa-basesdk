#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_CommonBurst

#include "Basic.hpp"


namespace SDK::Params
{

// Function GA_CommonBurst.GA_CommonBurst_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_CommonBurst_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_CommonBurst_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GA_CommonBurst_C_K2_OnEndAbility");
static_assert(sizeof(GA_CommonBurst_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_CommonBurst_C_K2_OnEndAbility");
static_assert(offsetof(GA_CommonBurst_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_CommonBurst_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_CommonBurst.GA_CommonBurst_C.ExecuteUbergraph_GA_CommonBurst
// 0x0180 (0x0180 - 0x0000)
struct GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc__________SpeedRatio;                      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc__________;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc______________;                            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     CallFunc___________1;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     CallFunc___________2;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_______________1;                          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     K2Node_DynamicCast_AsTs_Base_Character;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0028)(ZeroConstructor)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc___________3;                              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0088(0x0028)(ZeroConstructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00D8(0x0028)(ZeroConstructor)
	class FString                                 CallFunc_____GA______________;                     // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0120(0x0028)(ZeroConstructor)
	class UAnimMontage*                           CallFunc___________4;                              // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_152[0x6];                                      // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0158(0x0028)(ZeroConstructor)
};
static_assert(alignof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst) == 0x000008, "Wrong alignment on GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst");
static_assert(sizeof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst) == 0x000180, "Wrong size on GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, EntryPoint) == 0x000000, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, CallFunc__________SpeedRatio) == 0x000004, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::CallFunc__________SpeedRatio' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, CallFunc__________) == 0x000008, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::CallFunc__________' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, CallFunc______________) == 0x000010, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::CallFunc______________' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, CallFunc___________1) == 0x000018, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::CallFunc___________1' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, CallFunc___________2) == 0x000020, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::CallFunc___________2' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, CallFunc_______________1) == 0x000028, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::CallFunc_______________1' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000030, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, K2Node_DynamicCast_AsTs_Base_Character) == 0x000038, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::K2Node_DynamicCast_AsTs_Base_Character' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000070, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, CallFunc___________3) == 0x000078, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::CallFunc___________3' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000080, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, K2Node_CreateDelegate_OutputDelegate_1) == 0x000088, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, CallFunc_IsValid_ReturnValue) == 0x0000B0, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, CallFunc_GetDisplayName_ReturnValue) == 0x0000B8, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, CallFunc_GetObjectClass_ReturnValue) == 0x0000C8, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, CallFunc_EqualEqual_ClassClass_ReturnValue) == 0x0000D0, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::CallFunc_EqualEqual_ClassClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000D8, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, CallFunc_____GA______________) == 0x000100, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::CallFunc_____GA______________' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, CallFunc_Conv_NameToString_ReturnValue) == 0x000110, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, K2Node_CreateDelegate_OutputDelegate_3) == 0x000120, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, CallFunc___________4) == 0x000148, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::CallFunc___________4' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, CallFunc_IsValid_ReturnValue_1) == 0x000150, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, K2Node_Event_bWasCancelled) == 0x000151, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst, K2Node_CreateDelegate_OutputDelegate_4) == 0x000158, "Member 'GA_CommonBurst_C_ExecuteUbergraph_GA_CommonBurst::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");

}
