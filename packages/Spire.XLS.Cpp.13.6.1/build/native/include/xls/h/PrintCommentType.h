#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        Print comments types.
    </summary>
*/
enum class PrintCommentType : int
{
    InPlace = 0,
    NoComments = 1,
    SheetEnd = 2,
};
using PrintCommentType_Type = std::underlying_type<PrintCommentType>::type;
}}
