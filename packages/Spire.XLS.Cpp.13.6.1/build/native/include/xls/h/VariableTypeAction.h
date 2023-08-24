#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Defines value type and numberformat in the 
            template marker variable.
    </summary>
*/
enum class VariableTypeAction : int
{
    DetectDataType = 0,
    DetectNumberFormat = 1,
    None = 2,
};
using VariableTypeAction_Type = std::underlying_type<VariableTypeAction>::type;
}}
