#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Chart background mode.
    </summary>
*/
enum class ChartBackgroundMode : int
{
    Automatic = 0,
    Transparent = 1,
    Opaque = 2,
};
using ChartBackgroundMode_Type = std::underlying_type<ChartBackgroundMode>::type;
}}
