#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SCharacterFightInfo

#include "Basic.hpp"

#include "ECharacterLoadType_structs.hpp"


namespace SDK
{

// UserDefinedStruct SCharacterFightInfo.SCharacterFightInfo
// 0x01B0 (0x01B0 - 0x0000)
struct FSCharacterFightInfo final
{
public:
	TSoftObjectPtr<class UDataTable>              SkillDataTable_2_5738D0894D6627807A9BD6A84D2ACCE8; // 0x0000(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UDataTable>              BulletDataTable_4_ADE2A2EE46C27E8E76BA4E8EC23BF3B6; // 0x0030(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UPrimaryDataAsset>       PartHitEffect_10_5B10341B4A72D9A56420A3BFEDED352F; // 0x0060(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UDataTable>              HitEffectTable_38_C0CF41B14FE20AD7BFBFAEAC14A1F599; // 0x0090(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TMap<ECharacterLoadType, TSoftObjectPtr<class UDataTable>> SkillDataTableMap_31_C353E1CA4DD9A971C0086299955AA477; // 0x00C0(0x0050)(Edit, BlueprintVisible)
	TMap<ECharacterLoadType, TSoftObjectPtr<class UDataTable>> BulletDataTableMap_32_993E48644937B84BFABE88ADF93218A6; // 0x0110(0x0050)(Edit, BlueprintVisible)
	TMap<ECharacterLoadType, TSoftObjectPtr<class UDataTable>> HitEffectTableMap_41_D98FA35148C90BA224A7C3AAF6887855; // 0x0160(0x0050)(Edit, BlueprintVisible)
};
static_assert(alignof(FSCharacterFightInfo) == 0x000008, "Wrong alignment on FSCharacterFightInfo");
static_assert(sizeof(FSCharacterFightInfo) == 0x0001B0, "Wrong size on FSCharacterFightInfo");
static_assert(offsetof(FSCharacterFightInfo, SkillDataTable_2_5738D0894D6627807A9BD6A84D2ACCE8) == 0x000000, "Member 'FSCharacterFightInfo::SkillDataTable_2_5738D0894D6627807A9BD6A84D2ACCE8' has a wrong offset!");
static_assert(offsetof(FSCharacterFightInfo, BulletDataTable_4_ADE2A2EE46C27E8E76BA4E8EC23BF3B6) == 0x000030, "Member 'FSCharacterFightInfo::BulletDataTable_4_ADE2A2EE46C27E8E76BA4E8EC23BF3B6' has a wrong offset!");
static_assert(offsetof(FSCharacterFightInfo, PartHitEffect_10_5B10341B4A72D9A56420A3BFEDED352F) == 0x000060, "Member 'FSCharacterFightInfo::PartHitEffect_10_5B10341B4A72D9A56420A3BFEDED352F' has a wrong offset!");
static_assert(offsetof(FSCharacterFightInfo, HitEffectTable_38_C0CF41B14FE20AD7BFBFAEAC14A1F599) == 0x000090, "Member 'FSCharacterFightInfo::HitEffectTable_38_C0CF41B14FE20AD7BFBFAEAC14A1F599' has a wrong offset!");
static_assert(offsetof(FSCharacterFightInfo, SkillDataTableMap_31_C353E1CA4DD9A971C0086299955AA477) == 0x0000C0, "Member 'FSCharacterFightInfo::SkillDataTableMap_31_C353E1CA4DD9A971C0086299955AA477' has a wrong offset!");
static_assert(offsetof(FSCharacterFightInfo, BulletDataTableMap_32_993E48644937B84BFABE88ADF93218A6) == 0x000110, "Member 'FSCharacterFightInfo::BulletDataTableMap_32_993E48644937B84BFABE88ADF93218A6' has a wrong offset!");
static_assert(offsetof(FSCharacterFightInfo, HitEffectTableMap_41_D98FA35148C90BA224A7C3AAF6887855) == 0x000160, "Member 'FSCharacterFightInfo::HitEffectTableMap_41_D98FA35148C90BA224A7C3AAF6887855' has a wrong offset!");

}
