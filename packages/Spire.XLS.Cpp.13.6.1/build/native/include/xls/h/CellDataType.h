#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Cell data types:
    </summary>
*/
enum class CellDataType : int
{
    Any = 0,
    Integer = 1,
    Decimal = 2,
    User = 3,
    Date = 4,
    Time = 5,
    TextLength = 6,
    Formula = 7,
};
using CellDataType_Type = std::underlying_type<CellDataType>::type;
}}
