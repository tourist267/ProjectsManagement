#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Defines the view setting of the sheet.
    </summary>
*/
enum class ViewMode : int
{
    Normal = 0,
    Preview = 1,
    Layout = 2,
};
using ViewMode_Type = std::underlying_type<ViewMode>::type;
}}
