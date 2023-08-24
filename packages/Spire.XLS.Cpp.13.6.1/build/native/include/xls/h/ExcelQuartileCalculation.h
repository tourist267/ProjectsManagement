#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        It represents Quartile calculation used for Box and Whisker Chart series
     </summary>
*/
enum class ExcelQuartileCalculation : int
{
    InclusiveMedian = 0,
    ExclusiveMedian = 1,
};
using ExcelQuartileCalculation_Type = std::underlying_type<ExcelQuartileCalculation>::type;
}}
