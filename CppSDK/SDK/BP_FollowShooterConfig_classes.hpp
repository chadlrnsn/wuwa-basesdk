#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FollowShooterConfig

#include "Basic.hpp"

#include "SInputAction_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FollowShooterConfig.BP_FollowShooterConfig_C
// 0x0040 (0x0078 - 0x0038)
class UBP_FollowShooterConfig_C final : public UPrimaryDataAsset
{
public:
	bool                                          AutoEnable;                                        // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NeedUploadData;                                    // 0x0039(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C94[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSInputAction>                  NeedInputActions;                                  // 0x0040(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                   AddTagsWhenEnable;                                 // 0x0050(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                   DisableWhenCurrentRoleHasTags;                     // 0x0060(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         DelayDisappearMillisecond;                         // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FollowShooterConfig_C">();
	}
	static class UBP_FollowShooterConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FollowShooterConfig_C>();
	}
};
static_assert(alignof(UBP_FollowShooterConfig_C) == 0x000008, "Wrong alignment on UBP_FollowShooterConfig_C");
static_assert(sizeof(UBP_FollowShooterConfig_C) == 0x000078, "Wrong size on UBP_FollowShooterConfig_C");
static_assert(offsetof(UBP_FollowShooterConfig_C, AutoEnable) == 0x000038, "Member 'UBP_FollowShooterConfig_C::AutoEnable' has a wrong offset!");
static_assert(offsetof(UBP_FollowShooterConfig_C, NeedUploadData) == 0x000039, "Member 'UBP_FollowShooterConfig_C::NeedUploadData' has a wrong offset!");
static_assert(offsetof(UBP_FollowShooterConfig_C, NeedInputActions) == 0x000040, "Member 'UBP_FollowShooterConfig_C::NeedInputActions' has a wrong offset!");
static_assert(offsetof(UBP_FollowShooterConfig_C, AddTagsWhenEnable) == 0x000050, "Member 'UBP_FollowShooterConfig_C::AddTagsWhenEnable' has a wrong offset!");
static_assert(offsetof(UBP_FollowShooterConfig_C, DisableWhenCurrentRoleHasTags) == 0x000060, "Member 'UBP_FollowShooterConfig_C::DisableWhenCurrentRoleHasTags' has a wrong offset!");
static_assert(offsetof(UBP_FollowShooterConfig_C, DelayDisappearMillisecond) == 0x000070, "Member 'UBP_FollowShooterConfig_C::DelayDisappearMillisecond' has a wrong offset!");

}
