﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EffectModelPostProcess

#include "Basic.hpp"

#include "KuroGameplay_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass EffectModelPostProcess.EffectModelPostProcess_C
// 0x0008 (0x3A70 - 0x3A68)
class UEffectModelPostProcess_C final : public UEffectModelPostProcess
{
public:
	bool                                          VisibleForProtoPlayer;                             // 0x3A68(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OverrideTOD;                                       // 0x3A69(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EffectModelPostProcess_C">();
	}
	static class UEffectModelPostProcess_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEffectModelPostProcess_C>();
	}
};
static_assert(alignof(UEffectModelPostProcess_C) == 0x000008, "Wrong alignment on UEffectModelPostProcess_C");
static_assert(sizeof(UEffectModelPostProcess_C) == 0x003A70, "Wrong size on UEffectModelPostProcess_C");
static_assert(offsetof(UEffectModelPostProcess_C, VisibleForProtoPlayer) == 0x003A68, "Member 'UEffectModelPostProcess_C::VisibleForProtoPlayer' has a wrong offset!");
static_assert(offsetof(UEffectModelPostProcess_C, OverrideTOD) == 0x003A69, "Member 'UEffectModelPostProcess_C::OverrideTOD' has a wrong offset!");

}

