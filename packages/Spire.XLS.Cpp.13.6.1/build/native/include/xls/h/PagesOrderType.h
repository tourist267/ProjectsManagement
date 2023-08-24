#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Page order type
    </summary>
*/
enum class PagesOrderType : int
{
    DownThenOver = 0,
    OverThenDown = 1,
};
using PagesOrderType_Type = std::underlying_type<PagesOrderType>::type;
}}
