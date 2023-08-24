#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class DataBarAxisPosition : int
{
    DataBarAxisAutomatic = 0,
    DataBarAxisMidpoint = 1,
    DataBarAxisNone = 2,
};
using DataBarAxisPosition_Type = std::underlying_type<DataBarAxisPosition>::type;
}}
