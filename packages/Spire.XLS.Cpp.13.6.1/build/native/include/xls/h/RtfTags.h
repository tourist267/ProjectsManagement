#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class RtfTags : int
{
    FontTableBegin = 0,
    FontTableEnd = 1,
    ColorTableStart = 2,
    ColorTableEnd = 3,
    BoldOn = 4,
    BoldOff = 5,
    ItalicOn = 6,
    ItalicOff = 7,
    RtfBegin = 8,
    RtfEnd = 9,
    GroupStart = 10,
    GroupEnd = 11,
    EndLine = 12,
    ForeColor = 13,
    BackColor = 14,
    SubScript = 15,
    SuperScript = 16,
};
using RtfTags_Type = std::underlying_type<RtfTags>::type;
}}
