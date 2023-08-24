#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class CopyRangeOptions : int
{
    None = 0,
    UpdateFormulas = 1,
    UpdateMerges = 2,
    CopyStyles = 4,
    CopyShapes = 8,
    CopyErrorIndicators = 16,
    CopyConditionalFormats = 32,
    CopyDataValidations = 64,
    OnlyCopyFormulaValue = 128,
    All = 127,
};
using CopyRangeOptions_Type = std::underlying_type<CopyRangeOptions>::type;
}}
