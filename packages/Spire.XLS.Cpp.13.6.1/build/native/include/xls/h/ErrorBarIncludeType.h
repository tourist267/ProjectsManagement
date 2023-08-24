#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents error bar include values.
    </summary>
*/
enum class ErrorBarIncludeType : int
{
    None = 0,
    Both = 1,
    Plus = 2,
    Minus = 3,
};
using ErrorBarIncludeType_Type = std::underlying_type<ErrorBarIncludeType>::type;
}}
