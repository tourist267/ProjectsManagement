#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents different text direction.
    </summary>
*/
enum class TextDirection : int
{
    Horizontal = 0,
    RotateAllText90 = 1,
    RotateAllText270 = 2,
    StackedLeftToRight = 3,
    StackedRightToLeft = 4,
};
using TextDirection_Type = std::underlying_type<TextDirection>::type;
}}
