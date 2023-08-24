#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents enum of chart tick label position values.
    </summary>
*/
enum class TickLabelPositionType : int
{
    TickLabelPositionNone = 0,
    TickLabelPositionLow = 1,
    TickLabelPositionHigh = 2,
    TickLabelPositionNextToAxis = 3,
};
using TickLabelPositionType_Type = std::underlying_type<TickLabelPositionType>::type;
}}
