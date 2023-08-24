#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Flags for expand/collapse settings.
    </summary>
*/
enum class ExpandCollapseFlags : int
{
    Default = 0,
    IncludeSubgroups = 1,
    ExpandParent = 2,
};
using ExpandCollapseFlags_Type = std::underlying_type<ExpandCollapseFlags>::type;
}}
