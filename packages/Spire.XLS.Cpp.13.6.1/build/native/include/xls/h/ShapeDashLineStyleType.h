#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents shape dash line style.
    </summary>
*/
enum class ShapeDashLineStyleType : int
{
    Solid = 0,
    Dotted = 2,
    DottedRound = 1,
    Dashed = 6,
    MediumDashed = 7,
    DashDot = 8,
    MediumDashDot = 9,
    DashDotDot = 10,
};
using ShapeDashLineStyleType_Type = std::underlying_type<ShapeDashLineStyleType>::type;
}}
