#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
enum class InsertOptionsType : int
{
    FormatAsBefore = 0,
    FormatAsAfter = 1,
    FormatDefault = 2,
};
using InsertOptionsType_Type = std::underlying_type<InsertOptionsType>::type;
}}
