#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents the sort by in the range.
    </summary>
*/
enum class SortComparsionType : int
{
    Values = 0,
    BackgroundColor = 1,
    FontColor = 2,
    Icon = 3,
};
using SortComparsionType_Type = std::underlying_type<SortComparsionType>::type;
}}
