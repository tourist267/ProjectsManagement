#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class Excel2016Charttype : int
{
    funnel = 74,
    boxWhisker = 76,
    clusteredColumn = 77,
    paretoLine = 78,
    sunburst = 80,
    treemap = 79,
    waterfall = 75,
};
using Excel2016Charttype_Type = std::underlying_type<Excel2016Charttype>::type;
}}
