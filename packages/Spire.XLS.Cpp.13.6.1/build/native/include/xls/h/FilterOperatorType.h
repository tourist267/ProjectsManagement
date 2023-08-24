#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class FilterOperatorType : int
{
    LessOrEqual = 0,
    LessThan = 1,
    Equal = 2,
    GreaterThan = 3,
    NotEqual = 4,
    GreaterOrEqual = 5,
    None = 6,
};
using FilterOperatorType_Type = std::underlying_type<FilterOperatorType>::type;
}}
