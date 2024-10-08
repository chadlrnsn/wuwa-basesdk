#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_ME1QunJingMd00001_New

#include "Basic.hpp"

#include "AIC_AICommon_classes.hpp"
#include "SAiConditions_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIC_ME1QunJingMd00001_New.AIC_ME1QunJingMd00001_New_C
// 0x0178 (0x08F8 - 0x0780)
class AAIC_ME1QunJingMd00001_New_C final : public AAIC_AICommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AIC_ME1QunJingMd00001_New_C;        // 0x0780(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSAiConditions                         _a_H__;                                            // 0x0788(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         ___H__;                                            // 0x0840(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AIC_ME1QunJingMd00001_New(int32 EntryPoint);
	void ReceiveBeginPlay();
	void OnStart();
	void __(bool bContent);
	void Func______1(bool bContent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIC_ME1QunJingMd00001_New_C">();
	}
	static class AAIC_ME1QunJingMd00001_New_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIC_ME1QunJingMd00001_New_C>();
	}
};
static_assert(alignof(AAIC_ME1QunJingMd00001_New_C) == 0x000008, "Wrong alignment on AAIC_ME1QunJingMd00001_New_C");
static_assert(sizeof(AAIC_ME1QunJingMd00001_New_C) == 0x0008F8, "Wrong size on AAIC_ME1QunJingMd00001_New_C");
static_assert(offsetof(AAIC_ME1QunJingMd00001_New_C, UberGraphFrame_AIC_ME1QunJingMd00001_New_C) == 0x000780, "Member 'AAIC_ME1QunJingMd00001_New_C::UberGraphFrame_AIC_ME1QunJingMd00001_New_C' has a wrong offset!");
static_assert(offsetof(AAIC_ME1QunJingMd00001_New_C, _a_H__) == 0x000788, "Member 'AAIC_ME1QunJingMd00001_New_C::_a_H__' has a wrong offset!");
static_assert(offsetof(AAIC_ME1QunJingMd00001_New_C, ___H__) == 0x000840, "Member 'AAIC_ME1QunJingMd00001_New_C::___H__' has a wrong offset!");

}

