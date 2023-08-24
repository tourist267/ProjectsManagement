#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class ExcelTotalsCalculation : int
{
    None = 0,
    Sum = 109,
    Average = 101,
    Count = 103,
    CountNums = 102,
    Min = 105,
    StdDev = 107,
    Var = 110,
    Max = 104,
    Custom = 108,
};
using ExcelTotalsCalculation_Type = std::underlying_type<ExcelTotalsCalculation>::type;
}}
