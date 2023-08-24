#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class DataBarBorderType : int
{
    DataBarBorderNone = 0,
    DataBarBorderSolid = 1,
};
using DataBarBorderType_Type = std::underlying_type<DataBarBorderType>::type;
}}
