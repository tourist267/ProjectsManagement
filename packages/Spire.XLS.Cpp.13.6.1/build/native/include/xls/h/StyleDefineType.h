#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class StyleDefineType : int
{
    Head = 0,
    Inline = 1,
};
using StyleDefineType_Type = std::underlying_type<StyleDefineType>::type;
}}
