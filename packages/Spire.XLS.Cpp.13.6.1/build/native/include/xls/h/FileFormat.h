#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Represents possible excel versions.
    </summary>
*/
enum class FileFormat : int
{
    Xlsb2007 = 0,
    Xlsb2010 = 1,
    ODS = 2,
    CSV = 3,
    XML = 4,
    PDF = 5,
    Bitmap = 6,
    XPS = 7,
    HTML = 8,
    Version97to2003 = 9,
    Version2007 = 10,
    Version2010 = 11,
    Version2013 = 12,
    Version2016 = 13,
    PostScript = 14,
    OFD = 15,
    PCL = 16,
    Xlsm = 17,
    ET = 18,
    ETT = 19,
    UOS = 20,
};
using FileFormat_Type = std::underlying_type<FileFormat>::type;
}}
