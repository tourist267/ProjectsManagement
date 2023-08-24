#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class ConditionalTopNType : int
{
    All = 0,
    Column = 1,
    None = 2,
    Row = 3,
};
using ConditionalTopNType_Type = std::underlying_type<ConditionalTopNType>::type;
}}
