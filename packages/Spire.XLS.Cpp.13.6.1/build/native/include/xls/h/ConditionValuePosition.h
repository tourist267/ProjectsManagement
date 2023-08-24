#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class ConditionValuePosition : int
{
    Third = 2,
    Second = 1,
    First = 0,
};
using ConditionValuePosition_Type = std::underlying_type<ConditionValuePosition>::type;
}}
