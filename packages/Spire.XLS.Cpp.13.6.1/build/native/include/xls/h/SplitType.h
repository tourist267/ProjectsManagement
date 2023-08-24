#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Split type.
    </summary>
*/
enum class SplitType : int
{
    Position = 0,
    Value = 1,
    Percent = 2,
    Custom = 3,
};
using SplitType_Type = std::underlying_type<SplitType>::type;
}}
