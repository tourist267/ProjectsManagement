#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents chart base unit.
    </summary>
*/
enum class ChartBaseUnitType : int
{
    Day = 0,
    Month = 1,
    Year = 2,
};
using ChartBaseUnitType_Type = std::underlying_type<ChartBaseUnitType>::type;
}}
