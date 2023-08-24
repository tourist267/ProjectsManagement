#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Excel rectangle style.
    </summary>
*/
enum class RectangleStyleType : int
{
    Regular = 0,
    Shadowed = 4,
};
using RectangleStyleType_Type = std::underlying_type<RectangleStyleType>::type;
}}
