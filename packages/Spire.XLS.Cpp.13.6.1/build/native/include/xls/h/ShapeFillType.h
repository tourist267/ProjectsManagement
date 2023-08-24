#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents shape XlsFill type.
    </summary>
*/
enum class ShapeFillType : int
{
    SolidColor = 0,
    Pattern = 1,
    Texture = 2,
    Picture = 3,
    UnknownGradient = 4,
    Gradient = 7,
    NoFill = 8,
};
using ShapeFillType_Type = std::underlying_type<ShapeFillType>::type;
}}
