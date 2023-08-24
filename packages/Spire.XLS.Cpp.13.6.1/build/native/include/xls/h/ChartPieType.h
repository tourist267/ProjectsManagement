#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Chart pile type.
    </summary>
*/
enum class ChartPieType : int
{
    Normal = 0,
    Pie = 1,
    Bar = 2,
};
using ChartPieType_Type = std::underlying_type<ChartPieType>::type;
}}
