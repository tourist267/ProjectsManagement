#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
/*
    <summary>
        Possible error style values:
    </summary>
*/
enum class AlertStyleType : int
{
    Stop = 0,
    Warning = 1,
    Info = 2,
};
using AlertStyleType_Type = std::underlying_type<AlertStyleType>::type;
}}
