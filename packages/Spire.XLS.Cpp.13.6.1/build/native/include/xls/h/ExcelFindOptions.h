#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class ExcelFindOptions : int
{
    None = 0,
    MatchCase = 1,
    MatchEntireCellContent = 2,
};
using ExcelFindOptions_Type = std::underlying_type<ExcelFindOptions>::type;
}}
