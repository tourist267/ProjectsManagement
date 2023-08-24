#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class XLSXPivotItemType : int
{
    avg = 0,
    blank = 1,
    count = 2,
    countA = 3,
    data = 4,
    defaults = 5,
    grand = 6,
    max = 7,
    min = 8,
    product = 9,
    stdDev = 10,
    stdDevP = 11,
    sum = 12,
    var = 13,
    varP = 14,
};
using XLSXPivotItemType_Type = std::underlying_type<XLSXPivotItemType>::type;
}}
