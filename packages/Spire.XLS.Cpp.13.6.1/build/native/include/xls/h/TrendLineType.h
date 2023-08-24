#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents trend line values.
    </summary>
*/
enum class TrendLineType : int
{
    Exponential = 1,
    Linear = 5,
    Logarithmic = 2,
    Moving_Average = 4,
    Polynomial = 0,
    Power = 3,
};
using TrendLineType_Type = std::underlying_type<TrendLineType>::type;
}}
