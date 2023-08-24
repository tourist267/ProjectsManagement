#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class PathFillMode : int
{
    Darken = 0,
    DarkenLess = 1,
    Lighten = 2,
    LightenLess = 3,
    None = 4,
    Norm = 5,
};
using PathFillMode_Type = std::underlying_type<PathFillMode>::type;
}}
