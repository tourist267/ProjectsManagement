#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
/*
    <summary>
        Average type.
    </summary>
*/
enum class AverageType : int
{
    Above = 1,
    AboveEqual = 2,
    Below = 3,
    BelowEqual = 4,
    AboveStdDev1 = 5,
    AboveStdDev2 = 6,
    AboveStdDev3 = 7,
    BelowStdDev1 = 8,
    BelowStdDev2 = 9,
    BelowStdDev3 = 10,
};
using AverageType_Type = std::underlying_type<AverageType>::type;
}}
