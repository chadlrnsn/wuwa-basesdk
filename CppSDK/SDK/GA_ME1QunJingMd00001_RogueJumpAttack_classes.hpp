#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ME1QunJingMd00001_RogueJumpAttack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Monster_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ME1QunJingMd00001_RogueJumpAttack.GA_ME1QunJingMd00001_RogueJumpAttack_C
// 0x0010 (0x0578 - 0x0568)
class UGA_ME1QunJingMd00001_RogueJumpAttack_C final : public UGA_Monster_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_ME1QunJingMd00001_RogueJumpAttack_C; // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          ___b;                                              // 0x0570(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_ME1QunJingMd00001_RogueJumpAttack(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void EventReceived_157CFE974E0FB32D24BD75A026DFE37E(const struct FGameplayEventData& Payload);
	void EventReceived_DD38618E47BB7037447875B915C83B3E(const struct FGameplayEventData& Payload);
	void OnCompleted_5D118C384AE61F1C80292E810EAD3D6C();
	void OnBlendOut_5D118C384AE61F1C80292E810EAD3D6C();
	void OnInterrupted_5D118C384AE61F1C80292E810EAD3D6C();
	void OnCancelled_5D118C384AE61F1C80292E810EAD3D6C();
	void OnTick_5D118C384AE61F1C80292E810EAD3D6C();
	void EventReceived_AE59151B4B4099129E6249A3DFAAD244(const struct FGameplayEventData& Payload);
	void OnCompleted_5D118C384AE61F1C80292E81CF20377F();
	void OnBlendOut_5D118C384AE61F1C80292E81CF20377F();
	void OnInterrupted_5D118C384AE61F1C80292E81CF20377F();
	void OnCancelled_5D118C384AE61F1C80292E81CF20377F();
	void OnTick_5D118C384AE61F1C80292E81CF20377F();
	void OnCompleted_5D118C384AE61F1C80292E81C6085EC5();
	void OnBlendOut_5D118C384AE61F1C80292E81C6085EC5();
	void OnInterrupted_5D118C384AE61F1C80292E81C6085EC5();
	void OnCancelled_5D118C384AE61F1C80292E81C6085EC5();
	void OnTick_5D118C384AE61F1C80292E81C6085EC5();
	void _X_(class ATsBaseCharacter_C** Param______0, bool* __0_a);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ME1QunJingMd00001_RogueJumpAttack_C">();
	}
	static class UGA_ME1QunJingMd00001_RogueJumpAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ME1QunJingMd00001_RogueJumpAttack_C>();
	}
};
static_assert(alignof(UGA_ME1QunJingMd00001_RogueJumpAttack_C) == 0x000008, "Wrong alignment on UGA_ME1QunJingMd00001_RogueJumpAttack_C");
static_assert(sizeof(UGA_ME1QunJingMd00001_RogueJumpAttack_C) == 0x000578, "Wrong size on UGA_ME1QunJingMd00001_RogueJumpAttack_C");
static_assert(offsetof(UGA_ME1QunJingMd00001_RogueJumpAttack_C, UberGraphFrame_GA_ME1QunJingMd00001_RogueJumpAttack_C) == 0x000568, "Member 'UGA_ME1QunJingMd00001_RogueJumpAttack_C::UberGraphFrame_GA_ME1QunJingMd00001_RogueJumpAttack_C' has a wrong offset!");
static_assert(offsetof(UGA_ME1QunJingMd00001_RogueJumpAttack_C, ___b) == 0x000570, "Member 'UGA_ME1QunJingMd00001_RogueJumpAttack_C::___b' has a wrong offset!");

}
