#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_GunCommon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "EWeaponViewName_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ABP_GunCommon.ABP_GunCommon_C
// 0x1750 (0x1B00 - 0x03B0)
class UABP_GunCommon_C final : public UAnimInstance
{
public:
	uint8                                         Pad_3A8[0x8];                                      // 0x03A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x03B8(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_35;                 // 0x03F0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_34;                 // 0x0418(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_33;                 // 0x0440(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_32;                 // 0x0468(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_31;                 // 0x0490(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_30;                 // 0x04B8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_29;                 // 0x04E0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_28;                 // 0x0508(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_27;                 // 0x0530(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_26;                 // 0x0558(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_25;                 // 0x0580(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_24;                 // 0x05A8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_23;                 // 0x05D0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_22;                 // 0x05F8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_21;                 // 0x0620(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_20;                 // 0x0648(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_19;                 // 0x0670(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_18;                 // 0x0698(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_17;                 // 0x06C0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_15;                   // 0x06E8(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_19;                      // 0x0778(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_14;                   // 0x07B0(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_18;                      // 0x0840(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_13;                   // 0x0878(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_17;                      // 0x0908(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_12;                   // 0x0940(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_16;                      // 0x09D0(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;                   // 0x0A08(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_15;                      // 0x0A98(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x0AD0(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_14;                      // 0x0B60(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x0B98(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_13;                      // 0x0C28(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x0C60(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_12;                      // 0x0CF0(0x0038)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_11;                      // 0x0D28(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_2;                      // 0x0D60(0x0148)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_10;                      // 0x0EA8(0x0038)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_16;                 // 0x0EE0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_15;                 // 0x0F08(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_14;                 // 0x0F30(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_13;                 // 0x0F58(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x0F80(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x0FA8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x0FD0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x0FF8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x1020(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x1048(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x1070(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x1098(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x10C0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x10E8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x1110(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x1138(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x1160(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x1188(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_9;                       // 0x1218(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x1250(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_8;                       // 0x12E0(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x1318(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x13A8(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x13E0(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x1470(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x14A8(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x1538(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x1570(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x1600(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1638(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x16C8(0x0038)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1700(0x0090)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x1790(0x0038)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x17C8(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x1800(0x0148)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x1948(0x0038)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x1980(0x0148)()
	class ATsBaseCharacter_C*                     _r__;                                              // 0x1AC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WeaponOpen;                                        // 0x1AD0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1AD1[0x3];                                     // 0x1AD1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Delta_Time;                                        // 0x1AD4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Open_Delay;                                        // 0x1AD8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fhs___;                                            // 0x1ADC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Fh___;                                             // 0x1AE0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          __s_fh;                                            // 0x1AE1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsUI;                                              // 0x1AE2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1AE3[0x1];                                     // 0x1AE3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Fh_4I_;                                            // 0x1AE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsUiSceneRoleActor_C*                  UILb__;                                            // 0x1AE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                         SMfh_4I_;                                          // 0x1AF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWeaponViewName                               UILb;                                              // 0x1AF4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _c_____yH;                                         // 0x1AF5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ABP_GunCommon(int32 EntryPoint);
	void Set_Open_Delay();
	void Clear_Open_Delay();
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_E6F990A84D35B57C5DAB00A5D9934D0C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_D5B6D4694D1ABB7663AC828C326F1C48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_3B6BF2DA437ED51F2508F0BDB912EEB3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_4EC60C9749E2EE60FEFF059C00611883();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_FC2C89CE43AD12782D018E80883A0BA7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_115A107E4464BC0B77EAAE9DB3A16177();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_DE36A1C448685ACFE5F3C3800CDA7B52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_3DCDB8654C337EED26A3D78271375635();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_D7E7C278426A426A701CC5BA88D855D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_5FD1D5B24BD12728420800A8153339D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_D67539034327DAE12EB7DFB5D078D1F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_C613987240D46C848B8F5793066643FC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_B8695E0440DE6EAAF8AB16A4B2F99FD6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_6A3E3782410469B6E2D9739D732258DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_F6AB31CD479C26B170AA19AA494EFC2E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_5F569A624C014AA4171728B571C990CB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_336072A24D81E644C44390B985261267();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_8D1AC9724216F106866F3DAA1E6DF285();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_4DD08CDA4B04652BAA2AC5ABC984CDB8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_BEF3B241421760D5BBD87481D0B02105();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_2A00DB8741DBE37293092B80BD86D1A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_182AAAB246DB91C1FA40F29CDD976A9F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_187E77354F94CCE90B98DD851C1F1E15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_GunCommon_AnimGraphNode_TransitionResult_F3B482A247387F573F2CAA9D9C201AFB();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_GunCommon_C">();
	}
	static class UABP_GunCommon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_GunCommon_C>();
	}
};
static_assert(alignof(UABP_GunCommon_C) == 0x000010, "Wrong alignment on UABP_GunCommon_C");
static_assert(sizeof(UABP_GunCommon_C) == 0x001B00, "Wrong size on UABP_GunCommon_C");
static_assert(offsetof(UABP_GunCommon_C, UberGraphFrame) == 0x0003B0, "Member 'UABP_GunCommon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_Root) == 0x0003B8, "Member 'UABP_GunCommon_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_35) == 0x0003F0, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_35' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_34) == 0x000418, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_34' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_33) == 0x000440, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_33' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_32) == 0x000468, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_32' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_31) == 0x000490, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_31' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_30) == 0x0004B8, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_30' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_29) == 0x0004E0, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_29' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_28) == 0x000508, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_28' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_27) == 0x000530, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_27' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_26) == 0x000558, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_26' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_25) == 0x000580, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_25' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_24) == 0x0005A8, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_24' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_23) == 0x0005D0, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_23' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_22) == 0x0005F8, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_22' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_21) == 0x000620, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_21' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_20) == 0x000648, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_20' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_19) == 0x000670, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_19' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_18) == 0x000698, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_18' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_17) == 0x0006C0, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_17' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_SequencePlayer_15) == 0x0006E8, "Member 'UABP_GunCommon_C::AnimGraphNode_SequencePlayer_15' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult_19) == 0x000778, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult_19' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_SequencePlayer_14) == 0x0007B0, "Member 'UABP_GunCommon_C::AnimGraphNode_SequencePlayer_14' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult_18) == 0x000840, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult_18' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_SequencePlayer_13) == 0x000878, "Member 'UABP_GunCommon_C::AnimGraphNode_SequencePlayer_13' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult_17) == 0x000908, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult_17' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_SequencePlayer_12) == 0x000940, "Member 'UABP_GunCommon_C::AnimGraphNode_SequencePlayer_12' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult_16) == 0x0009D0, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult_16' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_SequencePlayer_11) == 0x000A08, "Member 'UABP_GunCommon_C::AnimGraphNode_SequencePlayer_11' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult_15) == 0x000A98, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult_15' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_SequencePlayer_10) == 0x000AD0, "Member 'UABP_GunCommon_C::AnimGraphNode_SequencePlayer_10' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult_14) == 0x000B60, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult_14' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_SequencePlayer_9) == 0x000B98, "Member 'UABP_GunCommon_C::AnimGraphNode_SequencePlayer_9' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult_13) == 0x000C28, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult_13' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_SequencePlayer_8) == 0x000C60, "Member 'UABP_GunCommon_C::AnimGraphNode_SequencePlayer_8' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult_12) == 0x000CF0, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult_12' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult_11) == 0x000D28, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult_11' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateMachine_2) == 0x000D60, "Member 'UABP_GunCommon_C::AnimGraphNode_StateMachine_2' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult_10) == 0x000EA8, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult_10' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_16) == 0x000EE0, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_16' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_15) == 0x000F08, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_15' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_14) == 0x000F30, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_14' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_13) == 0x000F58, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_13' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_12) == 0x000F80, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_12' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_11) == 0x000FA8, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_11' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_10) == 0x000FD0, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_10' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_9) == 0x000FF8, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_9' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_8) == 0x001020, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_8' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_7) == 0x001048, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_7' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_6) == 0x001070, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_6' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_5) == 0x001098, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_5' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_4) == 0x0010C0, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_4' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_3) == 0x0010E8, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_3' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_2) == 0x001110, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_2' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult_1) == 0x001138, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_TransitionResult) == 0x001160, "Member 'UABP_GunCommon_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_SequencePlayer_7) == 0x001188, "Member 'UABP_GunCommon_C::AnimGraphNode_SequencePlayer_7' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult_9) == 0x001218, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult_9' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_SequencePlayer_6) == 0x001250, "Member 'UABP_GunCommon_C::AnimGraphNode_SequencePlayer_6' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult_8) == 0x0012E0, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult_8' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_SequencePlayer_5) == 0x001318, "Member 'UABP_GunCommon_C::AnimGraphNode_SequencePlayer_5' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult_7) == 0x0013A8, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult_7' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_SequencePlayer_4) == 0x0013E0, "Member 'UABP_GunCommon_C::AnimGraphNode_SequencePlayer_4' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult_6) == 0x001470, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult_6' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_SequencePlayer_3) == 0x0014A8, "Member 'UABP_GunCommon_C::AnimGraphNode_SequencePlayer_3' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult_5) == 0x001538, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult_5' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_SequencePlayer_2) == 0x001570, "Member 'UABP_GunCommon_C::AnimGraphNode_SequencePlayer_2' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult_4) == 0x001600, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult_4' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_SequencePlayer_1) == 0x001638, "Member 'UABP_GunCommon_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult_3) == 0x0016C8, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult_3' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_SequencePlayer) == 0x001700, "Member 'UABP_GunCommon_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult_2) == 0x001790, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult_1) == 0x0017C8, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateMachine_1) == 0x001800, "Member 'UABP_GunCommon_C::AnimGraphNode_StateMachine_1' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateResult) == 0x001948, "Member 'UABP_GunCommon_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, AnimGraphNode_StateMachine) == 0x001980, "Member 'UABP_GunCommon_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, _r__) == 0x001AC8, "Member 'UABP_GunCommon_C::_r__' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, WeaponOpen) == 0x001AD0, "Member 'UABP_GunCommon_C::WeaponOpen' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, Delta_Time) == 0x001AD4, "Member 'UABP_GunCommon_C::Delta_Time' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, Open_Delay) == 0x001AD8, "Member 'UABP_GunCommon_C::Open_Delay' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, Fhs___) == 0x001ADC, "Member 'UABP_GunCommon_C::Fhs___' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, Fh___) == 0x001AE0, "Member 'UABP_GunCommon_C::Fh___' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, __s_fh) == 0x001AE1, "Member 'UABP_GunCommon_C::__s_fh' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, IsUI) == 0x001AE2, "Member 'UABP_GunCommon_C::IsUI' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, Fh_4I_) == 0x001AE4, "Member 'UABP_GunCommon_C::Fh_4I_' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, UILb__) == 0x001AE8, "Member 'UABP_GunCommon_C::UILb__' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, SMfh_4I_) == 0x001AF0, "Member 'UABP_GunCommon_C::SMfh_4I_' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, UILb) == 0x001AF4, "Member 'UABP_GunCommon_C::UILb' has a wrong offset!");
static_assert(offsetof(UABP_GunCommon_C, _c_____yH) == 0x001AF5, "Member 'UABP_GunCommon_C::_c_____yH' has a wrong offset!");

}

