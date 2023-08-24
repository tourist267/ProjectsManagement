#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Chart marker types.
    </summary>
*/
enum class ChartMarkerType : int
{
    None = 0,
    Square = 1,
    Diamond = 2,
    Triangle = 3,
    X = 4,
    Star = 5,
    DowJones = 6,
    StandardDeviation = 7,
    Circle = 8,
    PlusSign = 9,
    Auto = 10,
    Picture = 11,
};
using ChartMarkerType_Type = std::underlying_type<ChartMarkerType>::type;
}}
