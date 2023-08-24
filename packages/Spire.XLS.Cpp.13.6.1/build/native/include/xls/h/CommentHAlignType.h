#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Comment horizontally align.
    </summary>
*/
enum class CommentHAlignType : int
{
    Left = 1,
    Center = 2,
    Right = 3,
    Justified = 4,
    Justify = 4,
    Distributed = 7,
};
using CommentHAlignType_Type = std::underlying_type<CommentHAlignType>::type;
}}
