#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        TopBottom type.
    </summary>
*/
enum class TopBottomType : int
{
    Top = 1,
    Bottom = 2,
    TopPercent = 3,
    BottomPercent = 4,
};
using TopBottomType_Type = std::underlying_type<TopBottomType>::type;
}}
