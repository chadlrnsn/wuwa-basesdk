#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroImposter

#include "Basic.hpp"


namespace SDK
{

// Enum KuroImposter.ImpPreviewImgRes
// NumValues: 0x0004
enum class EImpPreviewImgRes : uint16
{
	E256                                     = 256,
	E128                                     = 160,
	E64                                      = 64,
	ImpPreviewImgRes_MAX                     = 257,
};

// Enum KuroImposter.ImpMemType
// NumValues: 0x0004
enum class EImpMemType : uint8
{
	RGBAX2                                   = 0,
	RGB                                      = 1,
	RGBA                                     = 2,
	ImpMemType_MAX                           = 3,
};

// Enum KuroImposter.ImposterType
// NumValues: 0x0004
enum class EImposterType : uint8
{
	TREE                                     = 0,
	GENERAL                                  = 1,
	ROCK                                     = 2,
	ImposterType_MAX                         = 3,
};

}

