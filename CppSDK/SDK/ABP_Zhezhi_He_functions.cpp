#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_Zhezhi_He

#include "Basic.hpp"

#include "ABP_Zhezhi_He_classes.hpp"
#include "ABP_Zhezhi_He_parameters.hpp"


namespace SDK
{

// Function ABP_Zhezhi_He.ABP_Zhezhi_He_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UABP_Zhezhi_He_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Zhezhi_He_C", "AnimGraph");

	Params::ABP_Zhezhi_He_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function ABP_Zhezhi_He.ABP_Zhezhi_He_C.ExecuteUbergraph_ABP_Zhezhi_He
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Zhezhi_He_C::ExecuteUbergraph_ABP_Zhezhi_He(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_Zhezhi_He_C", "ExecuteUbergraph_ABP_Zhezhi_He");

	Params::ABP_Zhezhi_He_C_ExecuteUbergraph_ABP_Zhezhi_He Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
