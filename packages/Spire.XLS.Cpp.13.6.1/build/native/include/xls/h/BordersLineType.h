#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
/*
    <summary>
        Specifies border and diagonal line types in Excel.
     </summary>
*/
enum class BordersLineType : int
{
    DiagonalDown = 5,
    DiagonalUp = 6,
    EdgeBottom = 9,
    EdgeLeft = 7,
    EdgeRight = 10,
    EdgeTop = 8,
    horizontal = 11,
    vertical = 12,
};
using BordersLineType_Type = std::underlying_type<BordersLineType>::type;
}}
