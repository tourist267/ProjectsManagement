#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Legend placement for charts.
    </summary>
*/
enum class LegendPositionType : int
{
    Bottom = 0,
    Corner = 1,
    Top = 2,
    Right = 3,
    Left = 4,
    NotDocked = 7,
};
using LegendPositionType_Type = std::underlying_type<LegendPositionType>::type;
}}
