#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InputComponent

#include "Basic.hpp"

#include "EInputAction_structs.hpp"
#include "SInputCaches_structs.hpp"
#include "ECharViewDirectionState_structs.hpp"
#include "SInputHoldConfig_structs.hpp"
#include "BP_InputBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InputComponent.BP_InputComponent_C
// 0x00A8 (0x0220 - 0x0178)
class UBP_InputComponent_C final : public UBP_InputBase_C
{
public:
	TMap<EInputAction, struct FSInputCaches>      _e_X;                                              // 0x0178(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EInputAction, struct FSInputHoldConfig>  __Mn;                                              // 0x01C8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          _______;                                           // 0x0218(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ____;                                              // 0x0219(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          _____1__;                                          // 0x021A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ___b;                                              // 0x021B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ________0;                                         // 0x021C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          __e____;                                           // 0x021D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ________1;                                         // 0x021E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	struct FSInputCommand Func______15(float Time);
	struct FSInputCommand ___w_6(float Time);
	struct FSInputCommand Func______14(float Time);
	struct FSInputCommand P__b___0(float Time);
	void _______8(float Time);
	struct FSInputCommand ___w_5(float Time);
	struct FSInputCaches GetUnrealCacheConfig(int32 Action);
	struct FSInputHoldConfig GetUnrealHoldConfig(int32 Action);
	void _____w__(float Time);
	struct FSInputCommand Func______12(float Time);
	void ________(float Time);
	void _______6(float Time);
	struct FSInputCommand Func______13(float Time);
	struct FSInputCommand ___w_4(float Time);
	struct FSInputCommand _a1___1(float Time);
	struct FSInputCommand _a1_w(float Time);
	struct FSInputCommand Func______11(float Time);
	struct FSInputCommand __1___0(float Time);
	struct FSInputCommand _a1___0(float Time);
	struct FSInputCommand _a2___1(float Time);
	struct FSInputCommand _a2_w(float Time);
	struct FSInputCommand Func______10(float Time);
	struct FSInputCommand _a2___0(float Time);
	struct FSInputCommand _______9(float Time);
	struct FSInputCommand _______7(float Time);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InputComponent_C">();
	}
	static class UBP_InputComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_InputComponent_C>();
	}
};
static_assert(alignof(UBP_InputComponent_C) == 0x000008, "Wrong alignment on UBP_InputComponent_C");
static_assert(sizeof(UBP_InputComponent_C) == 0x000220, "Wrong size on UBP_InputComponent_C");
static_assert(offsetof(UBP_InputComponent_C, _e_X) == 0x000178, "Member 'UBP_InputComponent_C::_e_X' has a wrong offset!");
static_assert(offsetof(UBP_InputComponent_C, __Mn) == 0x0001C8, "Member 'UBP_InputComponent_C::__Mn' has a wrong offset!");
static_assert(offsetof(UBP_InputComponent_C, _______) == 0x000218, "Member 'UBP_InputComponent_C::_______' has a wrong offset!");
static_assert(offsetof(UBP_InputComponent_C, ____) == 0x000219, "Member 'UBP_InputComponent_C::____' has a wrong offset!");
static_assert(offsetof(UBP_InputComponent_C, _____1__) == 0x00021A, "Member 'UBP_InputComponent_C::_____1__' has a wrong offset!");
static_assert(offsetof(UBP_InputComponent_C, ___b) == 0x00021B, "Member 'UBP_InputComponent_C::___b' has a wrong offset!");
static_assert(offsetof(UBP_InputComponent_C, ________0) == 0x00021C, "Member 'UBP_InputComponent_C::________0' has a wrong offset!");
static_assert(offsetof(UBP_InputComponent_C, __e____) == 0x00021D, "Member 'UBP_InputComponent_C::__e____' has a wrong offset!");
static_assert(offsetof(UBP_InputComponent_C, ________1) == 0x00021E, "Member 'UBP_InputComponent_C::________1' has a wrong offset!");

}
