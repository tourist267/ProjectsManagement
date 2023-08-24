#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Top format type.
    </summary>
*/
enum class TopFormatType : int
{
    Straight = 0,
    Sharp = 1,
    Trunc = 2,
};
using TopFormatType_Type = std::underlying_type<TopFormatType>::type;
}}
