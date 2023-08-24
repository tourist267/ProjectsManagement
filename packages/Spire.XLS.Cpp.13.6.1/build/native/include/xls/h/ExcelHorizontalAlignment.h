#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents different horizontal alignments
    </summary>
*/
enum class ExcelHorizontalAlignment : int
{
    Left = 0,
    Center = 1,
    Right = 2,
    LeftMiddle = 3,
    CenterMiddle = 4,
    RightMiddle = 5,
};
using ExcelHorizontalAlignment_Type = std::underlying_type<ExcelHorizontalAlignment>::type;
}}
