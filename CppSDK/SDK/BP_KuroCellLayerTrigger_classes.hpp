#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KuroCellLayerTrigger

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_KuroCellLayerTrigger.BP_KuroCellLayerTrigger_C
// 0x0020 (0x02D0 - 0x02B0)
class ABP_KuroCellLayerTrigger_C final : public AWorldPartitionKuroCellLayerTrigger
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          LeaveBox;                                          // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          EnterBox;                                          // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	EKuroCellLayerType                            Enter;                                             // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKuroCellLayerType                            Leave;                                             // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InSideEnterBox;                                    // 0x02CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InSideLeaveBox;                                    // 0x02CB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OldInSideEnterBox;                                 // 0x02CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OldInSideLeaveBox;                                 // 0x02CD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EStreamingSourcePriority                      StreamingSourcePriority;                           // 0x02CE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnLeaveBoxEndOverlap();
	void OnEnterBoxBeginOverlap();
	void OnTeleportStart();
	void BndEvt__BP_KuroCellLayerTrigger_EnterBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_KuroCellLayerTrigger_LeaveBox_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_KuroCellLayerTrigger(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_KuroCellLayerTrigger_C">();
	}
	static class ABP_KuroCellLayerTrigger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_KuroCellLayerTrigger_C>();
	}
};
static_assert(alignof(ABP_KuroCellLayerTrigger_C) == 0x000008, "Wrong alignment on ABP_KuroCellLayerTrigger_C");
static_assert(sizeof(ABP_KuroCellLayerTrigger_C) == 0x0002D0, "Wrong size on ABP_KuroCellLayerTrigger_C");
static_assert(offsetof(ABP_KuroCellLayerTrigger_C, UberGraphFrame) == 0x0002B0, "Member 'ABP_KuroCellLayerTrigger_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_KuroCellLayerTrigger_C, LeaveBox) == 0x0002B8, "Member 'ABP_KuroCellLayerTrigger_C::LeaveBox' has a wrong offset!");
static_assert(offsetof(ABP_KuroCellLayerTrigger_C, EnterBox) == 0x0002C0, "Member 'ABP_KuroCellLayerTrigger_C::EnterBox' has a wrong offset!");
static_assert(offsetof(ABP_KuroCellLayerTrigger_C, Enter) == 0x0002C8, "Member 'ABP_KuroCellLayerTrigger_C::Enter' has a wrong offset!");
static_assert(offsetof(ABP_KuroCellLayerTrigger_C, Leave) == 0x0002C9, "Member 'ABP_KuroCellLayerTrigger_C::Leave' has a wrong offset!");
static_assert(offsetof(ABP_KuroCellLayerTrigger_C, InSideEnterBox) == 0x0002CA, "Member 'ABP_KuroCellLayerTrigger_C::InSideEnterBox' has a wrong offset!");
static_assert(offsetof(ABP_KuroCellLayerTrigger_C, InSideLeaveBox) == 0x0002CB, "Member 'ABP_KuroCellLayerTrigger_C::InSideLeaveBox' has a wrong offset!");
static_assert(offsetof(ABP_KuroCellLayerTrigger_C, OldInSideEnterBox) == 0x0002CC, "Member 'ABP_KuroCellLayerTrigger_C::OldInSideEnterBox' has a wrong offset!");
static_assert(offsetof(ABP_KuroCellLayerTrigger_C, OldInSideLeaveBox) == 0x0002CD, "Member 'ABP_KuroCellLayerTrigger_C::OldInSideLeaveBox' has a wrong offset!");
static_assert(offsetof(ABP_KuroCellLayerTrigger_C, StreamingSourcePriority) == 0x0002CE, "Member 'ABP_KuroCellLayerTrigger_C::StreamingSourcePriority' has a wrong offset!");

}
