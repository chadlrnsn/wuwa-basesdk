#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsBaseVehicle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "KuroVehicle_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsBaseVehicle.TsBaseVehicle_C
// 0x0030 (0x06B0 - 0x0680)
class ATsBaseVehicle_C final : public AKuroBaseVehicle
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0680(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         EntityId;                                          // 0x0688(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AE9[0x4];                                     // 0x068C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftClassPath                         InputComponentClass;                               // 0x0690(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TsBaseVehicle(int32 EntryPoint);
	void ReceiveDestroyed();
	int32 GetEntityId();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsBaseVehicle_C">();
	}
	static class ATsBaseVehicle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATsBaseVehicle_C>();
	}
};
static_assert(alignof(ATsBaseVehicle_C) == 0x000010, "Wrong alignment on ATsBaseVehicle_C");
static_assert(sizeof(ATsBaseVehicle_C) == 0x0006B0, "Wrong size on ATsBaseVehicle_C");
static_assert(offsetof(ATsBaseVehicle_C, UberGraphFrame) == 0x000680, "Member 'ATsBaseVehicle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATsBaseVehicle_C, EntityId) == 0x000688, "Member 'ATsBaseVehicle_C::EntityId' has a wrong offset!");
static_assert(offsetof(ATsBaseVehicle_C, InputComponentClass) == 0x000690, "Member 'ATsBaseVehicle_C::InputComponentClass' has a wrong offset!");

}
