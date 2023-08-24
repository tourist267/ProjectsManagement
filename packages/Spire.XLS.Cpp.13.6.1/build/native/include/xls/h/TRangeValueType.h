#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class TRangeValueType : int
{
    Blank = 0,
    Error = 1,
    Boolean = 2,
    Number = 4,
    Formula = 8,
    String = 16,
};
using TRangeValueType_Type = std::underlying_type<TRangeValueType>::type;
}}
