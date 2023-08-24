#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class DynamicFilterType : int
{
    AboveAverage = 0,
    BelowAverage = 1,
    LastMonth = 2,
    LastQuarter = 3,
    LastWeek = 4,
    LastYear = 5,
    January = 6,
    October = 7,
    November = 8,
    December = 9,
    Februray = 10,
    March = 11,
    April = 12,
    May = 13,
    June = 14,
    July = 15,
    August = 16,
    September = 17,
    NextMonth = 18,
    NextQuarter = 19,
    NextWeek = 20,
    NextYear = 21,
    None = 22,
    Quarter1 = 23,
    Quarter2 = 24,
    Quarter3 = 25,
    Quarter4 = 26,
    ThisMonth = 27,
    ThisQuarter = 28,
    ThisWeek = 29,
    ThisYear = 30,
    Today = 31,
    Tomorrow = 32,
    YearToDate = 33,
    Yesterday = 34,
};
using DynamicFilterType_Type = std::underlying_type<DynamicFilterType>::type;
}}