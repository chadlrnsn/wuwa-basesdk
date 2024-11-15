#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStateCurveMove

#include "Basic.hpp"

#include "EMovementProcessDirection_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SSkillBehaviorCondition_structs.hpp"
#include "Engine_structs.hpp"
#include "EPositionDatumTarget_structs.hpp"
#include "EOffsetDirectionDatum_structs.hpp"
#include "SSkillBehaviorAction_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyStateCurveMove.TsAnimNotifyStateCurveMove_C
// 0x02D8 (0x0320 - 0x0048)
class UTsAnimNotifyStateCurveMove_C final : public UKuroAnimNotifyState
{
public:
	TArray<struct FSSkillBehaviorCondition>       __a_;                                              // 0x0048(0x0010)(Edit, BlueprintVisible)
	class FName                                   __a_l_;                                            // 0x0058(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ______;                                            // 0x0064(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35EC[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        __h___;                                            // 0x0068(0x0020)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ______Mn;                                          // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EPositionDatumTarget                          Mn____;                                            // 0x0089(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35ED[0x2];                                     // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ______Mn_0;                                        // 0x008C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   ___p;                                              // 0x0098(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EOffsetDirectionDatum                         O_____;                                            // 0x00A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35EE[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                __MnO_;                                            // 0x00A8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Mn_c;                                              // 0x00B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35EF[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSSkillBehaviorAction                  Mn_cMn;                                            // 0x00B8(0x0238)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UCurveFloat*                            __Mn__;                                            // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSplinePoint>                   __h___s__;                                         // 0x02F8(0x0010)(Edit, BlueprintVisible)
	TArray<struct FInterpCurvePointFloat>         __h_____ReparamTable;                              // 0x0308(0x0010)(Edit, BlueprintVisible)
	EMovementProcessDirection                     _______0;                                          // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugMode;                                         // 0x0319(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ______h___s__;                                     // 0x031A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	bool K2_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool K2_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
	bool K2_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyStateCurveMove_C">();
	}
	static class UTsAnimNotifyStateCurveMove_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyStateCurveMove_C>();
	}
};
static_assert(alignof(UTsAnimNotifyStateCurveMove_C) == 0x000008, "Wrong alignment on UTsAnimNotifyStateCurveMove_C");
static_assert(sizeof(UTsAnimNotifyStateCurveMove_C) == 0x000320, "Wrong size on UTsAnimNotifyStateCurveMove_C");
static_assert(offsetof(UTsAnimNotifyStateCurveMove_C, __a_) == 0x000048, "Member 'UTsAnimNotifyStateCurveMove_C::__a_' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCurveMove_C, __a_l_) == 0x000058, "Member 'UTsAnimNotifyStateCurveMove_C::__a_l_' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCurveMove_C, ______) == 0x000064, "Member 'UTsAnimNotifyStateCurveMove_C::______' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCurveMove_C, __h___) == 0x000068, "Member 'UTsAnimNotifyStateCurveMove_C::__h___' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCurveMove_C, ______Mn) == 0x000088, "Member 'UTsAnimNotifyStateCurveMove_C::______Mn' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCurveMove_C, Mn____) == 0x000089, "Member 'UTsAnimNotifyStateCurveMove_C::Mn____' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCurveMove_C, ______Mn_0) == 0x00008C, "Member 'UTsAnimNotifyStateCurveMove_C::______Mn_0' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCurveMove_C, ___p) == 0x000098, "Member 'UTsAnimNotifyStateCurveMove_C::___p' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCurveMove_C, O_____) == 0x0000A4, "Member 'UTsAnimNotifyStateCurveMove_C::O_____' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCurveMove_C, __MnO_) == 0x0000A8, "Member 'UTsAnimNotifyStateCurveMove_C::__MnO_' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCurveMove_C, Mn_c) == 0x0000B4, "Member 'UTsAnimNotifyStateCurveMove_C::Mn_c' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCurveMove_C, Mn_cMn) == 0x0000B8, "Member 'UTsAnimNotifyStateCurveMove_C::Mn_cMn' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCurveMove_C, __Mn__) == 0x0002F0, "Member 'UTsAnimNotifyStateCurveMove_C::__Mn__' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCurveMove_C, __h___s__) == 0x0002F8, "Member 'UTsAnimNotifyStateCurveMove_C::__h___s__' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCurveMove_C, __h_____ReparamTable) == 0x000308, "Member 'UTsAnimNotifyStateCurveMove_C::__h_____ReparamTable' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCurveMove_C, _______0) == 0x000318, "Member 'UTsAnimNotifyStateCurveMove_C::_______0' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCurveMove_C, DebugMode) == 0x000319, "Member 'UTsAnimNotifyStateCurveMove_C::DebugMode' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateCurveMove_C, ______h___s__) == 0x00031A, "Member 'UTsAnimNotifyStateCurveMove_C::______h___s__' has a wrong offset!");

}

