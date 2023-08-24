#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class FindType : int
{
    Text = 1,
    Formula = 2,
    FormulaStringValue = 4,
    Error = 8,
    Number = 16,
    FormulaValue = 32,
};
using FindType_Type = std::underlying_type<FindType>::type;
}}
