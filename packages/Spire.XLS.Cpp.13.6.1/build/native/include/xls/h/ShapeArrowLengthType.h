#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents arrow head length.
    </summary>
*/
enum class ShapeArrowLengthType : int
{
    ArrowHeadShort = 0,
    ArrowHeadMedium = 1,
    ArrowHeadLong = 2,
};
using ShapeArrowLengthType_Type = std::underlying_type<ShapeArrowLengthType>::type;
}}
