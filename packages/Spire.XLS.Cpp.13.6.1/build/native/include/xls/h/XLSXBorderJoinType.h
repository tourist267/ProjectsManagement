#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        shape border join type 
    </summary>
*/
enum class XLSXBorderJoinType : int
{
    None = 0,
    Round = 1,
    Bevel = 2,
    Mitter = 3,
};
using XLSXBorderJoinType_Type = std::underlying_type<XLSXBorderJoinType>::type;
}}
