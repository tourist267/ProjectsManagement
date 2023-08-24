#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class SubtotalTypes : int
{
    None = 0,
    Default = 1,
    Sum = 2,
    Counta = 4,
    Average = 8,
    Max = 16,
    Min = 32,
    Product = 64,
    Count = 128,
    Stdev = 256,
    Stdevp = 512,
    Var = 1024,
    Varp = 2048,
};
using SubtotalTypes_Type = std::underlying_type<SubtotalTypes>::type;
}}
