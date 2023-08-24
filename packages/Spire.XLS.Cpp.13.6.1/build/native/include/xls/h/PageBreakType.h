#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Page break types in Excel.
    </summary>
*/
enum class PageBreakType : int
{
    Automatic = 0,
    Manual = 1,
    None = 2,
};
using PageBreakType_Type = std::underlying_type<PageBreakType>::type;
}}
