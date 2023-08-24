#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class PivotAutoFomatTypes : int
{
    None = 0,
    Classic = 1,
    Report1 = 2,
    Report2 = 3,
    Report3 = 4,
    Report4 = 5,
    Report5 = 6,
    Report6 = 7,
    Report7 = 8,
    Report8 = 9,
    Report9 = 10,
    Report10 = 11,
    Table1 = 12,
    Table2 = 13,
    Table3 = 14,
    Table4 = 15,
    Table5 = 16,
    Table6 = 17,
    Table7 = 18,
    Table8 = 19,
    Table9 = 20,
    Table10 = 21,
};
using PivotAutoFomatTypes_Type = std::underlying_type<PivotAutoFomatTypes>::type;
}}
