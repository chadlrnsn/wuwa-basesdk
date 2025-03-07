#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_ME1BinlangMd00601

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SAiConditions_structs.hpp"
#include "AIC_AICommon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIC_ME1BinlangMd00601.AIC_ME1BinlangMd00601_C
// 0x0230 (0x09B0 - 0x0780)
class AAIC_ME1BinlangMd00601_C final : public AAIC_AICommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AIC_ME1BinlangMd00601_C;            // 0x0780(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSAiConditions                         ___H_K;                                            // 0x0788(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         ___K;                                              // 0x0840(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         Z__K;                                              // 0x08F8(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void __(bool bContent);
	void Four___(class ATsBaseCharacter_C* _r, const struct FGameplayTag& _MTag, class ATsBaseCharacter_C* ___);
	void __b__(bool bContent);
	void OnStart();
	void ___z(bool bContent);
	void ExecuteUbergraph_AIC_ME1BinlangMd00601(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIC_ME1BinlangMd00601_C">();
	}
	static class AAIC_ME1BinlangMd00601_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIC_ME1BinlangMd00601_C>();
	}
};
static_assert(alignof(AAIC_ME1BinlangMd00601_C) == 0x000008, "Wrong alignment on AAIC_ME1BinlangMd00601_C");
static_assert(sizeof(AAIC_ME1BinlangMd00601_C) == 0x0009B0, "Wrong size on AAIC_ME1BinlangMd00601_C");
static_assert(offsetof(AAIC_ME1BinlangMd00601_C, UberGraphFrame_AIC_ME1BinlangMd00601_C) == 0x000780, "Member 'AAIC_ME1BinlangMd00601_C::UberGraphFrame_AIC_ME1BinlangMd00601_C' has a wrong offset!");
static_assert(offsetof(AAIC_ME1BinlangMd00601_C, ___H_K) == 0x000788, "Member 'AAIC_ME1BinlangMd00601_C::___H_K' has a wrong offset!");
static_assert(offsetof(AAIC_ME1BinlangMd00601_C, ___K) == 0x000840, "Member 'AAIC_ME1BinlangMd00601_C::___K' has a wrong offset!");
static_assert(offsetof(AAIC_ME1BinlangMd00601_C, Z__K) == 0x0008F8, "Member 'AAIC_ME1BinlangMd00601_C::Z__K' has a wrong offset!");

}

