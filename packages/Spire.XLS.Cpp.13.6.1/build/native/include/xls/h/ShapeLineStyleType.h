#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents shape line style.
    </summary>
*/
enum class ShapeLineStyleType : int
{
    LineSingle = 1,
    LineThinThin = 2,
    LineThinThick = 3,
    LineThickThin = 4,
    LineThickBetweenThin = 5,
};
using ShapeLineStyleType_Type = std::underlying_type<ShapeLineStyleType>::type;
}}
