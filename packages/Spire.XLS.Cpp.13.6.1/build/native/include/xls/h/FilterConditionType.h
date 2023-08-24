#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Filter conditions.
    </summary>
*/
enum class FilterConditionType : int
{
    Less = 1,
    Equal = 2,
    LessOrEqual = 3,
    Greater = 4,
    NotEqual = 5,
    GreaterOrEqual = 6,
};
using FilterConditionType_Type = std::underlying_type<FilterConditionType>::type;
}}
