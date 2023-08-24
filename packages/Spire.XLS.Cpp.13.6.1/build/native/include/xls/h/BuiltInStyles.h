#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
/*
    <summary>
        Specifies existing built-in styles for Excel 2007.
    </summary>
*/
enum class BuiltInStyles : int
{
    Normal = 0,
    RowLevel_ = 1,
    ColLevel_ = 2,
    Comma = 3,
    Currency = 4,
    Percent = 5,
    Comma0 = 6,
    Currency0 = 7,
    Hyperlink = 8,
    FollowedHyperlink = 9,
    Note = 10,
    WarningText = 11,
    Title = 15,
    Heading1 = 16,
    Heading2 = 17,
    Heading3 = 18,
    Heading4 = 19,
    Input = 20,
    Output = 21,
    Calculation = 22,
    CheckCell = 23,
    LinkedCell = 24,
    Total = 25,
    Good = 26,
    Bad = 27,
    Neutral = 28,
    Accent1 = 29,
    Accent1_20 = 30,
    Accent1_40 = 31,
    Accent1_60 = 32,
    Accent2 = 33,
    Accent2_20 = 34,
    Accent2_40 = 35,
    Accent2_60 = 36,
    Accent3 = 37,
    Accent3_20 = 38,
    Accent3_40 = 39,
    Accent3_60 = 40,
    Accent4 = 41,
    Accent4_20 = 42,
    Accent4_40 = 43,
    Accent4_60 = 44,
    Accent5 = 45,
    Accent5_20 = 46,
    Accent5_40 = 47,
    Accent5_60 = 48,
    Accent6 = 49,
    Accent6_20 = 50,
    Accent6_40 = 51,
    Accent6_60 = 52,
    ExplanatoryText = 53,
};
using BuiltInStyles_Type = std::underlying_type<BuiltInStyles>::type;
}}
