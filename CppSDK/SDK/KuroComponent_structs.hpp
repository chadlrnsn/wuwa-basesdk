#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroComponent

#include "Basic.hpp"


namespace SDK
{

// Enum KuroComponent.EAnimPerfTestSkelMeshLifeCycle
// NumValues: 0x0003
enum class EAnimPerfTestSkelMeshLifeCycle : uint8
{
	Transient                                = 0,
	KeepInLevel                              = 1,
	EAnimPerfTestSkelMeshLifeCycle_MAX       = 2,
};

// Enum KuroComponent.EAnimPerfTestBornFrom
// NumValues: 0x0004
enum class EAnimPerfTestBornFrom : uint8
{
	PlayerStart                              = 0,
	Pawn                                     = 1,
	Owner                                    = 2,
	EAnimPerfTestBornFrom_MAX                = 3,
};

// Enum KuroComponent.EAnimPerfTestAnimSeqFilterMethod
// NumValues: 0x0006
enum class EAnimPerfTestAnimSeqFilterMethod : uint8
{
	Specific                                 = 0,
	Contains                                 = 1,
	StartsWith                               = 2,
	EndsWith                                 = 3,
	EqualsTo                                 = 4,
	EAnimPerfTestAnimSeqFilterMethod_MAX     = 5,
};

// Enum KuroComponent.EAnimPerfTestRandomGenActorGroup
// NumValues: 0x0003
enum class EAnimPerfTestRandomGenActorGroup : uint8
{
	SpecificSkeletalMeshes                   = 0,
	AllSkeletalMeshes                        = 1,
	EAnimPerfTestRandomGenActorGroup_MAX     = 2,
};

// Enum KuroComponent.EAnimPerfTestActorsGenMethod
// NumValues: 0x0004
enum class EAnimPerfTestActorsGenMethod : uint8
{
	GenFromTemplate                          = 0,
	GenRandomly                              = 1,
	GenAll                                   = 2,
	EAnimPerfTestActorsGenMethod_MAX         = 3,
};

// Enum KuroComponent.EShapeType
// NumValues: 0x0005
enum class EShapeType : uint8
{
	Box                                      = 0,
	Sphere                                   = 1,
	Sector                                   = 2,
	Cylinder                                 = 3,
	EShapeType_MAX                           = 4,
};

// Enum KuroComponent.EKuroSceneItemStopRotateMethod
// NumValues: 0x0004
enum class EKuroSceneItemStopRotateMethod : uint8
{
	KeepCurrent                              = 0,
	JumpToStart                              = 1,
	JumpToEnd                                = 2,
	EKuroSceneItemStopRotateMethod_MAX       = 3,
};

// Enum KuroComponent.ESimpleRunState
// NumValues: 0x0004
enum class ESimpleRunState : uint8
{
	Stop                                     = 0,
	Run                                      = 1,
	Wait                                     = 2,
	ESimpleRunState_MAX                      = 3,
};

}

