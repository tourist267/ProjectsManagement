#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class StrikeThroughStyle : int
{
    SingleOn = 0,
    SingleOff = 1,
    DoubleOn = 2,
    DoubleOff = 3,
};
using StrikeThroughStyle_Type = std::underlying_type<StrikeThroughStyle>::type;
}}
