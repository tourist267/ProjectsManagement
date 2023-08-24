#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class ExcelClearOptions : int
{
    ClearFormat = 0,
    ClearContent = 1,
    ClearComment = 2,
    ClearAll = 3,
    ClearConditionalFormats = 4,
};
using ExcelClearOptions_Type = std::underlying_type<ExcelClearOptions>::type;
}}
