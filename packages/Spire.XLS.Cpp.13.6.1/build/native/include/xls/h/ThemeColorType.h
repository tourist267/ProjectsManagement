#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        theme color type
    </summary>
*/
enum class ThemeColorType : int
{
    Dk1 = 0,
    Lt1 = 1,
    Dk2 = 2,
    Lt2 = 3,
    Accent1 = 4,
    Accent2 = 5,
    Accent3 = 6,
    Accent4 = 7,
    Accent5 = 8,
    Accent6 = 9,
    Hlink = 10,
    FolHlink = 11,
};
using ThemeColorType_Type = std::underlying_type<ThemeColorType>::type;
}}
