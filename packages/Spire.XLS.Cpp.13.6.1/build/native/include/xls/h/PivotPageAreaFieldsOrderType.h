#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class PivotPageAreaFieldsOrderType : int
{
    DownThenOver = 0,
    OverThenDown = 1,
};
using PivotPageAreaFieldsOrderType_Type = std::underlying_type<PivotPageAreaFieldsOrderType>::type;
}}
