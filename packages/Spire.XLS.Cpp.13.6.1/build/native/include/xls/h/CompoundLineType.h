#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class CompoundLineType : int
{
    Single = 0,
    ThickBetweenThin = 1,
    ThinThick = 2,
    ThickThin = 3,
    ThinThin = 4,
};
using CompoundLineType_Type = std::underlying_type<CompoundLineType>::type;
}}
