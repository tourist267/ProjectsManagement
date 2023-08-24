#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Conditional formatting type.
    </summary>
*/
enum class ConditionalFormatType : int
{
    CellValue = 1,
    Formula = 2,
    DataBar = 3,
    IconSet = 4,
    ColorScale = 5,
    BeginsWith = 6,
    ContainsText = 7,
    EndsWith = 8,
    NotContainsText = 9,
    TopBottom = 10,
    Average = 11,
    ContainsBlanks = 12,
    ContainsErrors = 13,
    DuplicateValues = 14,
    NotContainsBlanks = 15,
    NotContainsErrors = 16,
    TimePeriod = 17,
    UniqueValues = 18,
};
using ConditionalFormatType_Type = std::underlying_type<ConditionalFormatType>::type;
}}
