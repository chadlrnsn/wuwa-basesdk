﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ExitSkill_Youhu

#include "Basic.hpp"

#include "GA_ExitSkill_Youhu_classes.hpp"
#include "GA_ExitSkill_Youhu_parameters.hpp"


namespace SDK
{

// Function GA_ExitSkill_Youhu.GA_ExitSkill_Youhu_C.ExecuteUbergraph_GA_ExitSkill_Youhu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ExitSkill_Youhu_C::ExecuteUbergraph_GA_ExitSkill_Youhu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ExitSkill_Youhu_C", "ExecuteUbergraph_GA_ExitSkill_Youhu");

	Params::GA_ExitSkill_Youhu_C_ExecuteUbergraph_GA_ExitSkill_Youhu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_ExitSkill_Youhu.GA_ExitSkill_Youhu_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_ExitSkill_Youhu_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ExitSkill_Youhu_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_ExitSkill_Youhu.GA_ExitSkill_Youhu_C.OnFinish_DF88CBCE4DBE9ACA1CB1D78B443D1B05
// (BlueprintCallable, BlueprintEvent)

void UGA_ExitSkill_Youhu_C::OnFinish_DF88CBCE4DBE9ACA1CB1D78B443D1B05()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_ExitSkill_Youhu_C", "OnFinish_DF88CBCE4DBE9ACA1CB1D78B443D1B05");

	UObject::ProcessEvent(Func, nullptr);
}

}

