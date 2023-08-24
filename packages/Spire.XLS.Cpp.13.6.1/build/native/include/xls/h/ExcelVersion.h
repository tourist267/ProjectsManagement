#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents possible excel versions.
    </summary>
*/
enum class ExcelVersion : int
{
    Xlsb2007 = 0,
    Xlsb2010 = 1,
    ODS = 2,
    UOS = 3,
    Version97to2003 = 4,
    Version2007 = 5,
    Version2010 = 6,
    Version2013 = 7,
    Version2016 = 8,
};
using ExcelVersion_Type = std::underlying_type<ExcelVersion>::type;
}}
