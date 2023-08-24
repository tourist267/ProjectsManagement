#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class TextDirectionType : int
{
    Context = 0,
    LeftToRight = 1,
    RightToLeft = 2,
};
using TextDirectionType_Type = std::underlying_type<TextDirectionType>::type;
}}
