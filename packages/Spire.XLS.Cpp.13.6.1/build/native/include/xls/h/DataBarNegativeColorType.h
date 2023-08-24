#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class DataBarNegativeColorType : int
{
    DataBarColor = 0,
    DataBarSameAsPositive = 1,
};
using DataBarNegativeColorType_Type = std::underlying_type<DataBarNegativeColorType>::type;
}}
