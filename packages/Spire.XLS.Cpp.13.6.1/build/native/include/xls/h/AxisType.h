#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
/*
    <summary>
        Primary axis types for Charts..
    </summary>
*/
enum class AxisType : int
{
    Category = 0,
    Value = 1,
    Serie = 2,
};
using AxisType_Type = std::underlying_type<AxisType>::type;
}}
