#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        It represents the Label position in Tree Map chart
     </summary>
*/
enum class ExcelTreeMapLabelOption : int
{
    None = 0,
    Banner = 1,
    Overlapping = 2,
};
using ExcelTreeMapLabelOption_Type = std::underlying_type<ExcelTreeMapLabelOption>::type;
}}
