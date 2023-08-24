#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class PivotFieldSortType : int
{
    Ascending = 0,
    Descending = 1,
    Manual = 2,
};
using PivotFieldSortType_Type = std::underlying_type<PivotFieldSortType>::type;
}}
