#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class FilterType : int
{
    ColorFilter = 0,
    CustomFilters = 1,
    DynamicFilter = 2,
    MultipleFilters = 3,
    IconFilter = 4,
    Top10 = 5,
    None = 6,
};
using FilterType_Type = std::underlying_type<FilterType>::type;
}}
