#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ani_MissionPnlProcess_StartWithChild

#include "Basic.hpp"

#include "Ani_MissionPnlProcess_StartWithChild_classes.hpp"
#include "Ani_MissionPnlProcess_StartWithChild_parameters.hpp"


namespace SDK
{

// Function Ani_MissionPnlProcess_StartWithChild.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUIContainerActor*                PnlParent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ani_MissionPnlProcess_StartWithChild::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_1(class AUIContainerActor* PnlParent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_1");

	Params::SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_1 Parms{};

	Parms.PnlParent = PnlParent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ani_MissionPnlProcess_StartWithChild.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUIContainerActor*                PnlParent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ani_MissionPnlProcess_StartWithChild::USequenceDirector_C::SequenceEvent__ENTRYPOINTSequenceDirector_0(class AUIContainerActor* PnlParent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "SequenceEvent__ENTRYPOINTSequenceDirector_0");

	Params::SequenceDirector_C_SequenceEvent__ENTRYPOINTSequenceDirector_0 Parms{};

	Parms.PnlParent = PnlParent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ani_MissionPnlProcess_StartWithChild.SequenceDirector_C.PnlParentEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUIContainerActor*                PnlParent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           SequenceName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           EventName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void Ani_MissionPnlProcess_StartWithChild::USequenceDirector_C::PnlParentEvent(class AUIContainerActor* PnlParent, const class FString& SequenceName, const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "PnlParentEvent");

	Params::SequenceDirector_C_PnlParentEvent Parms{};

	Parms.PnlParent = PnlParent;
	Parms.SequenceName = std::move(SequenceName);
	Parms.EventName = std::move(EventName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ani_MissionPnlProcess_StartWithChild.SequenceDirector_C.PnlSubTitle_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUIContainerActor*                PnlSubTitle                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ani_MissionPnlProcess_StartWithChild::USequenceDirector_C::PnlSubTitle_Event_0(class AUIContainerActor* PnlSubTitle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "PnlSubTitle_Event_0");

	Params::SequenceDirector_C_PnlSubTitle_Event_0 Parms{};

	Parms.PnlSubTitle = PnlSubTitle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Ani_MissionPnlProcess_StartWithChild.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ani_MissionPnlProcess_StartWithChild::USequenceDirector_C::ExecuteUbergraph_SequenceDirector(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SequenceDirector_C", "ExecuteUbergraph_SequenceDirector");

	Params::SequenceDirector_C_ExecuteUbergraph_SequenceDirector Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

