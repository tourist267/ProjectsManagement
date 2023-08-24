#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Hyper link type.
    </summary>
*/
enum class HyperLinkType : int
{
    None = 0,
    Url = 1,
    File = 2,
    Unc = 3,
    Workbook = 4,
};
using HyperLinkType_Type = std::underlying_type<HyperLinkType>::type;
}}
