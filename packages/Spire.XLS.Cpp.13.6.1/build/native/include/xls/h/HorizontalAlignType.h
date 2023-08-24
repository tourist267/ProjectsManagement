#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Horizontal alignment type.
    </summary>
*/
enum class HorizontalAlignType : int
{
    General = 0,
    Left = 1,
    Center = 2,
    Right = 3,
    Fill = 4,
    Justify = 5,
    CenterAcrossSelection = 6,
    Distributed = 7,
};
using HorizontalAlignType_Type = std::underlying_type<HorizontalAlignType>::type;
}}
