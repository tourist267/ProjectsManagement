#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        The Comparison operator for conditional formatting in Excel.
    </summary>
*/
enum class ComparisonOperatorType : int
{
    None = 0,
    Between = 1,
    NotBetween = 2,
    Equal = 3,
    NotEqual = 4,
    Greater = 5,
    Less = 6,
    GreaterOrEqual = 7,
    LessOrEqual = 8,
};
using ComparisonOperatorType_Type = std::underlying_type<ComparisonOperatorType>::type;
}}
