#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Defines the possible settings for vertical alignment of a run of text.
            This is used to get superscript or subscript text without altering the
            font size properties of the rest of the text run.
    </summary>
*/
enum class FontVertialAlignmentType : int
{
    Baseline = 0,
    Superscript = 1,
    Subscript = 2,
};
using FontVertialAlignmentType_Type = std::underlying_type<FontVertialAlignmentType>::type;
}}
