#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_MO1YeGuiManMd00001

#include "Basic.hpp"

#include "AIC_AICommon_classes.hpp"
#include "SAiConditions_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIC_MO1YeGuiManMd00001.AIC_MO1YeGuiManMd00001_C
// 0x0178 (0x08F8 - 0x0780)
class AAIC_MO1YeGuiManMd00001_C final : public AAIC_AICommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AIC_MO1YeGuiManMd00001_C;           // 0x0780(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FSAiConditions                         UKQ;                                               // 0x0788(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSAiConditions                         UK_;                                               // 0x0840(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AIC_MO1YeGuiManMd00001(int32 EntryPoint);
	void UK___(bool bContent);
	void UKQ__(bool bContent);
	void OnStart();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIC_MO1YeGuiManMd00001_C">();
	}
	static class AAIC_MO1YeGuiManMd00001_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIC_MO1YeGuiManMd00001_C>();
	}
};
static_assert(alignof(AAIC_MO1YeGuiManMd00001_C) == 0x000008, "Wrong alignment on AAIC_MO1YeGuiManMd00001_C");
static_assert(sizeof(AAIC_MO1YeGuiManMd00001_C) == 0x0008F8, "Wrong size on AAIC_MO1YeGuiManMd00001_C");
static_assert(offsetof(AAIC_MO1YeGuiManMd00001_C, UberGraphFrame_AIC_MO1YeGuiManMd00001_C) == 0x000780, "Member 'AAIC_MO1YeGuiManMd00001_C::UberGraphFrame_AIC_MO1YeGuiManMd00001_C' has a wrong offset!");
static_assert(offsetof(AAIC_MO1YeGuiManMd00001_C, UKQ) == 0x000788, "Member 'AAIC_MO1YeGuiManMd00001_C::UKQ' has a wrong offset!");
static_assert(offsetof(AAIC_MO1YeGuiManMd00001_C, UK_) == 0x000840, "Member 'AAIC_MO1YeGuiManMd00001_C::UK_' has a wrong offset!");

}
