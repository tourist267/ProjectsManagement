#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
enum class AxisTypes : int
{
    None = 0,
    Row = 1,
    Column = 2,
    Page = 4,
    Data = 8,
};
using AxisTypes_Type = std::underlying_type<AxisTypes>::type;
}}
