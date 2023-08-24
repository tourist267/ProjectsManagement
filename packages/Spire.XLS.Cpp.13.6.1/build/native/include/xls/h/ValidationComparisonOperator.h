#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        The Comparison operator for conditional formatting.
    </summary>
*/
enum class ValidationComparisonOperator : int
{
    Between = 0,
    NotBetween = 1,
    Equal = 2,
    NotEqual = 3,
    Greater = 4,
    Less = 5,
    GreaterOrEqual = 6,
    LessOrEqual = 7,
};
using ValidationComparisonOperator_Type = std::underlying_type<ValidationComparisonOperator>::type;
}}
