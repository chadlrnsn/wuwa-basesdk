#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStateChangeSlot

#include "Basic.hpp"

#include "KuroRenderingRuntimeBPPlugin_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyStateChangeSlot.TsAnimNotifyStateChangeSlot_C
// 0x0078 (0x00C0 - 0x0048)
class UTsAnimNotifyStateChangeSlot_C final : public UKuroAnimNotifyState
{
public:
	class FString                                 ComponentName;                                     // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FName                                   SwitchToSlotName;                                  // 0x0058(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0xC];                                       // 0x0064(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             SlotTransform;                                     // 0x0070(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	class FName                                   AttachSocketName;                                  // 0x00A0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 TempSkeletalMeshComponent;                         // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool K2_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool K2_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyStateChangeSlot_C">();
	}
	static class UTsAnimNotifyStateChangeSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyStateChangeSlot_C>();
	}
};
static_assert(alignof(UTsAnimNotifyStateChangeSlot_C) == 0x000010, "Wrong alignment on UTsAnimNotifyStateChangeSlot_C");
static_assert(sizeof(UTsAnimNotifyStateChangeSlot_C) == 0x0000C0, "Wrong size on UTsAnimNotifyStateChangeSlot_C");
static_assert(offsetof(UTsAnimNotifyStateChangeSlot_C, ComponentName) == 0x000048, "Member 'UTsAnimNotifyStateChangeSlot_C::ComponentName' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateChangeSlot_C, SwitchToSlotName) == 0x000058, "Member 'UTsAnimNotifyStateChangeSlot_C::SwitchToSlotName' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateChangeSlot_C, SlotTransform) == 0x000070, "Member 'UTsAnimNotifyStateChangeSlot_C::SlotTransform' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateChangeSlot_C, AttachSocketName) == 0x0000A0, "Member 'UTsAnimNotifyStateChangeSlot_C::AttachSocketName' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateChangeSlot_C, TempSkeletalMeshComponent) == 0x0000B0, "Member 'UTsAnimNotifyStateChangeSlot_C::TempSkeletalMeshComponent' has a wrong offset!");

}
