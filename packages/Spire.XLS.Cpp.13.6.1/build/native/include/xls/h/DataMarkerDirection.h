#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class DataMarkerDirection : int
{
    Vertical = 0,
    Horizontal = 1,
    HorizontalToLeft = 2,
    VerticalToTop = 3,
};
using DataMarkerDirection_Type = std::underlying_type<DataMarkerDirection>::type;
}}
