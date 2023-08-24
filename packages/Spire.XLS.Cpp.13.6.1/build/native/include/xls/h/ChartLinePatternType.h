#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Chart line patterns.
    </summary>
*/
enum class ChartLinePatternType : int
{
    Solid = 0,
    Dash = 1,
    Dot = 2,
    DashDot = 3,
    DashDotDot = 4,
    None = 5,
    DarkGray = 6,
    MediumGray = 7,
    LightGray = 8,
};
using ChartLinePatternType_Type = std::underlying_type<ChartLinePatternType>::type;
}}
