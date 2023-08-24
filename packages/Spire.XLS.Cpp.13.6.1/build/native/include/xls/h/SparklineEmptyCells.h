#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class SparklineEmptyCells : int
{
    Gaps = 0,
    Zero = 1,
    Line = 2,
};
using SparklineEmptyCells_Type = std::underlying_type<SparklineEmptyCells>::type;
}}
