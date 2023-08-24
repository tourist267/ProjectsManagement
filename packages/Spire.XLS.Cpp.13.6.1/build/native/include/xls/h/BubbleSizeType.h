#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
/*
    <summary>
        Bubble size.
    </summary>
*/
enum class BubbleSizeType : int
{
    Area = 1,
    Width = 2,
};
using BubbleSizeType_Type = std::underlying_type<BubbleSizeType>::type;
}}
