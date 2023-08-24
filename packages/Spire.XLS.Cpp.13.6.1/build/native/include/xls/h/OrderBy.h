#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents the sort order.
    </summary>
*/
enum class OrderBy : int
{
    Ascending = 0,
    Descending = 1,
    Top = 2,
    Bottom = 3,
};
using OrderBy_Type = std::underlying_type<OrderBy>::type;
}}
