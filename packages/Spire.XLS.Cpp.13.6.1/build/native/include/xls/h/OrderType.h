#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Page order for sheet in Excel.
    </summary>
*/
enum class OrderType : int
{
    DownThenOver = 1,
    OverThenDown = 2,
};
using OrderType_Type = std::underlying_type<OrderType>::type;
}}
