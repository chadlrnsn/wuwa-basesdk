#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AttackShake_Sanhua

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AttackShake_Sanhua.AttackShake_Sanhua_C
// 0x0000 (0x01A0 - 0x01A0)
class UAttackShake_Sanhua_C final : public UMatineeCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AttackShake_Sanhua_C">();
	}
	static class UAttackShake_Sanhua_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAttackShake_Sanhua_C>();
	}
};
static_assert(alignof(UAttackShake_Sanhua_C) == 0x000010, "Wrong alignment on UAttackShake_Sanhua_C");
static_assert(sizeof(UAttackShake_Sanhua_C) == 0x0001A0, "Wrong size on UAttackShake_Sanhua_C");

}
