#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents different vertical alignments
    </summary>
*/
enum class ExcelVerticalAlignment : int
{
    Top = 0,
    Middle = 1,
    Bottom = 2,
    TopCentered = 3,
    MiddleCentered = 4,
    BottomCentered = 5,
};
using ExcelVerticalAlignment_Type = std::underlying_type<ExcelVerticalAlignment>::type;
}}
