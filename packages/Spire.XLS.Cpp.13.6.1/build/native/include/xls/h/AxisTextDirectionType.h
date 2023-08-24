#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
/*
    <summary>
        Represents axis text direction.
    </summary>
*/
enum class AxisTextDirectionType : int
{
    Context = 0,
    LeftToRight = 1,
    RightToLeft = 2,
};
using AxisTextDirectionType_Type = std::underlying_type<AxisTextDirectionType>::type;
}}
