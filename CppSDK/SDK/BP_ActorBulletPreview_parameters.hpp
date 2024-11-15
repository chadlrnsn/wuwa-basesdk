#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActorBulletPreview

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SReBulletDataMain_structs.hpp"
#include "ProceduralMeshComponent_structs.hpp"
#include "EBulletShape_structs.hpp"


namespace SDK::Params
{

// Function BP_ActorBulletPreview.BP_ActorBulletPreview_C. �
// 0x00C8 (0x00C8 - 0x0000)
struct BP_ActorBulletPreview_C___ final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_CalcBulletInitLocation_ReturnValue;       // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0014(0x0094)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C77[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_CalcBulletInitRotator_ReturnValue;        // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x00B8(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ActorBulletPreview_C___) == 0x000008, "Wrong alignment on BP_ActorBulletPreview_C___");
static_assert(sizeof(BP_ActorBulletPreview_C___) == 0x0000C8, "Wrong size on BP_ActorBulletPreview_C___");
static_assert(offsetof(BP_ActorBulletPreview_C___, MeshComp) == 0x000000, "Member 'BP_ActorBulletPreview_C___::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C___, CallFunc_CalcBulletInitLocation_ReturnValue) == 0x000008, "Member 'BP_ActorBulletPreview_C___::CallFunc_CalcBulletInitLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C___, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000014, "Member 'BP_ActorBulletPreview_C___::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C___, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0000A8, "Member 'BP_ActorBulletPreview_C___::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C___, CallFunc_CalcBulletInitRotator_ReturnValue) == 0x0000AC, "Member 'BP_ActorBulletPreview_C___::CallFunc_CalcBulletInitRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C___, CallFunc_K2_SetTimer_ReturnValue) == 0x0000B8, "Member 'BP_ActorBulletPreview_C___::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C___, CallFunc_K2_SetActorRotation_ReturnValue) == 0x0000C0, "Member 'BP_ActorBulletPreview_C___::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");

// Function BP_ActorBulletPreview.BP_ActorBulletPreview_C.b��
// 0x0390 (0x0390 - 0x0000)
struct BP_ActorBulletPreview_C_b____ final
{
public:
	EBulletShape                                  b_;                                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C78[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 TrianglesArray;                                    // 0x0008(0x0010)(Edit, BlueprintVisible)
	TArray<struct FVector>                        VerticesArray;                                     // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<struct FVector2D>                      ___struct_Variable;                                // 0x0028(0x0010)(ConstParm, ReferenceParm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C79[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector2D>                      ___struct_Variable_1;                              // 0x0040(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FVector2D>                      ___struct_Variable_2;                              // 0x0050(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FVector>                        ___struct_Variable_3;                              // 0x0060(0x0010)(ConstParm, ReferenceParm)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0070(0x0030)(IsPlainOldData, NoDestructor)
	class UProceduralMeshComponent*               CallFunc_AddComponentByClass_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FProcMeshTangent>               ___struct_Variable_4;                              // 0x00A8(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FLinearColor>                   ___struct_Variable_5;                              // 0x00B8(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FVector2D>                      ___struct_Variable_6;                              // 0x00C8(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FVector2D>                      ___struct_Variable_7;                              // 0x00D8(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FVector2D>                      ___struct_Variable_8;                              // 0x00E8(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FVector2D>                      ___struct_Variable_9;                              // 0x00F8(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FVector>                        ___struct_Variable_10;                             // 0x0108(0x0010)(ConstParm, ReferenceParm)
	uint8                                         Pad_2C7A[0x8];                                     // 0x0118(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0120(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_2;              // 0x0150(0x0030)(IsPlainOldData, NoDestructor)
	class UProceduralMeshComponent*               CallFunc_AddComponentByClass_ReturnValue_1;        // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       CallFunc_AddComponentByClass_ReturnValue_2;        // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_3;              // 0x0190(0x0030)(IsPlainOldData, NoDestructor)
	class UBoxComponent*                          CallFunc_AddComponentByClass_ReturnValue_3;        // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IAssetRegistry>        CallFunc_GetAssetRegistry_ReturnValue;             // 0x01C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TScriptInterface<class IAssetRegistry>        CallFunc_GetAssetRegistry_ReturnValue_1;           // 0x01D8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FAssetData                             CallFunc_GetAssetByObjectPath_ReturnValue;         // 0x01E8(0x0068)(HasGetValueTypeHash)
	struct FAssetData                             CallFunc_GetAssetByObjectPath_ReturnValue_1;       // 0x0250(0x0068)(HasGetValueTypeHash)
	class UObject*                                CallFunc_GetAsset_ReturnValue;                     // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetAsset_ReturnValue_1;                   // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              K2Node_DynamicCast_As__;                           // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C7B[0x7];                                     // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterial*                              K2Node_DynamicCast_As___1;                         // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C7C[0x3];                                     // 0x02E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x02E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x02EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorUpVector_ReturnValue;             // 0x02F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x02FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0308(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C7D[0x4];                                     // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector2D>                      ___struct_Variable_11;                             // 0x0318(0x0010)(ConstParm, ReferenceParm)
	float                                         CallFunc_BreakVector_X_1;                          // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x032C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_2;                          // 0x0334(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_2;                          // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_2;                          // 0x033C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   ___struct_Variable_12;                             // 0x0340(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_GetActorUpVector_ReturnValue_1;           // 0x0350(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue_1;      // 0x035C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0368(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C7E[0x4];                                     // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FProcMeshTangent>               ___struct_Variable_13;                             // 0x0378(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(BP_ActorBulletPreview_C_b____) == 0x000010, "Wrong alignment on BP_ActorBulletPreview_C_b____");
static_assert(sizeof(BP_ActorBulletPreview_C_b____) == 0x000390, "Wrong size on BP_ActorBulletPreview_C_b____");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, b_) == 0x000000, "Member 'BP_ActorBulletPreview_C_b____::b_' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, TrianglesArray) == 0x000008, "Member 'BP_ActorBulletPreview_C_b____::TrianglesArray' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, VerticesArray) == 0x000018, "Member 'BP_ActorBulletPreview_C_b____::VerticesArray' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, ___struct_Variable) == 0x000028, "Member 'BP_ActorBulletPreview_C_b____::___struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, K2Node_SwitchEnum_CmpSuccess) == 0x000038, "Member 'BP_ActorBulletPreview_C_b____::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, ___struct_Variable_1) == 0x000040, "Member 'BP_ActorBulletPreview_C_b____::___struct_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, ___struct_Variable_2) == 0x000050, "Member 'BP_ActorBulletPreview_C_b____::___struct_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, ___struct_Variable_3) == 0x000060, "Member 'BP_ActorBulletPreview_C_b____::___struct_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_MakeTransform_ReturnValue) == 0x000070, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_AddComponentByClass_ReturnValue) == 0x0000A0, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_AddComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, ___struct_Variable_4) == 0x0000A8, "Member 'BP_ActorBulletPreview_C_b____::___struct_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, ___struct_Variable_5) == 0x0000B8, "Member 'BP_ActorBulletPreview_C_b____::___struct_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, ___struct_Variable_6) == 0x0000C8, "Member 'BP_ActorBulletPreview_C_b____::___struct_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, ___struct_Variable_7) == 0x0000D8, "Member 'BP_ActorBulletPreview_C_b____::___struct_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, ___struct_Variable_8) == 0x0000E8, "Member 'BP_ActorBulletPreview_C_b____::___struct_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, ___struct_Variable_9) == 0x0000F8, "Member 'BP_ActorBulletPreview_C_b____::___struct_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, ___struct_Variable_10) == 0x000108, "Member 'BP_ActorBulletPreview_C_b____::___struct_Variable_10' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_MakeTransform_ReturnValue_1) == 0x000120, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_MakeTransform_ReturnValue_2) == 0x000150, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_MakeTransform_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_AddComponentByClass_ReturnValue_1) == 0x000180, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_AddComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_AddComponentByClass_ReturnValue_2) == 0x000188, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_AddComponentByClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_MakeTransform_ReturnValue_3) == 0x000190, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_MakeTransform_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_AddComponentByClass_ReturnValue_3) == 0x0001C0, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_AddComponentByClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_GetAssetRegistry_ReturnValue) == 0x0001C8, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_GetAssetRegistry_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_GetAssetRegistry_ReturnValue_1) == 0x0001D8, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_GetAssetRegistry_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_GetAssetByObjectPath_ReturnValue) == 0x0001E8, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_GetAssetByObjectPath_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_GetAssetByObjectPath_ReturnValue_1) == 0x000250, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_GetAssetByObjectPath_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_GetAsset_ReturnValue) == 0x0002B8, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_GetAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_GetAsset_ReturnValue_1) == 0x0002C0, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_GetAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, K2Node_DynamicCast_As__) == 0x0002C8, "Member 'BP_ActorBulletPreview_C_b____::K2Node_DynamicCast_As__' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, K2Node_DynamicCast_bSuccess) == 0x0002D0, "Member 'BP_ActorBulletPreview_C_b____::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, K2Node_DynamicCast_As___1) == 0x0002D8, "Member 'BP_ActorBulletPreview_C_b____::K2Node_DynamicCast_As___1' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, K2Node_DynamicCast_bSuccess_1) == 0x0002E0, "Member 'BP_ActorBulletPreview_C_b____::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_BreakVector_X) == 0x0002E4, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_BreakVector_Y) == 0x0002E8, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_BreakVector_Z) == 0x0002EC, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_GetActorUpVector_ReturnValue) == 0x0002F0, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_GetActorUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_GetActorForwardVector_ReturnValue) == 0x0002FC, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000308, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, ___struct_Variable_11) == 0x000318, "Member 'BP_ActorBulletPreview_C_b____::___struct_Variable_11' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_BreakVector_X_1) == 0x000328, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_BreakVector_Y_1) == 0x00032C, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_BreakVector_Z_1) == 0x000330, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_BreakVector_X_2) == 0x000334, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_BreakVector_Y_2) == 0x000338, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_BreakVector_Z_2) == 0x00033C, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, ___struct_Variable_12) == 0x000340, "Member 'BP_ActorBulletPreview_C_b____::___struct_Variable_12' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_GetActorUpVector_ReturnValue_1) == 0x000350, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_GetActorUpVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_GetActorForwardVector_ReturnValue_1) == 0x00035C, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_GetActorForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000368, "Member 'BP_ActorBulletPreview_C_b____::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_b____, ___struct_Variable_13) == 0x000378, "Member 'BP_ActorBulletPreview_C_b____::___struct_Variable_13' has a wrong offset!");

// Function BP_ActorBulletPreview.BP_ActorBulletPreview_C.�
// 0x0730 (0x0730 - 0x0000)
struct BP_ActorBulletPreview_C____ final
{
public:
	struct FSReBulletDataMain                     Param_Mn;                                          // 0x0000(0x0728)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class AActor*                                 Param____;                                         // 0x0728(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActorBulletPreview_C____) == 0x000008, "Wrong alignment on BP_ActorBulletPreview_C____");
static_assert(sizeof(BP_ActorBulletPreview_C____) == 0x000730, "Wrong size on BP_ActorBulletPreview_C____");
static_assert(offsetof(BP_ActorBulletPreview_C____, Param_Mn) == 0x000000, "Member 'BP_ActorBulletPreview_C____::Param_Mn' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C____, Param____) == 0x000728, "Member 'BP_ActorBulletPreview_C____::Param____' has a wrong offset!");

// Function BP_ActorBulletPreview.BP_ActorBulletPreview_C.OnTick
// 0x00B8 (0x00B8 - 0x0000)
struct BP_ActorBulletPreview_C_OnTick final
{
public:
	struct FVector                                CallFunc_CalcBulletLocation_ReturnValue;           // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x000C(0x0094)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C7F[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_CalcBulletRotator_ReturnValue;            // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C80[0x2];                                     // 0x00B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActorBulletPreview_C_OnTick) == 0x000004, "Wrong alignment on BP_ActorBulletPreview_C_OnTick");
static_assert(sizeof(BP_ActorBulletPreview_C_OnTick) == 0x0000B8, "Wrong size on BP_ActorBulletPreview_C_OnTick");
static_assert(offsetof(BP_ActorBulletPreview_C_OnTick, CallFunc_CalcBulletLocation_ReturnValue) == 0x000000, "Member 'BP_ActorBulletPreview_C_OnTick::CallFunc_CalcBulletLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_OnTick, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x00000C, "Member 'BP_ActorBulletPreview_C_OnTick::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_OnTick, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0000A0, "Member 'BP_ActorBulletPreview_C_OnTick::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_OnTick, CallFunc_CalcBulletRotator_ReturnValue) == 0x0000A4, "Member 'BP_ActorBulletPreview_C_OnTick::CallFunc_CalcBulletRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_OnTick, CallFunc_K2_SetActorRotation_ReturnValue) == 0x0000B0, "Member 'BP_ActorBulletPreview_C_OnTick::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_OnTick, CallFunc_Less_FloatFloat_ReturnValue) == 0x0000B1, "Member 'BP_ActorBulletPreview_C_OnTick::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActorBulletPreview_C_OnTick, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000B4, "Member 'BP_ActorBulletPreview_C_OnTick::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

// Function BP_ActorBulletPreview.BP_ActorBulletPreview_C.-�MnO�
// 0x0094 (0x0094 - 0x0000)
struct BP_ActorBulletPreview_C_Minus_MnO_ final
{
public:
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0000(0x0094)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_ActorBulletPreview_C_Minus_MnO_) == 0x000004, "Wrong alignment on BP_ActorBulletPreview_C_Minus_MnO_");
static_assert(sizeof(BP_ActorBulletPreview_C_Minus_MnO_) == 0x000094, "Wrong size on BP_ActorBulletPreview_C_Minus_MnO_");
static_assert(offsetof(BP_ActorBulletPreview_C_Minus_MnO_, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000000, "Member 'BP_ActorBulletPreview_C_Minus_MnO_::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

}

