#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Destroy_Bianshen_Vision

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Destroy_Bianshen_Vision.GA_Destroy_Bianshen_Vision_C
// 0x0040 (0x0598 - 0x0558)
class UGA_Destroy_Bianshen_Vision_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Destroy_Bianshen_Vision_C;       // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         ___ID;                                             // 0x0560(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_564[0x4];                                      // 0x0564(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     ___;                                               // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_BaseVision_C*                       _aBP;                                              // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                ______PyH;                                         // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                _____P_yH;                                         // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _____GA_Destroy_Bianshen_Vision_C;                 // 0x0588(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_589[0x3];                                      // 0x0589(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         P_Handle;                                          // 0x058C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ____0;                                             // 0x0590(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_Destroy_Bianshen_Vision(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void EventReceived_18B59F5945020DB23C42FD88740B0A0F(const struct FGameplayEventData& Payload);
	void EventReceived_18B59F5945020DB23C42FD881A98D764(const struct FGameplayEventData& Payload);
	void Added_21071CB943CD992BF8EFD6A3567B001E(const struct FGameplayTag& Tag);
	void Added_21071CB943CD992BF8EFD6A3CA2D8247(const struct FGameplayTag& Tag);
	void OnCompleted_5D118C384AE61F1C80292E81E2A60EB1();
	void OnBlendOut_5D118C384AE61F1C80292E81E2A60EB1();
	void OnInterrupted_5D118C384AE61F1C80292E81E2A60EB1();
	void OnCancelled_5D118C384AE61F1C80292E81E2A60EB1();
	void OnTick_5D118C384AE61F1C80292E81E2A60EB1();
	void _______3();
	void _______s___();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Destroy_Bianshen_Vision_C">();
	}
	static class UGA_Destroy_Bianshen_Vision_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Destroy_Bianshen_Vision_C>();
	}
};
static_assert(alignof(UGA_Destroy_Bianshen_Vision_C) == 0x000008, "Wrong alignment on UGA_Destroy_Bianshen_Vision_C");
static_assert(sizeof(UGA_Destroy_Bianshen_Vision_C) == 0x000598, "Wrong size on UGA_Destroy_Bianshen_Vision_C");
static_assert(offsetof(UGA_Destroy_Bianshen_Vision_C, UberGraphFrame_GA_Destroy_Bianshen_Vision_C) == 0x000558, "Member 'UGA_Destroy_Bianshen_Vision_C::UberGraphFrame_GA_Destroy_Bianshen_Vision_C' has a wrong offset!");
static_assert(offsetof(UGA_Destroy_Bianshen_Vision_C, ___ID) == 0x000560, "Member 'UGA_Destroy_Bianshen_Vision_C::___ID' has a wrong offset!");
static_assert(offsetof(UGA_Destroy_Bianshen_Vision_C, ___) == 0x000568, "Member 'UGA_Destroy_Bianshen_Vision_C::___' has a wrong offset!");
static_assert(offsetof(UGA_Destroy_Bianshen_Vision_C, _aBP) == 0x000570, "Member 'UGA_Destroy_Bianshen_Vision_C::_aBP' has a wrong offset!");
static_assert(offsetof(UGA_Destroy_Bianshen_Vision_C, ______PyH) == 0x000578, "Member 'UGA_Destroy_Bianshen_Vision_C::______PyH' has a wrong offset!");
static_assert(offsetof(UGA_Destroy_Bianshen_Vision_C, _____P_yH) == 0x000580, "Member 'UGA_Destroy_Bianshen_Vision_C::_____P_yH' has a wrong offset!");
static_assert(offsetof(UGA_Destroy_Bianshen_Vision_C, _____GA_Destroy_Bianshen_Vision_C) == 0x000588, "Member 'UGA_Destroy_Bianshen_Vision_C::_____GA_Destroy_Bianshen_Vision_C' has a wrong offset!");
static_assert(offsetof(UGA_Destroy_Bianshen_Vision_C, P_Handle) == 0x00058C, "Member 'UGA_Destroy_Bianshen_Vision_C::P_Handle' has a wrong offset!");
static_assert(offsetof(UGA_Destroy_Bianshen_Vision_C, ____0) == 0x000590, "Member 'UGA_Destroy_Bianshen_Vision_C::____0' has a wrong offset!");

}
