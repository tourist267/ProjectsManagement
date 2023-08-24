#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Chart plot empty type.
    </summary>
*/
enum class ChartPlotEmptyType : int
{
    NotPlotted = 0,
    Zero = 1,
    Interpolated = 2,
};
using ChartPlotEmptyType_Type = std::underlying_type<ChartPlotEmptyType>::type;
}}
