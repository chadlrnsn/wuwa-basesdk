#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Common_AirShot

#include "Basic.hpp"

#include "GA_Common_AirShot_classes.hpp"
#include "GA_Common_AirShot_parameters.hpp"


namespace SDK
{

// Function GA_Common_AirShot.GA_Common_AirShot_C.ExecuteUbergraph_GA_Common_AirShot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Common_AirShot_C::ExecuteUbergraph_GA_Common_AirShot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Common_AirShot_C", "ExecuteUbergraph_GA_Common_AirShot");

	Params::GA_Common_AirShot_C_ExecuteUbergraph_GA_Common_AirShot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Common_AirShot.GA_Common_AirShot_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Common_AirShot_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Common_AirShot_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Common_AirShot.GA_Common_AirShot_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Common_AirShot_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Common_AirShot_C", "K2_OnEndAbility");

	Params::GA_Common_AirShot_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Common_AirShot.GA_Common_AirShot_C.Added_FFBD6C384BB1FB51A97536A87C7A0267
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UGA_Common_AirShot_C::Added_FFBD6C384BB1FB51A97536A87C7A0267(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Common_AirShot_C", "Added_FFBD6C384BB1FB51A97536A87C7A0267");

	Params::GA_Common_AirShot_C_Added_FFBD6C384BB1FB51A97536A87C7A0267 Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Common_AirShot.GA_Common_AirShot_C.Added_8BFB30E14403CD30B6735ABFFDD5C4B2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UGA_Common_AirShot_C::Added_8BFB30E14403CD30B6735ABFFDD5C4B2(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Common_AirShot_C", "Added_8BFB30E14403CD30B6735ABFFDD5C4B2");

	Params::GA_Common_AirShot_C_Added_8BFB30E14403CD30B6735ABFFDD5C4B2 Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Common_AirShot.GA_Common_AirShot_C.Removed_672DF730488FF3847426B2B0B4DDBA8C
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     Tag                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UGA_Common_AirShot_C::Removed_672DF730488FF3847426B2B0B4DDBA8C(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Common_AirShot_C", "Removed_672DF730488FF3847426B2B0B4DDBA8C");

	Params::GA_Common_AirShot_C_Removed_672DF730488FF3847426B2B0B4DDBA8C Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}

}
