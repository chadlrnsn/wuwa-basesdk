#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractFoliageManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InteractFoliageManager.BP_InteractFoliageManager_C
// 0x0058 (0x0300 - 0x02A8)
class ABP_InteractFoliageManager_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Interactor;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CharacterTransform;                                // 0x02C0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Active;                                            // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void CheckActive();
	void DebugInteractor();
	void ExecuteUbergraph_BP_InteractFoliageManager(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InteractFoliageManager_C">();
	}
	static class ABP_InteractFoliageManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_InteractFoliageManager_C>();
	}
};
static_assert(alignof(ABP_InteractFoliageManager_C) == 0x000010, "Wrong alignment on ABP_InteractFoliageManager_C");
static_assert(sizeof(ABP_InteractFoliageManager_C) == 0x000300, "Wrong size on ABP_InteractFoliageManager_C");
static_assert(offsetof(ABP_InteractFoliageManager_C, UberGraphFrame) == 0x0002A8, "Member 'ABP_InteractFoliageManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_InteractFoliageManager_C, Interactor) == 0x0002B0, "Member 'ABP_InteractFoliageManager_C::Interactor' has a wrong offset!");
static_assert(offsetof(ABP_InteractFoliageManager_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_InteractFoliageManager_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_InteractFoliageManager_C, CharacterTransform) == 0x0002C0, "Member 'ABP_InteractFoliageManager_C::CharacterTransform' has a wrong offset!");
static_assert(offsetof(ABP_InteractFoliageManager_C, Active) == 0x0002F0, "Member 'ABP_InteractFoliageManager_C::Active' has a wrong offset!");

}
