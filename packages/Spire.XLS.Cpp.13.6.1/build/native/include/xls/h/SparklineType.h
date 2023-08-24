#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Defined types of Sparkline chart types.
    </summary>
*/
enum class SparklineType : int
{
    Stacked = 0,
    Column = 1,
    Line = 2,
};
using SparklineType_Type = std::underlying_type<SparklineType>::type;
}}
