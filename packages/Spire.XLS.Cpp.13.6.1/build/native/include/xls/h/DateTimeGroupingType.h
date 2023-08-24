#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class DateTimeGroupingType : int
{
    Day = 0,
    Hour = 1,
    Minute = 2,
    Month = 3,
    Second = 4,
    Year = 5,
};
using DateTimeGroupingType_Type = std::underlying_type<DateTimeGroupingType>::type;
}}
