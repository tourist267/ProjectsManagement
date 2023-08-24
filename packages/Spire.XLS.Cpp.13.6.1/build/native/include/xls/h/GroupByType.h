#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class GroupByType : int
{
    ByRows = 0,
    ByColumns = 1,
};
using GroupByType_Type = std::underlying_type<GroupByType>::type;
}}
