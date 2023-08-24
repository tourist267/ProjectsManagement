#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class DataBarFillType : int
{
    DataBarFillSolid = 0,
    DataBarFillGradient = 1,
};
using DataBarFillType_Type = std::underlying_type<DataBarFillType>::type;
}}
