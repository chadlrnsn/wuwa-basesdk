#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SFollowRotateInfo

#include "Basic.hpp"

#include "EFollowRotateType_structs.hpp"
#include "ECommonAxis_structs.hpp"


namespace SDK
{

// UserDefinedStruct SFollowRotateInfo.SFollowRotateInfo
// 0x0030 (0x0030 - 0x0000)
struct FSFollowRotateInfo final
{
public:
	int32                                         RotateSpeed_8_DA1D82024C54F3C1F16F45BE72B65FA3;    // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFollowRotateType                             RotateType_2_D21E5B3748CC7CC54B0C36A2885405E3;     // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CameraDistance_21_1C9EF05F42FEA8D3486524B81787421C; // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 EntityIdBlackboardKey_18_170B21134968D972071E879D5637ED9C; // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<ECommonAxis>                           NotSyncAxisList_43_34795AEF4FEE0499129E3D9A8BC1BFE7; // 0x0020(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSFollowRotateInfo) == 0x000008, "Wrong alignment on FSFollowRotateInfo");
static_assert(sizeof(FSFollowRotateInfo) == 0x000030, "Wrong size on FSFollowRotateInfo");
static_assert(offsetof(FSFollowRotateInfo, RotateSpeed_8_DA1D82024C54F3C1F16F45BE72B65FA3) == 0x000000, "Member 'FSFollowRotateInfo::RotateSpeed_8_DA1D82024C54F3C1F16F45BE72B65FA3' has a wrong offset!");
static_assert(offsetof(FSFollowRotateInfo, RotateType_2_D21E5B3748CC7CC54B0C36A2885405E3) == 0x000004, "Member 'FSFollowRotateInfo::RotateType_2_D21E5B3748CC7CC54B0C36A2885405E3' has a wrong offset!");
static_assert(offsetof(FSFollowRotateInfo, CameraDistance_21_1C9EF05F42FEA8D3486524B81787421C) == 0x000008, "Member 'FSFollowRotateInfo::CameraDistance_21_1C9EF05F42FEA8D3486524B81787421C' has a wrong offset!");
static_assert(offsetof(FSFollowRotateInfo, EntityIdBlackboardKey_18_170B21134968D972071E879D5637ED9C) == 0x000010, "Member 'FSFollowRotateInfo::EntityIdBlackboardKey_18_170B21134968D972071E879D5637ED9C' has a wrong offset!");
static_assert(offsetof(FSFollowRotateInfo, NotSyncAxisList_43_34795AEF4FEE0499129E3D9A8BC1BFE7) == 0x000020, "Member 'FSFollowRotateInfo::NotSyncAxisList_43_34795AEF4FEE0499129E3D9A8BC1BFE7' has a wrong offset!");

}
