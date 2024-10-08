#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_ME1GuangtankeMd00501

#include "Basic.hpp"

#include "AIC_AICommon_classes.hpp"
#include "SAiConditions_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIC_ME1GuangtankeMd00501.AIC_ME1GuangtankeMd00501_C
// 0x06A0 (0x0E20 - 0x0780)
class AAIC_ME1GuangtankeMd00501_C final : public AAIC_AICommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AIC_ME1GuangtankeMd00501_C;         // 0x0780(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSAiConditions                         ___K;                                              // 0x0788(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         _a__;                                              // 0x0840(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         ___AIC_ME1GuangtankeMd00501_C;                     // 0x08F8(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         Sa____;                                            // 0x09B0(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     IfK;                                               // 0x0A68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSAiConditions                         Two_Tag_K;                                         // 0x0A70(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          _____;                                             // 0x0B28(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B29[0x7];                                      // 0x0B29(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSAiConditions                         __N_6_;                                            // 0x0B30(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         ___K_0;                                            // 0x0BE8(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         E___timer;                                         // 0x0CA0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CA4[0x4];                                      // 0x0CA4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSAiConditions                         __z_K;                                             // 0x0CA8(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         _a__K;                                             // 0x0D60(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          _S_E__s_;                                          // 0x0E18(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E19[0x3];                                      // 0x0E19(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         _______AIC_ME1GuangtankeMd00501_C;                 // 0x0E1C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AIC_ME1GuangtankeMd00501(int32 EntryPoint);
	void Func______1(class ATsBaseCharacter_C* _r, const struct FGameplayTag& _MTag, class ATsBaseCharacter_C* ___);
	void OnStart();
	void _a___(bool bContent);
	void ___K___0(bool bContent);
	void _M____(class ATsBaseCharacter_C* _r, const struct FGameplayTag& _MTag, float __M____, float ________0);
	void __z_K__(bool bContent);
	void ___K__(bool bContent);
	void Two___(bool bContent);
	void _h_h_z();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIC_ME1GuangtankeMd00501_C">();
	}
	static class AAIC_ME1GuangtankeMd00501_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIC_ME1GuangtankeMd00501_C>();
	}
};
static_assert(alignof(AAIC_ME1GuangtankeMd00501_C) == 0x000008, "Wrong alignment on AAIC_ME1GuangtankeMd00501_C");
static_assert(sizeof(AAIC_ME1GuangtankeMd00501_C) == 0x000E20, "Wrong size on AAIC_ME1GuangtankeMd00501_C");
static_assert(offsetof(AAIC_ME1GuangtankeMd00501_C, UberGraphFrame_AIC_ME1GuangtankeMd00501_C) == 0x000780, "Member 'AAIC_ME1GuangtankeMd00501_C::UberGraphFrame_AIC_ME1GuangtankeMd00501_C' has a wrong offset!");
static_assert(offsetof(AAIC_ME1GuangtankeMd00501_C, ___K) == 0x000788, "Member 'AAIC_ME1GuangtankeMd00501_C::___K' has a wrong offset!");
static_assert(offsetof(AAIC_ME1GuangtankeMd00501_C, _a__) == 0x000840, "Member 'AAIC_ME1GuangtankeMd00501_C::_a__' has a wrong offset!");
static_assert(offsetof(AAIC_ME1GuangtankeMd00501_C, ___AIC_ME1GuangtankeMd00501_C) == 0x0008F8, "Member 'AAIC_ME1GuangtankeMd00501_C::___AIC_ME1GuangtankeMd00501_C' has a wrong offset!");
static_assert(offsetof(AAIC_ME1GuangtankeMd00501_C, Sa____) == 0x0009B0, "Member 'AAIC_ME1GuangtankeMd00501_C::Sa____' has a wrong offset!");
static_assert(offsetof(AAIC_ME1GuangtankeMd00501_C, IfK) == 0x000A68, "Member 'AAIC_ME1GuangtankeMd00501_C::IfK' has a wrong offset!");
static_assert(offsetof(AAIC_ME1GuangtankeMd00501_C, Two_Tag_K) == 0x000A70, "Member 'AAIC_ME1GuangtankeMd00501_C::Two_Tag_K' has a wrong offset!");
static_assert(offsetof(AAIC_ME1GuangtankeMd00501_C, _____) == 0x000B28, "Member 'AAIC_ME1GuangtankeMd00501_C::_____' has a wrong offset!");
static_assert(offsetof(AAIC_ME1GuangtankeMd00501_C, __N_6_) == 0x000B30, "Member 'AAIC_ME1GuangtankeMd00501_C::__N_6_' has a wrong offset!");
static_assert(offsetof(AAIC_ME1GuangtankeMd00501_C, ___K_0) == 0x000BE8, "Member 'AAIC_ME1GuangtankeMd00501_C::___K_0' has a wrong offset!");
static_assert(offsetof(AAIC_ME1GuangtankeMd00501_C, E___timer) == 0x000CA0, "Member 'AAIC_ME1GuangtankeMd00501_C::E___timer' has a wrong offset!");
static_assert(offsetof(AAIC_ME1GuangtankeMd00501_C, __z_K) == 0x000CA8, "Member 'AAIC_ME1GuangtankeMd00501_C::__z_K' has a wrong offset!");
static_assert(offsetof(AAIC_ME1GuangtankeMd00501_C, _a__K) == 0x000D60, "Member 'AAIC_ME1GuangtankeMd00501_C::_a__K' has a wrong offset!");
static_assert(offsetof(AAIC_ME1GuangtankeMd00501_C, _S_E__s_) == 0x000E18, "Member 'AAIC_ME1GuangtankeMd00501_C::_S_E__s_' has a wrong offset!");
static_assert(offsetof(AAIC_ME1GuangtankeMd00501_C, _______AIC_ME1GuangtankeMd00501_C) == 0x000E1C, "Member 'AAIC_ME1GuangtankeMd00501_C::_______AIC_ME1GuangtankeMd00501_C' has a wrong offset!");

}

