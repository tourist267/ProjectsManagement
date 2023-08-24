#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class GetText : int
{
    NumberText = 0,
    Value = 1,
};
using GetText_Type = std::underlying_type<GetText>::type;
}}
