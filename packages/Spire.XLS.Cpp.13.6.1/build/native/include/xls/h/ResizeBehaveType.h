#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents The ResizeBehave mode. 
    </summary>
*/
enum class ResizeBehaveType : int
{
    FreeFloating = 0,
    MoveNotResize = 1,
    MoveAndResize = 2,
};
using ResizeBehaveType_Type = std::underlying_type<ResizeBehaveType>::type;
}}
