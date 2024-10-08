#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EffectModelDecal

#include "Basic.hpp"

#include "KuroCurve_structs.hpp"
#include "KuroGameplay_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass EffectModelDecal.EffectModelDecal_C
// 0x05A8 (0x0608 - 0x0060)
class UEffectModelDecal_C final : public UEffectModelBase
{
public:
	struct FKuroCurveVector                       Location;                                          // 0x0060(0x01A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKuroCurveVector                       Rotation;                                          // 0x0208(0x01A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKuroCurveVector                       Scale;                                             // 0x03B0(0x01A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FKuroCurveFloat>     MaterialFloatParameters;                           // 0x0558(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FKuroCurveLinearColor> MaterialColorParameters;                           // 0x05A8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInterface*                     DecalMaterialRef;                                  // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ZfadingFactor;                                     // 0x0600(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ZfadingPower;                                      // 0x0604(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EffectModelDecal_C">();
	}
	static class UEffectModelDecal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEffectModelDecal_C>();
	}
};
static_assert(alignof(UEffectModelDecal_C) == 0x000008, "Wrong alignment on UEffectModelDecal_C");
static_assert(sizeof(UEffectModelDecal_C) == 0x000608, "Wrong size on UEffectModelDecal_C");
static_assert(offsetof(UEffectModelDecal_C, Location) == 0x000060, "Member 'UEffectModelDecal_C::Location' has a wrong offset!");
static_assert(offsetof(UEffectModelDecal_C, Rotation) == 0x000208, "Member 'UEffectModelDecal_C::Rotation' has a wrong offset!");
static_assert(offsetof(UEffectModelDecal_C, Scale) == 0x0003B0, "Member 'UEffectModelDecal_C::Scale' has a wrong offset!");
static_assert(offsetof(UEffectModelDecal_C, MaterialFloatParameters) == 0x000558, "Member 'UEffectModelDecal_C::MaterialFloatParameters' has a wrong offset!");
static_assert(offsetof(UEffectModelDecal_C, MaterialColorParameters) == 0x0005A8, "Member 'UEffectModelDecal_C::MaterialColorParameters' has a wrong offset!");
static_assert(offsetof(UEffectModelDecal_C, DecalMaterialRef) == 0x0005F8, "Member 'UEffectModelDecal_C::DecalMaterialRef' has a wrong offset!");
static_assert(offsetof(UEffectModelDecal_C, ZfadingFactor) == 0x000600, "Member 'UEffectModelDecal_C::ZfadingFactor' has a wrong offset!");
static_assert(offsetof(UEffectModelDecal_C, ZfadingPower) == 0x000604, "Member 'UEffectModelDecal_C::ZfadingPower' has a wrong offset!");

}

