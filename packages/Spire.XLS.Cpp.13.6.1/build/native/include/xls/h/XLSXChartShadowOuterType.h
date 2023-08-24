#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Indicates the Outer Shadow values
    </summary>
*/
enum class XLSXChartShadowOuterType : int
{
    None = 0,
    OffsetRight = 1,
    OffsetDiagonalBottomRight = 2,
    OffsetBottom = 3,
    OffsetDiagonalTopLeft = 4,
    OffsetCenter = 5,
    OffsetTop = 6,
    OffsetLeft = 7,
    OffsetDiagonalTopRight = 8,
    OffsetDiagonalBottomLeft = 9,
};
using XLSXChartShadowOuterType_Type = std::underlying_type<XLSXChartShadowOuterType>::type;
}}
