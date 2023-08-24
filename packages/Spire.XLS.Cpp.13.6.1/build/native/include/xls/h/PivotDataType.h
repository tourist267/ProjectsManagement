#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class PivotDataType : int
{
    Number = 1,
    Integer = 2,
    String = 4,
    Blank = 8,
    Date = 16,
    Boolean = 32,
    Float = 64,
    LongText = 128,
};
using PivotDataType_Type = std::underlying_type<PivotDataType>::type;
}}
