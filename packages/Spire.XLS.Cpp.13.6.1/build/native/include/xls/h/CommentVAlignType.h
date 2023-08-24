#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Comment vertically align
    </summary>
*/
enum class CommentVAlignType : int
{
    Top = 1,
    Center = 2,
    Bottom = 3,
    Justify = 4,
    Distributed = 7,
};
using CommentVAlignType_Type = std::underlying_type<CommentVAlignType>::type;
}}
