#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class DVAspect : int
{
    DVASPECT_CONTENT = 0,
    DVASPECT_ICON = 1,
};
using DVAspect_Type = std::underlying_type<DVAspect>::type;
}}
