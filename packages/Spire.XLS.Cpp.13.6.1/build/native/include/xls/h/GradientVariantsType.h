#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents shape shading variants.
    </summary>
*/
enum class GradientVariantsType : int
{
    ShadingVariants1 = 1,
    ShadingVariants2 = 2,
    ShadingVariants3 = 3,
    ShadingVariants4 = 4,
};
using GradientVariantsType_Type = std::underlying_type<GradientVariantsType>::type;
}}
