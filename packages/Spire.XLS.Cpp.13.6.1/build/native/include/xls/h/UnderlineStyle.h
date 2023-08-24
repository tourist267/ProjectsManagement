#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class UnderlineStyle : int
{
    Continuous = 0,
    TurnOff = 1,
    Dotted = 2,
    Dash = 3,
    DashDot = 4,
    DashDotDot = 5,
    Double = 6,
    HeavyWave = 7,
    LongDash = 8,
    None = 9,
    Thick = 10,
    ThickDotted = 11,
    ThickDash = 12,
    ThickDashDot = 13,
    ThickDashDotDot = 14,
    ThickLongDash = 15,
    DoubleWave = 16,
    Word = 17,
    Wave = 18,
};
using UnderlineStyle_Type = std::underlying_type<UnderlineStyle>::type;
}}
