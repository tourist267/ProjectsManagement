#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
/*
    <summary>
        Represents category type.
    </summary>
*/
enum class CategoryType : int
{
    Category = 0,
    Time = 1,
    Automatic = 2,
};
using CategoryType_Type = std::underlying_type<CategoryType>::type;
}}
