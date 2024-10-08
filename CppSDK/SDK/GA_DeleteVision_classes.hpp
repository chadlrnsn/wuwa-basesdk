#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DeleteVision

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_DeleteVision.GA_DeleteVision_C
// 0x0018 (0x0570 - 0x0558)
class UGA_DeleteVision_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_DeleteVision_C;                  // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_BaseVision_C*                       _aBP;                                              // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     __BP;                                              // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void _H_d__();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_DeleteVision(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DeleteVision_C">();
	}
	static class UGA_DeleteVision_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DeleteVision_C>();
	}
};
static_assert(alignof(UGA_DeleteVision_C) == 0x000008, "Wrong alignment on UGA_DeleteVision_C");
static_assert(sizeof(UGA_DeleteVision_C) == 0x000570, "Wrong size on UGA_DeleteVision_C");
static_assert(offsetof(UGA_DeleteVision_C, UberGraphFrame_GA_DeleteVision_C) == 0x000558, "Member 'UGA_DeleteVision_C::UberGraphFrame_GA_DeleteVision_C' has a wrong offset!");
static_assert(offsetof(UGA_DeleteVision_C, _aBP) == 0x000560, "Member 'UGA_DeleteVision_C::_aBP' has a wrong offset!");
static_assert(offsetof(UGA_DeleteVision_C, __BP) == 0x000568, "Member 'UGA_DeleteVision_C::__BP' has a wrong offset!");

}

