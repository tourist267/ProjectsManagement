#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Page break extent types in Excel.
    </summary>
*/
enum class PageBreakExtentType : int
{
    Full = 1,
    Partial = 2,
};
using PageBreakExtentType_Type = std::underlying_type<PageBreakExtentType>::type;
}}
