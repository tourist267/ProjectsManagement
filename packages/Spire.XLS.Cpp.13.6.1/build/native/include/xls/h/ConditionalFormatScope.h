#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class ConditionalFormatScope : int
{
    DataFields = 0,
    Intersections = 1,
    Selections = 2,
};
using ConditionalFormatScope_Type = std::underlying_type<ConditionalFormatScope>::type;
}}
