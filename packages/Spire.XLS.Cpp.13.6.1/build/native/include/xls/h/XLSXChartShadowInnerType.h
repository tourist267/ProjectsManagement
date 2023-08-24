#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Indicates the Inner Shadow Values
    </summary>
*/
enum class XLSXChartShadowInnerType : int
{
    None = 0,
    InsideDiagonalBottomLeft = 1,
    InsideTop = 2,
    InsideRight = 3,
    InsideLeft = 4,
    InsideDiagonalTopRight = 5,
    InsideDiagonalBottomRight = 6,
    InsideCenter = 7,
    InsideBottom = 8,
    InsideDiagonalTopLeft = 9,
};
using XLSXChartShadowInnerType_Type = std::underlying_type<XLSXChartShadowInnerType>::type;
}}
