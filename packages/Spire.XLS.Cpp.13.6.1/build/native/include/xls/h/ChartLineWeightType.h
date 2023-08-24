#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Chart line weight values type. 
    </summary>
*/
enum class ChartLineWeightType : int
{
    Hairline = 65535,
    Narrow = 0,
    Medium = 1,
    Wide = 2,
};
using ChartLineWeightType_Type = std::underlying_type<ChartLineWeightType>::type;
}}
