#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Print error values.
    </summary>
*/
enum class PrintErrorsType : int
{
    Blank = 1,
    Dash = 2,
    Displayed = 0,
    NA = 3,
};
using PrintErrorsType_Type = std::underlying_type<PrintErrorsType>::type;
}}
