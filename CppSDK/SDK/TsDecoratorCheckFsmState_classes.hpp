#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsDecoratorCheckFsmState

#include "Basic.hpp"

#include "AIModule_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsDecoratorCheckFsmState.TsDecoratorCheckFsmState_C
// 0x0010 (0x00B8 - 0x00A8)
class UTsDecoratorCheckFsmState_C final : public UBTDecorator_BlueprintBase
{
public:
	class FString                                 State;                                             // 0x00A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsDecoratorCheckFsmState_C">();
	}
	static class UTsDecoratorCheckFsmState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsDecoratorCheckFsmState_C>();
	}
};
static_assert(alignof(UTsDecoratorCheckFsmState_C) == 0x000008, "Wrong alignment on UTsDecoratorCheckFsmState_C");
static_assert(sizeof(UTsDecoratorCheckFsmState_C) == 0x0000B8, "Wrong size on UTsDecoratorCheckFsmState_C");
static_assert(offsetof(UTsDecoratorCheckFsmState_C, State) == 0x0000A8, "Member 'UTsDecoratorCheckFsmState_C::State' has a wrong offset!");

}
