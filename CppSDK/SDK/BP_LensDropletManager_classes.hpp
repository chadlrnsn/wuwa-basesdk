#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LensDropletManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LensDropletManager.BP_LensDropletManager_C
// 0x00B0 (0x0368 - 0x02B8)
class ABP_LensDropletManager_C final : public AKuroEditorTickActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UProceduralMeshComponent*               Droplets;                                          // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         DropletGenerate_NewTrack_0_43A8026C4C5253C2ECCC34BC1AFDE7FF; // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            DropletGenerate__Direction_43A8026C4C5253C2ECCC34BC1AFDE7FF; // 0x02D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D5[0x3];                                      // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     DropletGenerate;                                   // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rain_Intensity;                                    // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Gravity;                                           // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DropletIntensityMul;                               // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Time;                                              // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Speed;                                             // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ScreenSize;                                        // 0x02F4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RainDropOpacity;                                   // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InOut;                                             // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               DropletDMI;                                        // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeForInOut;                                      // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InOutActive;                                       // 0x0314(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_315[0x3];                                      // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Time_0;                                            // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEditor;                                          // 0x031C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31D[0x3];                                      // 0x031D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                PrezCamPos;                                        // 0x0320(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PrezCamVec;                                        // 0x032C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrCamPos;                                        // 0x0338(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrCamVec;                                        // 0x0344(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpawnSpeed;                                        // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKuroRainType                                 RainType;                                          // 0x0354(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_355[0x3];                                      // 0x0355(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxNumber;                                         // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Delta_Seconds;                                     // 0x035C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_in_Cave;                                        // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void GenerateOneDroplets();
	void Timer(float Time_0, bool InOut_0);
	void UpdateParameters();
	void Init();
	void ConstructPolyMesh(int32 DropletAmount);
	void SetBasicDropletParameters(float RainIntensity, float Gravity_0, EKuroRainType RainType_0, bool IsInCave);
	void UserConstructionScript();
	void DropletGenerate__FinishedFunc();
	void DropletGenerate__UpdateFunc();
	void CustomEvent_1();
	void CleanMesh();
	void DropletEnd();
	void DropletStart();
	void DisableDroplets();
	void EditorTick(float DeltaSeconds);
	void EnableDroplets();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LensDropletManager(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LensDropletManager_C">();
	}
	static class ABP_LensDropletManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LensDropletManager_C>();
	}
};
static_assert(alignof(ABP_LensDropletManager_C) == 0x000008, "Wrong alignment on ABP_LensDropletManager_C");
static_assert(sizeof(ABP_LensDropletManager_C) == 0x000368, "Wrong size on ABP_LensDropletManager_C");
static_assert(offsetof(ABP_LensDropletManager_C, UberGraphFrame) == 0x0002B8, "Member 'ABP_LensDropletManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, Droplets) == 0x0002C0, "Member 'ABP_LensDropletManager_C::Droplets' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, DefaultSceneRoot) == 0x0002C8, "Member 'ABP_LensDropletManager_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, DropletGenerate_NewTrack_0_43A8026C4C5253C2ECCC34BC1AFDE7FF) == 0x0002D0, "Member 'ABP_LensDropletManager_C::DropletGenerate_NewTrack_0_43A8026C4C5253C2ECCC34BC1AFDE7FF' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, DropletGenerate__Direction_43A8026C4C5253C2ECCC34BC1AFDE7FF) == 0x0002D4, "Member 'ABP_LensDropletManager_C::DropletGenerate__Direction_43A8026C4C5253C2ECCC34BC1AFDE7FF' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, DropletGenerate) == 0x0002D8, "Member 'ABP_LensDropletManager_C::DropletGenerate' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, Rain_Intensity) == 0x0002E0, "Member 'ABP_LensDropletManager_C::Rain_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, Gravity) == 0x0002E4, "Member 'ABP_LensDropletManager_C::Gravity' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, DropletIntensityMul) == 0x0002E8, "Member 'ABP_LensDropletManager_C::DropletIntensityMul' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, Time) == 0x0002EC, "Member 'ABP_LensDropletManager_C::Time' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, Speed) == 0x0002F0, "Member 'ABP_LensDropletManager_C::Speed' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, ScreenSize) == 0x0002F4, "Member 'ABP_LensDropletManager_C::ScreenSize' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, RainDropOpacity) == 0x0002FC, "Member 'ABP_LensDropletManager_C::RainDropOpacity' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, InOut) == 0x000300, "Member 'ABP_LensDropletManager_C::InOut' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, DropletDMI) == 0x000308, "Member 'ABP_LensDropletManager_C::DropletDMI' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, TimeForInOut) == 0x000310, "Member 'ABP_LensDropletManager_C::TimeForInOut' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, InOutActive) == 0x000314, "Member 'ABP_LensDropletManager_C::InOutActive' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, Time_0) == 0x000318, "Member 'ABP_LensDropletManager_C::Time_0' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, IsEditor) == 0x00031C, "Member 'ABP_LensDropletManager_C::IsEditor' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, PrezCamPos) == 0x000320, "Member 'ABP_LensDropletManager_C::PrezCamPos' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, PrezCamVec) == 0x00032C, "Member 'ABP_LensDropletManager_C::PrezCamVec' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, CurrCamPos) == 0x000338, "Member 'ABP_LensDropletManager_C::CurrCamPos' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, CurrCamVec) == 0x000344, "Member 'ABP_LensDropletManager_C::CurrCamVec' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, SpawnSpeed) == 0x000350, "Member 'ABP_LensDropletManager_C::SpawnSpeed' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, RainType) == 0x000354, "Member 'ABP_LensDropletManager_C::RainType' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, MaxNumber) == 0x000358, "Member 'ABP_LensDropletManager_C::MaxNumber' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, Delta_Seconds) == 0x00035C, "Member 'ABP_LensDropletManager_C::Delta_Seconds' has a wrong offset!");
static_assert(offsetof(ABP_LensDropletManager_C, Is_in_Cave) == 0x000360, "Member 'ABP_LensDropletManager_C::Is_in_Cave' has a wrong offset!");

}
