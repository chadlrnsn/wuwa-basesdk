#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SAiWeaponSocket

#include "Basic.hpp"

#include "SWeaponSocket_structs.hpp"


namespace SDK
{

// UserDefinedStruct SAiWeaponSocket.SAiWeaponSocket
// 0x0058 (0x0058 - 0x0000)
struct FSAiWeaponSocket final
{
public:
	TMap<int32, struct FSWeaponSocket>            AiModelConfig_31_CE477C0240043F0E66DD39B32302A00B; // 0x0000(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         CollisionRadius_24_ABA0FB7549FB7C3C4786F6B98A022429; // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Mass_26_116A19644F3F50076B9B7488BF4D12F6;          // 0x0054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSAiWeaponSocket) == 0x000008, "Wrong alignment on FSAiWeaponSocket");
static_assert(sizeof(FSAiWeaponSocket) == 0x000058, "Wrong size on FSAiWeaponSocket");
static_assert(offsetof(FSAiWeaponSocket, AiModelConfig_31_CE477C0240043F0E66DD39B32302A00B) == 0x000000, "Member 'FSAiWeaponSocket::AiModelConfig_31_CE477C0240043F0E66DD39B32302A00B' has a wrong offset!");
static_assert(offsetof(FSAiWeaponSocket, CollisionRadius_24_ABA0FB7549FB7C3C4786F6B98A022429) == 0x000050, "Member 'FSAiWeaponSocket::CollisionRadius_24_ABA0FB7549FB7C3C4786F6B98A022429' has a wrong offset!");
static_assert(offsetof(FSAiWeaponSocket, Mass_26_116A19644F3F50076B9B7488BF4D12F6) == 0x000054, "Member 'FSAiWeaponSocket::Mass_26_116A19644F3F50076B9B7488BF4D12F6' has a wrong offset!");

}
