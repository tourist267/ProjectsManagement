#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
/*
    <summary>
        Image formats.
    </summary>
*/
enum class ImageFormatType : int
{
    Original = 0,
    Png = 1,
    Jpeg = 2,
};
using ImageFormatType_Type = std::underlying_type<ImageFormatType>::type;
}}
