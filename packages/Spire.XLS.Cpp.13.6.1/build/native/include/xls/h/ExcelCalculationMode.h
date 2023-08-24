#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Enum that defines different types of the formula calculations.
    </summary>
*/
enum class ExcelCalculationMode : int
{
    Manual = 0,
    Auto = 1,
    AutoNoTable = 2,
};
using ExcelCalculationMode_Type = std::underlying_type<ExcelCalculationMode>::type;
}}
