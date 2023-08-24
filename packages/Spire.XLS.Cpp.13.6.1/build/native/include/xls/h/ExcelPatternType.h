#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Patterns style.
    </summary>
*/
enum class ExcelPatternType : int
{
    None = 0,
    Solid = 1,
    Percent50 = 2,
    Percent70 = 3,
    Percent25 = 4,
    DarkHorizontal = 5,
    DarkVertical = 6,
    DarkDownwardDiagonal = 7,
    DarkUpwardDiagonal = 8,
    ForwardDiagonal = 9,
    Percent75 = 10,
    Horizontal = 11,
    Vertical = 12,
    LightDownwardDiagonal = 13,
    LightUpwardDiagonal = 14,
    Angle = 15,
    Percent60 = 16,
    Percent10 = 17,
    Percent05 = 18,
    Percent50Gray = 2,
    Percent75Gray = 3,
    Percent25Gray = 4,
    HorizontalStripe = 5,
    VerticalStripe = 6,
    ReverseDiagonalStripe = 7,
    DiagonalStripe = 8,
    DiagonalCrosshatch = 9,
    ThickDiagonalCrosshatch = 10,
    ThinHorizontalStripe = 11,
    ThinVerticalStripe = 12,
    ThinReverseDeagonalStripe = 13,
    ThinDiagonalStripe = 14,
    ThinHorizontalCrosshatch = 15,
    ThinDiagonalCrosshatch = 16,
    Percent125Gray = 17,
    Percent625Gray = 18,
    Gradient = 4000,
};
using ExcelPatternType_Type = std::underlying_type<ExcelPatternType>::type;
}}