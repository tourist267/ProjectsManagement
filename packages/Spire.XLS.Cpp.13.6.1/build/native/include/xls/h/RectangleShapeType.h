#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class RectangleShapeType : int
{
    Rect = 0,
    RoundRect = 1,
    Snip1Rect = 2,
    Snip2SameRect = 3,
    Snip2DiagRect = 4,
    SnipRoundRect = 5,
    Round1Rect = 6,
    Round2SameRect = 7,
    Round2DiagRect = 8,
};
using RectangleShapeType_Type = std::underlying_type<RectangleShapeType>::type;
}}
