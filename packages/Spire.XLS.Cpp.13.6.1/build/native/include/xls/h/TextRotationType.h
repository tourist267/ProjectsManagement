#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Text Rotation types.
    </summary>
*/
enum class TextRotationType : int
{
    LeftToRight = 0,
    TopToBottom = 1,
    CounterClockwise = 2,
    Clockwise = 3,
};
using TextRotationType_Type = std::underlying_type<TextRotationType>::type;
}}
