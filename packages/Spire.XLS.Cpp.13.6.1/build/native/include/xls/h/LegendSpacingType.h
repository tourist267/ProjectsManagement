#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Legend spacing for charts.
    </summary>
*/
enum class LegendSpacingType : int
{
    Close = 0,
    Medium = 1,
    Open = 2,
};
using LegendSpacingType_Type = std::underlying_type<LegendSpacingType>::type;
}}
