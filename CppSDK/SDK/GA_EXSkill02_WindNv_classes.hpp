﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_EXSkill02_WindNv

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Monster_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_EXSkill02_WindNv.GA_EXSkill02_WindNv_C
// 0x0008 (0x0580 - 0x0578)
class UGA_EXSkill02_WindNv_C final : public UGA_Monster_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_EXSkill02_WindNv_C;              // 0x0578(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_EXSkill02_WindNv(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E81EB2B1D8A();
	void OnBlendOut_5D118C384AE61F1C80292E81EB2B1D8A();
	void OnInterrupted_5D118C384AE61F1C80292E81EB2B1D8A();
	void OnCancelled_5D118C384AE61F1C80292E81EB2B1D8A();
	void OnTick_5D118C384AE61F1C80292E81EB2B1D8A();
	void EventReceived_18B59F5945020DB23C42FD88EC225C8A(const struct FGameplayEventData& Payload);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_EXSkill02_WindNv_C">();
	}
	static class UGA_EXSkill02_WindNv_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_EXSkill02_WindNv_C>();
	}
};
static_assert(alignof(UGA_EXSkill02_WindNv_C) == 0x000008, "Wrong alignment on UGA_EXSkill02_WindNv_C");
static_assert(sizeof(UGA_EXSkill02_WindNv_C) == 0x000580, "Wrong size on UGA_EXSkill02_WindNv_C");
static_assert(offsetof(UGA_EXSkill02_WindNv_C, UberGraphFrame_GA_EXSkill02_WindNv_C) == 0x000578, "Member 'UGA_EXSkill02_WindNv_C::UberGraphFrame_GA_EXSkill02_WindNv_C' has a wrong offset!");

}

