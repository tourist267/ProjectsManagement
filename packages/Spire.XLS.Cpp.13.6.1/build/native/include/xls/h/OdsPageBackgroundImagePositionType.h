#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class OdsPageBackgroundImagePositionType : int
{
    TopLeft = 0,
    TopCenter = 1,
    TopRight = 2,
    CenterLeft = 3,
    CenterCenter = 4,
    CenterRight = 5,
    BottomLeft = 6,
    BottomCenter = 7,
    BottomRight = 8,
};
using OdsPageBackgroundImagePositionType_Type = std::underlying_type<OdsPageBackgroundImagePositionType>::type;
}}
