#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Page orientation types in Excel.
    </summary>
*/
enum class PageOrientationType : int
{
    Landscape = 2,
    Portrait = 1,
};
using PageOrientationType_Type = std::underlying_type<PageOrientationType>::type;
}}
