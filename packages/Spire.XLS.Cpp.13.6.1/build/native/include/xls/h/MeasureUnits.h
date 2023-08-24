#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class MeasureUnits : int
{
    Display = 0,
    Document = 1,
    Inch = 2,
    Millimeter = 3,
    Centimeter = 4,
    Pixel = 5,
    Point = 6,
    EMU = 7,
};
using MeasureUnits_Type = std::underlying_type<MeasureUnits>::type;
}}
