#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
/*
    <summary>
        MS Chart Font Type
    </summary>
*/
enum class ChartParagraphType : int
{
    None = 0,
    Default = 1,
    RichText = 2,
};
using ChartParagraphType_Type = std::underlying_type<ChartParagraphType>::type;
}}
