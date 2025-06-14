﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Fx_BirdsFlySpline

#include "Basic.hpp"

#include "KuroRenderingRuntimeBPPlugin_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Fx_BirdsFlySpline.BP_Fx_BirdsFlySpline_C
// 0x0020 (0x02D8 - 0x02B8)
class ABP_Fx_BirdsFlySpline_C final : public AKuroEffectActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USplineComponent*                       Spline;                                            // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UEffectModelNiagara_C*                  EffectModelNiagara;                                // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TsEffectComponent;                                 // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Fx_BirdsFlySpline(int32 EntryPoint);
	void EditorTick(float DeltaSeconds);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void Reset();
	void PlayEditor();
	void StopEditor();
	void IsEditor(bool* IsEditor_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Fx_BirdsFlySpline_C">();
	}
	static class ABP_Fx_BirdsFlySpline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Fx_BirdsFlySpline_C>();
	}
};
static_assert(alignof(ABP_Fx_BirdsFlySpline_C) == 0x000008, "Wrong alignment on ABP_Fx_BirdsFlySpline_C");
static_assert(sizeof(ABP_Fx_BirdsFlySpline_C) == 0x0002D8, "Wrong size on ABP_Fx_BirdsFlySpline_C");
static_assert(offsetof(ABP_Fx_BirdsFlySpline_C, UberGraphFrame) == 0x0002B8, "Member 'ABP_Fx_BirdsFlySpline_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Fx_BirdsFlySpline_C, Spline) == 0x0002C0, "Member 'ABP_Fx_BirdsFlySpline_C::Spline' has a wrong offset!");
static_assert(offsetof(ABP_Fx_BirdsFlySpline_C, EffectModelNiagara) == 0x0002C8, "Member 'ABP_Fx_BirdsFlySpline_C::EffectModelNiagara' has a wrong offset!");
static_assert(offsetof(ABP_Fx_BirdsFlySpline_C, TsEffectComponent) == 0x0002D0, "Member 'ABP_Fx_BirdsFlySpline_C::TsEffectComponent' has a wrong offset!");

}

