#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents arrow head width.
    </summary>
*/
enum class ShapeArrowWidthType : int
{
    ArrowHeadNarrow = 0,
    ArrowHeadMedium = 1,
    ArrowHeadWide = 2,
};
using ShapeArrowWidthType_Type = std::underlying_type<ShapeArrowWidthType>::type;
}}
