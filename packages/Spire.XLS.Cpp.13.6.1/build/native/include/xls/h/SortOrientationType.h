#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents the sort orientation.
    </summary>
*/
enum class SortOrientationType : int
{
    TopToBottom = 0,
    LeftToRight = 1,
};
using SortOrientationType_Type = std::underlying_type<SortOrientationType>::type;
}}
