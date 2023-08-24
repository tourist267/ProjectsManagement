#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Data type for filters.
    </summary>
*/
enum class FilterDataType : int
{
    NotUsed = 0,
    FloatingPoint = 1,
    String = 2,
    Boolean = 3,
    ErrorCode = 4,
    MatchAllBlanks = 5,
    MatchAllNonBlanks = 6,
};
using FilterDataType_Type = std::underlying_type<FilterDataType>::type;
}}
