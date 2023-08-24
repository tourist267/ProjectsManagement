#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
/*
    <summary>
        Axis line indentifier type.
    </summary>
*/
enum class AxisLineIdentifierType : int
{
    AxisLineItself = 0,
    MajorGridLine = 1,
    MinorGridLine = 2,
    WallsOrFloor = 3,
};
using AxisLineIdentifierType_Type = std::underlying_type<AxisLineIdentifierType>::type;
}}
