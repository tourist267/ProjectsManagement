#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
enum class ImageLocationTypes : int
{
    GlobalAbsolute = 0,
    TableRelative = 1,
};
using ImageLocationTypes_Type = std::underlying_type<ImageLocationTypes>::type;
}}
