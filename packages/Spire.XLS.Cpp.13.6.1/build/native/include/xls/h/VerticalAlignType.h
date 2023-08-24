#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Vertical alignment type.
    </summary>
*/
enum class VerticalAlignType : int
{
    Top = 0,
    Center = 1,
    Bottom = 2,
    Justify = 3,
    Distributed = 4,
};
using VerticalAlignType_Type = std::underlying_type<VerticalAlignType>::type;
}}
