#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class XLSXChartBevelType : int
{
    None = 0,
    Angle = 1,
    ArtDeco = 2,
    Circle = 3,
    Convex = 4,
    CoolSlant = 5,
    Cross = 6,
    Divot = 7,
    HardEdge = 8,
    RelaxedInset = 9,
    Riblet = 10,
    Slope = 11,
    SoftRound = 12,
};
using XLSXChartBevelType_Type = std::underlying_type<XLSXChartBevelType>::type;
}}
