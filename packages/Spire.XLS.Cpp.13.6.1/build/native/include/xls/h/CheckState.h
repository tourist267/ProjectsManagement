#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Specifies check state of the check box.
    </summary>
*/
enum class CheckState : int
{
    Unchecked = 0,
    Checked = 1,
    Mixed = 2,
};
using CheckState_Type = std::underlying_type<CheckState>::type;
}}
