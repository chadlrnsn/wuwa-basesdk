#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SCondition

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct SCondition.SCondition
// 0x0078 (0x0078 - 0x0000)
struct FSCondition final
{
public:
	class FName                                   A_ID_40_7903DF4A472964134AABB2BCB04746FD;          // 0x0000(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CD1[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class FString>              _p__43_7247EF4646519C36CC0D6082179995CD;           // 0x0010(0x0050)(Edit, BlueprintVisible)
	class FText                                   ___29_9A079BDC4A8FB8D1569BA6920FFA4C0F;            // 0x0060(0x0018)(Edit, BlueprintVisible)
};
static_assert(alignof(FSCondition) == 0x000008, "Wrong alignment on FSCondition");
static_assert(sizeof(FSCondition) == 0x000078, "Wrong size on FSCondition");
static_assert(offsetof(FSCondition, A_ID_40_7903DF4A472964134AABB2BCB04746FD) == 0x000000, "Member 'FSCondition::A_ID_40_7903DF4A472964134AABB2BCB04746FD' has a wrong offset!");
static_assert(offsetof(FSCondition, _p__43_7247EF4646519C36CC0D6082179995CD) == 0x000010, "Member 'FSCondition::_p__43_7247EF4646519C36CC0D6082179995CD' has a wrong offset!");
static_assert(offsetof(FSCondition, ___29_9A079BDC4A8FB8D1569BA6920FFA4C0F) == 0x000060, "Member 'FSCondition::___29_9A079BDC4A8FB8D1569BA6920FFA4C0F' has a wrong offset!");

}
