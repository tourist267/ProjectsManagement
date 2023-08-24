#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class PivotFieldFormatType : int
{
    Difference = 0,
    Index = 1,
    Normal = 2,
    Percent = 3,
    PercentageOfDifference = 4,
    PercentageOfColumn = 5,
    PercentageOfRow = 6,
    PercentageOfTotal = 7,
    PercentageOfParent = 8,
    PercentageOfParentColumn = 9,
    PercentageOfParentRow = 10,
    RankDecending = 11,
    PercentageOfRunningTotal = 12,
    RunTotal = 13,
    RankAscending = 14,
};
using PivotFieldFormatType_Type = std::underlying_type<PivotFieldFormatType>::type;
}}
