#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VolumetricLight

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_VolumetricLight.BP_VolumetricLight_C
// 0x0090 (0x0340 - 0x02B0)
class ABP_VolumetricLight_C final : public AActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            StaticMeshCone;                                    // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      MaterialInstance;                                  // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      MaterialInstanceB;                                 // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      MaterialInstanceBT;                                // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      MaterialInstanceT;                                 // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnableBottomColor;                                 // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsWholeDay;                                        // 0x02E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          EnableFlickent;                                    // 0x02E2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E3[0x1];                                      // 0x02E3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ConeSin;                                           // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RadFallOut;                                        // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TopClip;                                           // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TopColorLerp;                                      // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           TopColor;                                          // 0x02F4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           BottomColor;                                       // 0x0304(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyLightInt;                                       // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyLightOffset;                                    // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BrightLength;                                      // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FlickerTime;                                       // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DepthFade;                                         // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ViewTime;                                          // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightStart;                                        // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NearFadeStart;                                     // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FullIntLength;                                     // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FarFadeLength;                                     // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VolumetricLight_C">();
	}
	static class ABP_VolumetricLight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VolumetricLight_C>();
	}
};
static_assert(alignof(ABP_VolumetricLight_C) == 0x000008, "Wrong alignment on ABP_VolumetricLight_C");
static_assert(sizeof(ABP_VolumetricLight_C) == 0x000340, "Wrong size on ABP_VolumetricLight_C");
static_assert(offsetof(ABP_VolumetricLight_C, DefaultSceneRoot) == 0x0002B0, "Member 'ABP_VolumetricLight_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, StaticMeshCone) == 0x0002B8, "Member 'ABP_VolumetricLight_C::StaticMeshCone' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, MaterialInstance) == 0x0002C0, "Member 'ABP_VolumetricLight_C::MaterialInstance' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, MaterialInstanceB) == 0x0002C8, "Member 'ABP_VolumetricLight_C::MaterialInstanceB' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, MaterialInstanceBT) == 0x0002D0, "Member 'ABP_VolumetricLight_C::MaterialInstanceBT' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, MaterialInstanceT) == 0x0002D8, "Member 'ABP_VolumetricLight_C::MaterialInstanceT' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, EnableBottomColor) == 0x0002E0, "Member 'ABP_VolumetricLight_C::EnableBottomColor' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, IsWholeDay) == 0x0002E1, "Member 'ABP_VolumetricLight_C::IsWholeDay' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, EnableFlickent) == 0x0002E2, "Member 'ABP_VolumetricLight_C::EnableFlickent' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, ConeSin) == 0x0002E4, "Member 'ABP_VolumetricLight_C::ConeSin' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, RadFallOut) == 0x0002E8, "Member 'ABP_VolumetricLight_C::RadFallOut' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, TopClip) == 0x0002EC, "Member 'ABP_VolumetricLight_C::TopClip' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, TopColorLerp) == 0x0002F0, "Member 'ABP_VolumetricLight_C::TopColorLerp' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, TopColor) == 0x0002F4, "Member 'ABP_VolumetricLight_C::TopColor' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, BottomColor) == 0x000304, "Member 'ABP_VolumetricLight_C::BottomColor' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, SkyLightInt) == 0x000314, "Member 'ABP_VolumetricLight_C::SkyLightInt' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, SkyLightOffset) == 0x000318, "Member 'ABP_VolumetricLight_C::SkyLightOffset' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, BrightLength) == 0x00031C, "Member 'ABP_VolumetricLight_C::BrightLength' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, FlickerTime) == 0x000320, "Member 'ABP_VolumetricLight_C::FlickerTime' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, DepthFade) == 0x000324, "Member 'ABP_VolumetricLight_C::DepthFade' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, ViewTime) == 0x000328, "Member 'ABP_VolumetricLight_C::ViewTime' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, LightStart) == 0x00032C, "Member 'ABP_VolumetricLight_C::LightStart' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, NearFadeStart) == 0x000330, "Member 'ABP_VolumetricLight_C::NearFadeStart' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, FullIntLength) == 0x000334, "Member 'ABP_VolumetricLight_C::FullIntLength' has a wrong offset!");
static_assert(offsetof(ABP_VolumetricLight_C, FarFadeLength) == 0x000338, "Member 'ABP_VolumetricLight_C::FarFadeLength' has a wrong offset!");

}
