#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents excel shape shading style.
    </summary>
*/
enum class GradientStyleType : int
{
    Horizontal = 0,
    Vertical = 1,
    Diagonl_Up = 2,
    Diagonl_Down = 3,
    From_Corner = 4,
    From_Center = 5,
};
using GradientStyleType_Type = std::underlying_type<GradientStyleType>::type;
}}
