#pragma once
#include "pch.h"
namespace Spire{
namespace Xls{
enum class HttpContentType : int
{
    Excel97 = 0,
    Excel2000 = 1,
    Excel2007 = 2,
    Excel2010 = 3,
    CSV = 4,
};
using HttpContentType_Type = std::underlying_type<HttpContentType>::type;
}}
