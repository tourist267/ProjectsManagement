#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents possible combo box type values..
    </summary>
*/
enum class ExcelComboType : int
{
    Regular = 0,
    PivotTablePageField = 1,
    AutoFilter = 3,
    AutoComplete = 5,
    DataValidation = 6,
    PivotTableRowOrColumn = 7,
    TableTotalRow = 9,
};
using ExcelComboType_Type = std::underlying_type<ExcelComboType>::type;
}}
