#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents excel chart uint to display.
    </summary>
*/
enum class ChartDisplayUnitType : int
{
    None = 0,
    Hundreds = 1,
    Thousands = 2,
    TenThousands = 3,
    HundredThousands = 4,
    Millions = 5,
    TenMillions = 6,
    HundredMillions = 7,
    ThousandMillions = 8,
    MillionMillions = 9,
    Custom = 65535,
};
using ChartDisplayUnitType_Type = std::underlying_type<ChartDisplayUnitType>::type;
}}
