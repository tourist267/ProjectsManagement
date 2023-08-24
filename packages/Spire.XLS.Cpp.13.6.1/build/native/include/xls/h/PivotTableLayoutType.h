#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class PivotTableLayoutType : int
{
    Compact = 0,
    Outline = 1,
    Tabular = 2,
};
using PivotTableLayoutType_Type = std::underlying_type<PivotTableLayoutType>::type;
}}
