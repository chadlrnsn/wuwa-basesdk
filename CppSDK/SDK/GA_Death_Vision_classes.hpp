#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Death_Vision

#include "Basic.hpp"

#include "GA_Passive_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Death_Vision.GA_Death_Vision_C
// 0x0030 (0x0590 - 0x0560)
class UGA_Death_Vision_C final : public UGa_Passive_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Death_Vision_C;                  // 0x0560(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         P_Handle;                                          // 0x0568(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56C[0x4];                                      // 0x056C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                _____P_yH;                                         // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ___ID;                                             // 0x0578(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57C[0x4];                                      // 0x057C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     ___;                                               // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                ______PyH;                                         // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void _______3();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Death_Vision(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Death_Vision_C">();
	}
	static class UGA_Death_Vision_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Death_Vision_C>();
	}
};
static_assert(alignof(UGA_Death_Vision_C) == 0x000008, "Wrong alignment on UGA_Death_Vision_C");
static_assert(sizeof(UGA_Death_Vision_C) == 0x000590, "Wrong size on UGA_Death_Vision_C");
static_assert(offsetof(UGA_Death_Vision_C, UberGraphFrame_GA_Death_Vision_C) == 0x000560, "Member 'UGA_Death_Vision_C::UberGraphFrame_GA_Death_Vision_C' has a wrong offset!");
static_assert(offsetof(UGA_Death_Vision_C, P_Handle) == 0x000568, "Member 'UGA_Death_Vision_C::P_Handle' has a wrong offset!");
static_assert(offsetof(UGA_Death_Vision_C, _____P_yH) == 0x000570, "Member 'UGA_Death_Vision_C::_____P_yH' has a wrong offset!");
static_assert(offsetof(UGA_Death_Vision_C, ___ID) == 0x000578, "Member 'UGA_Death_Vision_C::___ID' has a wrong offset!");
static_assert(offsetof(UGA_Death_Vision_C, ___) == 0x000580, "Member 'UGA_Death_Vision_C::___' has a wrong offset!");
static_assert(offsetof(UGA_Death_Vision_C, ______PyH) == 0x000588, "Member 'UGA_Death_Vision_C::______PyH' has a wrong offset!");

}
