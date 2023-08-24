#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Visibility of worksheet type.
    </summary>
*/
enum class WorksheetVisibility : int
{
    Visible = 0,
    Hidden = 1,
    StrongHidden = 2,
};
using WorksheetVisibility_Type = std::underlying_type<WorksheetVisibility>::type;
}}
