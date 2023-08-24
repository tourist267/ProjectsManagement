#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class TimePeriodType : int
{
    Today = 0,
    Yesterday = 1,
    Tomorrow = 2,
    Last7Days = 3,
    ThisMonth = 4,
    LastMonth = 5,
    NextMonth = 6,
    ThisWeek = 7,
    LastWeek = 8,
    NextWeek = 9,
};
using TimePeriodType_Type = std::underlying_type<TimePeriodType>::type;
}}
