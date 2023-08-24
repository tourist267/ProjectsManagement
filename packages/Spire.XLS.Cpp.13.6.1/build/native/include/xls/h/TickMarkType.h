#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents enum of chart tick mark values.
    </summary>
*/
enum class TickMarkType : int
{
    TickMarkNone = 0,
    TickMarkInside = 1,
    TickMarkOutside = 2,
    TickMarkCross = 3,
};
using TickMarkType_Type = std::underlying_type<TickMarkType>::type;
}}
