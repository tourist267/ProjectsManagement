#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class ExcelSaveType : int
{
    SaveAsXLS = 0,
    SaveAsTemplate = 1,
};
using ExcelSaveType_Type = std::underlying_type<ExcelSaveType>::type;
}}
