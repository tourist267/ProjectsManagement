#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class PivotTableElement : int
{
    wholeTable = 0,
    pageFieldLabels = 1,
    pageFieldValues = 2,
    firstColumnStripe = 3,
    secondColumnStripe = 4,
    firstRowStripe = 5,
    secondRowStripe = 6,
    firstColumn = 7,
    headerRow = 8,
    firstHeaderCell = 9,
    firstSubtotalColumn = 10,
    secondSubtotalColumn = 11,
    thirdSubtotalColumn = 12,
    blankRow = 13,
    firstSubtotalRow = 14,
    secondSubtotalRow = 15,
    thirdSubtotalRow = 16,
    firstColumnSubheading = 17,
    secondColumnSubheading = 18,
    thirdColumnSubheading = 19,
    firstRowSubheading = 20,
    secondRowSubheading = 21,
    thirdRowSubheading = 22,
    lastColumn = 23,
    totalRow = 24,
};
using PivotTableElement_Type = std::underlying_type<PivotTableElement>::type;
}}