#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class SelectionType : int
{
    Single = 0,
    Multi = 1,
    Extend = 2,
};
using SelectionType_Type = std::underlying_type<SelectionType>::type;
}}
