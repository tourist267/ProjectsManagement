#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
/*
    <summary>
        Represents auto format values.
    </summary>
*/
enum class AutoFormatType : int
{
    Simple = 0,
    Classic1 = 1,
    Classic_2 = 2,
    Classic_3 = 3,
    Accounting1 = 4,
    Accounting2 = 5,
    Accounting3 = 6,
    Accounting4 = 7,
    Colorful1 = 8,
    Colorful2 = 9,
    Colorful3 = 10,
    List1 = 11,
    List2 = 12,
    List3 = 13,
    Effect3D1 = 14,
    Effect3D2 = 15,
    None = 16,
};
using AutoFormatType_Type = std::underlying_type<AutoFormatType>::type;
}}
