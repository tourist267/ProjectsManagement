#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Font underline types.
    </summary>
*/
enum class FontUnderlineType : int
{
    None = 0,
    Single = 1,
    Double = 2,
    SingleAccounting = 33,
    DoubleAccounting = 34,
};
using FontUnderlineType_Type = std::underlying_type<FontUnderlineType>::type;
}}
