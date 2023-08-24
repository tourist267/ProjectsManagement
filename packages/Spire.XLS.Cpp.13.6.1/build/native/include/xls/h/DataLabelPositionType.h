#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents Data label placement.
    </summary>
*/
enum class DataLabelPositionType : int
{
    Automatic = 0,
    Outside = 1,
    Inside = 2,
    Center = 3,
    OutsideBase = 4,
    Above = 5,
    Below = 6,
    Left = 7,
    Right = 8,
    BestFit = 9,
    Moved = 10,
};
using DataLabelPositionType_Type = std::underlying_type<DataLabelPositionType>::type;
}}
