#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WuYinQuBattleActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass WuYinQuBattleActor.WuYinQuBattleActor_C
// 0x00C0 (0x0380 - 0x02C0)
class AWuYinQuBattleActor_C final : public AKuroWuYinQuActorBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKuroPostProcessComponent*              FightingPhase3PostProcess;                         // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          FightingPhase3Box2;                                // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          FightingPhase3Box1;                                // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKuroPostProcessComponent*              FightingPhase2PostProcess;                         // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          FightingPhase2Box2;                                // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          FightingPhase2Box1;                                // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKuroPostProcessComponent*              FightingPhase1PostProcess;                         // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          FightingPhase1Box2;                                // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          FightingPhase1Box1;                                // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKuroPostProcessComponent*              IdleOuterPostProcess;                              // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKuroPostProcessComponent*              IdleInnerPostProcess;                              // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          IdleOuterBox2;                                     // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          IdleInnerBox2;                                     // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          IdleOuterBox1;                                     // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          IdleInnerBox1;                                     // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPDA_WuYinQuBattleData_C*               WuYinQuFightingData;                               // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class FString                                 SM__;                                              // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash)
	class FString                                 ______;                                            // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class AKuroLevelSequenceActor*                ReferenceKuroLevelSequence;                        // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void _b0_z__();
	void _b0Yb__();
	void __Debug_F();
	void K____();
	void _b0__6_3();
	void _b0__6_2();
	void _b0__6_1();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_WuYinQuBattleActor(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WuYinQuBattleActor_C">();
	}
	static class AWuYinQuBattleActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWuYinQuBattleActor_C>();
	}
};
static_assert(alignof(AWuYinQuBattleActor_C) == 0x000008, "Wrong alignment on AWuYinQuBattleActor_C");
static_assert(sizeof(AWuYinQuBattleActor_C) == 0x000380, "Wrong size on AWuYinQuBattleActor_C");
static_assert(offsetof(AWuYinQuBattleActor_C, UberGraphFrame) == 0x0002C0, "Member 'AWuYinQuBattleActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, DefaultSceneRoot) == 0x0002C8, "Member 'AWuYinQuBattleActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, FightingPhase3PostProcess) == 0x0002D0, "Member 'AWuYinQuBattleActor_C::FightingPhase3PostProcess' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, FightingPhase3Box2) == 0x0002D8, "Member 'AWuYinQuBattleActor_C::FightingPhase3Box2' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, FightingPhase3Box1) == 0x0002E0, "Member 'AWuYinQuBattleActor_C::FightingPhase3Box1' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, FightingPhase2PostProcess) == 0x0002E8, "Member 'AWuYinQuBattleActor_C::FightingPhase2PostProcess' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, FightingPhase2Box2) == 0x0002F0, "Member 'AWuYinQuBattleActor_C::FightingPhase2Box2' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, FightingPhase2Box1) == 0x0002F8, "Member 'AWuYinQuBattleActor_C::FightingPhase2Box1' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, FightingPhase1PostProcess) == 0x000300, "Member 'AWuYinQuBattleActor_C::FightingPhase1PostProcess' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, FightingPhase1Box2) == 0x000308, "Member 'AWuYinQuBattleActor_C::FightingPhase1Box2' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, FightingPhase1Box1) == 0x000310, "Member 'AWuYinQuBattleActor_C::FightingPhase1Box1' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, IdleOuterPostProcess) == 0x000318, "Member 'AWuYinQuBattleActor_C::IdleOuterPostProcess' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, IdleInnerPostProcess) == 0x000320, "Member 'AWuYinQuBattleActor_C::IdleInnerPostProcess' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, IdleOuterBox2) == 0x000328, "Member 'AWuYinQuBattleActor_C::IdleOuterBox2' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, IdleInnerBox2) == 0x000330, "Member 'AWuYinQuBattleActor_C::IdleInnerBox2' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, IdleOuterBox1) == 0x000338, "Member 'AWuYinQuBattleActor_C::IdleOuterBox1' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, IdleInnerBox1) == 0x000340, "Member 'AWuYinQuBattleActor_C::IdleInnerBox1' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, Root) == 0x000348, "Member 'AWuYinQuBattleActor_C::Root' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, WuYinQuFightingData) == 0x000350, "Member 'AWuYinQuBattleActor_C::WuYinQuFightingData' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, SM__) == 0x000358, "Member 'AWuYinQuBattleActor_C::SM__' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, ______) == 0x000368, "Member 'AWuYinQuBattleActor_C::______' has a wrong offset!");
static_assert(offsetof(AWuYinQuBattleActor_C, ReferenceKuroLevelSequence) == 0x000378, "Member 'AWuYinQuBattleActor_C::ReferenceKuroLevelSequence' has a wrong offset!");

}

