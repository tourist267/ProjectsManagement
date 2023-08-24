#pragma once
#include "pch.h"
namespace Spire{namespace Xls{
/*
    <summary>
        Base format options.
    </summary>
*/
enum class BaseFormatType : int
{
    Rectangle = 0,
    Circle = 1,
};
using BaseFormatType_Type = std::underlying_type<BaseFormatType>::type;
}}
