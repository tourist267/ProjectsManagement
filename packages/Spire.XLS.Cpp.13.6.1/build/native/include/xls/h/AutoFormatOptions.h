#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
/*
    <summary>
        Represents auto format options.
    </summary>
*/
enum class AutoFormatOptions : int
{
    Number = 1,
    Border = 2,
    Font = 4,
    Patterns = 8,
    Alignment = 16,
    Width_Height = 32,
    None = 0,
    All = 63,
};
using AutoFormatOptions_Type = std::underlying_type<AutoFormatOptions>::type;
}}
