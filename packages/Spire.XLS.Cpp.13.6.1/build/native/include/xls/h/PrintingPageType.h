#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class PrintingPageType : int
{
    Default = 0,
    IgnoreBlank = 1,
    IgnoreStyle = 2,
};
using PrintingPageType_Type = std::underlying_type<PrintingPageType>::type;
}}
