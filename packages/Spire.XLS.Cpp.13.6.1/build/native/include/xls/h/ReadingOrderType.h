#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Reading order types.
    </summary>
*/
enum class ReadingOrderType : int
{
    Context = 0,
    LeftToRight = 1,
    RightToLeft = 2,
};
using ReadingOrderType_Type = std::underlying_type<ReadingOrderType>::type;
}}
