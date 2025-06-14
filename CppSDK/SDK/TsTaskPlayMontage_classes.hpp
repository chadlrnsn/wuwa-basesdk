﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsTaskPlayMontage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TsTaskAbortImmediatelyBase_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsTaskPlayMontage.TsTaskPlayMontage_C
// 0x0080 (0x0138 - 0x00B8)
class UTsTaskPlayMontage_C final : public UTsTaskAbortImmediatelyBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_TsTaskPlayMontage_C;                // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftObjectPtr<class UAnimMontage>            Montage;                                           // 0x00C0(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          MaskInteract;                                      // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x3];                                       // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LoopDuration;                                      // 0x00F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RepeatTimes;                                       // 0x00F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FC[0x4];                                       // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 MontagePath;                                       // 0x0100(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         ExpressionId;                                      // 0x0110(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          KeepMontageWhenEnd;                                // 0x0114(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_115[0x3];                                      // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InitStateName;                                     // 0x0118(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 EndStateName;                                      // 0x0128(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TsTaskPlayMontage(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsTaskPlayMontage_C">();
	}
	static class UTsTaskPlayMontage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsTaskPlayMontage_C>();
	}
};
static_assert(alignof(UTsTaskPlayMontage_C) == 0x000008, "Wrong alignment on UTsTaskPlayMontage_C");
static_assert(sizeof(UTsTaskPlayMontage_C) == 0x000138, "Wrong size on UTsTaskPlayMontage_C");
static_assert(offsetof(UTsTaskPlayMontage_C, UberGraphFrame_TsTaskPlayMontage_C) == 0x0000B8, "Member 'UTsTaskPlayMontage_C::UberGraphFrame_TsTaskPlayMontage_C' has a wrong offset!");
static_assert(offsetof(UTsTaskPlayMontage_C, Montage) == 0x0000C0, "Member 'UTsTaskPlayMontage_C::Montage' has a wrong offset!");
static_assert(offsetof(UTsTaskPlayMontage_C, MaskInteract) == 0x0000F0, "Member 'UTsTaskPlayMontage_C::MaskInteract' has a wrong offset!");
static_assert(offsetof(UTsTaskPlayMontage_C, LoopDuration) == 0x0000F4, "Member 'UTsTaskPlayMontage_C::LoopDuration' has a wrong offset!");
static_assert(offsetof(UTsTaskPlayMontage_C, RepeatTimes) == 0x0000F8, "Member 'UTsTaskPlayMontage_C::RepeatTimes' has a wrong offset!");
static_assert(offsetof(UTsTaskPlayMontage_C, MontagePath) == 0x000100, "Member 'UTsTaskPlayMontage_C::MontagePath' has a wrong offset!");
static_assert(offsetof(UTsTaskPlayMontage_C, ExpressionId) == 0x000110, "Member 'UTsTaskPlayMontage_C::ExpressionId' has a wrong offset!");
static_assert(offsetof(UTsTaskPlayMontage_C, KeepMontageWhenEnd) == 0x000114, "Member 'UTsTaskPlayMontage_C::KeepMontageWhenEnd' has a wrong offset!");
static_assert(offsetof(UTsTaskPlayMontage_C, InitStateName) == 0x000118, "Member 'UTsTaskPlayMontage_C::InitStateName' has a wrong offset!");
static_assert(offsetof(UTsTaskPlayMontage_C, EndStateName) == 0x000128, "Member 'UTsTaskPlayMontage_C::EndStateName' has a wrong offset!");

}

