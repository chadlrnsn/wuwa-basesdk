#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MO1QunJing2Md00001

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TsBaseCharacter_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MO1QunJing2Md00001.BP_MO1QunJing2Md00001_C
// 0x0010 (0x0790 - 0x0780)
class ABP_MO1QunJing2Md00001_C final : public ATsBaseCharacter_C
{
public:
	uint8                                         Pad_771[0x7];                                      // 0x0771(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_MO1QunJing2Md00001_C;            // 0x0778(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      BN_Root;                                           // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MO1QunJing2Md00001(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MO1QunJing2Md00001_C">();
	}
	static class ABP_MO1QunJing2Md00001_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MO1QunJing2Md00001_C>();
	}
};
static_assert(alignof(ABP_MO1QunJing2Md00001_C) == 0x000010, "Wrong alignment on ABP_MO1QunJing2Md00001_C");
static_assert(sizeof(ABP_MO1QunJing2Md00001_C) == 0x000790, "Wrong size on ABP_MO1QunJing2Md00001_C");
static_assert(offsetof(ABP_MO1QunJing2Md00001_C, UberGraphFrame_BP_MO1QunJing2Md00001_C) == 0x000778, "Member 'ABP_MO1QunJing2Md00001_C::UberGraphFrame_BP_MO1QunJing2Md00001_C' has a wrong offset!");
static_assert(offsetof(ABP_MO1QunJing2Md00001_C, BN_Root) == 0x000780, "Member 'ABP_MO1QunJing2Md00001_C::BN_Root' has a wrong offset!");

}
