#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents shape arrow style type.
    </summary>
*/
enum class ShapeArrowStyleType : int
{
    LineNoArrow = 0,
    LineArrow = 1,
    LineArrowStealth = 2,
    LineArrowDiamond = 3,
    LineArrowOval = 4,
    LineArrowOpen = 5,
};
using ShapeArrowStyleType_Type = std::underlying_type<ShapeArrowStyleType>::type;
}}
