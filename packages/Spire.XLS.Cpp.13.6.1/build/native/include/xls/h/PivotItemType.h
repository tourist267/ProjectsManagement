#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class PivotItemType : int
{
    Average = 0,
    Blank = 1,
    Count = 2,
    CountA = 3,
    Data = 4,
    Default = 5,
    GrandTotal = 6,
    Max = 7,
    Min = 8,
    Product = 9,
    StdDev = 10,
    StdDevP = 11,
    Sum = 12,
    Var = 13,
    VarP = 14,
};
using PivotItemType_Type = std::underlying_type<PivotItemType>::type;
}}
