#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class GradientType : int
{
    Liniar = 0,
    Circle = 1,
    Rect = 2,
    Shape = 3,
};
using GradientType_Type = std::underlying_type<GradientType>::type;
}}
