#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents gradient color type.
    </summary>
*/
enum class GradientColorType : int
{
    OneColor = 0,
    TwoColor = 1,
    Preset = 2,
};
using GradientColorType_Type = std::underlying_type<GradientColorType>::type;
}}
