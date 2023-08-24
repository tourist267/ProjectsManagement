#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents the algorithm to sort.
    </summary>
*/
enum class SortedWayType : int
{
    QuickSort = 0,
    HeapSort = 1,
    InsertionSort = 2,
};
using SortedWayType_Type = std::underlying_type<SortedWayType>::type;
}}
