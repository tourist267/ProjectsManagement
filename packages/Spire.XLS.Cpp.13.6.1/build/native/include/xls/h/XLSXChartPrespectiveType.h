#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Indicates the Perspective shadow Values
    </summary>
*/
enum class XLSXChartPrespectiveType : int
{
    None = 0,
    DiagonalUpperRight = 1,
    DiagonalLowerRight = 2,
    DiagonalUpperLeft = 3,
    DiagonalLowerLeft = 4,
    Below = 5,
};
using XLSXChartPrespectiveType_Type = std::underlying_type<XLSXChartPrespectiveType>::type;
}}
