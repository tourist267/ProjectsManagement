#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class ConditionValueType : int
{
    Max = 2,
    Min = 1,
    None = -1,
    Number = 0,
    Percent = 3,
    Formula = 4,
    Percentile = 5,
};
using ConditionValueType_Type = std::underlying_type<ConditionValueType>::type;
}}
