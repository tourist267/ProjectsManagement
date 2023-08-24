#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Color types.
    </summary>
*/
enum class ColorType : int
{
    Known = 0,
    RGB = 1,
    Theme = 2,
};
using ColorType_Type = std::underlying_type<ColorType>::type;
}}
