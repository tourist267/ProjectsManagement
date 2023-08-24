#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Error-bar type.
    </summary>
*/
enum class ErrorBarType : int
{
    Percentage = 1,
    Fixed = 2,
    StandardDeviation = 3,
    Custom = 4,
    StandardError = 5,
};
using ErrorBarType_Type = std::underlying_type<ErrorBarType>::type;
}}
