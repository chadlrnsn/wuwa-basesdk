#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SC_Zhezhi_Burst01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LevelSequence_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SC_Zhezhi_Burst01.SequenceDirector_C
// 0x0010 (0x0048 - 0x0038)
class SC_Zhezhi_Burst01::USequenceDirector_C final : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Float;                                             // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABP_Zhezhi_C* BP_Zhezhi);
	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABP_Zhezhi_C* BP_Zhezhi);
	void BP_Zhezhi_Event_0(class ABP_Zhezhi_C* BP_Zhezhi);
	void BP_Zhezhi_Event_1(class ABP_Zhezhi_C* BP_Zhezhi);
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass SC_Zhezhi_Burst01.SequenceDirector_C", true, "SequenceDirector_C">();
	}
	static class SC_Zhezhi_Burst01::USequenceDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<SC_Zhezhi_Burst01::USequenceDirector_C>();
	}
};
static_assert(alignof(SC_Zhezhi_Burst01::USequenceDirector_C) == 0x000008, "Wrong alignment on SC_Zhezhi_Burst01::USequenceDirector_C");
static_assert(sizeof(SC_Zhezhi_Burst01::USequenceDirector_C) == 0x000048, "Wrong size on SC_Zhezhi_Burst01::USequenceDirector_C");
static_assert(offsetof(SC_Zhezhi_Burst01::USequenceDirector_C, UberGraphFrame) == 0x000038, "Member 'SC_Zhezhi_Burst01::USequenceDirector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(SC_Zhezhi_Burst01::USequenceDirector_C, Float) == 0x000040, "Member 'SC_Zhezhi_Burst01::USequenceDirector_C::Float' has a wrong offset!");

}
