#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Cell format types.
    </summary>
*/
enum class CellFormatType : int
{
    Unknown = 0,
    General = 1,
    Text = 2,
    Number = 3,
    DateTime = 4,
    Formula = 5,
};
using CellFormatType_Type = std::underlying_type<CellFormatType>::type;
}}
