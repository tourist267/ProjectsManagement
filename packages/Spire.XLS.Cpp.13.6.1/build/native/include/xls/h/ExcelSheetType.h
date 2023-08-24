#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Sheet types.
    </summary>
*/
enum class ExcelSheetType : int
{
    ChartSheet = 2,
    DialogSheet = 3,
    Excel4IntlMacroSheet = 4,
    Excel4MacroSheet = 5,
    NormalWorksheet = 0,
};
using ExcelSheetType_Type = std::underlying_type<ExcelSheetType>::type;
}}
