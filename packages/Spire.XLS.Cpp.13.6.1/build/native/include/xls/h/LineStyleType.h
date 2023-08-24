#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Border line styles.
    </summary>
*/
enum class LineStyleType : int
{
    None = 0,
    Thin = 1,
    Medium = 2,
    Dashed = 3,
    Dotted = 4,
    Thick = 5,
    Double = 6,
    Hair = 7,
    MediumDashed = 8,
    DashDot = 9,
    MediumDashDot = 10,
    DashDotDot = 11,
    MediumDashDotDot = 12,
    SlantedDashDot = 13,
};
using LineStyleType_Type = std::underlying_type<LineStyleType>::type;
}}
