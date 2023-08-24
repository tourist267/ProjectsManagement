#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Drop line style type.
    </summary>
*/
enum class DropLineStyleType : int
{
    Drop = 0,
    HiLow = 1,
    Series = 2,
};
using DropLineStyleType_Type = std::underlying_type<DropLineStyleType>::type;
}}
